/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227454
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227454 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227454
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 1; i_0 < 22; i_0 += 2) /* same iter space */
    {
        var_10 = ((/* implicit */_Bool) (~((~(var_5)))));
        arr_3 [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) var_7)) ^ (((/* implicit */int) var_9))));
    }
    for (long long int i_1 = 1; i_1 < 22; i_1 += 2) /* same iter space */
    {
        arr_6 [i_1] = ((/* implicit */unsigned int) (~((~(((/* implicit */int) var_7))))));
        var_11 = ((/* implicit */short) ((((((var_3) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))) < (((/* implicit */unsigned long long int) ((var_6) - (((/* implicit */int) arr_5 [i_1] [i_1]))))))) && (var_9)));
    }
    /* LoopNest 2 */
    for (unsigned short i_2 = 2; i_2 < 23; i_2 += 4) 
    {
        for (unsigned char i_3 = 0; i_3 < 24; i_3 += 3) 
        {
            {
                var_12 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)62448)) ? (((/* implicit */int) (unsigned short)3081)) : (((/* implicit */int) (unsigned short)3088))));
                arr_15 [i_2] = ((/* implicit */unsigned long long int) (-(((((/* implicit */int) (unsigned short)7)) / (((/* implicit */int) (unsigned short)20220))))));
                arr_16 [i_2] [i_3] = ((/* implicit */short) max(((((!(((/* implicit */_Bool) var_7)))) ? (((/* implicit */int) max((((/* implicit */unsigned char) var_7)), (var_1)))) : ((-(((/* implicit */int) var_1)))))), (((/* implicit */int) arr_11 [i_2] [i_2]))));
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_1)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) var_8))))) & ((~(var_5)))))) ? (((/* implicit */int) var_9)) : (((((/* implicit */_Bool) ((unsigned char) var_5))) ? (var_6) : (((/* implicit */int) max(((unsigned short)65528), ((unsigned short)62448))))))));
}
