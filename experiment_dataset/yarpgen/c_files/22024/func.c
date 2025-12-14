/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22024
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22024 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22024
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_16 = ((/* implicit */unsigned char) max((((/* implicit */long long int) ((unsigned short) var_15))), (-1838590672392701839LL)));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 4; i_0 < 10; i_0 += 1) 
    {
        var_17 = ((/* implicit */long long int) arr_0 [i_0 - 1] [i_0]);
        var_18 *= (~(((18446744073709551615ULL) - (((/* implicit */unsigned long long int) arr_0 [i_0] [i_0 - 2])))));
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 11; i_4 += 1) 
                        {
                            {
                                arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) arr_2 [i_1] [i_0]);
                                arr_16 [i_3] = ((/* implicit */unsigned char) 4135666560U);
                                arr_17 [10LL] [0] [i_2 - 1] [i_2] [i_1] [i_2] [i_4] = ((/* implicit */unsigned long long int) arr_13 [i_2] [i_2] [i_2]);
                                var_19 *= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_2 [(unsigned char)7] [(signed char)9])) << (((arr_0 [i_4] [(unsigned char)0]) - (3614427495U))))))));
                            }
                        } 
                    } 
                    arr_18 [i_1] [i_1] [i_0 - 1] = ((/* implicit */int) (~(((arr_6 [i_0 - 3] [i_0 - 3] [i_2]) << (((((((/* implicit */_Bool) (unsigned short)65535)) ? (-8177654435233178531LL) : (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_0] [2ULL] [i_0] [i_1] [(_Bool)1]))))) + (8177654435233178558LL)))))));
                    arr_19 [i_2 - 1] [i_2 - 1] [i_0] [i_0] = ((/* implicit */unsigned int) (unsigned short)15853);
                }
            } 
        } 
        /* LoopNest 2 */
        for (short i_5 = 0; i_5 < 11; i_5 += 1) 
        {
            for (long long int i_6 = 1; i_6 < 8; i_6 += 3) 
            {
                {
                    arr_27 [i_6] = ((signed char) ((((/* implicit */int) (unsigned char)60)) - (((/* implicit */int) arr_1 [i_6 - 1] [i_0 - 2]))));
                    arr_28 [i_6] [i_5] [i_6 + 1] [i_6 + 1] = ((/* implicit */unsigned char) max((((/* implicit */signed char) ((((/* implicit */_Bool) arr_9 [i_0 - 4] [i_0 - 3] [i_6 + 1])) && (((/* implicit */_Bool) arr_9 [i_0 + 1] [i_0 - 3] [i_6 + 1]))))), (arr_9 [i_0 + 1] [i_0 - 1] [i_6 + 2])));
                }
            } 
        } 
    }
    for (unsigned char i_7 = 1; i_7 < 12; i_7 += 3) 
    {
        arr_33 [i_7] = ((/* implicit */_Bool) arr_30 [i_7 + 2]);
        var_20 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_30 [i_7])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) -1LL)) ? (((((/* implicit */_Bool) arr_31 [4ULL])) ? (arr_30 [i_7]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)12376))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [(short)4]))))))));
        /* LoopNest 3 */
        for (unsigned long long int i_8 = 3; i_8 < 13; i_8 += 2) 
        {
            for (long long int i_9 = 2; i_9 < 10; i_9 += 2) 
            {
                for (long long int i_10 = 3; i_10 < 13; i_10 += 3) 
                {
                    {
                        var_21 = ((/* implicit */short) ((int) (!(((/* implicit */_Bool) ((int) arr_30 [i_7]))))));
                        arr_42 [i_7] [i_7] [i_7] = ((/* implicit */unsigned long long int) ((_Bool) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_41 [i_7] [i_7])) ? (929732428) : (((/* implicit */int) arr_38 [i_7] [i_7] [i_7] [i_10]))))))));
                    }
                } 
            } 
        } 
    }
    for (unsigned char i_11 = 3; i_11 < 12; i_11 += 4) 
    {
        arr_45 [i_11] = ((/* implicit */unsigned int) (~((-(13847426144007398644ULL)))));
        arr_46 [i_11] = ((/* implicit */unsigned short) min((arr_44 [i_11 + 2]), ((!(arr_44 [i_11])))));
        var_22 = ((/* implicit */short) arr_43 [i_11] [(signed char)9]);
    }
    /* LoopNest 2 */
    for (unsigned long long int i_12 = 0; i_12 < 12; i_12 += 1) 
    {
        for (unsigned short i_13 = 1; i_13 < 8; i_13 += 4) 
        {
            {
                arr_51 [i_13] = ((/* implicit */unsigned char) -8177654435233178531LL);
                arr_52 [i_13] = var_12;
                arr_53 [i_13] [i_13] = ((/* implicit */unsigned long long int) (~(((((/* implicit */int) arr_36 [i_12] [i_12] [i_12] [i_13 - 1])) ^ (((/* implicit */int) arr_36 [i_12] [i_12] [i_13] [i_13 + 1]))))));
                var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) (!(((/* implicit */_Bool) arr_50 [(short)4] [i_12])))))) || (((/* implicit */_Bool) 466744615)))))));
                /* LoopNest 3 */
                for (int i_14 = 0; i_14 < 12; i_14 += 1) 
                {
                    for (unsigned char i_15 = 0; i_15 < 12; i_15 += 1) 
                    {
                        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                        {
                            {
                                var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_2)) + (((int) arr_40 [i_13]))));
                                var_25 *= ((/* implicit */signed char) arr_54 [i_12] [i_13]);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_26 = ((/* implicit */unsigned char) (unsigned short)128);
}
