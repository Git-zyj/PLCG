/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54366
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54366 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54366
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
    var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) ((((var_6) + (9223372036854775807LL))) << (((((int) ((unsigned short) 468489137U))) - (37809))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        var_17 ^= ((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_0])) * (((/* implicit */int) arr_0 [i_0]))));
        /* LoopSeq 2 */
        for (unsigned char i_1 = 3; i_1 < 19; i_1 += 2) 
        {
            var_18 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) arr_2 [0U])) ? (arr_1 [i_1]) : (((/* implicit */unsigned long long int) 3826478157U))))));
            arr_5 [i_1] = ((/* implicit */unsigned char) (-(3826478159U)));
        }
        for (signed char i_2 = 0; i_2 < 20; i_2 += 4) 
        {
            arr_8 [i_0] = ((/* implicit */unsigned short) (+(var_2)));
            var_19 += ((/* implicit */long long int) ((((/* implicit */_Bool) 468489126U)) || (arr_7 [i_2])));
        }
        var_20 ^= ((((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0])) ? (((/* implicit */int) var_4)) : (2079267670))) >= (((/* implicit */int) ((7353868596752737085LL) >= (((/* implicit */long long int) ((/* implicit */int) var_4)))))));
        arr_9 [i_0] = ((/* implicit */_Bool) (~((-(-7353868596752737086LL)))));
        var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(var_1))))) | (arr_1 [i_0]))))));
    }
    /* vectorizable */
    for (long long int i_3 = 0; i_3 < 12; i_3 += 2) 
    {
        arr_13 [i_3] [i_3] = (-(((var_13) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)43540))))));
        arr_14 [i_3] = var_13;
        var_22 += var_12;
        var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) (+(((int) arr_3 [i_3] [i_3])))))));
    }
    for (unsigned int i_4 = 2; i_4 < 18; i_4 += 1) 
    {
        var_24 += ((/* implicit */int) var_8);
        arr_17 [i_4 + 2] = ((((((/* implicit */_Bool) min((arr_4 [(_Bool)1]), (((/* implicit */int) arr_15 [i_4]))))) ? (max((((/* implicit */long long int) arr_0 [i_4])), (var_10))) : (((/* implicit */long long int) ((/* implicit */int) var_4))))) >= (((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (arr_3 [i_4] [i_4]) : (arr_3 [i_4] [2ULL])))));
        arr_18 [i_4] = ((/* implicit */_Bool) (~((~(var_13)))));
    }
}
