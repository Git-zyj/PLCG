/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33698
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33698 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33698
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
    var_20 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)32265)) ? (((/* implicit */long long int) ((/* implicit */int) (short)16180))) : (7524926536855615053LL)));
    var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) (~(min((var_10), (((/* implicit */long long int) (unsigned short)4095)))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_22 = ((/* implicit */unsigned long long int) (+((~(((/* implicit */int) (unsigned short)0))))));
                /* LoopSeq 2 */
                for (long long int i_2 = 1; i_2 < 10; i_2 += 2) /* same iter space */
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (short i_3 = 1; i_3 < 11; i_3 += 3) 
                    {
                        var_23 = (!(((/* implicit */_Bool) arr_9 [i_2] [i_2 + 1] [i_2 - 1])));
                        var_24 *= ((/* implicit */signed char) arr_3 [i_3 - 1] [i_3 - 1]);
                    }
                    var_25 = ((/* implicit */unsigned long long int) (~(var_15)));
                    var_26 = ((/* implicit */_Bool) min(((~(((4945266532901149786ULL) ^ (0ULL))))), (((/* implicit */unsigned long long int) max((((/* implicit */int) ((unsigned char) var_5))), (min((var_16), (((/* implicit */int) (unsigned short)0)))))))));
                }
                for (long long int i_4 = 1; i_4 < 10; i_4 += 2) /* same iter space */
                {
                    var_27 |= ((/* implicit */unsigned short) ((min((min((((/* implicit */unsigned long long int) (unsigned short)11)), (var_18))), (((/* implicit */unsigned long long int) max((((/* implicit */short) arr_9 [i_0] [i_1] [i_4 + 1])), ((short)15)))))) <= (max((var_18), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [6U] [i_1])) == (((/* implicit */int) (signed char)30)))))))));
                    var_28 ^= ((/* implicit */_Bool) min((((((/* implicit */int) (unsigned short)30296)) ^ ((+(((/* implicit */int) (_Bool)0)))))), (((/* implicit */int) ((short) ((((/* implicit */int) arr_7 [i_0] [i_1] [i_4] [8ULL])) + (((/* implicit */int) var_2))))))));
                }
                /* LoopNest 3 */
                for (signed char i_5 = 3; i_5 < 10; i_5 += 3) 
                {
                    for (short i_6 = 1; i_6 < 8; i_6 += 4) 
                    {
                        for (int i_7 = 0; i_7 < 12; i_7 += 3) 
                        {
                            {
                                var_29 &= ((/* implicit */short) min(((~(2199023255551ULL))), (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) (unsigned char)2)))) || (((/* implicit */_Bool) (short)-16181)))))));
                                var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_4 [i_0] [5ULL] [i_0])) ? (((/* implicit */long long int) ((((/* implicit */int) var_1)) + ((+(((/* implicit */int) (short)16180))))))) : (var_10)));
                                var_31 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) -4932030400342675750LL)))) ? (arr_1 [i_1] [i_0]) : (((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_5 [i_5] [i_1]))))) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)73)) && (((/* implicit */_Bool) var_10))))) : (((((/* implicit */int) (_Bool)0)) / (((/* implicit */int) arr_5 [i_0] [i_0])))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_32 = ((/* implicit */int) (-(((long long int) ((signed char) (short)-21930)))));
}
