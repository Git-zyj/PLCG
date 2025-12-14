/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220134
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220134 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220134
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
    for (short i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                arr_6 [i_0] [i_0] = ((((/* implicit */int) ((((/* implicit */_Bool) max((arr_1 [i_1] [i_0]), (((/* implicit */unsigned int) arr_2 [i_0] [i_1]))))) || (((/* implicit */_Bool) arr_4 [i_0] [i_0]))))) << (((2070140679) >> (((var_7) - (2743623024U))))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 3; i_2 < 22; i_2 += 2) 
                {
                    for (int i_3 = 1; i_3 < 21; i_3 += 1) 
                    {
                        {
                            arr_14 [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) (~(((/* implicit */int) ((_Bool) var_15)))));
                            arr_15 [i_0] [i_2] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) min((((unsigned char) arr_13 [i_0] [(_Bool)1])), (((/* implicit */unsigned char) (signed char)0))))) && (((/* implicit */_Bool) (~(((/* implicit */int) arr_12 [i_2 + 1] [i_0] [i_2] [i_3 - 1])))))));
                            arr_16 [(_Bool)0] = ((/* implicit */_Bool) arr_2 [12U] [i_1]);
                        }
                    } 
                } 
                arr_17 [i_0] = ((/* implicit */signed char) 2070140679);
                arr_18 [i_0] [i_1] = (i_0 % 2 == 0) ? (((/* implicit */unsigned int) ((arr_5 [i_0]) << (min((((/* implicit */unsigned int) (_Bool)0)), (964235236U)))))) : (((/* implicit */unsigned int) ((((arr_5 [i_0]) + (2147483647))) << (min((((/* implicit */unsigned int) (_Bool)0)), (964235236U))))));
                arr_19 [i_0] [(_Bool)1] = ((/* implicit */_Bool) arr_13 [i_0] [i_1]);
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned char) min((((/* implicit */int) ((short) (~(var_7))))), (-997474473)));
    var_20 = ((/* implicit */unsigned int) ((min((var_8), (((/* implicit */unsigned int) var_10)))) <= (((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) -2070140679))))))))));
}
