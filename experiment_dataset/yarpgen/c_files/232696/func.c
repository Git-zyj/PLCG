/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232696
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232696 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232696
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
    var_16 &= ((/* implicit */unsigned long long int) max(((-(((/* implicit */int) ((unsigned char) var_8))))), (((/* implicit */int) var_8))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */short) (-(min((((/* implicit */unsigned long long int) ((arr_0 [i_0] [i_0]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_15)))))), (((arr_0 [i_0] [i_0]) % (arr_0 [7LL] [7LL])))))));
        arr_4 [i_0] = ((/* implicit */_Bool) (((_Bool)1) ? (((((((/* implicit */int) var_2)) <= (((/* implicit */int) (_Bool)1)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_2 [i_0])))) : (((((/* implicit */_Bool) arr_0 [i_0] [(short)17])) ? (var_11) : (var_5))))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-101)))));
    }
    var_17 *= ((/* implicit */short) (-(var_6)));
    /* LoopNest 2 */
    for (signed char i_1 = 0; i_1 < 12; i_1 += 1) 
    {
        for (short i_2 = 3; i_2 < 11; i_2 += 4) 
        {
            {
                var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-17122)) ? (((/* implicit */int) arr_1 [i_2 - 1])) : (((/* implicit */int) (!(((/* implicit */_Bool) min((arr_7 [i_1]), (((/* implicit */unsigned long long int) 0LL)))))))))))));
                var_19 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */int) (short)-17131)) : (((/* implicit */int) var_9))));
                var_20 = ((((/* implicit */_Bool) (unsigned char)10)) && (((((/* implicit */_Bool) (unsigned char)0)) && (((/* implicit */_Bool) (+(((/* implicit */int) (short)-4304))))))));
            }
        } 
    } 
}
