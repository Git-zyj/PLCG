/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34407
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34407 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34407
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
    for (short i_0 = 3; i_0 < 13; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) (short)18036))))) & (((/* implicit */int) ((((/* implicit */int) (short)-18036)) == (((/* implicit */int) arr_5 [i_0] [i_1 - 1] [i_1 - 1])))))))), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)20430))) : (arr_4 [i_0])))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 14; i_4 += 2) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) 1106658252U)))))));
                                var_18 = ((/* implicit */long long int) var_14);
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */unsigned short) min((((((((var_7) - (var_6))) + (9223372036854775807LL))) >> (((((((/* implicit */_Bool) var_3)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0] [i_1 - 1] [3ULL] [i_2] [i_2]))))) - (13922453846165991446ULL))))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) ((((/* implicit */long long int) 1106658244U)) > (-1LL)))) : (((/* implicit */int) ((unsigned short) arr_7 [i_0 - 3] [i_1] [i_2]))))))));
                    var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) arr_11 [i_1 - 1] [i_0 - 3] [i_2] [i_2] [i_0]))));
                    var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_4 [0])))))) ? (((((/* implicit */_Bool) (~(((/* implicit */int) arr_5 [(_Bool)1] [(_Bool)1] [i_2]))))) ? (((/* implicit */int) arr_6 [6LL] [i_1])) : (((/* implicit */int) arr_5 [(_Bool)0] [i_1] [(_Bool)0])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [10ULL]))))))))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) var_4))));
    var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_0)))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))))) : (var_9)))) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (((((/* implicit */long long int) (~(((/* implicit */int) var_10))))) ^ (((((/* implicit */_Bool) 5LL)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) var_12)))))))));
}
