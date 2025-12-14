/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199025
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199025 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199025
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            var_16 = ((int) var_5);
            arr_4 [i_0] = ((/* implicit */int) var_9);
            /* LoopNest 3 */
            for (int i_2 = 1; i_2 < 14; i_2 += 3) 
            {
                for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                {
                    for (int i_4 = 1; i_4 < 13; i_4 += 4) 
                    {
                        {
                            arr_14 [i_1] [i_3] = ((((/* implicit */_Bool) var_5)) ? (var_8) : (((/* implicit */int) var_1)));
                            var_17 = ((/* implicit */_Bool) max((var_17), (var_13)));
                            arr_15 [i_1] [i_2] [i_3] [i_4] = ((_Bool) var_7);
                        }
                    } 
                } 
            } 
        }
        arr_16 [i_0] = ((_Bool) max((((/* implicit */int) var_3)), (var_6)));
        /* LoopNest 2 */
        for (int i_5 = 2; i_5 < 14; i_5 += 4) 
        {
            for (int i_6 = 0; i_6 < 15; i_6 += 4) 
            {
                {
                    var_18 = min((((((/* implicit */_Bool) var_4)) ? (var_2) : (var_2))), (((((/* implicit */_Bool) var_4)) ? (var_0) : (((/* implicit */int) var_1)))));
                    /* LoopNest 2 */
                    for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                    {
                        for (int i_8 = 0; i_8 < 15; i_8 += 2) 
                        {
                            {
                                var_19 = ((/* implicit */_Bool) var_10);
                                arr_28 [i_0] [10] [i_6] = max((var_6), (var_5));
                                arr_29 [i_0] [i_5 - 2] [i_6] [i_7] = ((/* implicit */_Bool) var_2);
                                arr_30 [i_0] [i_8] [i_6] [i_7 - 1] [i_8] = ((/* implicit */int) ((_Bool) min((((/* implicit */int) var_9)), (((int) var_1)))));
                                var_20 *= ((_Bool) max((-2118548254), (2118548253)));
                            }
                        } 
                    } 
                    arr_31 [i_6] = var_6;
                    arr_32 [i_0] [i_0] [i_6] = ((/* implicit */int) var_13);
                }
            } 
        } 
        var_21 = ((_Bool) var_8);
        arr_33 [i_0] = ((((/* implicit */_Bool) max((((/* implicit */int) var_1)), (var_8)))) ? (((/* implicit */int) var_14)) : (((/* implicit */int) ((_Bool) var_13))));
    }
    /* vectorizable */
    for (int i_9 = 2; i_9 < 17; i_9 += 2) 
    {
        arr_36 [i_9 - 2] [i_9] = ((/* implicit */_Bool) var_4);
        arr_37 [i_9] = var_4;
    }
    /* vectorizable */
    for (int i_10 = 0; i_10 < 19; i_10 += 4) 
    {
        arr_40 [i_10] = var_11;
        var_22 = ((/* implicit */_Bool) min((var_22), (var_14)));
    }
    var_23 = ((/* implicit */_Bool) ((var_1) ? (((/* implicit */int) var_1)) : (max((var_0), (((/* implicit */int) (_Bool)1))))));
}
