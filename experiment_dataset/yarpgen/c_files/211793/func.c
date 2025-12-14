/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211793
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211793 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211793
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
    var_13 = ((/* implicit */unsigned int) ((max((((((/* implicit */_Bool) 536870911)) ? (((/* implicit */long long int) 536870923)) : (var_4))), (((/* implicit */long long int) max((((/* implicit */int) var_1)), (var_12)))))) >> (min(((~(var_9))), (((/* implicit */unsigned int) ((var_11) != (var_11))))))));
    var_14 = var_5;
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        /* LoopSeq 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_15 *= ((/* implicit */short) ((((/* implicit */unsigned long long int) ((-5751489127034437881LL) ^ (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_0])))))) >= ((~(var_11)))));
            arr_5 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_3 [i_0] [i_1])) ? (arr_3 [i_1] [i_1]) : (((/* implicit */long long int) 536870923))));
            arr_6 [i_1] = ((/* implicit */short) arr_4 [i_0] [i_1] [(unsigned short)2]);
        }
        for (long long int i_2 = 1; i_2 < 15; i_2 += 1) /* same iter space */
        {
            var_16 -= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 6491028470100940351ULL)) ? (((/* implicit */long long int) 508959195)) : (4194303LL)))) ? (arr_3 [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) arr_2 [i_0] [i_2 - 1]))))))));
            /* LoopSeq 1 */
            for (signed char i_3 = 2; i_3 < 13; i_3 += 2) 
            {
                var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) ((((/* implicit */_Bool) ((signed char) -536870911))) ? (((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_0]))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_2 - 1] [i_3] [14ULL]))))))));
                var_18 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) var_1)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_2 [i_0] [i_0])))) : (5772368525428225919ULL)));
            }
        }
        for (long long int i_4 = 1; i_4 < 15; i_4 += 1) /* same iter space */
        {
            /* LoopSeq 3 */
            for (unsigned int i_5 = 0; i_5 < 16; i_5 += 1) 
            {
                arr_17 [i_4] [i_4] [i_5] = ((/* implicit */long long int) ((unsigned int) -1LL));
                /* LoopNest 2 */
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    for (int i_7 = 0; i_7 < 16; i_7 += 2) 
                    {
                        {
                            arr_25 [i_0] [i_0] [12U] [i_0] [i_0] [i_4] = ((/* implicit */short) (((-(16383ULL))) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_4 + 1] [i_6])))));
                            arr_26 [14LL] [i_4] [13LL] [i_4 - 1] = ((/* implicit */_Bool) (-(((/* implicit */int) ((var_8) && (((/* implicit */_Bool) -5751489127034437881LL)))))));
                            var_19 = ((/* implicit */unsigned short) var_6);
                            var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) 7321512943687077933LL))));
                            arr_27 [i_4] [i_6] [i_5] [14ULL] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_0] [i_4 - 1] [i_4 - 1] [i_6])) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_0] [i_4 - 1] [i_4 - 1] [i_5])))));
                        }
                    } 
                } 
            }
            for (unsigned long long int i_8 = 0; i_8 < 16; i_8 += 2) 
            {
                arr_31 [i_4] [i_4] = ((/* implicit */short) ((long long int) arr_22 [i_0] [i_4] [i_8] [i_4] [i_4 + 1]));
                arr_32 [i_0] [i_4] [i_8] = ((/* implicit */short) arr_4 [i_8] [i_4] [i_8]);
            }
            for (int i_9 = 0; i_9 < 16; i_9 += 2) 
            {
                var_21 = ((/* implicit */short) ((((4194303LL) ^ (arr_23 [i_0] [i_0] [i_0] [i_0] [(_Bool)1]))) & (arr_33 [i_0] [i_0] [i_4])));
                arr_36 [i_4] [i_4] [i_9] = ((/* implicit */signed char) (-((+(((/* implicit */int) arr_9 [i_4] [i_4] [i_0]))))));
            }
            /* LoopNest 2 */
            for (unsigned short i_10 = 0; i_10 < 16; i_10 += 1) 
            {
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    {
                        arr_41 [i_4] [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4] = ((/* implicit */int) arr_2 [i_0] [i_10]);
                        var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) (~(180851949)))) | (arr_37 [i_0]))))));
                        arr_42 [i_4] [i_4] [i_11] = ((/* implicit */long long int) ((((/* implicit */_Bool) 6736192964740885170LL)) || (((/* implicit */_Bool) arr_24 [i_0] [i_0] [i_0] [9LL] [i_0]))));
                        arr_43 [i_4] [i_4 + 1] [i_4] [i_4 - 1] [i_4 + 1] = ((/* implicit */unsigned int) arr_24 [i_0] [7] [i_4] [11LL] [i_11]);
                        var_23 = ((((/* implicit */_Bool) arr_15 [i_4 + 1])) ? (arr_23 [i_4 - 1] [i_4] [i_4 + 1] [i_4] [i_4 - 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_4 - 1] [i_4 + 1] [i_4 + 1]))));
                    }
                } 
            } 
            arr_44 [i_4] [i_4] = ((/* implicit */long long int) (~(12674375548281325694ULL)));
        }
        var_24 = ((/* implicit */unsigned int) ((long long int) arr_23 [8LL] [i_0] [i_0] [i_0] [i_0]));
    }
    var_25 ^= ((/* implicit */long long int) 877206913U);
}
