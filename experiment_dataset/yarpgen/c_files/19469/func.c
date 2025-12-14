/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19469
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19469 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19469
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 17; i_1 += 4) 
        {
            {
                arr_7 [i_0] |= ((/* implicit */short) (~(((/* implicit */int) (short)8192))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 4; i_2 < 18; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 4) 
                    {
                        {
                            arr_13 [i_0] [i_0] [i_2] [i_0] [i_0] [i_3] |= ((/* implicit */short) ((((((/* implicit */_Bool) arr_12 [i_2 - 2] [i_2 - 1] [i_1 + 2] [i_1] [i_1])) ? (arr_12 [i_2 - 1] [10ULL] [i_1 - 1] [i_1 + 1] [i_1]) : (arr_12 [i_2 - 4] [14ULL] [i_1 - 2] [i_0] [i_0]))) == ((-(((/* implicit */int) (short)-22900))))));
                            var_12 = ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)22900))) - (((((/* implicit */_Bool) 16793499562408490185ULL)) ? (((/* implicit */unsigned long long int) 4020699767U)) : (1653244511301061431ULL))));
                            /* LoopSeq 1 */
                            for (unsigned long long int i_4 = 0; i_4 < 19; i_4 += 1) 
                            {
                                var_13 = ((/* implicit */short) max((1653244511301061428ULL), (1653244511301061428ULL)));
                                var_14 = ((/* implicit */long long int) ((short) (((!(((/* implicit */_Bool) arr_4 [i_2] [i_2] [i_4])))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0])) && (((/* implicit */_Bool) arr_15 [i_1 + 1] [i_1 + 1] [i_1 - 2] [i_1 + 1] [i_1 - 2] [i_1 - 2] [i_0]))))) : (((/* implicit */int) min(((short)8191), (arr_16 [i_0] [i_1 + 2] [i_0])))))));
                                var_15 |= ((/* implicit */unsigned int) max(((((!(((/* implicit */_Bool) 18446744073709551615ULL)))) ? (((/* implicit */unsigned long long int) arr_12 [i_0] [i_1] [i_1 - 2] [i_2 - 1] [i_1])) : (var_7))), (((/* implicit */unsigned long long int) min((arr_9 [i_0] [i_1] [i_3]), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) arr_12 [14U] [i_0] [i_0] [i_0] [i_0])) < (3721430788209000454ULL)))))))));
                            }
                            var_16 |= ((/* implicit */short) (+(((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1536393854)) ? (((/* implicit */int) var_10)) : (0)))) ^ (((((/* implicit */_Bool) 16793499562408490187ULL)) ? (1653244511301061430ULL) : (((/* implicit */unsigned long long int) -6585985204671540174LL))))))));
                        }
                    } 
                } 
                var_17 = ((/* implicit */unsigned int) ((long long int) arr_12 [i_0] [i_0] [i_0] [i_1 + 1] [i_1 + 1]));
                var_18 = ((/* implicit */short) (-(((/* implicit */int) (short)8191))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_5 = 0; i_5 < 24; i_5 += 4) 
    {
        for (short i_6 = 0; i_6 < 24; i_6 += 1) 
        {
            {
                var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) ((((/* implicit */_Bool) arr_17 [i_5] [i_5])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -3626242063726652035LL)) ? (arr_19 [i_5] [i_5]) : (((/* implicit */int) arr_20 [i_5] [i_6] [i_6]))))) : (max((((/* implicit */unsigned long long int) arr_21 [i_5] [i_6] [i_5])), (max((((/* implicit */unsigned long long int) var_2)), (var_11))))))))));
                /* LoopNest 3 */
                for (unsigned long long int i_7 = 0; i_7 < 24; i_7 += 4) 
                {
                    for (int i_8 = 0; i_8 < 24; i_8 += 4) 
                    {
                        for (unsigned int i_9 = 0; i_9 < 24; i_9 += 3) 
                        {
                            {
                                var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3721430788209000454ULL)) ? (14746410813718823569ULL) : (((/* implicit */unsigned long long int) 12))))) ? (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)78))))) : (((((/* implicit */_Bool) -6585985204671540174LL)) ? (-8495319713777895966LL) : (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_5] [i_5] [i_7])))))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) arr_19 [i_7] [i_5])) : (arr_24 [i_5] [i_6] [i_5])))))))));
                                var_21 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (unsigned char)78)) ? (((/* implicit */int) (unsigned char)40)) : (((/* implicit */int) arr_17 [i_5] [i_6])))) + (((/* implicit */int) ((((((/* implicit */_Bool) 200759475138279435ULL)) ? (arr_18 [i_6]) : (((/* implicit */unsigned long long int) -2070246848476400177LL)))) != (((((/* implicit */_Bool) var_7)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)177))))))))));
                                var_22 = ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) 4175059547U)) == (arr_24 [11LL] [11LL] [i_7]))))) != (max((((/* implicit */unsigned long long int) arr_17 [i_5] [i_5])), (18245984598571272181ULL))))) || (((((((/* implicit */_Bool) arr_28 [i_5])) ? (31ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_5] [i_5] [i_5]))))) != (((((/* implicit */_Bool) arr_21 [i_9] [i_7] [i_5])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-16747))) : (16793499562408490187ULL)))))));
                                var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) max(((short)5914), ((short)9796)))) : (((/* implicit */int) var_10))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_24 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */unsigned long long int) var_4)) + (var_7))) : (((/* implicit */unsigned long long int) 4111938308U))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : ((~(((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) 521987268)) : (4217724538U)))))));
}
