/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241366
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241366 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241366
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                {
                    var_10 = ((/* implicit */long long int) ((((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))))) & (((((/* implicit */_Bool) var_6)) ? (3506442519U) : (4277813558U)))));
                    arr_10 [(signed char)5] [(signed char)5] [2ULL] = ((/* implicit */signed char) var_6);
                    arr_11 [i_2] [i_1] [i_0] = ((/* implicit */unsigned int) arr_3 [i_0]);
                }
            } 
        } 
        var_11 = ((/* implicit */unsigned char) arr_1 [i_0] [i_0]);
        var_12 = arr_1 [i_0] [i_0];
        arr_12 [i_0] = ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_7 [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_4 [i_0] [i_0])));
        arr_13 [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) + (arr_8 [i_0])));
    }
    var_13 = ((/* implicit */unsigned int) ((((/* implicit */long long int) max((((/* implicit */unsigned int) var_2)), (var_7)))) * (min((((/* implicit */long long int) (_Bool)0)), (5007525140668048146LL)))));
    var_14 |= ((/* implicit */long long int) var_1);
    var_15 = ((/* implicit */signed char) ((((((/* implicit */_Bool) 12552946083506093581ULL)) && (((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) var_8)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (signed char)91)))) : (48818625U)));
}
