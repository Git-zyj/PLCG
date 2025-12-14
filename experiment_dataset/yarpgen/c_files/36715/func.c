/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36715
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36715 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36715
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
    for (unsigned long long int i_0 = 4; i_0 < 20; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 18; i_1 += 3) 
        {
            {
                var_11 = ((/* implicit */unsigned long long int) max((var_11), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 325735516U)) ? (288230375614840832LL) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_0] [6ULL])))))) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) var_4))))))))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 21; i_2 += 1) 
                {
                    for (unsigned short i_3 = 2; i_3 < 20; i_3 += 1) 
                    {
                        {
                            var_12 = ((/* implicit */unsigned short) (-((-(((/* implicit */int) (signed char)102))))));
                            arr_12 [i_0] [i_1] [i_0] = ((/* implicit */short) arr_8 [i_0 - 1] [4LL]);
                            arr_13 [i_0] [18LL] [i_1] [5ULL] = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_10))) != (arr_7 [i_0 - 2] [i_2] [i_3] [i_3])))) - (((/* implicit */int) arr_6 [i_1] [i_0] [i_1] [i_1]))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned int) var_8);
}
