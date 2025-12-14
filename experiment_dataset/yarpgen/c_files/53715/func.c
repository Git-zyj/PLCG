/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53715
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53715 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53715
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
    var_10 = ((/* implicit */_Bool) min((var_10), ((!(((/* implicit */_Bool) max((((((/* implicit */_Bool) (unsigned short)4684)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))), (((/* implicit */unsigned int) ((9165969347229154499ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 21; i_1 += 3) 
        {
            {
                arr_4 [i_0] [i_1] = ((/* implicit */unsigned short) ((unsigned int) (~(var_1))));
                var_11 = ((/* implicit */_Bool) max((var_11), (((/* implicit */_Bool) max(((~(min((((/* implicit */long long int) arr_0 [i_0] [i_0])), (arr_2 [i_0] [i_1] [i_1]))))), (((/* implicit */long long int) max((arr_0 [i_1 - 1] [i_1 - 1]), (((/* implicit */unsigned char) ((_Bool) var_2)))))))))));
            }
        } 
    } 
    var_12 = ((/* implicit */long long int) (_Bool)1);
    var_13 ^= ((/* implicit */_Bool) (~(((/* implicit */int) var_9))));
    /* LoopSeq 1 */
    for (unsigned char i_2 = 0; i_2 < 11; i_2 += 3) 
    {
        var_14 = ((/* implicit */unsigned char) var_6);
        arr_8 [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_2 [i_2] [i_2] [i_2])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (_Bool)1)))) - (((/* implicit */int) arr_7 [9ULL]))))) ? (min((((((/* implicit */_Bool) var_4)) ? (arr_1 [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))), (((/* implicit */unsigned int) max((((/* implicit */unsigned char) (_Bool)1)), (var_4)))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_7 [i_2])) == (((/* implicit */int) ((_Bool) var_8)))))))));
        /* LoopSeq 1 */
        for (unsigned int i_3 = 2; i_3 < 9; i_3 += 3) 
        {
            var_15 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_3 - 2] [i_3 + 1]))) : (415008503U)))));
            arr_11 [i_3 + 1] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_3 - 1] [(short)8] [i_2])) ? (((((/* implicit */_Bool) arr_0 [i_3 + 1] [i_3 + 2])) ? (arr_10 [i_2]) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_2] [i_2] [i_2]))))) : (((/* implicit */long long int) ((((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) var_9)))) - (((/* implicit */int) (!(((/* implicit */_Bool) var_6))))))))));
        }
        arr_12 [i_2] = ((/* implicit */unsigned long long int) max((max(((~(((/* implicit */int) (_Bool)1)))), (((((/* implicit */_Bool) 14867005708668365703ULL)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1)))))), (((arr_3 [i_2] [i_2]) ? (((/* implicit */int) ((unsigned char) var_0))) : (((/* implicit */int) var_9))))));
    }
}
