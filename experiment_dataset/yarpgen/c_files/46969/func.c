/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46969
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46969 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46969
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
    var_11 -= ((/* implicit */unsigned int) min((((/* implicit */int) var_5)), (min((((/* implicit */int) ((unsigned char) var_0))), (((int) var_3))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 11; i_0 += 2) 
    {
        for (short i_1 = 1; i_1 < 10; i_1 += 2) 
        {
            {
                var_12 -= ((/* implicit */unsigned short) min((((/* implicit */int) (!(((/* implicit */_Bool) 0LL))))), (max((var_3), (var_0)))));
                arr_4 [i_0] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((min((var_9), (((/* implicit */int) var_2)))) / ((~(var_9)))))) ? (((((/* implicit */_Bool) arr_3 [i_1 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (arr_3 [i_0 - 1]))) : (((/* implicit */unsigned int) var_4))));
                /* LoopNest 3 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    for (int i_3 = 4; i_3 < 10; i_3 += 2) 
                    {
                        for (int i_4 = 3; i_4 < 12; i_4 += 2) 
                        {
                            {
                                var_13 = ((/* implicit */_Bool) ((min((((/* implicit */long long int) var_8)), (-1LL))) * (((/* implicit */long long int) min((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_2)))), (((/* implicit */int) var_6)))))));
                                var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) ((int) arr_9 [i_3])))));
                                var_15 = ((/* implicit */unsigned short) var_8);
                            }
                        } 
                    } 
                } 
                var_16 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) ? ((+(((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)13)), ((unsigned short)4568)))))) : (((/* implicit */int) var_2))));
            }
        } 
    } 
    var_17 *= ((/* implicit */unsigned char) (+(((var_7) / (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_10)), (var_1))))))));
    var_18 = ((/* implicit */unsigned short) (~(var_4)));
}
