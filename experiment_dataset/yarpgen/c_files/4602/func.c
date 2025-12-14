/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4602
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4602 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4602
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned int) (((~(((/* implicit */int) (unsigned char)192)))) * (((((/* implicit */int) arr_1 [i_0])) | (((/* implicit */int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) 4123364667U)))))))));
        var_12 += ((/* implicit */int) (~(171602628U)));
        var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_1 [10])), (171602640U)))) ? (min((4123364667U), (((/* implicit */unsigned int) arr_1 [i_0])))) : (((unsigned int) arr_0 [i_0] [i_0])))) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_0] [i_0])) ^ (((/* implicit */int) arr_0 [i_0] [i_0]))))))))));
        /* LoopSeq 3 */
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            arr_6 [i_0] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_0 [i_1] [i_1]))));
            arr_7 [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) max((arr_0 [i_0] [i_0]), (arr_4 [i_0] [i_0] [i_0])))) * (((/* implicit */int) ((((/* implicit */int) arr_4 [i_0] [i_0] [i_0])) <= (((/* implicit */int) arr_0 [i_0] [i_1])))))));
        }
        /* vectorizable */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            /* LoopNest 2 */
            for (long long int i_3 = 3; i_3 < 18; i_3 += 3) 
            {
                for (long long int i_4 = 0; i_4 < 21; i_4 += 1) 
                {
                    {
                        var_14 = ((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned char) arr_8 [i_0]))) == (((/* implicit */int) arr_4 [i_3 + 2] [i_0] [i_3 + 2]))));
                        var_15 |= ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_8 [(unsigned short)4]))))) && (((/* implicit */_Bool) ((-1607542706) ^ (((/* implicit */int) var_5)))))));
                        arr_15 [i_0] [i_2] [i_3] [i_0] [i_0] [i_3 + 1] = ((/* implicit */int) arr_4 [i_0] [i_0] [i_2]);
                        arr_16 [i_0] [3U] [i_2] [i_0] = ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_12 [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_5 [i_3] [i_0])))) + (2147483647))) >> (((((/* implicit */int) var_0)) - (41)))));
                    }
                } 
            } 
            var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2693125286U)) ? (3605011080U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) 0U)))))) : (((((/* implicit */_Bool) 1454042425)) ? (((/* implicit */unsigned long long int) arr_14 [i_0] [i_0] [i_2] [i_0])) : (var_3)))));
            var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_5 [i_0] [16LL])) >> (((((/* implicit */int) arr_13 [i_0] [i_2] [i_0])) + (33))))))));
            arr_17 [i_0] [i_0] = ((/* implicit */_Bool) ((unsigned int) 1601842009U));
        }
        /* vectorizable */
        for (long long int i_5 = 0; i_5 < 21; i_5 += 2) 
        {
            arr_21 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) arr_12 [i_0] [i_0] [i_5]);
            var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)4544)) ? (((/* implicit */int) (unsigned short)10)) : (((/* implicit */int) var_5))));
            var_19 = ((/* implicit */long long int) (+(arr_14 [i_0] [i_5] [i_5] [i_5])));
        }
        var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) && (((/* implicit */_Bool) ((unsigned char) arr_13 [i_0] [i_0] [i_0])))));
    }
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
    {
        var_21 *= ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_12 [i_6] [i_6] [i_6]))))), (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -9223372036854775807LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)113))) : (var_11)))), (min((var_3), (((/* implicit */unsigned long long int) var_4))))))));
        var_22 = max((((((((/* implicit */_Bool) 808227317)) || (((/* implicit */_Bool) 5853043572128766171ULL)))) ? (var_11) : (((/* implicit */long long int) max((((/* implicit */unsigned int) arr_1 [i_6])), (4123364682U)))))), ((~(max((((/* implicit */long long int) (unsigned short)20246)), (var_6))))));
        var_23 = ((/* implicit */unsigned short) arr_8 [i_6]);
    }
    var_24 = ((/* implicit */signed char) var_1);
    var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (var_11)))) ? (min((var_11), (((/* implicit */long long int) var_4)))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 8589934590LL)) && (((/* implicit */_Bool) var_4))))))))) && (((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) 2147483648U))))) >> ((((~(((/* implicit */int) (_Bool)1)))) + (29))))))));
}
