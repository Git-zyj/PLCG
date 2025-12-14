/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212152
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212152 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212152
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
    var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */int) var_14)) > ((-(((/* implicit */int) var_15))))))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 16; i_1 += 1) 
        {
            {
                arr_5 [i_1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (-((-(arr_0 [i_1]))))))));
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 20; i_2 += 4) 
                {
                    for (signed char i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_15 [3LL] [i_4] [i_1] [i_4 - 1] [i_4] = ((/* implicit */long long int) ((((/* implicit */unsigned int) (-(((((/* implicit */_Bool) -7819877199902748705LL)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_15))))))) / (4094364804U)));
                                var_17 -= ((((((/* implicit */_Bool) arr_12 [i_1 + 3] [i_1 + 4] [i_4 - 1] [i_4 - 1] [i_4 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (arr_12 [i_1 + 3] [i_1 + 4] [i_4 - 1] [i_4 - 1] [i_4]))) << (((/* implicit */int) var_6)));
                            }
                        } 
                    } 
                } 
                var_18 = ((/* implicit */_Bool) (-(((((/* implicit */long long int) ((/* implicit */int) ((1197655744) <= (((/* implicit */int) var_6)))))) / (((var_10) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))));
            }
        } 
    } 
    var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) 4094364804U))));
}
