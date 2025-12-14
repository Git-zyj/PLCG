/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211080
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211080 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211080
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
    var_11 = ((/* implicit */unsigned char) var_3);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                {
                    var_12 += ((/* implicit */long long int) ((((((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) var_8)) : (arr_1 [i_1]))) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) -32260242)))))) != (((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_5 [i_0] [i_1] [i_2] [i_1])) : (((/* implicit */int) arr_6 [i_0] [i_0] [i_2]))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 22; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 23; i_4 += 4) 
                        {
                            {
                                arr_15 [i_0] [i_0] [i_0] = ((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))));
                                var_13 = ((/* implicit */int) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) max((var_1), (((/* implicit */unsigned short) var_5)))))) : (((((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) / (arr_8 [i_0] [i_0] [i_1] [i_3] [i_0]))) ^ (((((/* implicit */_Bool) (short)-7)) ? (var_10) : (((/* implicit */long long int) var_8))))))));
                            }
                        } 
                    } 
                    var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) 164904640634383313ULL))) ? (max((((/* implicit */unsigned long long int) (unsigned short)52550)), (((((/* implicit */_Bool) arr_12 [i_2] [i_2] [i_2] [i_2])) ? (var_6) : (5710077365129520934ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_0] [i_1] [i_2] [i_1] [i_2])))));
                }
            } 
        } 
    } 
}
