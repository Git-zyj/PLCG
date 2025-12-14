/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38213
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38213 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38213
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
    var_13 -= ((/* implicit */signed char) var_0);
    var_14 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (~(((int) (short)6393))))), (((((/* implicit */_Bool) var_11)) ? (max((var_4), (((/* implicit */unsigned int) var_11)))) : (((/* implicit */unsigned int) ((/* implicit */int) (((-2147483647 - 1)) >= (((/* implicit */int) var_8))))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 15; i_2 += 4) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_15 = ((/* implicit */short) ((signed char) ((unsigned long long int) ((326256467) | (((/* implicit */int) var_8))))));
                            var_16 = ((/* implicit */_Bool) (short)-21555);
                            var_17 ^= ((/* implicit */unsigned int) max((((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) (short)-21528))))))), (max((arr_2 [i_0] [i_1] [i_3]), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_2])) || (((/* implicit */_Bool) var_9)))))))));
                        }
                    } 
                } 
                arr_8 [i_0] [i_1] [i_0] |= ((/* implicit */unsigned int) (-(min(((+(((/* implicit */int) (short)255)))), (((/* implicit */int) (short)21569))))));
                var_18 = ((/* implicit */short) (((!(var_10))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) -2147483623)) ? (((/* implicit */int) (short)21554)) : (((/* implicit */int) (unsigned short)34409)))))));
            }
        } 
    } 
}
