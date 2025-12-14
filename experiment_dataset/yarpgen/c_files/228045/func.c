/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228045
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228045 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228045
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
    var_13 = ((/* implicit */short) (signed char)127);
    var_14 = ((/* implicit */short) min((((/* implicit */long long int) (signed char)-127)), (max((((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (1547528708619109332LL))), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-127))) : (var_1)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        arr_2 [(short)1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)125)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_0 [i_0]))));
        var_15 = ((/* implicit */_Bool) (signed char)-126);
        var_16 += ((/* implicit */short) ((((/* implicit */_Bool) var_6)) ? (arr_1 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_10)))));
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_17 = var_11;
                        var_18 = ((/* implicit */short) (~((+(var_12)))));
                    }
                } 
            } 
        } 
        var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0] [(_Bool)1] [i_0] [i_0] [i_0] [(short)1])) ? (((/* implicit */long long int) ((((-1637106616) + (2147483647))) >> (((/* implicit */int) var_10))))) : (((((/* implicit */_Bool) (short)10828)) ? (6390936744261114869LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1)))))))))));
    }
}
