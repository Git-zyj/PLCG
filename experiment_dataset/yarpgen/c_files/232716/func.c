/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232716
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232716 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232716
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
    var_20 = ((/* implicit */unsigned short) (((+(var_8))) < (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)30)))));
    var_21 = ((unsigned char) var_5);
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (unsigned char i_1 = 2; i_1 < 9; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                {
                    var_22 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_2 [i_1]))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 1; i_3 < 6; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 10; i_4 += 3) 
                        {
                            {
                                var_23 = ((short) ((((((/* implicit */int) var_17)) >> (((/* implicit */int) var_11)))) % (((/* implicit */int) arr_1 [i_0] [i_0]))));
                                arr_10 [i_4] [i_1] [i_2] [i_3 + 3] [i_1 - 2] &= ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */int) arr_4 [i_2] [i_3 + 2] [i_4])) / (((/* implicit */int) (unsigned char)240)))) > (((/* implicit */int) (unsigned short)41547)))))) == (((unsigned int) ((((/* implicit */int) arr_1 [i_0] [i_0])) != (((/* implicit */int) arr_1 [i_4] [i_4])))))));
                            }
                        } 
                    } 
                    var_24 = ((/* implicit */_Bool) max((((/* implicit */long long int) arr_0 [i_0])), (max((((/* implicit */long long int) (unsigned short)23985)), (4953435027865765378LL)))));
                    arr_11 [i_0] [i_1] [i_2] = ((/* implicit */unsigned short) ((signed char) ((((/* implicit */int) ((((/* implicit */int) var_17)) > (((/* implicit */int) (unsigned char)54))))) >> (((((/* implicit */int) arr_2 [i_0])) - (7249))))));
                    arr_12 [i_0] [i_1] [i_2] = ((/* implicit */signed char) (unsigned char)201);
                }
            } 
        } 
    } 
}
