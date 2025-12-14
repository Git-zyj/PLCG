/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192414
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192414 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192414
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
    var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) ((((/* implicit */_Bool) var_0)) && (((_Bool) var_2))))) : (var_8)));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        var_17 = ((/* implicit */int) ((((var_5) ? (11550763485735154615ULL) : (6895980587974396994ULL))) >> (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_0 [i_0]))))));
        var_18 = ((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [i_0]))));
    }
    for (unsigned char i_1 = 0; i_1 < 24; i_1 += 2) 
    {
        var_19 = ((/* implicit */unsigned short) ((long long int) ((((/* implicit */unsigned long long int) (+(var_12)))) + (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)9))) - (var_6))))));
        var_20 = ((/* implicit */long long int) var_2);
        var_21 = ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) var_1)) : (var_6)))))) ? (11550763485735154608ULL) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) -33554432)) ? (((/* implicit */int) arr_4 [12])) : (((/* implicit */int) arr_2 [13ULL]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [21LL]))) : (6895980587974396990ULL))));
        var_22 = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_2 [i_1])), (6895980587974396971ULL)))) ? (((((/* implicit */_Bool) ((int) var_15))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_1] [20LL]))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) arr_2 [i_1]))))))) : (((/* implicit */int) (unsigned short)17906))));
    }
    for (unsigned char i_2 = 2; i_2 < 9; i_2 += 4) 
    {
        var_23 = ((unsigned char) var_4);
        arr_7 [i_2] [i_2] = ((/* implicit */int) min((((/* implicit */unsigned long long int) var_4)), (((unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (arr_6 [i_2] [(unsigned char)10]) : (arr_6 [i_2] [i_2]))))));
    }
    var_24 = ((/* implicit */_Bool) ((1428908295U) + (((/* implicit */unsigned int) ((((/* implicit */int) var_9)) + (((int) var_15)))))));
}
