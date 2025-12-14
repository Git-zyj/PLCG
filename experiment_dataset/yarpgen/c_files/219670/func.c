/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219670
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219670 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219670
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
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        var_13 = min((arr_0 [i_0]), (((int) arr_0 [i_0])));
        /* LoopSeq 2 */
        /* vectorizable */
        for (int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            arr_4 [9] [i_1] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [0] [i_1]))));
            arr_5 [12] [i_1] = ((arr_2 [i_0] [i_0] [i_0]) / ((-(var_11))));
            var_14 = arr_1 [i_0] [i_0];
            var_15 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0] [i_1] [14]))));
        }
        for (int i_2 = 3; i_2 < 18; i_2 += 3) 
        {
            var_16 = var_8;
            /* LoopSeq 3 */
            /* vectorizable */
            for (int i_3 = 3; i_3 < 21; i_3 += 1) 
            {
                var_17 = ((((arr_8 [i_0] [i_3 + 1] [i_3]) + (2147483647))) >> (((arr_9 [i_3] [i_3 - 3] [i_3 - 3] [i_3]) - (499483748))));
                /* LoopSeq 2 */
                for (int i_4 = 0; i_4 < 22; i_4 += 3) /* same iter space */
                {
                    arr_12 [5] [5] [i_3] [i_3] &= (-(((/* implicit */int) ((268435455) < (arr_8 [13] [i_2] [i_2 + 2])))));
                    var_18 = ((int) -170220899);
                }
                for (int i_5 = 0; i_5 < 22; i_5 += 3) /* same iter space */
                {
                    arr_15 [10] [i_3 - 3] [i_5] = var_4;
                    var_19 = ((int) arr_9 [i_2] [i_2 - 2] [i_5] [i_5]);
                    arr_16 [i_5] [i_5] = arr_6 [7] [i_2 + 3] [i_2 + 2];
                }
                var_20 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 142706526)) ? (arr_9 [i_0] [i_0] [i_0] [i_0]) : (var_0)))) ? ((+(arr_14 [i_0] [i_0] [i_0] [12]))) : (-2147483635));
            }
            for (int i_6 = 0; i_6 < 22; i_6 += 3) 
            {
                arr_21 [i_0] [i_2 + 3] [i_6] = var_4;
                arr_22 [i_0] [i_0] [20] = var_4;
                /* LoopSeq 1 */
                for (int i_7 = 2; i_7 < 21; i_7 += 2) 
                {
                    arr_27 [i_0] [i_0] [i_0] [i_0] [i_0] = (-(((min((8191), (-1))) & (var_8))));
                    var_21 = ((((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) arr_2 [i_0] [20] [i_2 - 2]))))) & (((int) var_7)));
                }
                arr_28 [i_6] [i_2] [i_0] [0] = var_10;
            }
            for (int i_8 = 0; i_8 < 22; i_8 += 4) 
            {
                /* LoopSeq 1 */
                for (int i_9 = 1; i_9 < 19; i_9 += 3) 
                {
                    var_22 = -593733989;
                    arr_34 [5] = var_0;
                    arr_35 [i_0] [2] [20] [i_9] = arr_2 [i_2] [i_8] [i_9 + 2];
                    arr_36 [i_0] [i_0] [i_8] [i_9] = ((((/* implicit */_Bool) max((arr_24 [i_9 + 2] [5] [6] [i_9 - 1] [i_9] [i_9 + 3]), (1987435313)))) ? ((-(116055739))) : (max((var_6), (arr_24 [i_9 + 3] [i_9] [i_9] [10] [i_9] [i_9 + 1]))));
                }
                var_23 = ((((arr_30 [i_2 - 1] [i_2 - 2] [i_2 - 2]) % (var_5))) << (((((((int) max((arr_19 [i_0]), (var_0)))) + (70286127))) - (23))));
                var_24 = ((((/* implicit */_Bool) ((((min((var_10), (var_3))) + (2147483647))) >> (((((var_0) - (var_2))) + (1693463220)))))) ? ((~(-1249118383))) : (((((/* implicit */_Bool) min((arr_30 [i_0] [i_2 + 2] [18]), (var_2)))) ? (max((arr_11 [i_0] [i_8]), (var_0))) : (((-1760985764) / (var_11))))));
            }
            arr_37 [i_0] [i_0] [i_2 + 3] = ((/* implicit */int) ((-1005855703) != (((1065010107) & (-2147483635)))));
        }
        var_25 = (-(532676608));
        arr_38 [i_0] = ((((/* implicit */_Bool) ((arr_24 [i_0] [i_0] [i_0] [i_0] [7] [i_0]) | (arr_0 [i_0])))) ? ((((~(arr_33 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))) & ((~(arr_26 [i_0] [i_0] [i_0] [i_0] [i_0]))))) : (min(((~(266338304))), (var_2))));
    }
    var_26 = var_3;
}
