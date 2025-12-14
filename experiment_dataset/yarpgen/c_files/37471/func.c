/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37471
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37471 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37471
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
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) min((arr_0 [i_0]), (arr_0 [i_0])))) : (((((/* implicit */_Bool) arr_0 [(signed char)5])) ? (((/* implicit */int) (_Bool)1)) : ((((_Bool)1) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0]))))))));
        var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) ((max((((((/* implicit */int) (unsigned short)61911)) >> (((((/* implicit */int) (unsigned short)51251)) - (51235))))), (((/* implicit */int) max((arr_0 [i_0]), (arr_0 [i_0])))))) & (min((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_0 [i_0])))), (((/* implicit */int) arr_0 [i_0])))))))));
        var_18 &= arr_0 [i_0];
    }
    var_19 ^= ((/* implicit */signed char) min((((((/* implicit */_Bool) (signed char)-77)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)77))) : (-1684163526240318340LL))), ((((!(((/* implicit */_Bool) 4294967295U)))) ? (((/* implicit */long long int) var_5)) : (((((/* implicit */_Bool) (signed char)100)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-100))) : (-675314438100826190LL)))))));
    /* LoopNest 2 */
    for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 1) 
    {
        for (int i_2 = 2; i_2 < 21; i_2 += 2) 
        {
            {
                var_20 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)100)) ? (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) arr_6 [i_2])) == (((/* implicit */int) var_16))))) < (((/* implicit */int) max((arr_4 [i_2 - 1]), (var_4))))))) : (((/* implicit */int) arr_6 [i_1]))));
                /* LoopSeq 4 */
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    var_21 = ((((/* implicit */_Bool) (+(((/* implicit */int) arr_9 [i_1] [i_2] [i_2 - 1]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) var_7)) ? (arr_13 [i_1] [0U] [i_3]) : (((/* implicit */unsigned long long int) arr_7 [i_1])))) == (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-100)))))))))) : (min((675314438100826189LL), (((/* implicit */long long int) ((arr_6 [19ULL]) ? (((/* implicit */int) (signed char)-2)) : (((/* implicit */int) arr_4 [i_1]))))))));
                    arr_14 [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) (-(((/* implicit */int) var_16))))) ? (((var_13) * (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_2]))))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)100)))))));
                    var_22 = ((((/* implicit */_Bool) arr_10 [i_1] [i_2 + 2] [i_2 + 2])) ? (arr_13 [i_1] [i_2 + 1] [i_3]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (signed char)81)), (0ULL)))) ? (max((arr_8 [i_1] [i_2] [i_3]), (((/* implicit */long long int) arr_9 [i_1] [(unsigned short)11] [i_3])))) : (((/* implicit */long long int) ((1680321365U) + (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_2]))))))))));
                }
                for (unsigned short i_4 = 0; i_4 < 23; i_4 += 3) /* same iter space */
                {
                    var_23 ^= ((/* implicit */unsigned short) arr_8 [i_1] [(short)20] [i_1]);
                    arr_18 [i_1] [i_2 - 2] &= ((/* implicit */unsigned short) (~(((/* implicit */int) var_16))));
                }
                for (unsigned short i_5 = 0; i_5 < 23; i_5 += 3) /* same iter space */
                {
                    arr_21 [i_1] [i_1] [i_1] [i_1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_8 [i_1] [i_2 - 1] [i_2 - 1])), (18446744073709551615ULL)))) ? (min((arr_13 [12] [i_2] [i_2]), (0ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_16 [i_5] [i_2 + 2] [i_1]), (((/* implicit */short) arr_6 [i_1]))))))))) ? (((/* implicit */int) (_Bool)0)) : (var_6));
                    var_24 &= ((/* implicit */unsigned long long int) (+((~(((/* implicit */int) arr_10 [i_2 - 2] [i_2 - 2] [(_Bool)1]))))));
                }
                for (unsigned short i_6 = 0; i_6 < 23; i_6 += 3) /* same iter space */
                {
                    var_25 *= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((13ULL), (((/* implicit */unsigned long long int) (signed char)127)))))));
                    var_26 |= ((/* implicit */short) max(((~(((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_16 [i_6] [(unsigned short)9] [(unsigned short)1])))))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [i_2 - 1] [i_2 - 1] [i_2 + 1])))))));
                }
                var_27 = ((/* implicit */unsigned short) min((var_27), (((/* implicit */unsigned short) arr_15 [i_1] [i_1] [i_1]))));
                var_28 *= ((/* implicit */signed char) ((18446744073709551602ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))));
            }
        } 
    } 
}
