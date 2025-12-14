/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52443
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52443 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52443
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
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned short i_2 = 4; i_2 < 9; i_2 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 3; i_3 < 8; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 2; i_4 < 9; i_4 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned char) var_18);
                                var_20 = ((/* implicit */unsigned long long int) var_15);
                                var_21 *= ((/* implicit */unsigned short) var_5);
                            }
                        } 
                    } 
                    arr_15 [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) var_1);
                    /* LoopSeq 2 */
                    for (short i_5 = 4; i_5 < 9; i_5 += 4) 
                    {
                        var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) (short)-15577))));
                        var_23 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0])))))));
                    }
                    for (long long int i_6 = 0; i_6 < 10; i_6 += 1) 
                    {
                        arr_20 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)222)) && (((/* implicit */_Bool) (unsigned char)9))));
                        var_24 = ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)20)) ^ ((+(var_12)))));
                    }
                    var_25 &= ((/* implicit */int) (+(((((/* implicit */_Bool) arr_13 [4LL])) ? (arr_5 [(short)0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_2] [i_1] [i_0])))))));
                }
                /* LoopNest 2 */
                for (long long int i_7 = 0; i_7 < 10; i_7 += 4) 
                {
                    for (unsigned long long int i_8 = 3; i_8 < 9; i_8 += 1) 
                    {
                        {
                            var_26 = ((/* implicit */long long int) min((((int) ((-4099364735332138730LL) / (((/* implicit */long long int) var_8))))), ((-(((/* implicit */int) var_2))))));
                            var_27 = ((/* implicit */unsigned int) arr_11 [i_0] [i_1] [i_1] [i_8]);
                            var_28 &= ((/* implicit */long long int) ((((int) var_14)) / (((((/* implicit */_Bool) arr_22 [i_8] [i_8 - 1] [i_8 + 1])) ? (((/* implicit */int) arr_22 [i_8] [i_8 - 3] [i_8 + 1])) : (((/* implicit */int) arr_22 [i_8 - 2] [i_8 - 1] [i_8 + 1]))))));
                            var_29 = ((/* implicit */short) min((((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) var_17)))))) * (var_0))), (var_17)));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
                {
                    var_30 *= ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)222))))), (((((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (unsigned char)222)))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)249))) / (1368591127823665173ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)240)) / (var_4))))))));
                    /* LoopNest 2 */
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        for (unsigned short i_11 = 0; i_11 < 10; i_11 += 3) 
                        {
                            {
                                arr_34 [i_11] [i_0] [0ULL] [i_0] [9LL] = ((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned char) arr_16 [i_0] [7LL] [4] [i_9 + 1]))) & (((arr_30 [i_0] [3ULL] [i_0] [i_9 + 1] [i_1]) ^ (var_4)))));
                                var_31 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) max((var_0), (arr_8 [i_0] [i_1] [i_0])))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) | (18446743798831644672ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_10] [i_1]))))), (((/* implicit */unsigned long long int) min((arr_25 [i_0] [i_9 + 1] [(short)8] [i_10]), (((/* implicit */signed char) (_Bool)1)))))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    /* LoopNest 3 */
    for (short i_12 = 0; i_12 < 22; i_12 += 2) 
    {
        for (unsigned int i_13 = 4; i_13 < 19; i_13 += 4) 
        {
            for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_15 = 0; i_15 < 22; i_15 += 1) 
                    {
                        var_32 = ((/* implicit */unsigned long long int) min((var_32), (((/* implicit */unsigned long long int) arr_44 [i_13 - 1] [i_13 + 3]))));
                        arr_48 [9] [i_14] [i_13] = ((/* implicit */short) min((((((((/* implicit */int) arr_43 [i_14])) >= (((/* implicit */int) arr_46 [i_12])))) ? (max((var_8), (((/* implicit */unsigned int) (_Bool)1)))) : (max((var_8), (((/* implicit */unsigned int) var_14)))))), (((/* implicit */unsigned int) max((((/* implicit */short) arr_36 [i_13 + 3] [i_13 + 3])), (arr_39 [i_13 - 3]))))));
                        var_33 = ((/* implicit */long long int) min((var_6), (((/* implicit */short) (unsigned char)22))));
                    }
                    var_34 = ((/* implicit */long long int) min((var_34), (((/* implicit */long long int) var_18))));
                    arr_49 [i_12] [i_13 - 4] = ((/* implicit */short) ((unsigned char) arr_45 [i_12] [10LL] [i_14] [i_13 - 2] [i_12]));
                    var_35 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? ((+((+(((/* implicit */int) (unsigned char)243)))))) : (-1957891701)));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_16 = 0; i_16 < 24; i_16 += 1) 
    {
        for (unsigned long long int i_17 = 2; i_17 < 23; i_17 += 1) 
        {
            {
                var_36 = ((/* implicit */_Bool) arr_50 [i_17 + 1]);
                var_37 = ((/* implicit */int) min((var_37), (((/* implicit */int) (+((-(((((/* implicit */long long int) ((/* implicit */int) var_15))) + (var_3))))))))));
                var_38 *= ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((arr_50 [i_16]) + (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))), (max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_51 [i_17])), (arr_52 [14U])))), (((var_17) & (var_5)))))));
            }
        } 
    } 
}
