/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218748
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218748 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218748
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
    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) (~(((/* implicit */int) ((unsigned short) (signed char)127)))))) >= ((-(((0U) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)86)))))))));
    var_20 = ((/* implicit */short) (+(var_9)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 10; i_2 += 2) 
                {
                    for (long long int i_3 = 3; i_3 < 9; i_3 += 2) 
                    {
                        {
                            var_21 = ((((/* implicit */_Bool) ((((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)238))))) | (((unsigned int) var_2))))) ? (((((/* implicit */_Bool) 1094897561)) ? (((/* implicit */int) ((signed char) var_7))) : (((/* implicit */int) ((((/* implicit */int) (_Bool)0)) >= (((/* implicit */int) (unsigned char)255))))))) : (((/* implicit */int) max((((signed char) arr_4 [i_3 - 2] [i_1])), (((signed char) (unsigned char)74))))));
                            var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) var_17))));
                        }
                    } 
                } 
                var_23 = ((/* implicit */int) (!(((/* implicit */_Bool) var_11))));
                var_24 ^= ((/* implicit */long long int) ((((/* implicit */int) ((unsigned short) var_7))) * (((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_5 [i_0] [i_0] [i_0]))))));
            }
        } 
    } 
}
