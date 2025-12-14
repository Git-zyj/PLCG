/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45639
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45639 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45639
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
    var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_7)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (-1) : (-1839667086)))) : (((((/* implicit */_Bool) (short)-32755)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_11)))))) ? (max((((/* implicit */unsigned long long int) ((var_10) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_10))))), (14011908478842873060ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))))));
    var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) -1802262134))))) ^ (((int) var_3))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) var_12)))))));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)20784)) ? ((+(((((/* implicit */_Bool) 1805714304)) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_2 [i_0])))))) : (max(((-(((/* implicit */int) arr_2 [i_0])))), ((-(((/* implicit */int) arr_2 [i_0]))))))));
        var_16 -= ((/* implicit */short) (-(((int) (+(((/* implicit */int) arr_1 [i_0])))))));
    }
    for (signed char i_1 = 0; i_1 < 25; i_1 += 4) 
    {
        arr_5 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) arr_4 [i_1] [i_1])) ? (-2039324585) : (((/* implicit */int) var_0)))))) ? (arr_3 [i_1]) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_1] [i_1])) && (((_Bool) var_3))))))));
        arr_6 [i_1] = ((/* implicit */signed char) ((((/* implicit */long long int) ((((((/* implicit */int) arr_4 [i_1] [i_1])) + (2147483647))) >> (((((((/* implicit */_Bool) (short)-2)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned short)18882)))) - (88)))))) + (arr_3 [i_1])));
        var_17 = arr_3 [i_1];
        var_18 &= ((/* implicit */_Bool) ((arr_3 [i_1]) >> (((((((/* implicit */_Bool) (+(2146435072)))) ? (((/* implicit */long long int) ((((/* implicit */int) arr_4 [i_1] [i_1])) ^ (((/* implicit */int) (signed char)127))))) : (min((arr_3 [i_1]), (((/* implicit */long long int) arr_4 [i_1] [i_1])))))) + (25254LL)))));
    }
}
