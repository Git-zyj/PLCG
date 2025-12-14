/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234625
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234625 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234625
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
    var_11 |= ((/* implicit */unsigned long long int) ((short) var_6));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 3; i_0 < 14; i_0 += 4) 
    {
        var_12 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 4025405793U)) ? (((/* implicit */unsigned long long int) ((unsigned int) 4025405789U))) : (((((/* implicit */_Bool) 269561494U)) ? (((/* implicit */unsigned long long int) 2396175171787033529LL)) : (563226982957308254ULL))))) < (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (short)13032)), (5395936955436247553LL))))));
        var_13 += ((/* implicit */unsigned short) max(((~(arr_1 [i_0 + 1]))), (arr_1 [i_0])));
        var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [(signed char)9] [(signed char)9])) ? (((/* implicit */long long int) ((/* implicit */int) (((-(269561511U))) == ((+(arr_1 [i_0]))))))) : (max((((((/* implicit */_Bool) (unsigned char)93)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-5395936955436247553LL))), (arr_0 [i_0 - 3] [i_0 - 1])))));
        arr_3 [i_0] [i_0 + 2] = ((/* implicit */signed char) arr_0 [i_0 + 1] [i_0 - 2]);
        var_15 = ((/* implicit */signed char) max((max((((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [(signed char)9]))) : (-7666082113494801764LL))), (((/* implicit */long long int) arr_2 [i_0 - 3] [i_0])))), ((-(((((/* implicit */long long int) ((/* implicit */int) arr_2 [7ULL] [i_0]))) / (arr_0 [i_0] [i_0])))))));
    }
}
