/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35111
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35111 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35111
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
    var_20 = ((/* implicit */unsigned short) ((((/* implicit */int) ((_Bool) var_14))) <= (((/* implicit */int) (_Bool)0))));
    var_21 = var_14;
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                arr_4 [i_0] [i_0] [i_0] = max((((((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_1])) ? (arr_3 [i_0] [i_1] [i_0]) : (arr_3 [i_0] [i_1] [i_0]))), (((/* implicit */unsigned long long int) max((arr_0 [i_1] [(unsigned short)4]), (((/* implicit */unsigned short) (_Bool)0))))));
                arr_5 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((_Bool) ((unsigned long long int) arr_2 [i_1])));
                /* LoopNest 2 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned short i_3 = 0; i_3 < 12; i_3 += 4) 
                    {
                        {
                            arr_11 [i_0] [i_2] [i_1] [i_0] = ((/* implicit */unsigned short) (~(((/* implicit */int) ((((/* implicit */_Bool) max(((unsigned short)42570), ((unsigned short)8365)))) || (((/* implicit */_Bool) (~(((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0]))))))))));
                            arr_12 [i_3] [i_2 - 1] [i_2 - 1] [i_2] [i_2] &= max((((unsigned short) ((((/* implicit */int) (unsigned short)13046)) + (((/* implicit */int) (unsigned short)7))))), (max((arr_0 [i_2] [i_2 - 1]), (arr_0 [i_0] [i_2 - 1]))));
                        }
                    } 
                } 
            }
        } 
    } 
}
