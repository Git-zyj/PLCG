/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230105
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230105 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230105
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
    for (long long int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */signed char) var_15);
        arr_4 [i_0] |= ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) var_7)) > (17001647747296903395ULL))) || (((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [i_0])))))));
        var_17 = ((/* implicit */int) max((((/* implicit */unsigned long long int) (-((+(((/* implicit */int) var_3))))))), (1391823225791909538ULL)));
        var_18 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (short)16606))));
    }
    for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_2 = 0; i_2 < 11; i_2 += 3) 
        {
            var_19 = ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-97))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)120)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (signed char)120))))) : (((arr_10 [i_1] [i_2]) + (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1] [i_1]))))));
            var_20 = ((/* implicit */short) ((((/* implicit */_Bool) var_12)) ? (((((/* implicit */_Bool) 2190670518326333057LL)) ? (211106232532992LL) : (arr_10 [i_1] [i_1]))) : (((/* implicit */long long int) (~(((/* implicit */int) var_2)))))));
            arr_11 [i_1] = ((/* implicit */long long int) ((((/* implicit */int) (short)32767)) > (((/* implicit */int) arr_9 [i_1 + 1]))));
        }
        /* LoopSeq 2 */
        for (signed char i_3 = 0; i_3 < 11; i_3 += 2) 
        {
            var_21 |= (-(((((/* implicit */int) min((var_8), (((/* implicit */unsigned short) (signed char)23))))) & (((/* implicit */int) min((((/* implicit */signed char) var_1)), (arr_9 [i_3])))))));
            /* LoopSeq 1 */
            for (long long int i_4 = 0; i_4 < 11; i_4 += 4) 
            {
                arr_17 [i_1] [i_1] [i_1] = ((/* implicit */int) (signed char)-97);
                var_22 = ((/* implicit */short) min((arr_8 [i_4] [1]), (((/* implicit */signed char) (!(((((/* implicit */_Bool) var_0)) && (var_6))))))));
            }
        }
        for (signed char i_5 = 1; i_5 < 10; i_5 += 2) 
        {
            arr_22 [i_1] = min((arr_12 [i_1 + 1]), (((/* implicit */unsigned long long int) var_0)));
            arr_23 [i_1] = ((/* implicit */short) var_5);
            arr_24 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) ((((/* implicit */int) ((12434260487381043024ULL) > (arr_18 [i_1] [i_1])))) > ((~(((/* implicit */int) (signed char)23))))))) : (((((/* implicit */int) arr_2 [i_1 + 1])) * (((/* implicit */int) ((arr_10 [i_5 - 1] [i_1]) > (9223372036854775782LL))))))));
        }
        arr_25 [0LL] [(signed char)2] |= var_2;
    }
    /* LoopSeq 2 */
    for (long long int i_6 = 0; i_6 < 13; i_6 += 2) 
    {
        var_23 |= (_Bool)1;
        arr_29 [i_6] = ((/* implicit */_Bool) (+(((arr_26 [i_6] [i_6]) & (arr_26 [i_6] [i_6])))));
        var_24 = ((/* implicit */short) ((((/* implicit */_Bool) min((max((((/* implicit */long long int) (short)23241)), (-9223372036854775783LL))), (((/* implicit */long long int) var_11))))) ? (((/* implicit */int) ((((/* implicit */int) var_2)) < (((/* implicit */int) (unsigned short)56447))))) : (max((((/* implicit */int) ((((/* implicit */int) var_2)) <= (((/* implicit */int) arr_27 [i_6]))))), ((~(((/* implicit */int) arr_27 [i_6]))))))));
    }
    for (short i_7 = 2; i_7 < 23; i_7 += 3) 
    {
        var_25 ^= ((/* implicit */int) ((unsigned short) var_2));
        var_26 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((arr_32 [i_7 - 2] [i_7]) != (var_10))))));
        var_27 *= ((/* implicit */signed char) (unsigned short)16256);
        arr_34 [i_7] = ((/* implicit */unsigned long long int) ((((var_5) & (((/* implicit */long long int) arr_30 [i_7])))) | (((((/* implicit */_Bool) arr_30 [i_7])) ? (9223372036854775782LL) : (((/* implicit */long long int) arr_30 [i_7]))))));
    }
}
