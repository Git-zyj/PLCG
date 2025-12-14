/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205618
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205618 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205618
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
    var_19 = ((/* implicit */unsigned short) var_9);
    var_20 = ((/* implicit */unsigned short) max((var_20), ((unsigned short)54360)));
    var_21 = ((/* implicit */unsigned int) max((var_21), (((((/* implicit */unsigned int) (~(((/* implicit */int) var_10))))) & (((((/* implicit */_Bool) var_3)) ? ((-(var_11))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_6))) - (524288U)))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 15; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                var_22 = var_11;
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 16; i_2 += 2) 
                {
                    for (unsigned int i_3 = 0; i_3 < 16; i_3 += 2) 
                    {
                        {
                            var_23 *= ((/* implicit */unsigned char) (+(((/* implicit */int) arr_0 [i_0 + 1]))));
                            arr_11 [i_0] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)8)) ^ (((/* implicit */int) var_13))))) || (((/* implicit */_Bool) arr_4 [i_3]))));
                            arr_12 [i_0] [4U] [i_2] [i_3] = ((/* implicit */unsigned int) ((unsigned short) min((29199420U), (878218537U))));
                            arr_13 [i_0 - 1] [i_1] [i_2] [i_1] = (~(min((arr_6 [i_0 - 1] [i_1] [i_2] [(unsigned short)9]), (((/* implicit */unsigned int) ((unsigned char) (unsigned char)247))))));
                        }
                    } 
                } 
                arr_14 [i_1] = ((/* implicit */unsigned short) (~(((/* implicit */int) ((unsigned short) min((((/* implicit */unsigned int) (unsigned short)65532)), (arr_6 [i_0 - 1] [i_0] [i_1] [i_1])))))));
            }
        } 
    } 
}
