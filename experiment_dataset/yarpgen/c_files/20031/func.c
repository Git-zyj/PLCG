/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20031
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20031 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20031
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
    for (short i_0 = 4; i_0 < 14; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    for (signed char i_3 = 1; i_3 < 15; i_3 += 2) 
                    {
                        {
                            arr_11 [i_1] [i_1] [i_2 - 1] [i_1] = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) ((((var_8) + (2147483647))) << (((((/* implicit */int) arr_2 [i_0] [(signed char)12] [i_2 - 1])) - (16)))))) ? (((/* implicit */int) arr_10 [i_0 - 1] [i_2 - 1] [i_3 + 2] [(unsigned char)5])) : ((~(((/* implicit */int) arr_6 [(_Bool)1] [i_1] [(unsigned char)7] [1LL])))))), (((/* implicit */int) ((short) (-9223372036854775807LL - 1LL))))));
                            var_13 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0 + 3] [i_2 - 1] [i_3 + 2])) ? (((/* implicit */int) arr_2 [i_0 - 4] [i_2 - 1] [i_3 + 1])) : (((/* implicit */int) arr_2 [i_0 - 1] [i_2 - 1] [i_3 - 1])))))));
                        }
                    } 
                } 
                arr_12 [i_0] [12U] [i_1] = ((/* implicit */_Bool) (-(((/* implicit */int) (short)(-32767 - 1)))));
            }
        } 
    } 
    var_14 = ((int) var_2);
    var_15 = ((/* implicit */unsigned long long int) ((max((var_1), (var_1))) ? ((~(((/* implicit */int) var_4)))) : (((/* implicit */int) (((+(1661261643))) > (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_0)))))))));
}
