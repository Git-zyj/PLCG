/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216287
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216287 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216287
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
    var_12 *= ((/* implicit */signed char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) ((((/* implicit */_Bool) var_7)) && ((!(((/* implicit */_Bool) (unsigned short)45585)))))))));
    var_13 = ((/* implicit */int) min((((/* implicit */long long int) (!(((/* implicit */_Bool) max((5840319650318810699LL), (((/* implicit */long long int) var_6)))))))), ((+(((((/* implicit */long long int) var_7)) / (var_0)))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            {
                var_14 *= ((/* implicit */_Bool) min((min((((((/* implicit */_Bool) (unsigned short)24047)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_0]))) : (4559505636348828985ULL))), (((/* implicit */unsigned long long int) ((long long int) var_8))))), (((/* implicit */unsigned long long int) (+(var_4))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 14; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_15 = ((/* implicit */long long int) max((arr_6 [i_0] [i_1] [i_0]), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (+(((/* implicit */int) arr_1 [i_1]))))), (arr_4 [i_1] [i_1] [i_1]))))));
                            var_16 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) (+((-(((/* implicit */int) (unsigned char)144))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_5 [i_0] [i_2] [i_2])))) : (max((((/* implicit */unsigned long long int) ((_Bool) 41810642))), (((((/* implicit */unsigned long long int) var_6)) - (13887238437360722657ULL)))))));
                        }
                    } 
                } 
                var_17 = ((/* implicit */unsigned int) min((var_17), (min((var_11), (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-125)) % (((/* implicit */int) (_Bool)1)))))))));
            }
        } 
    } 
}
