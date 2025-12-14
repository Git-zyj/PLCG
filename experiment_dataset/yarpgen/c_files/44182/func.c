/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44182
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44182 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44182
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
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        var_12 = ((/* implicit */signed char) arr_1 [i_0]);
        arr_3 [i_0] = ((/* implicit */long long int) (+((((~(var_6))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_10), (((/* implicit */unsigned short) var_4))))))))));
    }
    /* LoopNest 2 */
    for (short i_1 = 0; i_1 < 10; i_1 += 3) 
    {
        for (unsigned char i_2 = 1; i_2 < 9; i_2 += 3) 
        {
            {
                arr_8 [i_1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((arr_0 [i_2 - 1] [i_2 + 1]), (arr_0 [i_2 + 1] [i_2 + 1]))))));
                arr_9 [i_2] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((max((-6451194460980409037LL), (((/* implicit */long long int) var_3)))) > (((/* implicit */long long int) ((/* implicit */int) var_4))))))) == (min(((-(arr_6 [i_1] [i_1] [i_2]))), ((-(var_6)))))));
                arr_10 [i_1] [i_2] = ((/* implicit */unsigned int) max(((-(((((/* implicit */int) arr_0 [i_1] [i_2])) >> (((((/* implicit */int) var_10)) - (51363))))))), ((-(((/* implicit */int) max((((/* implicit */unsigned char) var_1)), (var_0))))))));
            }
        } 
    } 
}
