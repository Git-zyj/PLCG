/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212546
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212546 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212546
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
    var_18 = ((/* implicit */int) (-(((long long int) ((4823877613868643380LL) <= (((/* implicit */long long int) var_3)))))));
    var_19 = ((/* implicit */unsigned char) ((signed char) (((-(8282301478575268542ULL))) % (((/* implicit */unsigned long long int) var_7)))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 1; i_0 < 17; i_0 += 2) 
    {
        var_20 = ((/* implicit */unsigned int) (~(((/* implicit */int) max((arr_3 [i_0 + 1]), (arr_3 [i_0 - 1]))))));
        var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((((/* implicit */int) var_12)) - (((/* implicit */int) arr_0 [i_0]))))))) ? (((/* implicit */unsigned long long int) max((((long long int) arr_0 [i_0 + 2])), (((/* implicit */long long int) (-(((/* implicit */int) var_0)))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (2074455460U) : (1593639454U)))) ? (min((880739431776252420ULL), (880739431776252420ULL))) : (((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned int) arr_3 [i_0 - 1])))))))));
    }
    for (short i_1 = 0; i_1 < 15; i_1 += 4) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned char i_2 = 0; i_2 < 15; i_2 += 3) /* same iter space */
        {
            var_22 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_2 [i_1])) ^ (((/* implicit */int) arr_2 [i_1]))));
            var_23 = ((/* implicit */short) ((((/* implicit */_Bool) arr_8 [i_1] [i_1])) ? (((/* implicit */long long int) 4294967295U)) : (-8263589052805106548LL)));
        }
        for (unsigned char i_3 = 0; i_3 < 15; i_3 += 3) /* same iter space */
        {
            arr_11 [i_1] &= ((/* implicit */short) ((((((/* implicit */unsigned int) ((int) 2287774482U))) == (2007192825U))) ? (((/* implicit */long long int) min((((/* implicit */int) arr_10 [(unsigned char)14] [i_3])), (((arr_0 [i_1]) ? (((/* implicit */int) arr_6 [i_1])) : (((/* implicit */int) var_8))))))) : (max((arr_8 [i_3] [i_1]), (((/* implicit */long long int) min((((/* implicit */signed char) arr_0 [i_1])), (arr_3 [i_1]))))))));
            var_24 = ((/* implicit */short) ((((/* implicit */long long int) ((int) arr_0 [i_3]))) > (8178726049158699537LL)));
        }
        var_25 &= ((/* implicit */long long int) ((((2287774482U) > (((/* implicit */unsigned int) -1187299880)))) ? (((/* implicit */unsigned int) 1197632516)) : (((((/* implicit */_Bool) (short)-15427)) ? (2287774482U) : (((/* implicit */unsigned int) -1197632516))))));
    }
    var_26 = ((/* implicit */int) ((max((((/* implicit */long long int) -1187299880)), (min((((/* implicit */long long int) var_5)), (var_10))))) | (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (-1187299880) : (((/* implicit */int) var_8))))) : (var_16))))));
}
