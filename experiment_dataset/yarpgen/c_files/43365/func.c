/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43365
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43365 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43365
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
    var_10 &= min((max((((/* implicit */int) ((var_5) >= (var_2)))), (((var_8) + (var_0))))), (var_9));
    /* LoopSeq 1 */
    for (int i_0 = 2; i_0 < 18; i_0 += 4) 
    {
        arr_3 [i_0] = max(((+(((arr_2 [i_0]) | ((-2147483647 - 1)))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0 - 2])) ? (arr_2 [i_0]) : (0)))) ? (min((arr_0 [i_0] [i_0 - 2]), (0))) : ((-(253131113))))));
        /* LoopSeq 1 */
        for (int i_1 = 3; i_1 < 19; i_1 += 2) 
        {
            var_11 = max(((+(773376020))), (arr_1 [i_1 - 2] [i_0 + 1]));
            var_12 = min((arr_2 [i_0]), ((~(max((arr_4 [i_0 + 1] [i_1] [i_1]), (arr_2 [i_0]))))));
            /* LoopSeq 2 */
            for (int i_2 = 2; i_2 < 18; i_2 += 4) 
            {
                var_13 = (-(-1594566637));
                var_14 = min((arr_5 [i_2]), (((((/* implicit */_Bool) (-2147483647 - 1))) ? (max((0), (-773376021))) : (1687242393))));
                arr_8 [i_0] [i_1 - 2] [i_1] [i_2] &= (-2147483647 - 1);
            }
            for (int i_3 = 2; i_3 < 19; i_3 += 4) 
            {
                /* LoopSeq 1 */
                for (int i_4 = 3; i_4 < 18; i_4 += 3) 
                {
                    arr_13 [i_4] [4] [i_4] [i_3 - 1] [i_4 + 2] = max((arr_0 [i_3] [i_1 - 2]), (arr_5 [i_0]));
                    var_15 = ((((/* implicit */_Bool) arr_5 [i_1])) ? (arr_7 [2]) : (((((/* implicit */_Bool) 1687242393)) ? (739276178) : (-1687242393))));
                }
                var_16 = ((/* implicit */int) max((var_16), (543498758)));
                arr_14 [i_0] [i_0] [i_3] [i_3] = max((min((((((/* implicit */_Bool) arr_1 [11] [i_1 - 3])) ? (arr_2 [i_0]) : (-868472368))), (0))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_3] [i_3])) ? (arr_5 [i_3]) : (arr_0 [i_0] [i_0])))) ? (max((773376020), (arr_5 [i_0]))) : (((((/* implicit */_Bool) (-2147483647 - 1))) ? (130944) : (1119842800))))));
            }
        }
        arr_15 [i_0] = arr_7 [i_0];
    }
}
