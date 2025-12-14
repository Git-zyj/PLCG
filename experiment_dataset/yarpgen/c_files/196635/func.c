/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196635
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196635 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196635
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
    var_19 = ((/* implicit */short) (unsigned short)42321);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            {
                var_20 = var_13;
                var_21 = ((/* implicit */unsigned char) (short)-30943);
                /* LoopNest 2 */
                for (unsigned char i_2 = 1; i_2 < 12; i_2 += 4) 
                {
                    for (unsigned char i_3 = 0; i_3 < 14; i_3 += 1) 
                    {
                        {
                            var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_14))))) ? (((/* implicit */int) max((var_7), (var_9)))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_16))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_8 [i_0] [i_1] [i_2] [i_3])) != (((/* implicit */int) (unsigned short)63137)))))) : (((((/* implicit */_Bool) arr_5 [1ULL] [1ULL] [i_2])) ? ((-(11289005539427438861ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))));
                            var_23 |= ((/* implicit */_Bool) (~((((+(12965177859272534582ULL))) / (((((/* implicit */_Bool) 8436909240003224142LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (var_13)))))));
                            var_24 = ((/* implicit */unsigned long long int) max((((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)159)) && (((/* implicit */_Bool) 6383343984262715334LL))))), (var_12)));
                        }
                    } 
                } 
                var_25 = ((/* implicit */long long int) ((unsigned char) arr_8 [i_0] [i_0] [i_0] [i_0]));
                var_26 = (-(((/* implicit */int) ((((/* implicit */int) arr_7 [i_0] [i_1] [i_1])) != (((/* implicit */int) arr_7 [i_0] [i_0] [i_1]))))));
            }
        } 
    } 
}
