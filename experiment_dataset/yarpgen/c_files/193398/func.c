/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193398
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193398 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193398
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
    /* LoopSeq 2 */
    for (signed char i_0 = 1; i_0 < 20; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */short) ((((/* implicit */unsigned long long int) 16777215U)) * (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0])))));
        var_17 = ((/* implicit */unsigned int) 1635231405);
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_1 = 3; i_1 < 20; i_1 += 4) 
        {
            /* LoopSeq 1 */
            for (signed char i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                var_18 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (arr_6 [i_0 + 1] [i_1]) : (((/* implicit */long long int) var_13))))) ? (arr_4 [i_0] [i_0 + 1] [i_2]) : (arr_4 [i_2] [i_1] [i_2])));
                /* LoopSeq 2 */
                for (short i_3 = 1; i_3 < 20; i_3 += 3) 
                {
                    arr_10 [i_0] [i_0] = ((/* implicit */unsigned int) arr_7 [i_1 + 1] [(unsigned short)20] [i_0 - 1] [i_0] [i_0]);
                    arr_11 [i_3] [i_0] [i_0] [i_0 + 1] = ((/* implicit */unsigned short) (signed char)31);
                }
                for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                {
                    arr_14 [i_0] [i_1] [i_0] [i_4] [4U] = (_Bool)1;
                    /* LoopSeq 1 */
                    for (unsigned int i_5 = 2; i_5 < 18; i_5 += 3) 
                    {
                        var_19 = ((/* implicit */unsigned long long int) ((var_2) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_4))));
                        var_20 = ((/* implicit */short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_8 [i_0] [i_0 + 1] [i_0] [i_0])) : (((((/* implicit */_Bool) arr_12 [i_5] [(short)9] [i_2] [i_1] [i_0])) ? (((/* implicit */int) var_11)) : (-1635231386)))));
                    }
                    var_21 = ((/* implicit */signed char) 2132743149U);
                }
                /* LoopSeq 2 */
                for (long long int i_6 = 3; i_6 < 20; i_6 += 4) 
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_7 = 0; i_7 < 21; i_7 += 2) 
                    {
                        var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_21 [i_6 - 1] [3ULL] [i_1 - 2] [i_1] [i_0 + 1])) ? (((/* implicit */int) arr_3 [i_0 + 1] [i_0] [i_0])) : (((/* implicit */int) arr_21 [i_6 + 1] [i_2] [i_1 - 2] [i_0] [i_0 + 1])))))));
                        var_23 = ((/* implicit */signed char) ((arr_0 [i_0] [i_0]) != (((/* implicit */unsigned long long int) var_15))));
                    }
                    for (short i_8 = 2; i_8 < 18; i_8 += 2) 
                    {
                        arr_27 [(unsigned short)20] [i_2] [i_0] [i_0] [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_18 [(short)19] [i_6 + 1] [i_2] [i_0])) : (((/* implicit */int) var_4))))) ? (((/* implicit */int) (_Bool)1)) : ((+(((/* implicit */int) (unsigned char)131))))));
                        arr_28 [i_0 - 1] [i_0] = ((/* implicit */unsigned char) (+(((/* implicit */int) (_Bool)1))));
                        arr_29 [i_0 - 1] [i_0] [i_1] [i_6] [i_0] [i_0] = ((/* implicit */unsigned char) arr_22 [i_8] [i_0] [i_2] [9] [i_0] [i_0]);
                        var_24 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned long long int) 1099511627775ULL))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_8 - 1]))) : (arr_0 [i_0] [i_0])));
                    }
                    /* LoopSeq 1 */
                    for (unsigned long long int i_9 = 2; i_9 < 19; i_9 += 2) 
                    {
                        var_25 = ((/* implicit */unsigned char) (unsigned short)65535);
                        var_26 = ((/* implicit */unsigned short) var_15);
                        var_27 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_30 [i_9] [i_9])) ? (((/* implicit */unsigned long long int) arr_6 [i_0] [i_1])) : (arr_9 [i_0] [i_6] [i_2])))) ? (arr_0 [i_9] [i_9]) : (((/* implicit */unsigned long long int) var_3))));
                    }
                    var_28 = ((/* implicit */short) min((var_28), (((/* implicit */short) 4294967295U))));
                }
                for (short i_10 = 0; i_10 < 21; i_10 += 3) 
                {
                    var_29 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_2] [i_0 - 1])) ? (((/* implicit */int) arr_5 [i_0] [i_10] [i_10] [i_0 + 1])) : (((/* implicit */int) arr_5 [i_0] [i_1] [i_1 - 2] [i_0 - 1]))));
                    var_30 = ((/* implicit */_Bool) max((var_30), (((/* implicit */_Bool) arr_30 [i_2] [i_1 - 2]))));
                }
                arr_34 [i_2] [i_2] [0ULL] &= ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_2] [i_1] [i_1 + 1] [i_0 + 1] [i_0 + 1]))) : (((unsigned int) 340015217377886858LL)));
                var_31 = ((/* implicit */long long int) min((var_31), (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) >> ((((+(arr_22 [(signed char)20] [i_2] [i_2] [i_0 + 1] [i_0] [i_1]))) - (14909838409063691970ULL))))))));
            }
            var_32 = ((/* implicit */int) ((signed char) arr_32 [i_0 + 1] [(signed char)5] [i_1] [20]));
            var_33 = ((/* implicit */long long int) ((((/* implicit */int) var_4)) < (((((/* implicit */_Bool) arr_16 [i_0])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_18 [i_1 - 3] [12LL] [12LL] [i_0 + 1]))))));
            var_34 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_31 [i_0] [i_1 - 2] [i_1] [i_0 + 1] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_14)) > (((/* implicit */int) (_Bool)1)))))) : (((((/* implicit */_Bool) (unsigned short)53642)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1 - 3]))) : (13576063246554228390ULL)))));
        }
    }
    for (unsigned char i_11 = 1; i_11 < 16; i_11 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_12 = 0; i_12 < 17; i_12 += 1) 
        {
            for (unsigned char i_13 = 0; i_13 < 17; i_13 += 3) 
            {
                for (short i_14 = 0; i_14 < 17; i_14 += 2) 
                {
                    {
                        arr_48 [(signed char)5] [(unsigned char)9] [i_12] [i_13] = ((/* implicit */signed char) arr_37 [3ULL]);
                        var_35 = ((/* implicit */long long int) 1099511627775ULL);
                    }
                } 
            } 
        } 
        arr_49 [i_11] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) var_1)), (min((((((/* implicit */_Bool) arr_16 [i_11])) ? (arr_43 [0U] [i_11] [0U]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_11]))))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)-1)))))))));
    }
    var_36 += ((/* implicit */short) (+(((((/* implicit */_Bool) (unsigned short)1457)) ? (min((((/* implicit */long long int) var_12)), (var_15))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 31LL)) ? (((/* implicit */int) var_11)) : (var_13))))))));
}
