/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20374
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20374 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20374
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
    var_20 = ((/* implicit */long long int) var_4);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        var_21 = ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0]))));
        arr_2 [i_0] = ((/* implicit */unsigned int) (+(arr_1 [i_0])));
    }
    /* LoopNest 3 */
    for (short i_1 = 1; i_1 < 23; i_1 += 1) 
    {
        for (short i_2 = 0; i_2 < 25; i_2 += 2) 
        {
            for (unsigned int i_3 = 0; i_3 < 25; i_3 += 2) 
            {
                {
                    var_22 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) 1270573504U)) ? (1270573504U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))), (((((/* implicit */_Bool) arr_5 [i_1] [i_2])) ? (8252612090346599497ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_5 [i_1] [4U]), (((/* implicit */unsigned short) var_1))))))))));
                    var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_8)) && (arr_8 [i_1 - 1] [i_2] [(_Bool)1] [i_2]))))) ^ (((((/* implicit */_Bool) 3221225472U)) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_1] [i_2] [i_2] [i_3]))) : (arr_7 [(short)9] [i_3])))))) ? (((((/* implicit */_Bool) min((9770892504014948319ULL), (((/* implicit */unsigned long long int) 1270573487U))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1] [i_1 - 1]))) : (8675851569694603296ULL))) : (((((/* implicit */_Bool) (+(4294967295U)))) ? (min((((/* implicit */unsigned long long int) arr_5 [i_1] [i_2])), (16480859918813853191ULL))) : (8675851569694603297ULL)))));
                    var_24 = ((/* implicit */long long int) min((var_24), (min((max((((/* implicit */long long int) arr_8 [i_1] [i_1] [i_2] [i_3])), (arr_4 [i_1 + 2]))), (((/* implicit */long long int) ((((/* implicit */int) arr_5 [i_1] [(short)6])) == ((-(((/* implicit */int) (short)25502)))))))))));
                }
            } 
        } 
    } 
}
