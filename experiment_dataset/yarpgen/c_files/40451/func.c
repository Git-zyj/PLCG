/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40451
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40451 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40451
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
    var_11 = ((/* implicit */signed char) var_7);
    var_12 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) 7162362932306854637LL)) < (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)11382))) : (9382631540683993781ULL))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 9; i_0 += 3) 
    {
        for (int i_1 = 1; i_1 < 9; i_1 += 3) 
        {
            {
                var_13 += ((/* implicit */int) min((((/* implicit */unsigned long long int) ((arr_3 [9LL]) % (arr_3 [i_0 + 1])))), (((((/* implicit */_Bool) arr_2 [i_1 - 1] [i_0 + 1])) ? (((/* implicit */unsigned long long int) var_9)) : (var_5)))));
                /* LoopSeq 1 */
                for (unsigned int i_2 = 2; i_2 < 9; i_2 += 3) 
                {
                    var_14 = ((/* implicit */_Bool) (~(1783783231)));
                    var_15 ^= ((/* implicit */signed char) (((+(arr_3 [i_0 - 2]))) << (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_10 [4U] [i_1] [i_2])) % (arr_1 [i_0] [i_0])))) && (((var_8) < (arr_3 [i_1 - 1]))))))));
                }
            }
        } 
    } 
}
