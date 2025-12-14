/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38392
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38392 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38392
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
    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) >= (((/* implicit */int) ((((((/* implicit */int) var_9)) ^ (((/* implicit */int) var_13)))) < (((/* implicit */int) var_3)))))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 12; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (short i_2 = 1; i_2 < 11; i_2 += 3) 
            {
                {
                    var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 - 1] [i_1 + 1])) ? (((/* implicit */int) arr_0 [i_0] [i_2 + 2])) : (((/* implicit */int) arr_0 [i_1 + 1] [i_0 + 1]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) var_17)), (var_6))))) : (max((17841918018080392095ULL), (((/* implicit */unsigned long long int) var_5)))))))));
                    var_22 = ((/* implicit */unsigned short) ((max((arr_4 [i_1 + 1]), (((/* implicit */unsigned int) arr_1 [i_1 + 1] [i_1])))) != (((min((arr_6 [i_2]), (arr_3 [i_1 + 1] [i_1 + 1] [(short)9]))) ^ (((/* implicit */unsigned int) -370258743))))));
                }
            } 
        } 
    } 
    var_23 += ((/* implicit */short) (!(((/* implicit */_Bool) (+(((/* implicit */int) ((unsigned short) var_14))))))));
}
