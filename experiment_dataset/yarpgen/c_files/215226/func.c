/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215226
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215226 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215226
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
    var_18 = (~(max((var_14), (((/* implicit */unsigned long long int) max((((/* implicit */signed char) var_5)), (var_7)))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (short i_1 = 3; i_1 < 18; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    arr_7 [i_2] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_1] [i_1 - 1] [i_1 + 1])))))));
                    var_19 = ((/* implicit */unsigned long long int) var_13);
                    var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) arr_3 [i_1] [i_0] [i_0])))) ? ((~(((/* implicit */int) arr_4 [9] [i_1])))) : ((-(((/* implicit */int) var_5))))))) || (((/* implicit */_Bool) var_14)))))));
                }
                var_21 = ((/* implicit */long long int) min((var_21), (max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [4ULL] [4ULL] [i_1 - 1])) ? (((/* implicit */int) arr_6 [i_1] [(signed char)12] [i_1 - 1])) : (((/* implicit */int) arr_6 [i_0] [i_1] [i_1 - 1]))))), (min((min((-3372418205305712632LL), (((/* implicit */long long int) var_17)))), (((/* implicit */long long int) var_3))))))));
            }
        } 
    } 
}
