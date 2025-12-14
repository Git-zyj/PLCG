/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225785
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225785 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225785
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
    /* LoopSeq 3 */
    for (signed char i_0 = 2; i_0 < 23; i_0 += 2) 
    {
        var_18 -= (~(((((/* implicit */_Bool) arr_0 [i_0 - 2] [i_0 - 2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0 + 1] [i_0]))) : (var_7))));
        arr_3 [6] [5U] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_15))));
        var_19 = ((/* implicit */unsigned char) (_Bool)0);
    }
    for (long long int i_1 = 0; i_1 < 14; i_1 += 4) /* same iter space */
    {
        var_20 = ((/* implicit */signed char) ((unsigned char) 455720578U));
        var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((var_16) + (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [(unsigned char)12] [(unsigned char)12]))))))))))))));
        arr_6 [i_1] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) max((var_0), ((!(((/* implicit */_Bool) -2102196681)))))))) >= (var_2)));
        var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((int) arr_4 [i_1] [i_1]))) ? ((~(17298142596543845287ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_4 [i_1] [i_1])) : (((/* implicit */int) arr_4 [(signed char)10] [4LL])))))));
    }
    for (long long int i_2 = 0; i_2 < 14; i_2 += 4) /* same iter space */
    {
        var_23 -= ((/* implicit */unsigned long long int) (+(max((((/* implicit */unsigned int) arr_4 [i_2] [i_2])), (var_1)))));
        arr_10 [i_2] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) ((unsigned long long int) var_3))) ? (arr_1 [i_2] [i_2]) : (((/* implicit */long long int) ((var_1) << (((var_7) - (5404075146059976025LL))))))))));
    }
    var_24 ^= ((/* implicit */short) (signed char)36);
}
