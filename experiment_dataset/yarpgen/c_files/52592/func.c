/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52592
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52592 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52592
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
    var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_3))))) / (((/* implicit */int) var_6))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 1; i_0 < 20; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            var_13 = ((/* implicit */long long int) max((var_13), (((/* implicit */long long int) arr_4 [i_0] [i_0]))));
            var_14 = var_10;
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                for (unsigned char i_3 = 0; i_3 < 24; i_3 += 2) 
                {
                    {
                        var_15 |= (+(((/* implicit */int) arr_2 [i_0] [i_0 + 2])));
                        var_16 = ((arr_8 [i_2] [i_3]) == (arr_8 [i_2] [i_2]));
                        /* LoopSeq 4 */
                        for (signed char i_4 = 3; i_4 < 21; i_4 += 1) 
                        {
                            var_17 = ((/* implicit */unsigned short) var_11);
                            var_18 ^= ((/* implicit */unsigned long long int) (~(arr_8 [i_1] [i_4])));
                        }
                        for (unsigned short i_5 = 0; i_5 < 24; i_5 += 1) 
                        {
                            var_19 += ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)5509))) > (7038237935913675644ULL)));
                            var_20 = ((/* implicit */signed char) arr_7 [i_2] [i_1] [i_2] [i_3]);
                        }
                        for (int i_6 = 0; i_6 < 24; i_6 += 1) 
                        {
                            var_21 = ((/* implicit */unsigned short) var_9);
                            var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_12 [i_0 - 1] [i_0 + 4] [i_0] [i_0] [i_0 - 1] [i_0 + 3] [(unsigned short)18])) ? (arr_12 [i_0 - 1] [i_0] [i_0 + 2] [i_0] [18LL] [i_0 + 2] [i_0 + 4]) : (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_2] [i_0 + 4] [i_0 + 3] [i_0 - 1] [i_0 + 2] [i_0 + 4])))));
                        }
                        for (unsigned long long int i_7 = 0; i_7 < 24; i_7 += 2) 
                        {
                            var_23 ^= ((/* implicit */unsigned char) (~(((/* implicit */int) var_8))));
                            var_24 = ((/* implicit */long long int) -6);
                            var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) 2878088381U)) ? (-106360561) : (((/* implicit */int) (_Bool)0))));
                        }
                        /* LoopSeq 3 */
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            arr_29 [i_8] [i_8] [i_3] [i_2] [i_1] [i_1] [i_0] = ((/* implicit */unsigned int) arr_22 [i_0] [i_1] [i_8] [i_8] [i_8] [i_0]);
                            arr_30 [i_1] [i_0] |= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_18 [i_1] [i_8]))));
                            var_26 = ((/* implicit */unsigned short) var_4);
                        }
                        for (signed char i_9 = 0; i_9 < 24; i_9 += 1) 
                        {
                            var_27 = ((/* implicit */unsigned long long int) ((long long int) ((-6) * (((/* implicit */int) (_Bool)0)))));
                            var_28 = ((/* implicit */unsigned int) min((var_28), (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)0)) >> (((((((/* implicit */long long int) 4294967295U)) ^ (9223372036854775801LL))) - (9223372032559808498LL))))))));
                            var_29 = ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned short)0))));
                        }
                        for (long long int i_10 = 0; i_10 < 24; i_10 += 1) 
                        {
                            var_30 &= ((/* implicit */unsigned short) ((((/* implicit */int) arr_13 [(_Bool)1] [i_1] [i_2] [(unsigned char)11] [i_10])) / (((/* implicit */int) var_10))));
                            arr_35 [i_0] [i_1] [i_2] [i_3] [i_3] = ((/* implicit */long long int) (_Bool)0);
                        }
                        var_31 ^= ((/* implicit */long long int) arr_10 [i_1] [i_1] [i_0 + 3] [i_0 + 4]);
                    }
                } 
            } 
            var_32 = ((/* implicit */signed char) var_0);
        }
        arr_36 [i_0] = ((/* implicit */unsigned char) var_11);
        arr_37 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -6)) ? (-760173217887655063LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-22553)))));
    }
    for (unsigned char i_11 = 0; i_11 < 14; i_11 += 3) 
    {
        arr_41 [i_11] = ((/* implicit */_Bool) (-(((/* implicit */int) var_1))));
        var_33 ^= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_11] [(unsigned char)10] [i_11] [i_11] [i_11] [i_11]))) - (min((arr_15 [i_11] [10LL] [i_11] [i_11]), (arr_34 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11] [i_11])))));
        var_34 = ((/* implicit */short) ((((/* implicit */int) var_6)) * (((/* implicit */int) min((min((((/* implicit */unsigned short) (_Bool)0)), (var_0))), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_5 [i_11] [i_11]))))))))));
        arr_42 [i_11] = ((/* implicit */unsigned int) (signed char)(-127 - 1));
        var_35 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_11] [i_11] [i_11] [i_11] [(short)20] [i_11])) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_11]))) : (((((/* implicit */long long int) ((/* implicit */int) var_10))) & (arr_14 [(unsigned short)0] [i_11])))))) ? (((/* implicit */int) min((var_9), (arr_26 [i_11] [i_11] [i_11])))) : (((/* implicit */int) ((var_7) > (((/* implicit */int) arr_24 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11])))))));
    }
}
