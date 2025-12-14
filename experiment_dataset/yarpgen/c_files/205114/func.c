/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205114
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205114 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205114
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
    var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_6))));
    /* LoopSeq 2 */
    for (signed char i_0 = 1; i_0 < 9; i_0 += 4) 
    {
        arr_2 [i_0] = max((((/* implicit */int) min((arr_0 [i_0 + 2]), (arr_0 [i_0])))), ((-(((/* implicit */int) var_9)))));
        var_17 += ((/* implicit */long long int) ((unsigned char) ((2980212056172721207LL) - (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))))));
        arr_3 [i_0] = ((/* implicit */long long int) arr_1 [i_0] [i_0]);
        arr_4 [i_0] = ((/* implicit */long long int) (_Bool)0);
        var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) ((signed char) ((max((-5959744747900349721LL), (((/* implicit */long long int) var_14)))) >> ((((-(var_5))) - (4870463061914475562ULL)))))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 1) 
    {
        arr_9 [4LL] = ((/* implicit */unsigned long long int) -868382732);
        arr_10 [i_1] [i_1] |= ((/* implicit */long long int) max(((-(((/* implicit */int) (_Bool)1)))), (min((((/* implicit */int) var_7)), ((+(((/* implicit */int) (unsigned short)34990))))))));
    }
    var_19 &= ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) var_1)), ((-(min((var_8), (var_8)))))));
    var_20 = ((/* implicit */short) ((unsigned short) var_5));
}
