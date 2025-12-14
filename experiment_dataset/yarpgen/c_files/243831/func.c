/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243831
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243831 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243831
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
    for (int i_0 = 1; i_0 < 23; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned char i_3 = 0; i_3 < 25; i_3 += 3) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned int) (!(((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_2] [i_1] [i_0]))) < (0U)))));
                            var_21 = min(((short)21304), (min(((short)-1), (((/* implicit */short) arr_8 [i_3] [i_3])))));
                            var_22 = ((/* implicit */long long int) (_Bool)1);
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned int i_4 = 0; i_4 < 25; i_4 += 4) 
                {
                    var_23 &= ((/* implicit */signed char) (~(((((/* implicit */_Bool) arr_9 [i_0])) ? (((/* implicit */int) arr_5 [i_0 - 1] [i_0 - 1] [i_0 + 2])) : (((/* implicit */int) arr_0 [i_0 - 1] [i_0]))))));
                    var_24 = ((short) (+(min((((/* implicit */unsigned int) var_8)), (7U)))));
                    var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((870860353U) | (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0 - 1])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_12), (((/* implicit */short) arr_9 [i_0 - 1])))))) : (((var_10) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0 - 1])))))));
                }
            }
        } 
    } 
    var_26 = ((/* implicit */unsigned int) (unsigned char)15);
    var_27 = ((/* implicit */short) (+(((/* implicit */int) var_4))));
}
