/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239511
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239511 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239511
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
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 3) /* same iter space */
    {
        var_15 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_0 [i_0]) ? (arr_1 [i_0]) : (((/* implicit */unsigned int) var_8))))) ? (((((/* implicit */_Bool) var_4)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) arr_1 [i_0])))) : (((/* implicit */long long int) ((/* implicit */int) ((-207686643) != (207686635)))))))) ? ((~(((/* implicit */int) var_9)))) : (((/* implicit */int) (!(((/* implicit */_Bool) 9223372036854775807LL)))))));
        var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) -1787577495825395506LL)) ? (((/* implicit */unsigned int) var_3)) : (arr_1 [i_0])))))) ? ((~(((/* implicit */int) var_12)))) : (((/* implicit */int) var_14))));
    }
    for (unsigned short i_1 = 0; i_1 < 24; i_1 += 3) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_2 = 1; i_2 < 23; i_2 += 1) 
        {
            for (signed char i_3 = 0; i_3 < 24; i_3 += 1) 
            {
                for (unsigned int i_4 = 0; i_4 < 24; i_4 += 1) 
                {
                    {
                        var_17 -= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_2 + 1])) ? (((((/* implicit */long long int) ((/* implicit */int) var_0))) & (5398387382847879565LL))) : (((/* implicit */long long int) ((((/* implicit */int) arr_3 [i_2 - 1] [i_4])) >> (((((/* implicit */int) var_4)) - (70))))))))) ? (((((/* implicit */_Bool) min((arr_12 [(unsigned char)14] [i_2] [4U] [(unsigned char)0]), (((/* implicit */unsigned char) var_9))))) ? (((((/* implicit */_Bool) arr_7 [6] [i_3])) ? (((/* implicit */int) (unsigned short)42276)) : (((/* implicit */int) var_9)))) : (((/* implicit */int) arr_12 [4ULL] [i_4] [i_2 + 1] [4ULL])))) : (((/* implicit */int) var_14))));
                        var_18 *= ((/* implicit */_Bool) (~(min((((((/* implicit */_Bool) arr_9 [i_1] [i_2] [i_1] [i_4])) ? (arr_2 [i_1] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_1] [i_1] [i_1] [i_1]))))), (((/* implicit */long long int) arr_8 [i_1] [(unsigned char)8] [i_1] [i_1]))))));
                        var_19 |= ((/* implicit */short) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_1)))) ? ((~(arr_2 [i_1] [(signed char)21]))) : (((/* implicit */long long int) (~(((/* implicit */int) arr_12 [(unsigned short)10] [i_2] [i_3] [i_4])))))))) ? (((/* implicit */int) ((signed char) arr_6 [i_2 + 1]))) : (((((/* implicit */_Bool) ((var_13) ? (((/* implicit */int) var_14)) : (var_5)))) ? ((~(((/* implicit */int) var_13)))) : (((/* implicit */int) arr_8 [i_1] [10LL] [i_3] [i_4]))))));
                        /* LoopSeq 1 */
                        for (long long int i_5 = 0; i_5 < 24; i_5 += 4) 
                        {
                            var_20 = ((/* implicit */unsigned char) ((unsigned int) (~(((((/* implicit */_Bool) arr_3 [i_5] [i_2 - 1])) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_3]))))))));
                            var_21 = ((/* implicit */unsigned char) (+((-9223372036854775807LL - 1LL))));
                            var_22 = ((/* implicit */short) (_Bool)1);
                        }
                    }
                } 
            } 
        } 
        var_23 = ((/* implicit */short) (+(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)15298)))))));
    }
    var_24 |= ((/* implicit */long long int) (~(max((max((var_3), (((/* implicit */int) var_6)))), (((/* implicit */int) (unsigned char)11))))));
    var_25 = ((/* implicit */signed char) (-(((/* implicit */int) var_12))));
    var_26 = ((/* implicit */long long int) max((var_26), (((/* implicit */long long int) var_6))));
    var_27 = ((/* implicit */_Bool) ((((var_3) + (2147483647))) << (((var_5) - (1385078795)))));
}
