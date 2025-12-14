/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195553
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195553 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195553
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
    var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) max((((/* implicit */int) var_10)), ((~((~(((/* implicit */int) (unsigned char)210)))))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 2) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)38738))) - (arr_1 [i_0])));
        var_21 = ((/* implicit */unsigned int) (-((+(576460752303423424LL)))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 2) /* same iter space */
    {
        arr_5 [i_1] &= ((((/* implicit */long long int) ((/* implicit */int) ((max((arr_1 [(short)12]), (((/* implicit */long long int) arr_0 [(_Bool)1])))) > (((/* implicit */long long int) ((/* implicit */int) var_18))))))) & ((~(576460752303423424LL))));
        arr_6 [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) 18446744073709551610ULL)) && (((/* implicit */_Bool) (-(((/* implicit */int) (short)(-32767 - 1))))))));
    }
    /* vectorizable */
    for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 2) /* same iter space */
    {
        arr_9 [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)13)) / (((/* implicit */int) (unsigned char)198))));
        var_22 -= ((/* implicit */long long int) (!(((/* implicit */_Bool) var_9))));
        var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) (+(arr_2 [i_2]))))));
        arr_10 [10LL] [10LL] = ((/* implicit */unsigned char) var_2);
    }
    /* LoopNest 2 */
    for (short i_3 = 0; i_3 < 22; i_3 += 2) 
    {
        for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
        {
            {
                var_24 ^= ((/* implicit */_Bool) min((576460752303423424LL), (((/* implicit */long long int) -1127909114))));
                /* LoopNest 2 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    for (unsigned short i_6 = 0; i_6 < 22; i_6 += 3) 
                    {
                        {
                            var_25 = arr_17 [i_4] [i_4] [i_6];
                            var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */long long int) 4177920)) + ((-9223372036854775807LL - 1LL))))) ? (min((((/* implicit */long long int) var_13)), (-4205333013024064821LL))) : (((/* implicit */long long int) ((int) arr_8 [i_4 + 1])))));
                            arr_20 [i_3] [i_3] [i_3] [i_4] [i_5] [i_6] &= ((/* implicit */unsigned int) min((((/* implicit */int) arr_13 [i_5])), ((-(((/* implicit */int) (!(((/* implicit */_Bool) 3855030157U)))))))));
                            var_27 = ((/* implicit */unsigned int) ((8589934591ULL) | (((/* implicit */unsigned long long int) 4398012956672LL))));
                        }
                    } 
                } 
                var_28 *= ((unsigned int) var_8);
                var_29 = ((/* implicit */int) max((var_14), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_7 [i_4] [i_4 + 1])))))));
            }
        } 
    } 
}
