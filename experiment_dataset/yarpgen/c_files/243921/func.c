/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243921
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243921 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243921
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
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        arr_3 [i_0] = ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)49717))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))) < (var_10)))) : (((((/* implicit */int) (short)-1)) - (((/* implicit */int) ((signed char) (unsigned char)255))))));
        arr_4 [i_0] = ((/* implicit */signed char) (short)-1);
        arr_5 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((((/* implicit */_Bool) (unsigned char)126)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_7)))) : (((/* implicit */int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) arr_0 [i_0])))))))) ? (((/* implicit */int) arr_2 [i_0])) : (min((((/* implicit */int) (unsigned short)14596)), (2013746682)))));
    }
    var_11 = ((/* implicit */unsigned short) var_7);
    /* LoopSeq 1 */
    for (signed char i_1 = 0; i_1 < 19; i_1 += 4) 
    {
        var_12 = ((/* implicit */_Bool) min((var_12), (((/* implicit */_Bool) ((int) ((var_3) / (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_6)))))))))));
        var_13 = ((/* implicit */unsigned char) max((var_13), (((/* implicit */unsigned char) ((var_1) < (((/* implicit */int) arr_8 [i_1])))))));
        var_14 = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_7 [i_1])) ? (((/* implicit */int) arr_7 [i_1])) : (((/* implicit */int) arr_7 [i_1])))) * (((/* implicit */int) min((arr_7 [i_1]), (arr_7 [i_1]))))));
    }
}
