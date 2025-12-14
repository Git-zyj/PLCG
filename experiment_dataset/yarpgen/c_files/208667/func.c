/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208667
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208667 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208667
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
    var_14 = var_11;
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_15 = var_2;
            var_16 = min((arr_3 [(_Bool)1] [(_Bool)0]), (arr_1 [i_0]));
        }
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_17 ^= arr_3 [i_2] [i_2];
            var_18 = arr_3 [(_Bool)1] [i_2];
            var_19 -= ((/* implicit */_Bool) ((var_8) ? (((/* implicit */int) min((arr_3 [i_0] [i_2]), (arr_3 [i_0] [i_2])))) : (((/* implicit */int) (_Bool)0))));
        }
        /* LoopSeq 1 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            arr_10 [i_0] = (_Bool)0;
            var_20 = arr_5 [i_0] [i_0] [(_Bool)1];
        }
        /* LoopSeq 1 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            var_21 = ((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) min((arr_12 [i_0]), (min((arr_7 [i_0] [(_Bool)1]), (arr_11 [(_Bool)1])))))) : (((/* implicit */int) arr_4 [i_0] [i_4] [(_Bool)1]))));
            arr_13 [i_0] = arr_3 [i_4] [i_0];
            var_22 = arr_2 [(_Bool)1] [i_4] [(_Bool)1];
            var_23 = min((min((arr_11 [i_0]), (arr_11 [i_0]))), (arr_11 [i_0]));
        }
    }
    var_24 = ((/* implicit */_Bool) max((var_24), (var_12)));
}
