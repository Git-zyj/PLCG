/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54393
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54393 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54393
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (signed char i_2 = 0; i_2 < 20; i_2 += 3) 
                {
                    arr_10 [i_2] [i_1] [i_2] = ((/* implicit */signed char) ((long long int) (-((+(arr_3 [i_2]))))));
                    var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)13)) ? (((/* implicit */int) (unsigned short)62479)) : (((/* implicit */int) arr_7 [1] [i_1] [i_1 + 1] [i_1]))));
                }
                var_20 = ((/* implicit */int) (+(((((/* implicit */_Bool) arr_8 [i_1 + 1] [0LL])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1 + 1]))) : (arr_8 [i_1 + 1] [(signed char)2])))));
                var_21 = ((/* implicit */short) (+(min((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_9 [8ULL] [i_1] [8ULL] [8ULL]))))), (var_15)))));
            }
        } 
    } 
    var_22 = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)3057)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (var_4)))) : (max((18446744073708503040ULL), (1048582ULL))))) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) (unsigned short)3056)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) : (0ULL))))))));
}
