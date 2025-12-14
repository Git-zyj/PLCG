/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20895
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20895 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20895
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
    var_17 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned long long int) max((var_4), (((/* implicit */int) var_15)))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_1] [i_1] = ((/* implicit */_Bool) var_2);
                /* LoopSeq 3 */
                /* vectorizable */
                for (int i_2 = 3; i_2 < 16; i_2 += 4) 
                {
                    arr_8 [i_2] |= ((/* implicit */short) var_2);
                    arr_9 [i_2 + 3] [i_1] [i_0] &= ((/* implicit */unsigned char) ((unsigned short) var_12));
                    /* LoopSeq 3 */
                    for (unsigned long long int i_3 = 4; i_3 < 17; i_3 += 2) 
                    {
                        var_18 *= ((/* implicit */signed char) ((short) var_11));
                        arr_14 [i_0] [i_0] [i_0] [i_1] [i_2] [(unsigned char)3] = ((/* implicit */long long int) ((unsigned short) var_8));
                    }
                    for (short i_4 = 0; i_4 < 19; i_4 += 4) 
                    {
                        arr_18 [i_0] [i_0] [i_1] [i_2 - 2] [i_0] = ((/* implicit */short) ((int) ((unsigned int) var_13)));
                        var_19 = ((/* implicit */int) var_13);
                    }
                    for (unsigned long long int i_5 = 0; i_5 < 19; i_5 += 4) 
                    {
                        var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) ((_Bool) var_14)))));
                        arr_23 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((_Bool) var_16));
                        arr_24 [i_0] = ((/* implicit */signed char) ((short) var_13));
                    }
                    /* LoopSeq 3 */
                    for (signed char i_6 = 0; i_6 < 19; i_6 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_7 = 0; i_7 < 19; i_7 += 2) 
                        {
                            arr_30 [i_7] [i_6] [i_6] [i_2] [i_1] [i_0] [i_0] = ((/* implicit */unsigned long long int) var_5);
                            arr_31 [i_0] [i_0] = ((/* implicit */int) ((short) var_16));
                            var_21 = ((/* implicit */long long int) ((short) var_10));
                        }
                        arr_32 [i_0] [2U] [i_0] [(_Bool)1] [i_2] [i_6] = ((/* implicit */int) ((signed char) var_16));
                        arr_33 [i_0] = ((/* implicit */unsigned long long int) ((unsigned int) 1777396353));
                        /* LoopSeq 4 */
                        for (short i_8 = 3; i_8 < 15; i_8 += 1) 
                        {
                            var_22 = ((/* implicit */unsigned short) ((short) var_3));
                            arr_36 [i_8] [i_1] = ((/* implicit */unsigned char) ((unsigned short) var_7));
                        }
                        for (long long int i_9 = 4; i_9 < 18; i_9 += 4) 
                        {
                            arr_40 [i_0] [i_1] [i_2] [i_6] [i_9] = ((/* implicit */short) var_4);
                            arr_41 [i_0] [(unsigned char)17] [i_1] [i_2 - 1] [i_6] [(unsigned char)17] = ((/* implicit */int) ((signed char) var_1));
                            arr_42 [i_9] [i_6] [i_2] [i_1] [i_0] = ((/* implicit */unsigned char) ((unsigned long long int) var_12));
                        }
                        for (unsigned short i_10 = 2; i_10 < 18; i_10 += 2) 
                        {
                            var_23 = ((/* implicit */unsigned int) ((_Bool) (_Bool)1));
                            var_24 = ((/* implicit */unsigned long long int) var_14);
                            var_25 = ((/* implicit */unsigned long long int) max((var_25), (((unsigned long long int) 1777396357))));
                        }
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                        {
                            arr_48 [i_0] [i_11] [i_2] [i_6] [i_11] = ((/* implicit */long long int) var_5);
                            arr_49 [i_11] [i_11] = ((/* implicit */long long int) var_8);
                            arr_50 [i_0] [i_1] [i_1] [16ULL] [(_Bool)1] [i_11] [i_11] = ((/* implicit */unsigned long long int) var_6);
                        }
                    }
                    for (signed char i_12 = 0; i_12 < 19; i_12 += 4) 
                    {
                        var_26 = ((/* implicit */long long int) max((var_26), (((/* implicit */long long int) ((unsigned char) var_8)))));
                        var_27 = ((/* implicit */short) ((unsigned short) ((unsigned int) var_4)));
                    }
                    for (signed char i_13 = 0; i_13 < 19; i_13 += 4) 
                    {
                        var_28 = ((/* implicit */short) max((var_28), (((/* implicit */short) var_13))));
                        arr_57 [i_1] [i_2 - 1] [i_13] = ((/* implicit */unsigned long long int) ((unsigned int) var_12));
                    }
                }
                for (unsigned short i_14 = 0; i_14 < 19; i_14 += 4) /* same iter space */
                {
                    arr_62 [i_0] = ((/* implicit */unsigned int) var_9);
                    var_29 = ((/* implicit */unsigned char) var_16);
                    var_30 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_12)), (max((((/* implicit */unsigned long long int) var_5)), (var_16)))));
                }
                for (unsigned short i_15 = 0; i_15 < 19; i_15 += 4) /* same iter space */
                {
                    arr_65 [i_0] [i_1] [i_15] = ((unsigned int) max((var_0), (((/* implicit */long long int) var_2))));
                    arr_66 [16U] = ((/* implicit */unsigned long long int) max((-1777396362), (((/* implicit */int) (short)-29088))));
                }
            }
        } 
    } 
    var_31 = ((/* implicit */unsigned long long int) var_14);
}
