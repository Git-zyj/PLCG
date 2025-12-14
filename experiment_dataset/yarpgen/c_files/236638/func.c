/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236638
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236638 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236638
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
    var_12 = ((/* implicit */unsigned char) var_5);
    /* LoopSeq 3 */
    for (short i_0 = 2; i_0 < 18; i_0 += 2) 
    {
        var_13 = ((/* implicit */unsigned int) max(((!(((/* implicit */_Bool) (unsigned char)24)))), (var_1)));
        arr_4 [i_0] [i_0] = ((/* implicit */long long int) (!(((((/* implicit */_Bool) arr_1 [i_0 + 2])) || (((/* implicit */_Bool) arr_1 [i_0 - 1]))))));
        arr_5 [i_0] [i_0 + 1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) max((var_1), (var_1))))))) || (((/* implicit */_Bool) var_3))));
        var_14 = ((/* implicit */int) ((unsigned long long int) (_Bool)1));
    }
    /* vectorizable */
    for (unsigned short i_1 = 1; i_1 < 17; i_1 += 1) 
    {
        arr_8 [i_1] = ((unsigned char) var_0);
        arr_9 [i_1] = ((/* implicit */unsigned short) var_2);
        var_15 = ((/* implicit */unsigned char) ((6632689771177811378ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1 + 1] [i_1 - 1])))));
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        arr_12 [i_2] = ((unsigned long long int) arr_11 [i_2]);
        var_16 = ((/* implicit */unsigned int) (((((_Bool)1) ? (((/* implicit */int) arr_2 [i_2] [i_2])) : (((/* implicit */int) arr_2 [i_2] [i_2])))) - (((/* implicit */int) min((arr_2 [(signed char)17] [i_2]), (arr_2 [i_2] [i_2]))))));
    }
    var_17 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) : (((var_4) ? (8956758147473970334ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) max((((/* implicit */short) var_0)), (var_11)))))) : (16369998158339283933ULL)));
}
