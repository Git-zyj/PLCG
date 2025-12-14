/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31143
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31143 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31143
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
    var_17 *= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */unsigned int) var_12)) % (var_6)))) ^ (max((8345341918212658721LL), (((/* implicit */long long int) (signed char)-17)))))))));
    var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)240)) ? (((/* implicit */int) var_14)) : ((-(((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned short)31278)) : (((/* implicit */int) (unsigned char)43))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            {
                var_19 = ((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) ((signed char) -8345341918212658700LL))))))));
                var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) var_1))));
                var_21 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_1 [i_0])))) - (((2111141261U) ^ (((/* implicit */unsigned int) arr_1 [i_1]))))));
                var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-32766)) ? (arr_1 [i_0]) : (((/* implicit */int) (((~(((/* implicit */int) var_0)))) > ((~(((/* implicit */int) var_15)))))))));
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) min(((signed char)(-127 - 1)), (var_14)))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned short)38757)))))));
    var_24 = ((/* implicit */int) var_9);
}
