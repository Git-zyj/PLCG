/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244630
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244630 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244630
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
    var_11 = ((_Bool) var_3);
    var_12 = ((/* implicit */_Bool) ((unsigned char) max(((+(16845217974009442102ULL))), (((/* implicit */unsigned long long int) var_6)))));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 3; i_0 < 12; i_0 += 2) /* same iter space */
    {
        var_13 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_4))))) : (var_8)));
        var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) (-(min(((-(var_9))), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)3179)) || (((/* implicit */_Bool) (unsigned short)62382))))))))))));
    }
    for (unsigned short i_1 = 3; i_1 < 12; i_1 += 2) /* same iter space */
    {
        arr_6 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (~(((((((/* implicit */int) var_1)) + (2147483647))) << (((var_5) - (28230466U)))))))) / ((+(((((/* implicit */_Bool) arr_1 [i_1] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1] [i_1]))) : (16845217974009442102ULL)))))));
        var_15 ^= ((((/* implicit */_Bool) ((arr_0 [i_1 + 1] [i_1 - 3]) ? (((/* implicit */int) arr_0 [i_1 + 1] [i_1 + 2])) : (arr_2 [i_1 + 2])))) && (((/* implicit */_Bool) ((unsigned int) arr_4 [i_1] [2ULL]))));
    }
    /* vectorizable */
    for (unsigned short i_2 = 3; i_2 < 12; i_2 += 2) /* same iter space */
    {
        arr_10 [i_2] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_8 [i_2]))));
        arr_11 [i_2] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_8 [i_2])) : (((/* implicit */int) (_Bool)1))))));
        arr_12 [i_2] = ((/* implicit */unsigned int) (~((-(((/* implicit */int) var_6))))));
    }
}
