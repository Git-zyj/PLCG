/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41564
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41564 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41564
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
    var_12 = ((/* implicit */long long int) ((((var_4) ? (((/* implicit */int) min((var_3), (((/* implicit */short) var_2))))) : (((int) var_1)))) | (max((((/* implicit */int) ((((/* implicit */int) var_6)) == (((/* implicit */int) var_6))))), ((+(((/* implicit */int) var_1))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 9; i_0 += 1) 
    {
        for (short i_1 = 4; i_1 < 11; i_1 += 4) 
        {
            {
                var_13 = ((/* implicit */signed char) ((unsigned short) ((((/* implicit */_Bool) arr_1 [i_0 - 1] [i_0 + 3])) ? (((/* implicit */long long int) (+(var_5)))) : ((+(arr_3 [3LL]))))));
                var_14 = ((/* implicit */unsigned long long int) min((var_14), (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0 + 2])) ? (((/* implicit */int) arr_1 [(unsigned char)4] [(_Bool)1])) : (((/* implicit */int) arr_0 [i_0]))))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) var_4)))) : ((-(((/* implicit */int) arr_2 [i_0] [i_0])))))), (((((/* implicit */int) ((_Bool) arr_0 [i_0 + 3]))) << (((((((/* implicit */unsigned long long int) arr_3 [i_0 - 1])) ^ (arr_4 [i_0 + 2] [i_0 + 2] [i_1 - 3]))) - (8848954960418354634ULL))))))))));
                var_15 = ((/* implicit */_Bool) ((((arr_3 [i_0 - 1]) != (arr_3 [i_0 - 1]))) ? (((/* implicit */unsigned long long int) min((-7491966365726858532LL), (((/* implicit */long long int) (_Bool)1))))) : (((var_11) ? (((((/* implicit */_Bool) arr_3 [i_0])) ? (arr_4 [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) arr_3 [i_0])))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0 + 2] [i_1]))) : (var_5))))))));
                /* LoopSeq 1 */
                for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 2) 
                {
                    arr_7 [3ULL] [(_Bool)0] [(_Bool)0] = ((/* implicit */unsigned char) ((min((arr_0 [i_0 + 1]), (arr_2 [i_0 + 3] [i_1 - 3]))) ? (((arr_0 [i_1 - 2]) ? (((/* implicit */int) arr_0 [i_2])) : (((/* implicit */int) arr_0 [i_0 - 1])))) : (((((/* implicit */_Bool) arr_6 [i_0] [i_1 + 1] [(_Bool)1])) ? (((/* implicit */int) arr_0 [i_0 + 1])) : (((/* implicit */int) arr_2 [i_0 + 2] [i_1 - 1]))))));
                    var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) -322358215973641864LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
                }
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned long long int) var_0);
    var_18 = ((/* implicit */signed char) var_0);
}
