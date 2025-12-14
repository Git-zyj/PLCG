/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46861
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46861 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46861
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
    var_15 = ((((/* implicit */_Bool) var_4)) ? ((-((~(((/* implicit */int) (unsigned char)110)))))) : (((/* implicit */int) (unsigned short)65535)));
    var_16 &= ((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) 5569600009755564840ULL)))))));
    var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)165)))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            for (short i_2 = 1; i_2 < 16; i_2 += 2) 
            {
                {
                    var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) max((((/* implicit */int) (unsigned short)10091)), (((((/* implicit */_Bool) (unsigned short)56053)) ? (((/* implicit */int) (short)-1155)) : (((/* implicit */int) (short)31))))))), (5050960219165570126ULL))))));
                    /* LoopNest 2 */
                    for (short i_3 = 1; i_3 < 15; i_3 += 2) 
                    {
                        for (short i_4 = 0; i_4 < 18; i_4 += 2) 
                        {
                            {
                                arr_14 [i_0] [(short)13] [(short)13] [i_4] = ((/* implicit */unsigned long long int) (unsigned char)38);
                                var_19 = (unsigned short)51163;
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */unsigned short) max((var_20), ((unsigned short)48029)));
                }
            } 
        } 
    } 
}
