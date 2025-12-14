/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24952
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24952 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24952
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
    for (unsigned long long int i_0 = 2; i_0 < 23; i_0 += 2) 
    {
        arr_4 [21ULL] = ((/* implicit */_Bool) min((var_3), (((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0 + 1]))))))))));
        arr_5 [i_0] = ((/* implicit */signed char) ((unsigned int) ((unsigned long long int) arr_2 [i_0 - 2])));
        var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) arr_0 [11]))));
        var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) ((((/* implicit */_Bool) max(((+(arr_0 [i_0 - 2]))), (min((((/* implicit */unsigned int) (unsigned char)28)), (arr_0 [i_0])))))) ? (min((var_7), (((/* implicit */long long int) ((((/* implicit */_Bool) 3152677610U)) ? (2075597039) : (16383)))))) : (((/* implicit */long long int) max((((/* implicit */unsigned int) max((arr_1 [i_0 - 1]), (var_2)))), (((unsigned int) arr_2 [i_0 - 1]))))))))));
        var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0 - 2])) ? (var_1) : (((/* implicit */unsigned long long int) -2075597025))))) ? (max((((((/* implicit */_Bool) arr_2 [i_0])) ? (var_13) : (7646935071589181415ULL))), (((((/* implicit */_Bool) 16711680U)) ? (((/* implicit */unsigned long long int) arr_1 [i_0 + 1])) : (arr_3 [i_0]))))) : (min((((/* implicit */unsigned long long int) 1089804346U)), (1034199536798435980ULL))))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 2) 
    {
        arr_8 [i_1] = ((/* implicit */short) arr_3 [i_1]);
        var_17 = ((/* implicit */long long int) min((((unsigned long long int) var_13)), (((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) arr_6 [i_1])) ? (((/* implicit */int) arr_7 [i_1] [i_1])) : (var_6)))))));
        var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) ((_Bool) arr_6 [i_1])))));
    }
    var_19 = ((/* implicit */long long int) (-(4018191750369112781ULL)));
    /* LoopSeq 1 */
    for (short i_2 = 0; i_2 < 18; i_2 += 3) 
    {
        arr_12 [i_2] = ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */unsigned long long int) arr_6 [i_2])) != (((arr_7 [i_2] [10U]) ? (((/* implicit */unsigned long long int) 1546101672)) : (var_1))))));
        arr_13 [i_2] = ((/* implicit */short) var_1);
        arr_14 [i_2] = ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (arr_1 [i_2]) : (-1134205401))))))));
        arr_15 [i_2] [i_2] = ((/* implicit */unsigned int) ((_Bool) arr_11 [i_2]));
    }
}
