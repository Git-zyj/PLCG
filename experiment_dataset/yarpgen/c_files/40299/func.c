/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40299
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40299 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40299
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
    var_15 += ((/* implicit */long long int) var_3);
    var_16 = ((/* implicit */int) max((((/* implicit */unsigned int) var_6)), (max((var_13), (((/* implicit */unsigned int) var_5))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 4; i_0 < 17; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            for (int i_2 = 1; i_2 < 18; i_2 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    for (signed char i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        arr_8 [i_0] [6U] [i_0] [i_3] = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) max(((~(((/* implicit */int) var_10)))), (((/* implicit */int) var_3))))), (var_4)));
                        var_17 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((min((var_2), (var_2))), (((/* implicit */int) var_10)))))));
                    }
                    for (unsigned long long int i_4 = 0; i_4 < 19; i_4 += 2) 
                    {
                        var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) (-((~(((/* implicit */int) var_3)))))))));
                        arr_13 [i_0] = ((/* implicit */short) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))));
                    }
                    arr_14 [i_0] [12] [i_0] = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_6)), (var_13)));
                    arr_15 [i_0] = ((/* implicit */unsigned char) max((min((var_11), (((/* implicit */unsigned int) var_2)))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_4)))))));
                    arr_16 [i_2] [8ULL] [i_0 - 2] = ((/* implicit */short) max((((/* implicit */unsigned long long int) (+((-(var_6)))))), (max((var_0), (((/* implicit */unsigned long long int) var_14))))));
                }
            } 
        } 
    } 
    var_19 = var_11;
}
