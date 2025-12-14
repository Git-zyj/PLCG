/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39107
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39107 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39107
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
    for (unsigned long long int i_0 = 1; i_0 < 22; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 21; i_1 += 3) 
        {
            {
                arr_5 [i_0] [(signed char)10] [i_0] = ((/* implicit */unsigned int) var_4);
                arr_6 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) <= (var_2)))) - (((/* implicit */int) arr_4 [i_0] [i_0]))))) ? (((/* implicit */int) min((((/* implicit */unsigned short) ((((/* implicit */int) arr_3 [i_0])) == (((/* implicit */int) var_1))))), ((unsigned short)21111)))) : (max((((/* implicit */int) (unsigned short)21111)), ((~(((/* implicit */int) (unsigned short)21111))))))));
                var_10 = ((/* implicit */_Bool) (+(((/* implicit */int) ((signed char) (unsigned char)121)))));
                arr_7 [i_0] [i_0] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((2147483647) >> (((2147483647) - (2147483635)))))), (var_8)));
            }
        } 
    } 
    var_11 = ((/* implicit */unsigned long long int) var_3);
}
