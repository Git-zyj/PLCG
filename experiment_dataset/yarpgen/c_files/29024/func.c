/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29024
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29024 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29024
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
    for (int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        var_11 -= ((/* implicit */short) ((((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) var_2)) ? (-850222448) : (1660129632))))) ? ((+(arr_1 [i_0] [i_0]))) : (((/* implicit */unsigned int) (+((-2147483647 - 1)))))));
        arr_3 [i_0] = var_9;
        arr_4 [(short)0] [i_0] = ((/* implicit */signed char) arr_2 [(short)12]);
    }
    for (short i_1 = 2; i_1 < 12; i_1 += 3) 
    {
        arr_7 [12] [i_1] = ((/* implicit */unsigned char) arr_0 [i_1 + 1] [i_1 - 2]);
        var_12 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) 0)) <= (((((/* implicit */_Bool) (short)-11763)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-96))) : (arr_1 [i_1 - 1] [i_1 - 1])))));
        arr_8 [i_1] [i_1] = ((/* implicit */unsigned short) (unsigned char)123);
        arr_9 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) ((2893417317U) < (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (signed char)-85)) == (((/* implicit */int) var_6))))))))) >> (((/* implicit */int) ((((/* implicit */_Bool) max(((signed char)-108), (((/* implicit */signed char) (_Bool)1))))) || (((((/* implicit */int) (unsigned short)65535)) < (((/* implicit */int) var_0)))))))));
        arr_10 [i_1] = ((/* implicit */short) ((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_0 [i_1 - 1] [i_1 - 2])) : (((/* implicit */int) (short)-4)))) - (var_4)));
    }
    var_13 = ((/* implicit */unsigned int) min((var_13), (((/* implicit */unsigned int) var_4))));
    var_14 = var_8;
    var_15 = ((/* implicit */int) var_3);
}
