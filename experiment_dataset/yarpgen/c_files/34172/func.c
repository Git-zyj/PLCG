/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34172
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34172 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34172
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
    var_18 ^= ((/* implicit */unsigned int) (!(((((/* implicit */_Bool) var_3)) && (((((/* implicit */_Bool) var_15)) || (((/* implicit */_Bool) var_10))))))));
    var_19 &= ((((/* implicit */_Bool) 1977786889U)) ? (((((/* implicit */_Bool) ((var_13) - (var_15)))) ? (((var_12) - (((/* implicit */long long int) var_6)))) : (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_16))) - (3570700379U)))))) : (((/* implicit */long long int) ((/* implicit */int) ((short) 4294967295U)))));
    /* LoopSeq 4 */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 1) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((unsigned int) arr_1 [i_0]))) ? (((/* implicit */long long int) min((((/* implicit */unsigned int) arr_0 [i_0])), (334378762U)))) : (((long long int) 1432661753U)))) >> (((((/* implicit */long long int) (-(((/* implicit */int) (short)6134))))) / (var_14)))));
        arr_2 [i_0] [i_0] = ((unsigned int) ((short) arr_1 [i_0]));
        var_21 -= ((/* implicit */long long int) ((((/* implicit */_Bool) ((short) arr_0 [i_0]))) ? ((~(((/* implicit */int) arr_1 [i_0])))) : (((/* implicit */int) arr_1 [i_0]))));
        arr_3 [i_0] &= var_3;
    }
    for (unsigned int i_1 = 0; i_1 < 11; i_1 += 1) /* same iter space */
    {
        var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) (!(((/* implicit */_Bool) (short)6147)))))) || (((/* implicit */_Bool) arr_4 [i_1] [i_1]))));
        arr_6 [i_1] [i_1] = ((/* implicit */short) (-(((/* implicit */int) arr_1 [i_1]))));
    }
    for (unsigned int i_2 = 0; i_2 < 11; i_2 += 1) /* same iter space */
    {
        var_23 &= ((/* implicit */short) max((((2412773846U) << (((var_14) + (5297039310434272905LL))))), (((/* implicit */unsigned int) (short)6153))));
        var_24 = ((/* implicit */long long int) ((min((var_17), (((unsigned int) arr_4 [i_2] [i_2])))) + (((var_9) + (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_2])))))));
    }
    for (unsigned int i_3 = 0; i_3 < 11; i_3 += 1) /* same iter space */
    {
        var_25 = ((/* implicit */unsigned int) max((var_25), (1945974433U)));
        arr_13 [i_3] = ((/* implicit */long long int) ((var_2) != (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_3])))));
        var_26 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_3])))))) < (max((((unsigned int) arr_8 [i_3])), (var_5)))));
        var_27 += var_5;
    }
    var_28 = ((/* implicit */short) ((var_4) % (((((/* implicit */_Bool) 2199198193U)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) var_16)))))));
    var_29 = ((((/* implicit */_Bool) var_8)) ? ((-(var_3))) : (((var_6) >> (((((((/* implicit */_Bool) var_14)) ? (var_14) : (((/* implicit */long long int) var_17)))) + (5297039310434272894LL))))));
}
