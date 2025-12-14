/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20060
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20060 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20060
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 2; i_1 < 22; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 1; i_4 < 23; i_4 += 4) 
                        {
                            {
                                arr_12 [i_0] [i_3] [i_2] [i_1] [i_0] = ((/* implicit */_Bool) ((signed char) ((((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) var_10)))) ? (((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0]))) : (var_14))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1 + 1] [i_1 - 1] [i_4 + 1] [i_4 - 1]))))));
                                arr_13 [i_0] = ((/* implicit */_Bool) var_10);
                            }
                        } 
                    } 
                    arr_14 [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) (-(((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) (unsigned short)8192)) ? (((/* implicit */unsigned long long int) var_12)) : (18446744073709551615ULL)))))));
                    arr_15 [i_0] = ((/* implicit */signed char) (-(((((/* implicit */int) var_5)) >> (((min((var_10), (((/* implicit */unsigned int) arr_6 [i_2] [i_2] [i_1 + 1] [i_0])))) - (23110U)))))));
                    arr_16 [i_0] = ((/* implicit */unsigned char) var_12);
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned char) var_4);
}
