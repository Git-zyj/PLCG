/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33628
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33628 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33628
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
    var_14 = (!(((/* implicit */_Bool) 8930141776175103736LL)));
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        var_15 = ((/* implicit */unsigned long long int) min((var_15), (((((arr_1 [i_0]) << (((arr_1 [i_0]) - (16135414936938590713ULL))))) | (((/* implicit */unsigned long long int) max((1347190719), (((/* implicit */int) var_12)))))))));
        var_16 += (((_Bool)0) ? (1901601486) : (((/* implicit */int) (signed char)106)));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        arr_4 [i_1] = (!((((_Bool)1) || ((!(((/* implicit */_Bool) arr_2 [i_1] [i_1])))))));
        var_17 = ((/* implicit */signed char) ((arr_2 [i_1] [i_1]) > (arr_2 [i_1] [i_1])));
        arr_5 [i_1] [i_1] = ((/* implicit */unsigned long long int) 987585583U);
        var_18 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1]))) * (987585562U))))));
        arr_6 [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */int) ((signed char) max((((/* implicit */unsigned short) arr_0 [i_1])), ((unsigned short)2756))))) | (((/* implicit */int) var_13))));
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
    {
        var_19 ^= ((/* implicit */_Bool) 12490138312682220708ULL);
        arr_10 [i_2] = ((/* implicit */short) min((((((/* implicit */_Bool) arr_1 [i_2])) ? (((unsigned long long int) var_9)) : (((/* implicit */unsigned long long int) ((987585583U) - (160742480U)))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */int) (short)1016)) / (((/* implicit */int) var_9)))) : (((/* implicit */int) arr_8 [i_2])))))));
    }
    for (short i_3 = 0; i_3 < 21; i_3 += 1) 
    {
        arr_15 [i_3] [i_3] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 12258493732068506141ULL)) ? (3307381713U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [1ULL] [i_3]))))))));
        var_20 = ((/* implicit */unsigned int) (_Bool)1);
        var_21 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) 10832667554438528385ULL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_12 [i_3] [i_3])) >= (((/* implicit */int) arr_12 [i_3] [i_3])))))) : (max((((/* implicit */unsigned int) arr_12 [i_3] [i_3])), (var_2)))));
        var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 15366184702833513473ULL)))))) != (var_5))))));
    }
}
