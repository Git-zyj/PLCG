/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35245
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35245 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35245
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
    var_14 = ((/* implicit */int) min((var_14), ((~(((((/* implicit */_Bool) var_9)) ? (var_6) : ((~(((/* implicit */int) var_9))))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 22; i_0 += 1) /* same iter space */
    {
        var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) == (16198396067301993763ULL))) ? (((((/* implicit */_Bool) (unsigned char)63)) ? (arr_0 [i_0]) : (((/* implicit */int) var_1)))) : (((/* implicit */int) arr_1 [i_0])))))));
        arr_4 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_2 [i_0])) ? (4819834025146477780LL) : (arr_2 [i_0])));
        var_16 ^= (-(((/* implicit */int) var_1)));
        arr_5 [i_0] = ((/* implicit */unsigned long long int) arr_1 [i_0]);
        var_17 = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_13))))) << ((((-(16198396067301993764ULL))) - (2248348006407557847ULL)))));
    }
    for (int i_1 = 0; i_1 < 22; i_1 += 1) /* same iter space */
    {
        var_18 ^= ((/* implicit */int) (unsigned char)68);
        var_19 = ((/* implicit */int) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_1])) ? (8388608) : (((/* implicit */int) (unsigned char)80))))), (((long long int) arr_7 [i_1]))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 22; i_2 += 1) /* same iter space */
    {
        arr_12 [i_2] = ((/* implicit */int) (+(arr_11 [i_2])));
        arr_13 [i_2] = ((/* implicit */int) ((((/* implicit */int) (unsigned char)12)) >= (((/* implicit */int) arr_8 [i_2]))));
    }
    var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((var_12) ^ (((/* implicit */long long int) ((/* implicit */int) var_1)))))))) ? (max((((/* implicit */unsigned long long int) ((((var_12) + (9223372036854775807LL))) >> (((/* implicit */int) (unsigned char)63))))), (((((/* implicit */_Bool) 8042581164469218023ULL)) ? (((/* implicit */unsigned long long int) -1)) : (13850505648722500156ULL))))) : (((/* implicit */unsigned long long int) (~(var_5))))));
}
