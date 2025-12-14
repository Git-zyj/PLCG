/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36848
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36848 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36848
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
    var_15 = ((/* implicit */unsigned short) var_0);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        arr_4 [i_0] = arr_3 [(signed char)18];
        var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) (-((-(((/* implicit */int) (unsigned short)19347)))))))));
    }
    var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) 1041727209)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? ((~(var_2))) : (((/* implicit */unsigned int) ((/* implicit */int) min((var_9), (var_9))))))))));
    var_18 -= ((/* implicit */unsigned int) min(((-(((var_3) >> (((var_8) - (5841908182721772546ULL))))))), (((/* implicit */long long int) max((((/* implicit */unsigned int) ((signed char) (unsigned short)0))), ((~(var_1))))))));
}
