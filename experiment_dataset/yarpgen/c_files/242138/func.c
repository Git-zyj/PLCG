/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242138
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242138 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242138
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
    for (long long int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 20; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [i_1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((arr_3 [i_1] [(short)1]) ? (((/* implicit */int) (signed char)-31)) : (((/* implicit */int) arr_3 [i_1] [i_2])))) | (((((/* implicit */_Bool) (unsigned short)62332)) ? (((/* implicit */int) (signed char)30)) : (((/* implicit */int) (short)14491))))))) ? (((/* implicit */int) min(((!(((/* implicit */_Bool) arr_4 [i_0] [(short)7] [i_0])))), (((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) (signed char)30))))))) : (((/* implicit */int) (signed char)49))));
                    var_14 = ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) (unsigned short)38560)) && (((/* implicit */_Bool) arr_1 [i_1])))))) ? (min((((var_2) - (((/* implicit */int) arr_6 [i_2] [i_1] [i_1] [i_0])))), (((/* implicit */int) max(((signed char)127), ((signed char)-114)))))) : ((-(((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_2])) ? (((/* implicit */int) var_5)) : (arr_1 [i_1]))))));
                }
            } 
        } 
    } 
    var_15 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)10022)) ? (((/* implicit */int) var_7)) : (max((5), (((/* implicit */int) (signed char)127))))));
    var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned short)61680)) : (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) (unsigned short)38541)) != (((/* implicit */int) var_5))))) == (((/* implicit */int) var_1)))))));
}
