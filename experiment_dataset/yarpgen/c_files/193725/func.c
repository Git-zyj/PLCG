/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193725
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193725 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193725
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
    var_18 = ((/* implicit */unsigned int) var_5);
    var_19 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((var_3) / (((/* implicit */int) var_0)))) / ((~(((/* implicit */int) (unsigned short)19229)))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 16; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 3; i_3 < 14; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 2; i_4 < 15; i_4 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) var_11))))) - (var_2))))));
                                var_21 = var_17;
                            }
                        } 
                    } 
                } 
                var_22 &= ((/* implicit */_Bool) (-(((((var_3) | (var_16))) | (((/* implicit */int) var_11))))));
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned short) var_14);
    var_24 = ((/* implicit */int) ((unsigned long long int) max((max((12568396198026671659ULL), (((/* implicit */unsigned long long int) var_5)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)19275)) ? (3767309550U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)24112)))))))));
}
