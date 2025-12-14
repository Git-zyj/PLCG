/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32193
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32193 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32193
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            for (short i_2 = 1; i_2 < 18; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_20 -= ((/* implicit */long long int) min((((signed char) ((((/* implicit */long long int) ((/* implicit */int) arr_10 [i_0]))) | (arr_1 [i_0] [i_0])))), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((short) var_9))))))));
                                var_21 = ((/* implicit */int) max((var_21), (((((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)34410)))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned short)31126)) : (((/* implicit */int) arr_9 [(signed char)20] [14] [i_0])))))))) : (((/* implicit */int) (unsigned short)31126))))));
                                arr_14 [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */_Bool) max((((/* implicit */unsigned short) ((signed char) (-(1584334981))))), (((unsigned short) var_9))));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */long long int) ((signed char) ((arr_12 [i_0] [i_0] [i_1] [i_1] [i_0]) | (((/* implicit */int) (signed char)-24)))));
                }
            } 
        } 
    } 
    var_23 |= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) var_6)) % (var_12)))) ? (((/* implicit */long long int) ((((1302399102U) | (((/* implicit */unsigned int) ((/* implicit */int) var_9))))) + (((/* implicit */unsigned int) ((/* implicit */int) (short)3)))))) : (((((/* implicit */_Bool) (-(517837097U)))) ? (((long long int) var_0)) : (((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)34426)))))))));
}
