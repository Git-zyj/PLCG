/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207762
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207762 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207762
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
    var_11 &= ((unsigned int) var_6);
    /* LoopNest 3 */
    for (unsigned short i_0 = 1; i_0 < 8; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                {
                    var_12 = ((/* implicit */signed char) min((var_12), (((/* implicit */signed char) max((((unsigned long long int) max((arr_7 [i_0 + 1] [i_0] [i_0] [i_0]), (arr_7 [i_0] [i_0] [i_0 - 1] [i_0 - 1])))), (((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */int) arr_7 [i_1] [i_1] [(_Bool)1] [i_1])) - (arr_0 [i_0]))))))))));
                    arr_9 [i_0] = ((/* implicit */int) (unsigned char)103);
                }
            } 
        } 
    } 
    var_13 -= ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_7)), (var_8)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) var_6)))))) : (-1LL)));
    var_14 = ((/* implicit */unsigned int) var_10);
}
