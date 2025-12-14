/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28512
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28512 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28512
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
    for (int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [i_1] [i_1] = ((/* implicit */_Bool) ((max(((+(arr_3 [i_0] [i_1]))), (((/* implicit */unsigned long long int) (unsigned short)20186)))) * (((/* implicit */unsigned long long int) var_9))));
                var_13 -= ((/* implicit */unsigned long long int) min((((/* implicit */int) (unsigned short)20160)), ((~((+(((/* implicit */int) var_4))))))));
                var_14 = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_8)), (max((var_10), (((/* implicit */unsigned long long int) var_6))))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (_Bool)1)), (max((((/* implicit */unsigned int) var_0)), (arr_4 [i_0] [i_0])))))) : (var_10)));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (short i_2 = 3; i_2 < 9; i_2 += 2) 
    {
        arr_10 [i_2] = min((((/* implicit */long long int) arr_1 [i_2])), ((~(((arr_9 [i_2]) / (((/* implicit */long long int) ((/* implicit */int) var_1))))))));
        arr_11 [i_2] [i_2 + 1] = ((/* implicit */unsigned char) arr_3 [i_2] [i_2]);
    }
    var_15 -= ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_1))) - (((((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (var_5) : (((/* implicit */int) var_0))))) ^ (((((/* implicit */_Bool) var_10)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))))));
}
