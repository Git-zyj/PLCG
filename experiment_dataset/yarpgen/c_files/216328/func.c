/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216328
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216328 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216328
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
    var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) var_7))));
    /* LoopNest 3 */
    for (signed char i_0 = 4; i_0 < 10; i_0 += 3) 
    {
        for (signed char i_1 = 3; i_1 < 9; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                {
                    var_17 -= ((/* implicit */signed char) max(((((!(((/* implicit */_Bool) var_6)))) ? (((arr_3 [(signed char)8]) - (var_4))) : (((/* implicit */int) ((signed char) var_1))))), ((~(((int) 4294967295U))))));
                    var_18 = ((/* implicit */unsigned int) (~(-2898369261124151061LL)));
                    arr_7 [i_0 + 3] [i_0] = ((((4185231357U) - (max((((/* implicit */unsigned int) (signed char)5)), (var_12))))) * (((((((/* implicit */_Bool) -1115002770348987667LL)) ? (109735936U) : (arr_4 [i_0]))) / (arr_5 [i_0]))));
                    /* LoopSeq 2 */
                    for (int i_3 = 1; i_3 < 12; i_3 += 3) 
                    {
                        var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(1758645695U)))) ? (((((/* implicit */_Bool) max((((/* implicit */long long int) 3187033750U)), (-2898369261124151049LL)))) ? (var_7) : (((/* implicit */long long int) 770099648U)))) : (((/* implicit */long long int) var_10))));
                        var_20 = arr_2 [i_0];
                        var_21 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_1 + 1])) ? (arr_11 [(signed char)4] [i_0 - 4] [i_1 - 2]) : (arr_11 [i_1] [8U] [i_1 - 3])))) ? (min((arr_11 [i_1] [i_1] [i_1 + 4]), (arr_11 [i_0] [i_1] [i_1 + 2]))) : (((arr_11 [i_0 + 2] [i_1] [i_1 - 1]) | (((/* implicit */long long int) 4185231357U))))));
                    }
                    for (int i_4 = 0; i_4 < 13; i_4 += 4) 
                    {
                        arr_16 [i_0] [i_1] [i_1] [i_0] [i_4] = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0]))))) > (arr_3 [i_0])));
                        arr_17 [i_1] [i_0] [i_2] [1LL] [i_0] [i_0] = ((/* implicit */int) max((((long long int) ((((/* implicit */_Bool) var_4)) ? (arr_1 [i_0]) : (var_10)))), (min((((arr_11 [i_0 - 3] [i_0 - 3] [10]) & (((/* implicit */long long int) ((/* implicit */int) var_11))))), (((/* implicit */long long int) var_14))))));
                        var_22 = ((/* implicit */int) var_7);
                    }
                    /* LoopSeq 2 */
                    for (long long int i_5 = 0; i_5 < 13; i_5 += 4) 
                    {
                        var_23 = ((/* implicit */unsigned int) ((2U) <= (1884499183U)));
                        var_24 = ((/* implicit */signed char) ((unsigned int) var_0));
                    }
                    for (signed char i_6 = 0; i_6 < 13; i_6 += 1) 
                    {
                        var_25 = 109735942U;
                        var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_4 [i_0 - 2]) >> (((/* implicit */int) ((4185231359U) < (((/* implicit */unsigned int) ((/* implicit */int) var_15))))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [(signed char)8] [i_2] [i_6] [i_6]))) : (4294967280U))))));
                    }
                }
            } 
        } 
    } 
}
