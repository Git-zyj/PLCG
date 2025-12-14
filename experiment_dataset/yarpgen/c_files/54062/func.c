/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54062
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54062 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54062
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
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) (+(((/* implicit */int) (!(((_Bool) var_9)))))));
        arr_4 [i_0] [i_0] = (+(((((/* implicit */_Bool) ((unsigned int) var_18))) ? (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) var_7)) : (var_3))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))));
        arr_5 [(unsigned char)1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_12)) : (2061333355)))) ? (((/* implicit */unsigned long long int) (~(2081084411U)))) : (arr_2 [i_0] [i_0])));
        arr_6 [i_0] = ((/* implicit */short) (~(((((/* implicit */int) ((signed char) var_16))) + (((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_1 [i_0]))))))));
    }
    /* LoopSeq 2 */
    for (signed char i_1 = 1; i_1 < 15; i_1 += 3) 
    {
        arr_9 [i_1] |= ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */unsigned int) var_10)) % (2081084411U))));
        var_19 = ((((int) ((unsigned char) -707599515))) >= (((((/* implicit */_Bool) min((var_5), (((/* implicit */int) var_16))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) > (0ULL)))) : (((/* implicit */int) ((1987736949U) >= (arr_0 [i_1] [i_1])))))));
    }
    for (unsigned int i_2 = 2; i_2 < 17; i_2 += 4) 
    {
        var_20 = ((/* implicit */unsigned char) (((+(((/* implicit */int) ((2213882884U) != (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))) ^ (((/* implicit */int) ((((/* implicit */int) ((_Bool) -128777396))) > (((((/* implicit */_Bool) var_5)) ? (var_5) : (((/* implicit */int) arr_11 [i_2])))))))));
        /* LoopSeq 2 */
        for (short i_3 = 1; i_3 < 18; i_3 += 1) 
        {
            arr_17 [i_2] [i_3] = ((/* implicit */short) ((_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) 2307230346U)))) == (2213882884U))));
            var_21 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) var_1)) : (var_7)))), (((((/* implicit */_Bool) arr_15 [i_2] [i_2])) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))))))));
            var_22 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */int) ((var_15) < (((/* implicit */int) var_6))))), (var_10)))) ? (((((/* implicit */int) ((5482897084808635441ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))) & (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_11)))))) : ((-(max((((/* implicit */int) var_8)), (-707599515)))))));
        }
        /* vectorizable */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            arr_22 [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 0ULL)) ? (1576558546299763228LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-100)))));
            /* LoopNest 3 */
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                for (unsigned short i_6 = 4; i_6 < 18; i_6 += 1) 
                {
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        {
                            var_23 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_16 [i_2 + 2]))));
                            var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((-9223372036854775807LL - 1LL)) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)163)))))) ? (((/* implicit */int) ((unsigned short) arr_24 [i_2] [i_2] [i_2] [i_6]))) : (((/* implicit */int) var_18))));
                            var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 9223372036854775807LL)) || ((_Bool)0))))) ^ (9223372036854775807LL))))));
                            var_26 -= ((((/* implicit */int) arr_25 [i_2 + 2] [i_6 - 2])) % (((/* implicit */int) arr_25 [i_2 - 1] [i_6 - 3])));
                        }
                    } 
                } 
            } 
        }
    }
    var_27 ^= ((/* implicit */long long int) ((unsigned short) ((unsigned short) (+(((/* implicit */int) var_2))))));
}
