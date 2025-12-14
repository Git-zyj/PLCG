/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226033
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226033 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226033
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
    var_11 = ((/* implicit */unsigned short) max((var_11), (((/* implicit */unsigned short) var_7))));
    var_12 = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) min((var_5), (((/* implicit */long long int) var_9)))))))) > (((/* implicit */int) var_3))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                {
                    var_13 = ((/* implicit */int) max((var_13), (((/* implicit */int) ((long long int) ((signed char) arr_5 [i_0]))))));
                    var_14 = (~(((((/* implicit */_Bool) (~(arr_1 [i_2] [i_1])))) ? (((var_0) % (var_0))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_2]))))));
                    var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) max((((/* implicit */short) arr_5 [i_0])), (arr_0 [i_0] [(signed char)0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_2]))) < (arr_3 [i_0] [4ULL]))))) : ((~(arr_2 [9]))))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) arr_6 [i_2] [i_1] [i_0])) <= (max((arr_1 [i_0] [(unsigned char)15]), (arr_1 [i_0] [i_2]))))))))))));
                }
            } 
        } 
    } 
}
