/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246623
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246623 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246623
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
    var_12 = ((/* implicit */short) min(((_Bool)1), ((!((_Bool)1)))));
    var_13 = ((/* implicit */long long int) max((((/* implicit */int) var_11)), (((((/* implicit */_Bool) (~(((/* implicit */int) var_8))))) ? (((0) & (((/* implicit */int) var_7)))) : (((/* implicit */int) var_6))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_0]))))) ? (-817174079296490078LL) : (((/* implicit */long long int) (((+(((/* implicit */int) arr_1 [i_0])))) * (((/* implicit */int) var_11))))))))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 2; i_2 < 20; i_2 += 2) 
            {
                {
                    arr_7 [i_2] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */int) (!(((/* implicit */_Bool) var_1))))) * (0))) == (min((699784042), (((/* implicit */int) arr_2 [i_0] [i_2 + 3] [i_2 + 1]))))));
                    var_15 = ((/* implicit */unsigned int) max((min((((((/* implicit */_Bool) var_6)) ? (9544163690325981508ULL) : (((/* implicit */unsigned long long int) 9223372036854775807LL)))), (((/* implicit */unsigned long long int) var_6)))), (((/* implicit */unsigned long long int) var_11))));
                    var_16 ^= ((/* implicit */unsigned int) (((!((!(((/* implicit */_Bool) arr_3 [i_2])))))) ? ((~(arr_4 [i_2] [i_2 + 2] [i_2] [i_2]))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 2147733760U))))))));
                    arr_8 [i_0] [i_0] = ((/* implicit */int) ((unsigned long long int) min((min((var_0), (((/* implicit */long long int) 427334998)))), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_2))))))));
                }
            } 
        } 
        arr_9 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */long long int) (~(var_3)))), (((arr_2 [i_0] [i_0] [i_0]) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (var_0)))))) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (((long long int) arr_1 [i_0]))));
        arr_10 [i_0] [i_0] = ((/* implicit */unsigned long long int) (_Bool)0);
    }
    /* LoopNest 2 */
    for (unsigned int i_3 = 0; i_3 < 14; i_3 += 1) 
    {
        for (long long int i_4 = 3; i_4 < 12; i_4 += 2) 
        {
            {
                arr_19 [i_3] = ((/* implicit */signed char) (-(((2147483647) ^ ((-(((/* implicit */int) var_6))))))));
                arr_20 [i_3] [i_3] = ((((((/* implicit */long long int) ((((/* implicit */_Bool) 14587127776999580430ULL)) ? (2062781749U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) - (((long long int) (_Bool)1)))) ^ (((/* implicit */long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-18609)) || (((/* implicit */_Bool) (short)8283))))), (0U)))));
                var_17 = ((/* implicit */_Bool) var_10);
                /* LoopSeq 1 */
                /* vectorizable */
                for (signed char i_5 = 0; i_5 < 14; i_5 += 3) 
                {
                    var_18 = (+(((/* implicit */int) var_7)));
                    arr_24 [i_3] = ((((/* implicit */_Bool) -5283505329040693807LL)) || (((/* implicit */_Bool) arr_4 [i_4 - 3] [i_4 + 1] [i_4 - 3] [i_4 + 2])));
                    var_19 ^= ((/* implicit */unsigned short) (~(var_9)));
                    arr_25 [i_3] [i_3] |= ((/* implicit */unsigned long long int) arr_17 [i_3] [i_4 - 2] [i_5]);
                    arr_26 [i_3] [i_4] [i_5] |= ((/* implicit */_Bool) ((((9544163690325981508ULL) + (((/* implicit */unsigned long long int) var_0)))) ^ (((/* implicit */unsigned long long int) (+(1957793505))))));
                }
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_5)))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) ((var_11) && (((/* implicit */_Bool) var_6)))))))));
}
