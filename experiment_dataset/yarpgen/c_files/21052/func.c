/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21052
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21052 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21052
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
    for (unsigned int i_0 = 1; i_0 < 18; i_0 += 2) 
    {
        for (unsigned short i_1 = 1; i_1 < 16; i_1 += 4) 
        {
            {
                var_12 += ((/* implicit */unsigned short) (unsigned char)100);
                var_13 = ((/* implicit */unsigned char) min((((((((/* implicit */int) (_Bool)0)) / (((/* implicit */int) (unsigned short)24266)))) & (((/* implicit */int) var_4)))), (min((((((/* implicit */_Bool) (unsigned char)240)) ? (((/* implicit */int) (_Bool)1)) : (arr_4 [i_0] [i_0 - 1] [17]))), (((/* implicit */int) (_Bool)1))))));
                var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) min((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (var_10) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_0] [i_1] [(signed char)4])) && (((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0]))))) : (((var_1) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) arr_1 [(_Bool)1]))))))), (min((((/* implicit */long long int) (~(((/* implicit */int) (short)21926))))), (var_8))))))));
                var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_5))))) && (var_3)))), (min((((/* implicit */long long int) (-(((/* implicit */int) var_6))))), (arr_0 [i_0]))))))));
                /* LoopSeq 1 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_16 += ((((var_8) / (((/* implicit */long long int) arr_4 [i_0 + 1] [i_0 - 1] [i_1 + 1])))) >= (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) var_1)), (arr_2 [(short)18] [i_0 + 1] [i_1 + 2]))))));
                    var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) ((unsigned char) ((((/* implicit */int) arr_2 [(_Bool)1] [(_Bool)1] [i_2])) + (((/* implicit */int) var_0))))))));
                }
            }
        } 
    } 
    var_18 += ((/* implicit */short) var_5);
}
