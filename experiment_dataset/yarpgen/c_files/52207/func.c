/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52207
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52207 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52207
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
    var_19 = var_17;
    var_20 = ((/* implicit */long long int) var_10);
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        /* LoopSeq 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            /* LoopNest 2 */
            for (long long int i_2 = 2; i_2 < 18; i_2 += 2) 
            {
                for (long long int i_3 = 1; i_3 < 20; i_3 += 3) 
                {
                    {
                        var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) var_6))));
                        /* LoopSeq 1 */
                        for (long long int i_4 = 0; i_4 < 21; i_4 += 3) 
                        {
                            arr_14 [i_0] [i_3] [i_3] [i_0] = ((/* implicit */_Bool) var_12);
                            arr_15 [i_4] [i_3] [i_2] [i_1] [i_1] [i_3] [i_0] = var_3;
                            arr_16 [i_0] [i_4] [i_3] [i_4] [i_2] [i_2 - 2] [i_1] = var_0;
                            var_22 = ((/* implicit */_Bool) max((var_22), (var_16)));
                        }
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (long long int i_5 = 4; i_5 < 20; i_5 += 3) 
            {
                arr_20 [i_5] [i_5] [i_5] = ((/* implicit */long long int) var_10);
                arr_21 [i_5] [i_1] [i_5] = ((/* implicit */long long int) var_7);
            }
            var_23 = ((/* implicit */long long int) var_8);
        }
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
        {
            var_24 = ((/* implicit */long long int) var_10);
            arr_26 [i_0] [i_6] = var_8;
            var_25 = var_10;
            arr_27 [i_0] = var_11;
            /* LoopSeq 1 */
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                arr_30 [(_Bool)1] [(_Bool)1] [(_Bool)1] [(_Bool)1] = ((/* implicit */long long int) var_18);
                /* LoopNest 2 */
                for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                {
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        {
                            arr_35 [i_9] [i_6] [i_9] = ((/* implicit */_Bool) var_15);
                            arr_36 [i_9] [i_9] [(_Bool)1] [i_7] [i_6] [i_0] [i_9] = var_10;
                            var_26 = ((/* implicit */long long int) var_13);
                        }
                    } 
                } 
            }
        }
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
        {
            var_27 -= var_4;
            var_28 = ((/* implicit */_Bool) max((var_28), (var_16)));
        }
        var_29 += var_8;
        var_30 = ((/* implicit */_Bool) max((var_30), (var_7)));
    }
    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
    {
        var_31 = var_15;
        arr_41 [3LL] = var_3;
        var_32 = ((/* implicit */_Bool) max((var_32), (((/* implicit */_Bool) var_9))));
    }
    var_33 = ((/* implicit */_Bool) var_0);
    var_34 ^= var_0;
}
