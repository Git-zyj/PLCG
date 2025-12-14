/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197736
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197736 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197736
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
    for (signed char i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_1] [i_1] = ((/* implicit */short) arr_3 [i_1]);
                arr_6 [i_1] = ((/* implicit */_Bool) ((((arr_4 [i_0] [i_0] [i_1]) + (((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) ^ (var_5))))) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)140))))) ? (((/* implicit */int) var_0)) : ((((_Bool)1) ? (((/* implicit */int) (short)-17496)) : (((/* implicit */int) (unsigned char)107)))))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned short i_2 = 0; i_2 < 21; i_2 += 4) 
    {
        arr_9 [(_Bool)1] [i_2] = ((/* implicit */unsigned int) (-(((/* implicit */int) ((((((var_3) + (2147483647))) >> (((((/* implicit */int) arr_7 [i_2])) - (171))))) >= (((/* implicit */int) var_9)))))));
        var_13 = ((/* implicit */int) ((min((var_10), (((/* implicit */unsigned long long int) arr_7 [i_2])))) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */int) var_1)) - (((/* implicit */int) arr_7 [i_2])))) : (((((/* implicit */int) arr_8 [i_2])) + (((/* implicit */int) var_9)))))))));
    }
    var_14 = ((/* implicit */int) var_12);
}
