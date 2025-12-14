/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203281
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203281 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203281
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
    var_20 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (unsigned char)64)) ? ((+((-2147483647 - 1)))) : (((/* implicit */int) var_4)))) | (((((/* implicit */_Bool) 1904382826)) ? (2147483647) : (((/* implicit */int) (unsigned char)1))))));
    /* LoopSeq 4 */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = max((((/* implicit */int) ((((/* implicit */_Bool) ((2147483646) >> (((var_7) + (30791190)))))) || (((/* implicit */_Bool) min(((-2147483647 - 1)), (((/* implicit */int) (unsigned char)0)))))))), (-1445211240));
        var_21 = ((int) (((!(((/* implicit */_Bool) (unsigned char)150)))) ? (((((/* implicit */_Bool) (unsigned char)209)) ? (((/* implicit */int) (unsigned char)149)) : (var_2))) : (((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) (unsigned char)248)) : (((/* implicit */int) (unsigned char)130))))));
    }
    for (unsigned char i_1 = 2; i_1 < 11; i_1 += 3) 
    {
        arr_6 [i_1] = ((/* implicit */unsigned char) ((((((/* implicit */int) (unsigned char)246)) / (-651100834))) - (min((-20), (var_18)))));
        var_22 *= ((/* implicit */int) ((max((((/* implicit */int) min((var_10), (arr_0 [i_1])))), (((((/* implicit */_Bool) var_5)) ? (2147483647) : ((-2147483647 - 1)))))) <= (var_7)));
    }
    /* vectorizable */
    for (unsigned char i_2 = 0; i_2 < 14; i_2 += 4) 
    {
        var_23 += ((/* implicit */unsigned char) ((int) ((int) (unsigned char)248)));
        arr_9 [i_2] = ((/* implicit */int) (unsigned char)6);
        arr_10 [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483642)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned char)140))))) || ((!(((/* implicit */_Bool) (unsigned char)146))))));
    }
    for (unsigned char i_3 = 3; i_3 < 18; i_3 += 3) 
    {
        arr_13 [i_3] [i_3] = ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) ((int) 2147483643))) ? (((int) (unsigned char)134)) : (((((/* implicit */_Bool) (unsigned char)248)) ? (((/* implicit */int) var_6)) : ((-2147483647 - 1)))))));
        var_24 = ((((/* implicit */int) (unsigned char)142)) ^ (min(((~(1048448))), (((/* implicit */int) (unsigned char)255)))));
        var_25 += ((/* implicit */int) ((unsigned char) (unsigned char)8));
    }
}
