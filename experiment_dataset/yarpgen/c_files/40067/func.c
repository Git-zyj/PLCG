/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40067
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40067 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40067
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
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        var_20 -= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((unsigned short) var_5)))));
        var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 2669090023U)) ? (((/* implicit */int) (unsigned short)1536)) : (((/* implicit */int) (_Bool)1))));
    }
    for (int i_1 = 0; i_1 < 17; i_1 += 4) 
    {
        var_22 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((arr_2 [i_1]), (arr_2 [i_1]))))));
        arr_5 [(short)14] [i_1] = ((/* implicit */unsigned long long int) var_18);
        var_23 -= ((/* implicit */short) (-(((/* implicit */int) ((max((((/* implicit */long long int) 2669090023U)), (-3915054136376085439LL))) == (((/* implicit */long long int) ((var_11) ? (2669090023U) : (((/* implicit */unsigned int) (-2147483647 - 1)))))))))));
        var_24 = ((/* implicit */signed char) (-((-(((/* implicit */int) arr_2 [i_1]))))));
        /* LoopSeq 2 */
        for (unsigned int i_2 = 4; i_2 < 16; i_2 += 2) /* same iter space */
        {
            var_25 ^= ((/* implicit */long long int) ((max((3241920001U), (((/* implicit */unsigned int) -2147483628)))) - (((/* implicit */unsigned int) ((/* implicit */int) var_1)))));
            var_26 &= ((/* implicit */unsigned short) ((unsigned long long int) (-2147483647 - 1)));
            var_27 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_7 [i_1] [i_1] [i_1])), (5747012333844866314ULL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (((unsigned int) 7U))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_2] [i_2] [i_1])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_10))))) : (((((/* implicit */_Bool) 2293508148U)) ? (10U) : (4294967289U)))));
        }
        for (unsigned int i_3 = 4; i_3 < 16; i_3 += 2) /* same iter space */
        {
            var_28 -= ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */_Bool) ((unsigned int) 4294967295U))) || (((/* implicit */_Bool) ((unsigned short) var_17))))));
            var_29 = ((/* implicit */unsigned int) (+(((/* implicit */int) var_1))));
        }
    }
    var_30 = var_17;
    var_31 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) min((var_16), (var_0)))) || (((/* implicit */_Bool) (-(((/* implicit */int) var_13))))))))) <= (18446597016183342795ULL)));
}
