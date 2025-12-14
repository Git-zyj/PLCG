/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195962
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195962 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195962
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
    var_15 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) ((long long int) var_8))))) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)128)))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 19; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_16 = var_6;
                var_17 = ((/* implicit */signed char) var_10);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 1; i_3 < 18; i_3 += 1) 
                    {
                        {
                            var_18 = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) 445992875U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_0))) : (var_14))) / (max((max((var_0), (((/* implicit */unsigned long long int) (unsigned short)65393)))), (((/* implicit */unsigned long long int) arr_4 [i_0] [i_0] [i_1]))))));
                            arr_8 [i_3] [i_2] [i_1] [i_0 - 1] [i_3] [i_3] = ((/* implicit */unsigned short) (+(((unsigned int) (unsigned short)65392))));
                            var_19 = ((/* implicit */int) (_Bool)1);
                            var_20 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((signed char) ((((/* implicit */int) arr_1 [i_1] [i_1])) % (((/* implicit */int) var_1))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_21 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)128)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_10))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_6))), (((/* implicit */unsigned int) var_1))));
    var_22 = ((/* implicit */int) ((((/* implicit */_Bool) var_8)) && ((!(((/* implicit */_Bool) var_11))))));
}
