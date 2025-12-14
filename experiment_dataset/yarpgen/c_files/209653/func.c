/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209653
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209653 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209653
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
    var_12 ^= ((short) var_7);
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        var_13 = ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) 1685423432)) ? (((/* implicit */int) var_8)) : (arr_0 [i_0])))))));
        var_14 = ((/* implicit */unsigned long long int) arr_2 [i_0]);
    }
    for (unsigned short i_1 = 2; i_1 < 11; i_1 += 3) /* same iter space */
    {
        arr_7 [i_1] [i_1 - 2] = max((((arr_6 [i_1 + 2]) & (((((/* implicit */_Bool) (unsigned short)50077)) ? (1866460719) : (arr_6 [i_1]))))), (-204413509));
        arr_8 [6ULL] &= ((/* implicit */short) (-(((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_1 + 3])) && (((/* implicit */_Bool) 2867956467U)))))));
        var_15 = ((((/* implicit */_Bool) (+(((/* implicit */int) ((short) var_0)))))) ? (((/* implicit */int) ((min((-1685423432), (2125445486))) != ((+(((/* implicit */int) var_11))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) min((2125445486), (((/* implicit */int) (short)3858)))))))));
        var_16 = ((/* implicit */int) ((((/* implicit */_Bool) min((arr_4 [i_1] [i_1 - 2]), (arr_4 [i_1 + 2] [i_1 + 3])))) ? (min(((~(14850462107829105825ULL))), (((((/* implicit */_Bool) 8955386415745182631ULL)) ? (14850462107829105825ULL) : (var_3))))) : (((/* implicit */unsigned long long int) 2103097487U))));
    }
    for (unsigned short i_2 = 2; i_2 < 11; i_2 += 3) /* same iter space */
    {
        var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) var_11))));
        var_18 = ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_9 [i_2 - 2] [i_2])) ? (4010122837U) : (2538152404U))), (3165031216U)))) ? ((~(arr_6 [i_2 + 1]))) : (((/* implicit */int) max((arr_11 [i_2] [i_2]), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_5 [i_2 - 2])))))))));
        var_19 = ((/* implicit */int) (short)-3858);
        var_20 *= ((/* implicit */unsigned short) min((((/* implicit */int) max((arr_11 [10] [i_2 + 2]), (((/* implicit */unsigned short) var_8))))), (((((/* implicit */_Bool) 566932919)) ? (arr_6 [i_2]) : (arr_6 [i_2 + 3])))));
    }
    var_21 = ((/* implicit */unsigned int) (((~(((var_3) | (8431730172275188902ULL))))) + (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_9)))), (((/* implicit */int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) var_2))))))))));
}
