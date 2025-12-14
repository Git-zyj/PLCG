/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196718
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196718 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196718
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
    for (int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                arr_6 [i_0] |= ((/* implicit */signed char) ((unsigned int) ((unsigned char) var_8)));
                arr_7 [i_0] [i_1] = ((/* implicit */signed char) arr_3 [i_0] [i_0] [i_0]);
                arr_8 [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) (+((~(var_12)))));
            }
        } 
    } 
    var_15 = ((/* implicit */signed char) var_4);
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 10; i_2 += 2) 
    {
        for (unsigned char i_3 = 1; i_3 < 9; i_3 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (long long int i_4 = 0; i_4 < 11; i_4 += 1) 
                {
                    /* LoopSeq 2 */
                    for (int i_5 = 1; i_5 < 10; i_5 += 1) /* same iter space */
                    {
                        var_16 = ((/* implicit */long long int) var_11);
                        var_17 = ((/* implicit */unsigned char) -827047068);
                    }
                    /* vectorizable */
                    for (int i_6 = 1; i_6 < 10; i_6 += 1) /* same iter space */
                    {
                        arr_20 [i_3] [i_2] [i_3] [i_3] [i_2] [i_2] = ((/* implicit */int) ((long long int) arr_17 [i_3] [i_3] [i_6 + 1] [i_3]));
                        var_18 |= ((/* implicit */long long int) var_2);
                        var_19 = arr_3 [i_2] [i_2] [i_2 - 1];
                        arr_21 [i_3] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */int) var_10);
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 11; i_7 += 3) 
                    {
                        for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */signed char) max((var_5), (((/* implicit */int) arr_4 [i_2] [i_2] [i_2]))));
                                var_21 |= ((/* implicit */unsigned int) max((827047067), ((~(var_3)))));
                                arr_27 [i_3] [i_3] [i_3] [i_3] = ((/* implicit */long long int) var_9);
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */int) arr_0 [i_4]);
                }
                arr_28 [i_3] = arr_23 [i_2] [i_2] [i_2] [i_2] [i_2];
                var_23 = ((/* implicit */_Bool) var_9);
                arr_29 [i_3] = ((/* implicit */int) max((var_1), (((/* implicit */unsigned int) 827047067))));
            }
        } 
    } 
    var_24 = ((/* implicit */signed char) -827047087);
}
