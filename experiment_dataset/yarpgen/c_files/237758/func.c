/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237758
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237758 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237758
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
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_0] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_0 [i_0])) ? (min((((/* implicit */unsigned long long int) arr_1 [i_0])), (var_3))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_5))))))), (((/* implicit */unsigned long long int) arr_2 [i_0]))));
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 21; i_2 += 3) 
                {
                    for (unsigned short i_3 = 0; i_3 < 21; i_3 += 3) 
                    {
                        {
                            var_10 = ((/* implicit */short) (!(((/* implicit */_Bool) ((unsigned long long int) arr_10 [i_0] [10ULL] [i_2] [i_0] [i_0] [i_1])))));
                            arr_12 [i_0] [i_0] [i_0] [i_3] = ((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) arr_0 [i_0])) || (((/* implicit */_Bool) arr_4 [i_0] [i_0])))));
                            arr_13 [i_0] [i_0] [i_0] = ((/* implicit */long long int) arr_6 [i_0] [i_0] [i_2] [i_3]);
                            arr_14 [i_0] [4ULL] = ((/* implicit */short) ((unsigned int) var_8));
                        }
                    } 
                } 
            }
        } 
    } 
    var_11 = ((/* implicit */_Bool) min((var_11), (((_Bool) var_8))));
}
