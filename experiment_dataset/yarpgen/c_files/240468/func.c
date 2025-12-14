/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240468
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240468 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240468
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
    var_13 = ((/* implicit */signed char) ((min((18446744073709551615ULL), (((/* implicit */unsigned long long int) ((unsigned short) 6857007638927682721ULL))))) <= (((min((var_9), (((/* implicit */unsigned long long int) var_3)))) - (((/* implicit */unsigned long long int) var_0))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (short i_1 = 1; i_1 < 16; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 18; i_2 += 1) 
            {
                {
                    var_14 = ((/* implicit */unsigned long long int) ((long long int) ((unsigned short) 0U)));
                    var_15 = ((/* implicit */int) min((((11197119055891201165ULL) * (((/* implicit */unsigned long long int) var_1)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_6 [13U] [i_1 + 2] [i_1 + 3] [i_2 - 2])) : (((/* implicit */int) arr_6 [i_0] [i_1 + 2] [i_1 + 3] [i_2 - 2])))))));
                    var_16 += ((/* implicit */unsigned short) (+(min((min((561850441793536ULL), (arr_7 [4]))), (((/* implicit */unsigned long long int) ((unsigned int) arr_0 [4ULL])))))));
                    arr_8 [i_0] [i_0] = ((/* implicit */short) arr_5 [i_0] [i_0]);
                    var_17 &= ((/* implicit */unsigned short) ((((((arr_2 [13ULL] [(unsigned short)0]) >> (((arr_4 [i_0] [(signed char)6] [6U]) + (1535302072))))) > (((/* implicit */long long int) var_0)))) ? (arr_2 [14LL] [14LL]) : (((/* implicit */long long int) -2037234295))));
                }
            } 
        } 
    } 
    var_18 = var_11;
    var_19 = ((/* implicit */int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) 18446744073709551615ULL)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_10)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-4449))) : (var_10)));
    var_20 = ((/* implicit */short) var_10);
}
