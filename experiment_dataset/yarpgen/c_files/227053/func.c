/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227053
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227053 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227053
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
    var_15 = ((/* implicit */unsigned char) (~(((/* implicit */int) var_7))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                arr_8 [i_0] = ((/* implicit */long long int) var_12);
                /* LoopNest 3 */
                for (long long int i_2 = 0; i_2 < 13; i_2 += 2) 
                {
                    for (unsigned int i_3 = 0; i_3 < 13; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 13; i_4 += 4) 
                        {
                            {
                                arr_16 [i_0] = ((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)217))));
                                var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) (unsigned char)192))));
                                var_17 = ((/* implicit */unsigned long long int) var_3);
                                var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)214)) ? (((/* implicit */int) (unsigned char)42)) : (((/* implicit */int) (unsigned char)32))));
                            }
                        } 
                    } 
                } 
                var_19 = ((/* implicit */unsigned char) ((short) min((arr_0 [i_0] [i_0]), (((/* implicit */unsigned long long int) arr_10 [i_0] [i_0] [i_1])))));
            }
        } 
    } 
}
