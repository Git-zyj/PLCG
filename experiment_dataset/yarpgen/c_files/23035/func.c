/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23035
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23035 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23035
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
    for (unsigned int i_0 = 3; i_0 < 11; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 13; i_2 += 3) 
                {
                    for (unsigned int i_3 = 0; i_3 < 13; i_3 += 2) 
                    {
                        {
                            var_14 -= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_0 + 1]))));
                            var_15 = ((/* implicit */unsigned char) arr_6 [i_0] [7U] [i_2] [i_3] [i_0]);
                            var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max(((unsigned short)34648), (((/* implicit */unsigned short) arr_7 [i_0] [i_0] [i_0 + 1] [i_0 - 3]))))) ? ((-(((/* implicit */int) (unsigned short)58726)))) : ((-(((/* implicit */int) arr_7 [i_0 - 2] [i_1] [i_2] [4U]))))));
                        }
                    } 
                } 
                var_17 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) 1987425079U)), (((((/* implicit */_Bool) arr_3 [i_0 + 1])) ? (((/* implicit */unsigned long long int) 3591789724U)) : (1549475235261150934ULL)))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned long long int) var_4);
    var_19 = ((/* implicit */unsigned short) (+(var_1)));
}
