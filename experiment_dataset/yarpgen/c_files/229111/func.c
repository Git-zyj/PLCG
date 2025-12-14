/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229111
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229111 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229111
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
    var_12 = ((/* implicit */long long int) max(((~((~(((/* implicit */int) var_8)))))), (((/* implicit */int) ((((((/* implicit */_Bool) var_10)) ? (var_0) : (((/* implicit */int) var_6)))) == (((/* implicit */int) min(((short)13207), ((short)23892)))))))));
    var_13 = ((/* implicit */short) (~(((/* implicit */int) ((((/* implicit */int) ((short) var_2))) <= (((/* implicit */int) var_11)))))));
    var_14 += ((/* implicit */signed char) min((((/* implicit */int) min(((short)-24334), ((short)-20241)))), ((+(((/* implicit */int) var_8))))));
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        var_15 = arr_0 [i_0];
        var_16 |= ((/* implicit */long long int) ((((/* implicit */_Bool) ((short) ((signed char) arr_0 [i_0])))) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (!(((/* implicit */_Bool) min((669241296004262317LL), (9223372036854775807LL)))))))));
        var_17 = ((/* implicit */short) (!(((((var_0) - (((/* implicit */int) var_8)))) == (((/* implicit */int) (short)-31462))))));
        var_18 |= ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (short)23892)) / (((/* implicit */int) (short)24992))))) ? (((/* implicit */int) (short)255)) : (((/* implicit */int) (short)(-32767 - 1)))))) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) (short)23892)));
    }
    for (int i_1 = 1; i_1 < 15; i_1 += 4) 
    {
        var_19 |= ((/* implicit */long long int) (+(max((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_2 [i_1 + 2] [i_1])))), (((/* implicit */int) arr_3 [8]))))));
        var_20 *= max(((short)-1), ((short)24333));
        var_21 = min(((short)23904), ((short)-24993));
    }
    for (short i_2 = 3; i_2 < 20; i_2 += 4) 
    {
        var_22 = ((/* implicit */short) (+(((/* implicit */int) min((((short) arr_5 [i_2])), (max((arr_0 [i_2]), (arr_6 [i_2]))))))));
        var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) ((((/* implicit */_Bool) (short)-32761)) ? (((/* implicit */int) arr_1 [i_2 - 2])) : (((/* implicit */int) var_4)))))));
        arr_7 [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) max((var_4), (arr_1 [i_2 - 2])))) ? ((-(((/* implicit */int) arr_6 [i_2])))) : (((/* implicit */int) ((short) 267525969)))));
        var_24 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_6 [i_2 + 1])) ? (((/* implicit */int) arr_6 [i_2 - 1])) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_5 [i_2])) : (((/* implicit */int) var_4)))))) >= (min((((/* implicit */int) min((arr_6 [i_2 + 2]), (arr_6 [i_2 - 1])))), (((((/* implicit */int) arr_6 [i_2])) - (var_9)))))));
    }
}
