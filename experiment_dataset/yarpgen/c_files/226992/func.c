/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226992
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226992 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226992
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
    var_19 = ((/* implicit */unsigned short) (+(((/* implicit */int) var_17))));
    var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((int) max((((/* implicit */unsigned long long int) ((long long int) var_3))), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (var_7)))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_7 [i_1] [(short)9] [(unsigned short)0] [i_0] = ((/* implicit */unsigned char) var_16);
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 3; i_4 < 14; i_4 += 3) 
                        {
                            {
                                arr_13 [i_0] [i_0] [i_1] [i_4] [i_2] = ((/* implicit */unsigned char) ((unsigned int) (unsigned short)53895));
                                arr_14 [i_2] [(unsigned short)7] [i_1] = ((/* implicit */unsigned long long int) arr_5 [i_4] [i_4 - 3] [(unsigned short)8] [i_4]);
                                arr_15 [i_0] [i_1] [i_1] [(short)3] [(_Bool)1] = ((/* implicit */signed char) var_5);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_18)) : (((/* implicit */int) var_15))))) == (max((((/* implicit */long long int) min((((/* implicit */signed char) var_15)), (var_11)))), (max((var_6), (((/* implicit */long long int) (unsigned short)25514))))))));
}
