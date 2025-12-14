/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34023
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34023 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34023
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
    var_12 = ((/* implicit */unsigned short) -8LL);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 3; i_0 < 12; i_0 += 4) 
    {
        arr_4 [i_0 - 1] [i_0 - 1] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_0 [i_0 - 2]))));
        var_13 = ((/* implicit */_Bool) max((var_13), (((/* implicit */_Bool) arr_1 [12] [12]))));
        arr_5 [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)1103)) ^ (-1334750738)));
    }
    var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) var_7))));
    var_15 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) max((((/* implicit */unsigned char) ((_Bool) var_4))), (var_2))))));
    var_16 = ((/* implicit */short) ((((/* implicit */_Bool) -1334750733)) ? (((/* implicit */int) ((max((((/* implicit */unsigned long long int) var_11)), (15392193259159499026ULL))) == (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_11), ((unsigned char)0)))))))) : (((/* implicit */int) ((short) var_1)))));
}
