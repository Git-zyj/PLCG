/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54816
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54816 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54816
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
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 11; i_1 += 2) 
        {
            {
                arr_4 [i_0] [i_1] = ((/* implicit */unsigned short) (-(((arr_3 [i_1]) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))));
                arr_5 [i_1] [i_1] = ((min((((long long int) arr_1 [i_0] [i_1 - 1])), (((/* implicit */long long int) ((arr_0 [i_0]) << (((arr_0 [i_0]) - (4131012055U)))))))) | (-4160863512026461949LL));
                arr_6 [i_0] = ((((/* implicit */_Bool) (-(-7399022222215069534LL)))) ? (((long long int) var_9)) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))));
                arr_7 [i_0] [i_1 - 1] = ((/* implicit */short) max((((long long int) var_7)), (arr_2 [i_0])));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 2) 
                {
                    for (unsigned short i_3 = 2; i_3 < 12; i_3 += 2) 
                    {
                        {
                            var_10 = ((/* implicit */unsigned short) min((var_10), (((/* implicit */unsigned short) ((4160863512026461939LL) > (((/* implicit */long long int) 0U)))))));
                            arr_12 [i_0] [i_0] [i_0] [i_1 + 2] = ((/* implicit */unsigned int) -7422513445961152263LL);
                            arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((arr_3 [i_1]) / (arr_3 [i_1 - 1]))) > (((/* implicit */unsigned long long int) ((unsigned int) 4294967294U)))));
                            var_11 = ((/* implicit */short) arr_2 [i_0]);
                        }
                    } 
                } 
            }
        } 
    } 
    var_12 &= var_2;
    var_13 = var_5;
}
