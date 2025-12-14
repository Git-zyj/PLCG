/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39686
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39686 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39686
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
    var_16 = (~(((/* implicit */int) var_9)));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (arr_1 [i_0] [1]) : (arr_1 [i_0] [i_0])))) || (((/* implicit */_Bool) ((int) arr_1 [i_0] [3]))))))));
        var_18 = (unsigned short)39999;
    }
    /* vectorizable */
    for (unsigned short i_1 = 1; i_1 < 13; i_1 += 1) 
    {
        var_19 ^= ((((((/* implicit */int) var_5)) % (-330094729))) % (arr_6 [0]));
        arr_7 [i_1] = ((/* implicit */unsigned short) ((int) arr_6 [i_1]));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 11; i_2 += 4) 
    {
        arr_10 [3] [10] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_2] [i_2])) ? (((/* implicit */int) arr_5 [i_2] [i_2])) : (arr_6 [i_2])));
        var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) (-(((-330094733) + (330094721))))))));
        arr_11 [0] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_2]))));
    }
    var_21 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_13)) : (var_4)))) ? (((/* implicit */int) (unsigned short)65535)) : ((~(330094721)))))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_9)));
    var_22 = ((((/* implicit */_Bool) (~(((/* implicit */int) var_13))))) ? (254) : (((/* implicit */int) var_6)));
}
