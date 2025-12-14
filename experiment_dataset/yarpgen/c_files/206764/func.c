/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206764
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206764 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206764
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
    for (short i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                arr_6 [i_0] [(unsigned short)12] = ((/* implicit */long long int) ((min((((((/* implicit */_Bool) arr_2 [i_0] [i_1])) ? (2097151LL) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))))), (((var_5) | (((/* implicit */long long int) ((/* implicit */int) (signed char)-1))))))) != (((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */short) (signed char)-1)), (var_11)))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) ((unsigned short) var_11))))))));
                var_19 = ((/* implicit */short) (signed char)13);
                arr_7 [i_0] = ((/* implicit */long long int) ((((((/* implicit */int) ((var_5) < (((/* implicit */long long int) ((/* implicit */int) (short)21825)))))) < (((/* implicit */int) ((signed char) arr_0 [i_0]))))) || (((/* implicit */_Bool) max((((/* implicit */int) ((unsigned short) var_9))), (((((/* implicit */_Bool) (signed char)-29)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (signed char)-29)))))))));
            }
        } 
    } 
    var_20 = ((/* implicit */short) var_18);
    var_21 = ((/* implicit */long long int) (-(((/* implicit */int) ((unsigned char) ((((((/* implicit */int) var_9)) + (2147483647))) >> (((var_7) - (5705268118995581211LL)))))))));
    var_22 = ((/* implicit */unsigned int) ((unsigned char) (-(((/* implicit */int) var_11)))));
}
