/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46751
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46751 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46751
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
    for (int i_0 = 4; i_0 < 12; i_0 += 1) 
    {
        arr_3 [9] [i_0] = ((((/* implicit */int) ((-2) <= (1914263660)))) & (max((arr_0 [i_0 + 1]), (arr_0 [i_0 - 3]))));
        arr_4 [i_0] = arr_1 [i_0];
        var_10 = ((((/* implicit */_Bool) arr_2 [i_0 - 2])) ? (((((/* implicit */_Bool) arr_2 [i_0 - 2])) ? (arr_2 [i_0 - 2]) : (var_3))) : (((arr_2 [i_0 - 2]) % (arr_2 [i_0 - 2]))));
        var_11 = max((max((arr_0 [i_0 - 2]), (((((/* implicit */_Bool) arr_1 [i_0])) ? (var_9) : (arr_2 [7]))))), (((((/* implicit */_Bool) ((var_9) << (((((arr_2 [i_0]) + (636462288))) - (20)))))) ? (arr_0 [i_0 - 2]) : (((((/* implicit */_Bool) arr_0 [i_0 - 4])) ? (var_5) : (var_6))))));
        /* LoopSeq 2 */
        for (int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            arr_9 [10] [5] = ((((((/* implicit */_Bool) var_5)) ? (var_3) : (arr_1 [i_0 - 2]))) << (((/* implicit */int) (!(((/* implicit */_Bool) var_0))))));
            var_12 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1])) ? (arr_8 [9] [i_0 - 1] [5]) : (arr_2 [i_0 - 2])))) ? (((((/* implicit */_Bool) arr_1 [i_0 - 2])) ? (arr_1 [i_0 + 1]) : (arr_8 [i_0 - 2] [i_0] [i_1]))) : (max((arr_8 [i_0 - 2] [i_1] [2]), (var_4))));
        }
        for (int i_2 = 0; i_2 < 13; i_2 += 2) 
        {
            var_13 += ((/* implicit */int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_11 [i_0])) ? (var_7) : (var_1))) / (((((/* implicit */_Bool) 1025378357)) ? (127) : (arr_1 [i_2])))))) || (((/* implicit */_Bool) ((var_7) + (((1914263660) / (-1914263678))))))));
            var_14 = ((/* implicit */int) ((((/* implicit */_Bool) max((max((var_9), (-1914263634))), (((/* implicit */int) ((2) > (0))))))) && (((/* implicit */_Bool) max((max((var_5), (arr_8 [i_2] [i_2] [i_0]))), (var_2))))));
        }
    }
    var_15 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 127)) ? (-1914263634) : (-1914263669)))) ? (((33185957) << (((33185963) - (33185960))))) : (((((/* implicit */_Bool) var_6)) ? (33185963) : (-136053032)))))) ? (((/* implicit */int) ((136053032) <= ((-2147483647 - 1))))) : (var_1));
    var_16 ^= ((((/* implicit */_Bool) var_0)) ? (var_6) : (var_0));
}
