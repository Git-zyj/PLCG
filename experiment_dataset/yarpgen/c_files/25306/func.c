/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25306
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25306 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25306
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            for (int i_2 = 1; i_2 < 24; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [i_1] [i_0] [i_1] = ((/* implicit */unsigned short) (~(min((285576558U), (((/* implicit */unsigned int) 1794973598))))));
                    arr_9 [i_0] [i_0] [i_2] = ((/* implicit */short) (!(((/* implicit */_Bool) min((arr_2 [i_2 + 1] [i_2 + 1] [i_2]), (arr_2 [i_2 + 1] [i_2 + 1] [i_2 + 1]))))));
                    arr_10 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((long long int) max((((/* implicit */short) (unsigned char)0)), ((short)25807)))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_3 = 0; i_3 < 16; i_3 += 1) 
    {
        for (long long int i_4 = 0; i_4 < 16; i_4 += 4) 
        {
            {
                arr_17 [i_4] = ((/* implicit */unsigned long long int) (-((-(4009390737U)))));
                arr_18 [i_3] [i_4] [10U] = ((/* implicit */long long int) ((unsigned char) (!(((/* implicit */_Bool) arr_7 [i_4])))));
            }
        } 
    } 
    var_14 = ((/* implicit */long long int) 285576558U);
    var_15 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (((_Bool)0) ? (((/* implicit */unsigned int) -1295796615)) : (285576553U)))), (var_3))))));
    var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_13)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) min(((unsigned char)245), (((/* implicit */unsigned char) var_4))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)34175))) : (var_9))))));
}
