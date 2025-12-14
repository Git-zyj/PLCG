/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221772
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221772 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221772
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
    var_20 = ((/* implicit */unsigned long long int) min(((!(((/* implicit */_Bool) 9223372036854775807LL)))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (9223372036854775782LL)))) || (((/* implicit */_Bool) ((var_15) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_2))))))));
    var_21 = ((/* implicit */signed char) min(((+(((((/* implicit */_Bool) 3528949431U)) ? (766017865U) : (3528949439U))))), (((/* implicit */unsigned int) var_1))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                var_22 &= ((/* implicit */unsigned char) (~((-(((/* implicit */int) arr_0 [i_1] [i_1]))))));
                arr_4 [i_0] [14ULL] [i_0] &= ((/* implicit */unsigned char) (-(((/* implicit */int) ((((var_3) ^ (-1989173293))) == (((((/* implicit */_Bool) 3528949420U)) ? (1362950506) : (((/* implicit */int) (unsigned char)27)))))))));
            }
        } 
    } 
}
