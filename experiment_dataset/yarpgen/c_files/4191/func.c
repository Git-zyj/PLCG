/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4191
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4191 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4191
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
    var_12 = ((/* implicit */short) ((((/* implicit */_Bool) max((max((var_1), (((/* implicit */long long int) 1330992317)))), (min((((/* implicit */long long int) (short)-8435)), (var_11)))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)55)) ? (((/* implicit */int) (unsigned short)55406)) : (((/* implicit */int) (unsigned short)17253)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        var_13 = ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned int) arr_0 [i_0]))));
        arr_2 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) 505125444U)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) -1810015529)) > (16773120U))))) : (((((/* implicit */_Bool) (unsigned short)58028)) ? (arr_0 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)8)))))));
        var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) 3675016476U))) ? (((/* implicit */long long int) ((/* implicit */int) ((arr_0 [i_0]) >= (((/* implicit */long long int) 800756327U)))))) : ((+(arr_0 [i_0])))));
        arr_3 [i_0] = ((/* implicit */unsigned short) arr_1 [i_0]);
    }
    var_15 = ((/* implicit */unsigned int) var_8);
}
