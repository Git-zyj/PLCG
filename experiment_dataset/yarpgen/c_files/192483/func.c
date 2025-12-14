/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192483
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192483 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192483
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
    for (unsigned char i_0 = 1; i_0 < 19; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                arr_6 [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (+(((((/* implicit */unsigned int) ((/* implicit */int) var_9))) * (var_7))))))));
                /* LoopSeq 1 */
                for (signed char i_2 = 2; i_2 < 18; i_2 += 4) 
                {
                    var_18 -= ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) var_0)), (var_17))))))) + (((/* implicit */int) var_13))));
                    arr_11 [i_0] [i_1] [i_2] [i_2] |= ((/* implicit */unsigned int) (((-(((/* implicit */int) var_6)))) * ((-(((/* implicit */int) arr_10 [i_2] [i_2 + 1] [i_2 + 2] [i_2 + 1]))))));
                }
                var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) var_13))));
                var_20 = ((/* implicit */short) (~(((((/* implicit */_Bool) arr_2 [i_0 - 1] [i_0 - 1])) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (var_14))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))));
                var_21 += ((/* implicit */short) ((unsigned char) (((+(var_8))) % (((/* implicit */long long int) ((/* implicit */int) arr_4 [(unsigned short)7] [6U]))))));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned long long int) ((short) (!(((/* implicit */_Bool) (~(var_7)))))));
}
