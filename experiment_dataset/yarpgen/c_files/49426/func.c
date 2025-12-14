/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49426
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49426 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49426
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
    var_17 = ((((max((var_11), (((/* implicit */long long int) var_5)))) <= (((/* implicit */long long int) ((/* implicit */int) (signed char)6))))) ? (((/* implicit */long long int) ((/* implicit */int) var_15))) : ((+(var_4))));
    var_18 = (short)-2146;
    /* LoopNest 3 */
    for (unsigned short i_0 = 2; i_0 < 7; i_0 += 4) 
    {
        for (unsigned short i_1 = 3; i_1 < 7; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_7 [(short)2] [i_1] [i_1] = ((/* implicit */long long int) (~(var_14)));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 10; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 10; i_4 += 2) 
                        {
                            {
                                arr_12 [i_4] [i_3] [i_1] [i_1] [i_1] [i_0 + 1] = ((/* implicit */signed char) arr_4 [i_3]);
                                var_19 = ((/* implicit */short) ((10477281481226744932ULL) & (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_0 [i_0 + 1])))))));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) ((unsigned int) arr_6 [i_0] [i_0] [i_2])))));
                    var_21 = ((/* implicit */short) (+(min((((/* implicit */long long int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) (short)2146))))), (((arr_4 [i_0]) & (((/* implicit */long long int) arr_6 [(short)5] [i_1 - 2] [i_0]))))))));
                    var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) (short)-23518))));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) var_11))));
}
