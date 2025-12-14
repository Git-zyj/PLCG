/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41519
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41519 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41519
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
    /* LoopNest 2 */
    for (short i_0 = 3; i_0 < 14; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 14; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 1; i_2 < 13; i_2 += 4) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_11 = arr_9 [i_1 - 1] [i_2];
                            arr_13 [(_Bool)1] [i_0] = (((((_Bool)1) && (((/* implicit */_Bool) (short)-20727)))) ? (((((/* implicit */int) arr_1 [i_2 + 2])) * (((/* implicit */int) ((short) var_1))))) : (((((((/* implicit */_Bool) (unsigned char)31)) ? (((/* implicit */int) arr_3 [i_0] [i_0])) : (((/* implicit */int) var_3)))) * (((/* implicit */int) ((unsigned char) arr_8 [i_0] [i_0] [i_0]))))));
                            var_12 ^= ((/* implicit */unsigned char) (((+(var_10))) >> (((arr_11 [i_0 - 3] [i_0] [i_0 - 3] [i_0 - 3] [i_0 - 3] [i_0]) ? (((/* implicit */int) arr_11 [i_0 - 3] [i_0] [i_0] [(short)11] [i_0] [i_0])) : (((/* implicit */int) arr_11 [i_0 - 3] [i_0] [i_0] [i_0 - 3] [i_0 - 3] [i_0]))))));
                        }
                    } 
                } 
                arr_14 [(short)12] |= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_3 [i_0 - 3] [i_1 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0 - 3] [i_1 - 1]))) : (var_10))) == (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [(_Bool)1] [i_1 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_0]))) : (4294967295U))))));
                var_13 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (-(arr_5 [i_0] [i_0 - 1] [i_1 + 1]))))));
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) max((var_6), (((/* implicit */unsigned char) var_9))))) : (((/* implicit */int) ((signed char) (signed char)125)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-24611))) : (min((((/* implicit */unsigned long long int) min((var_2), (((/* implicit */long long int) var_7))))), (max((var_10), (((/* implicit */unsigned long long int) (_Bool)1))))))));
    var_15 = (-(((/* implicit */int) var_1)));
    var_16 = ((/* implicit */long long int) var_5);
    var_17 = ((/* implicit */unsigned long long int) min((((/* implicit */int) (_Bool)1)), (min((((int) var_0)), (((/* implicit */int) max(((unsigned char)34), (((/* implicit */unsigned char) var_0)))))))));
}
