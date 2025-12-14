/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226698
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226698 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226698
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
    for (unsigned char i_0 = 2; i_0 < 17; i_0 += 2) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            arr_6 [i_0] [i_0] [(short)12] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_0 [i_0]))))) ? (arr_3 [i_0 - 2]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_0])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_0))))));
            arr_7 [i_0] [i_1] &= var_10;
            arr_8 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 1621364847)) ? (1818351447) : (1621364840)));
        }
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_17 = ((/* implicit */long long int) var_13);
            arr_12 [i_2] [(_Bool)1] [i_0] = ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_11)) || (arr_11 [i_0]))));
            arr_13 [i_0] [i_2] [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_15) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_9 [i_0 - 1])))) << (((((/* implicit */int) var_10)) - (81)))));
            arr_14 [(unsigned char)6] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((short) ((unsigned char) arr_0 [i_2])))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_11 [i_0 - 2])) : (((/* implicit */int) var_5)))))));
        }
        arr_15 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_8)))) <= (((long long int) (-(((/* implicit */int) var_6)))))));
        var_18 ^= ((/* implicit */unsigned int) (-(min((((/* implicit */unsigned long long int) ((signed char) arr_5 [i_0 + 1]))), (min((((/* implicit */unsigned long long int) var_13)), (var_15)))))));
        var_19 += ((/* implicit */_Bool) var_7);
    }
    var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) var_6))));
    var_21 += ((/* implicit */unsigned char) var_0);
}
