/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197993
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197993 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197993
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
    var_19 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) var_3)) - ((~(max((9080976818915738130ULL), (((/* implicit */unsigned long long int) var_2))))))));
    var_20 = ((/* implicit */signed char) ((unsigned short) var_0));
    var_21 -= ((/* implicit */int) ((((/* implicit */unsigned int) min((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (signed char)-22)))), (((/* implicit */int) ((((/* implicit */_Bool) (signed char)19)) || (((/* implicit */_Bool) (signed char)18)))))))) / (var_2)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                arr_8 [i_0] [(short)15] |= ((/* implicit */int) min((var_10), (((/* implicit */unsigned long long int) max((arr_0 [i_1]), (((/* implicit */unsigned short) var_1)))))));
                /* LoopNest 3 */
                for (signed char i_2 = 2; i_2 < 18; i_2 += 4) 
                {
                    for (signed char i_3 = 0; i_3 < 19; i_3 += 4) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) (short)-5294))));
                                arr_19 [i_3] [i_3] [i_3] [i_2 + 1] [i_1] [i_0] = ((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (signed char)29)) % (((/* implicit */int) arr_7 [i_2] [i_4]))))))))));
                                var_23 = var_6;
                                var_24 = ((/* implicit */int) arr_11 [i_2 - 1] [i_2 + 1] [i_2 - 1] [i_2 - 2]);
                            }
                        } 
                    } 
                } 
                var_25 = ((/* implicit */unsigned long long int) arr_16 [i_0] [i_0]);
            }
        } 
    } 
}
