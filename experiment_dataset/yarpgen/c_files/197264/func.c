/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197264
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197264 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197264
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            /* LoopSeq 2 */
            for (unsigned short i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                arr_7 [i_0] [i_0] [i_2] [i_2] = ((/* implicit */_Bool) ((long long int) 2183639150636940147LL));
                var_16 = ((/* implicit */_Bool) (-(((/* implicit */int) arr_2 [i_1] [i_1]))));
                var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) - (((/* implicit */int) (_Bool)1)))))));
                var_18 = ((/* implicit */long long int) var_9);
            }
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) (~(((/* implicit */int) (_Bool)0)))))));
                var_20 -= ((/* implicit */long long int) arr_5 [i_3] [i_3] [i_1] [i_0]);
                /* LoopSeq 2 */
                for (int i_4 = 0; i_4 < 22; i_4 += 2) 
                {
                    arr_13 [i_0] [(_Bool)1] [i_3] [i_4] [i_4] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_0] [i_1] [16])) ? (((/* implicit */unsigned long long int) (-(var_7)))) : (arr_6 [i_0] [i_1] [i_0] [i_4])));
                    var_21 = (-(((((/* implicit */int) arr_12 [i_0] [(_Bool)1] [i_3] [i_4])) - (((/* implicit */int) var_11)))));
                }
                for (signed char i_5 = 0; i_5 < 22; i_5 += 2) 
                {
                    var_22 = ((/* implicit */_Bool) ((signed char) arr_10 [i_0] [i_0] [i_0]));
                    var_23 = ((/* implicit */_Bool) max((var_23), (((_Bool) (_Bool)1))));
                    arr_18 [(unsigned char)19] [i_1] [i_1] [i_1] = ((arr_17 [i_0] [(_Bool)1]) - (arr_16 [i_0] [i_0] [i_0]));
                }
                var_24 = ((/* implicit */short) ((int) var_13));
            }
            var_25 = ((/* implicit */int) 8141261912432241720LL);
            arr_19 [i_0] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-2244))));
        }
        var_26 = ((/* implicit */short) (~(((/* implicit */int) (unsigned char)253))));
    }
    for (long long int i_6 = 0; i_6 < 18; i_6 += 2) 
    {
        var_27 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) var_15)) ? (((((/* implicit */_Bool) arr_3 [i_6])) ? (var_4) : (((/* implicit */int) arr_2 [i_6] [i_6])))) : (((((/* implicit */int) (_Bool)0)) - (2087446489)))))));
        /* LoopNest 3 */
        for (signed char i_7 = 2; i_7 < 17; i_7 += 2) 
        {
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                for (short i_9 = 0; i_9 < 18; i_9 += 2) 
                {
                    {
                        var_28 = ((((/* implicit */_Bool) (unsigned char)253)) || (((/* implicit */_Bool) 2147483647)));
                        arr_31 [i_6] [i_9] [12] [i_9] [i_8] = ((/* implicit */short) var_13);
                        arr_32 [i_9] = ((/* implicit */long long int) (_Bool)0);
                        var_29 = ((/* implicit */_Bool) max((var_29), (((/* implicit */_Bool) min(((unsigned char)72), (((/* implicit */unsigned char) (_Bool)1)))))));
                        arr_33 [i_6] [i_6] [i_6] = ((/* implicit */unsigned int) (-(((/* implicit */int) (!(arr_26 [i_7 - 1] [i_7 - 1] [i_7 - 1]))))));
                    }
                } 
            } 
        } 
    }
    for (short i_10 = 3; i_10 < 14; i_10 += 2) 
    {
        var_30 = ((/* implicit */int) min((var_30), (((/* implicit */int) ((((/* implicit */_Bool) arr_23 [i_10] [i_10])) ? ((~(var_6))) : (((/* implicit */long long int) ((int) arr_34 [(unsigned short)4]))))))));
        arr_37 [i_10] = ((((/* implicit */_Bool) ((((/* implicit */int) arr_35 [i_10 + 1] [i_10])) ^ (arr_15 [i_10 + 1])))) ? (((/* implicit */int) ((4419123663102748242ULL) == (((/* implicit */unsigned long long int) arr_21 [i_10 + 1]))))) : (((/* implicit */int) min((((/* implicit */short) min(((unsigned char)253), (((/* implicit */unsigned char) (_Bool)1))))), (arr_30 [i_10 + 1] [i_10 - 1] [i_10 - 2] [i_10 - 3])))));
        var_31 = ((/* implicit */unsigned char) max((var_31), (((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_23 [i_10] [i_10]))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [8U] [i_10] [i_10] [(short)9]))) * (((arr_6 [i_10] [i_10] [i_10] [i_10 - 2]) << (((((/* implicit */int) var_11)) - (30526))))))))))));
    }
    /* LoopNest 2 */
    for (long long int i_11 = 2; i_11 < 14; i_11 += 2) 
    {
        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
        {
            {
                /* LoopNest 3 */
                for (long long int i_13 = 2; i_13 < 13; i_13 += 2) 
                {
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                    {
                        for (unsigned long long int i_15 = 0; i_15 < 15; i_15 += 2) 
                        {
                            {
                                arr_53 [i_11 - 2] [i_11 - 1] [i_11] [i_11] = ((/* implicit */_Bool) ((((((/* implicit */int) (unsigned char)2)) & (max((2087446489), (1028439010))))) ^ (((/* implicit */int) (short)12099))));
                                arr_54 [i_11 + 1] [i_12] [i_15] [i_14] [i_11 + 1] = min(((~(((/* implicit */int) ((((/* implicit */_Bool) arr_46 [i_11] [i_11] [i_11] [i_11])) && (arr_5 [i_11 - 2] [i_12] [i_13] [i_14])))))), (((2147483647) / (min((((/* implicit */int) (signed char)48)), (arr_15 [i_14]))))));
                            }
                        } 
                    } 
                } 
                arr_55 [i_11 + 1] [i_12] [i_12] = ((/* implicit */short) var_8);
                var_32 += ((/* implicit */unsigned int) ((signed char) ((_Bool) (_Bool)1)));
            }
        } 
    } 
}
