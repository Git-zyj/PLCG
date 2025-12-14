/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222736
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222736 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222736
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
    var_13 = ((/* implicit */int) ((((/* implicit */_Bool) (short)-9)) ? (min((var_3), (((/* implicit */unsigned long long int) ((unsigned short) var_6))))) : (((/* implicit */unsigned long long int) min((var_1), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)24821))) : (4212857103600686580LL))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 1; i_2 < 18; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 20; i_3 += 3) 
                    {
                        for (int i_4 = 0; i_4 < 20; i_4 += 2) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)39139))));
                                var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */int) ((short) arr_11 [i_0] [i_1] [i_2] [i_0] [i_1]))) << (((((((/* implicit */_Bool) (unsigned short)58154)) ? (-3480665911559557560LL) : (((/* implicit */long long int) var_4)))) + (3480665911559557569LL)))))) + (3789221374U))))));
                                arr_12 [i_0] [i_0] [i_2 + 1] [i_0] [i_4] = ((/* implicit */_Bool) (~(((/* implicit */int) max((arr_2 [i_2 - 1] [i_2] [i_2 + 2]), (arr_2 [i_2 - 1] [i_2 - 1] [i_2 + 1]))))));
                            }
                        } 
                    } 
                    var_16 = ((int) ((unsigned long long int) (unsigned char)114));
                }
            } 
        } 
    } 
}
