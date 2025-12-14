/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54829
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54829 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54829
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
    /* LoopSeq 3 */
    for (unsigned int i_0 = 3; i_0 < 17; i_0 += 3) 
    {
        arr_3 [i_0] &= ((/* implicit */_Bool) ((((_Bool) (!(((/* implicit */_Bool) var_9))))) ? (((/* implicit */unsigned long long int) ((arr_1 [i_0 + 4] [i_0 + 4]) ? (((((/* implicit */int) var_3)) * (((/* implicit */int) var_19)))) : (((/* implicit */int) ((((/* implicit */int) arr_1 [i_0] [i_0])) < (((/* implicit */int) var_18)))))))) : (max((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)42049))) * (0LL)))), ((+(var_4)))))));
        var_20 |= ((/* implicit */signed char) ((long long int) (short)-2306));
        arr_4 [i_0] = ((/* implicit */signed char) (+(((unsigned int) var_17))));
    }
    for (long long int i_1 = 0; i_1 < 18; i_1 += 3) 
    {
        arr_8 [i_1] = ((/* implicit */_Bool) min((((/* implicit */long long int) ((signed char) arr_6 [i_1]))), ((~(var_15)))));
        var_21 = ((/* implicit */unsigned int) min((arr_0 [i_1]), (max((((/* implicit */short) arr_6 [i_1])), (arr_0 [i_1])))));
    }
    for (unsigned char i_2 = 0; i_2 < 18; i_2 += 3) 
    {
        var_22 = ((/* implicit */long long int) min((var_22), (min((var_15), (((/* implicit */long long int) max((((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) - (var_13))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)61769)) ? (((/* implicit */int) (short)2305)) : (((/* implicit */int) (signed char)120))))))))))));
        arr_12 [i_2] = ((/* implicit */_Bool) (((-(((/* implicit */int) var_2)))) - (((/* implicit */int) min((((/* implicit */unsigned short) (signed char)120)), ((unsigned short)61769))))));
    }
    var_23 = ((/* implicit */_Bool) var_11);
    /* LoopNest 3 */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        for (signed char i_4 = 3; i_4 < 8; i_4 += 3) 
        {
            for (signed char i_5 = 0; i_5 < 10; i_5 += 3) 
            {
                {
                    arr_19 [i_3] [i_3] [i_5] = var_2;
                    arr_20 [i_3] = ((/* implicit */unsigned short) ((signed char) ((((/* implicit */_Bool) ((signed char) var_5))) ? (((/* implicit */unsigned long long int) var_15)) : (var_12))));
                }
            } 
        } 
    } 
}
