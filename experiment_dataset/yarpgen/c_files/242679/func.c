/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242679
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242679 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242679
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
    var_18 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) ((_Bool) var_8))) : (((((/* implicit */_Bool) (unsigned short)21800)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))) << (((((/* implicit */int) var_7)) - (52321)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 16; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 1; i_3 < 15; i_3 += 2) 
                    {
                        for (short i_4 = 1; i_4 < 13; i_4 += 2) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) var_16))));
                                arr_12 [i_0] [i_1] [i_0] [i_3] [i_1] = ((/* implicit */int) arr_11 [i_0] [i_0] [(unsigned short)13] [i_0] [i_0]);
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_11 [i_2] [i_2] [i_1] [i_1] [i_0])) % (((/* implicit */int) (_Bool)1)))))))) ^ ((-(((/* implicit */int) arr_10 [i_0] [i_1] [i_1]))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) var_0))));
}
