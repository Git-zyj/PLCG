/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24315
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24315 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24315
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
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 21; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                {
                    arr_9 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */int) arr_4 [i_0] [i_0] [i_0]);
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 2; i_3 < 23; i_3 += 3) 
                    {
                        var_13 = ((_Bool) var_10);
                        var_14 = ((/* implicit */unsigned long long int) min((var_14), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) min((((/* implicit */short) arr_7 [i_0 + 3] [i_3 - 1] [i_3 + 1])), (var_5)))), (var_7))))));
                    }
                    arr_12 [i_0] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) 1514250787)) || (((/* implicit */_Bool) var_5))));
                    var_15 = ((/* implicit */int) max((var_15), (((/* implicit */int) arr_11 [i_0] [(signed char)12] [i_1] [(signed char)12]))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) (((!(min(((_Bool)0), (var_1))))) ? ((-((+(var_8))))) : (((((/* implicit */int) (unsigned char)120)) + (((/* implicit */int) (short)-32755)))))))));
    var_17 = ((/* implicit */short) ((unsigned long long int) (-(min((var_4), (((/* implicit */unsigned long long int) var_8)))))));
}
