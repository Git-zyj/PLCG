/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50452
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50452 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50452
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
    for (unsigned char i_0 = 3; i_0 < 14; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 14; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 15; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 2; i_4 < 14; i_4 += 4) 
                        {
                            {
                                var_16 = ((((/* implicit */_Bool) min((arr_2 [i_0 - 1] [i_0 - 1]), (((/* implicit */int) var_10))))) ? (min((arr_2 [i_1] [i_1]), (arr_2 [11] [i_1]))) : (min((arr_2 [i_4 + 1] [i_2 - 2]), (((/* implicit */int) var_12)))));
                                arr_14 [i_2 - 1] [i_0] [(_Bool)1] = ((/* implicit */unsigned char) var_3);
                                arr_15 [i_0] [i_3] [(unsigned char)11] [i_1] [i_0] = ((/* implicit */unsigned long long int) max((min((((/* implicit */int) (short)12)), (arr_2 [i_2 - 1] [i_0 + 1]))), (((/* implicit */int) (unsigned short)59100))));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)59112))))) || (((((/* implicit */int) arr_0 [i_1])) != (((/* implicit */int) (unsigned short)6431)))))))));
                    var_18 = ((/* implicit */unsigned long long int) (unsigned short)59105);
                }
            } 
        } 
    } 
    var_19 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_8), ((short)19624)))) ? (((/* implicit */int) var_3)) : (((((/* implicit */int) (unsigned char)0)) ^ (var_13)))))) ? (((/* implicit */unsigned long long int) min((var_4), (((/* implicit */int) min((((/* implicit */unsigned char) var_15)), (var_14))))))) : (((6749006252519381719ULL) & (((/* implicit */unsigned long long int) ((2569583639U) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)6423))))))))));
}
