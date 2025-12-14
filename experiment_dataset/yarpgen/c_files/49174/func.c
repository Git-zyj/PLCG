/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49174
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49174 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49174
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
    var_11 = ((/* implicit */int) min((var_11), (((/* implicit */int) var_6))));
    /* LoopNest 3 */
    for (signed char i_0 = 2; i_0 < 22; i_0 += 2) 
    {
        for (unsigned char i_1 = 3; i_1 < 21; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 24; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_12 = ((/* implicit */long long int) (-(((/* implicit */int) ((arr_0 [i_1 - 3] [i_0 + 2]) || (var_7))))));
                                var_13 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_6))) ^ (var_9)))) || (((/* implicit */_Bool) min((var_3), (((/* implicit */int) arr_1 [i_0])))))))) % (max((((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)31690)))), ((+(((/* implicit */int) var_7))))))));
                                var_14 = ((/* implicit */unsigned long long int) max(((!(var_7))), ((!(var_0)))));
                                var_15 = ((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))));
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)0)), ((unsigned short)30028))))))) ? (((((/* implicit */int) arr_0 [i_0] [i_0])) / (((/* implicit */int) arr_6 [i_0] [i_0] [i_1 + 3] [i_0])))) : (((/* implicit */int) (((-(((/* implicit */int) var_2)))) != (((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_0])))))));
                }
            } 
        } 
    } 
}
