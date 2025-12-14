/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247362
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247362 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247362
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
    var_18 = ((/* implicit */signed char) ((long long int) (_Bool)1));
    var_19 = ((/* implicit */unsigned char) max((((/* implicit */int) ((unsigned char) ((((/* implicit */int) (_Bool)0)) == (15))))), (((((/* implicit */_Bool) 344082179493375208LL)) ? (1636526569) : (((/* implicit */int) (_Bool)1))))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_20 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_2 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [(signed char)6] [i_0])))))) ? (((((/* implicit */long long int) ((/* implicit */int) ((17718978942791645745ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))))) % (((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_2 [i_0]) : (((/* implicit */long long int) arr_1 [i_0])))))) : (arr_2 [i_0])));
        arr_3 [i_0] = (-(((int) arr_0 [i_0] [i_0])));
        arr_4 [i_0] = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) arr_0 [i_0] [i_0])) < (arr_1 [i_0])))) & (((/* implicit */int) ((unsigned char) (unsigned char)24)))));
        arr_5 [i_0] = ((/* implicit */int) var_14);
        arr_6 [2ULL] [i_0] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_1 [i_0])))) ? (((/* implicit */long long int) min((arr_1 [i_0]), (var_7)))) : (-344082179493375236LL)));
    }
    for (signed char i_1 = 0; i_1 < 10; i_1 += 3) 
    {
        arr_10 [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) -1767505907)) && (((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_1] [i_1])))))));
        var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) ((((min((((/* implicit */int) (_Bool)1)), (-23))) + (2147483647))) >> (((((((/* implicit */_Bool) arr_1 [(unsigned char)8])) ? (arr_1 [i_1]) : (((/* implicit */int) arr_7 [i_1])))) - (97599564))))))));
    }
    var_22 = var_5;
}
