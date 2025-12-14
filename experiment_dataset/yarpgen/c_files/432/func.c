/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 432
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=432 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/432
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
    for (short i_0 = 2; i_0 < 11; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                for (long long int i_3 = 3; i_3 < 10; i_3 += 3) 
                {
                    {
                        arr_10 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */unsigned long long int) var_11);
                        var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((-1240327797056255466LL) + (9223372036854775807LL))) >> (((arr_3 [i_1]) + (8407118403415058822LL)))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_3 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_1] [i_1] [i_3]))))))));
                        var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) ((((arr_3 [i_0]) & (((/* implicit */long long int) -974043203)))) >= (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_2 - 1] [i_0 - 2] [i_3]))))))));
                        var_21 *= ((arr_3 [i_0]) != (arr_3 [i_0]));
                    }
                } 
            } 
        } 
        var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_0 + 1] [i_0 + 1]))) : (var_5)));
        var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_0])) / (((/* implicit */int) var_8))));
    }
    var_24 = ((/* implicit */unsigned short) var_6);
    var_25 = ((/* implicit */unsigned char) ((((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)57571))) < (var_2))) ? (((/* implicit */int) var_18)) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) (_Bool)0)))))) + (((/* implicit */int) var_8))));
}
