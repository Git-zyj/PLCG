/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220709
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220709 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220709
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
    var_12 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) var_2)), (min(((-(var_8))), (((/* implicit */unsigned int) min((var_10), (var_10))))))));
    var_13 = ((/* implicit */short) min((var_13), (((/* implicit */short) 15360U))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 16; i_2 += 4) 
                {
                    for (short i_3 = 0; i_3 < 16; i_3 += 3) 
                    {
                        {
                            var_14 = ((((/* implicit */_Bool) ((((/* implicit */int) ((short) var_3))) / (((/* implicit */int) var_3))))) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) var_10)));
                            arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) max((arr_5 [i_0]), (((/* implicit */unsigned short) var_3)))))) != (min((((/* implicit */unsigned int) arr_5 [i_1])), (var_6)))));
                        }
                    } 
                } 
                arr_12 [i_0] [i_1] [i_1] |= ((/* implicit */unsigned char) ((((/* implicit */unsigned int) (+(((/* implicit */int) var_9))))) / (max((((/* implicit */unsigned int) var_9)), (var_4)))));
                var_15 *= var_9;
            }
        } 
    } 
    var_16 -= ((/* implicit */unsigned short) var_6);
}
