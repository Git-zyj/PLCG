/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25212
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25212 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25212
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
    var_20 = (signed char)41;
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                arr_5 [i_0] [(_Bool)1] [i_1] = ((/* implicit */short) ((min((4783684512056721515ULL), (((/* implicit */unsigned long long int) var_5)))) - (((/* implicit */unsigned long long int) (((((_Bool)1) && (((/* implicit */_Bool) arr_1 [i_0])))) ? (min((arr_0 [i_1] [i_1]), (var_7))) : (((/* implicit */long long int) ((((((/* implicit */int) arr_1 [i_1])) + (2147483647))) >> (((((/* implicit */int) arr_1 [i_0])) + (112)))))))))));
                arr_6 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1200276699U)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (unsigned short)65535))))) ? (((/* implicit */int) ((short) 2968097148311507976LL))) : (((/* implicit */int) ((5196581554759582459LL) < (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))))))));
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 24; i_2 += 2) 
                {
                    for (long long int i_3 = 1; i_3 < 21; i_3 += 1) 
                    {
                        {
                            arr_12 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) -2968097148311507977LL)) ? (-2968097148311507976LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)44)))));
                            var_21 = ((/* implicit */signed char) (-((-(((/* implicit */int) arr_10 [i_3] [i_3 + 2] [i_3] [i_3] [i_3]))))));
                            arr_13 [i_0] [(signed char)18] [i_0] [i_0] = ((/* implicit */long long int) (((((~(arr_2 [i_0]))) != (((/* implicit */int) var_1)))) ? (((/* implicit */int) arr_8 [i_0] [i_0] [(_Bool)1])) : (((/* implicit */int) (signed char)47))));
                        }
                    } 
                } 
            }
        } 
    } 
}
