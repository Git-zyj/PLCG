/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237868
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237868 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237868
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
    var_19 = var_2;
    var_20 |= ((/* implicit */unsigned short) var_0);
    var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) ((((/* implicit */_Bool) 542839845U)) && ((!((_Bool)1))))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 3; i_0 < 17; i_0 += 2) 
    {
        for (unsigned int i_1 = 2; i_1 < 17; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                {
                    var_22 *= ((/* implicit */long long int) (_Bool)1);
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 18; i_3 += 3) 
                    {
                        for (int i_4 = 0; i_4 < 18; i_4 += 2) 
                        {
                            {
                                var_23 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 469523200712985644ULL))))), (max((((/* implicit */unsigned long long int) arr_8 [i_0 - 3] [i_0 - 2])), (9339164621009471384ULL)))));
                                var_24 += ((/* implicit */unsigned short) (((-(((/* implicit */int) arr_10 [i_2] [i_2] [i_1 + 1] [i_1] [i_0 - 1] [i_0 + 1])))) == (((/* implicit */int) ((min((-8772192515150170319LL), (((/* implicit */long long int) (_Bool)1)))) != (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))));
                            }
                        } 
                    } 
                    var_25 = ((/* implicit */long long int) (~(((arr_2 [i_1 - 2] [i_1] [i_0]) - (arr_2 [i_1 - 2] [i_1] [i_0])))));
                    var_26 = ((/* implicit */_Bool) ((max((var_11), (((/* implicit */unsigned long long int) arr_0 [i_0] [i_0])))) / (((/* implicit */unsigned long long int) -4587390706547074427LL))));
                }
            } 
        } 
    } 
}
