/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219093
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219093 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219093
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
    for (long long int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 4; i_2 < 14; i_2 += 4) 
                {
                    for (int i_3 = 0; i_3 < 18; i_3 += 3) 
                    {
                        {
                            var_18 -= ((/* implicit */_Bool) (((+(arr_7 [i_2 - 4] [i_2 - 4] [i_2]))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_3 [i_2]))))) ? (((/* implicit */int) ((((/* implicit */_Bool) 4294967274U)) && (((/* implicit */_Bool) 4294967274U))))) : (2147483635))))));
                            var_19 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_2])) ? (min((-1), (((/* implicit */int) arr_4 [i_2])))) : ((-(((((/* implicit */int) arr_3 [i_2])) / (((/* implicit */int) (_Bool)1))))))));
                        }
                    } 
                } 
                var_20 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967266U)) ? (((/* implicit */int) arr_4 [(unsigned char)4])) : (((/* implicit */int) (unsigned short)15360))))) ? (((/* implicit */long long int) max((arr_8 [i_0] [i_0]), (arr_8 [i_1] [i_1])))) : (((((var_9) + (9223372036854775807LL))) >> (((((/* implicit */int) arr_4 [(unsigned char)10])) - (52290)))))));
                var_21 = ((/* implicit */int) (~(((((/* implicit */_Bool) (~(0U)))) ? (((((/* implicit */_Bool) arr_9 [i_0] [i_1])) ? (268431360U) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_17)) == (((/* implicit */int) (short)9148))))))))));
            }
        } 
    } 
    var_22 *= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) <= (((((2147483614) > (((/* implicit */int) (unsigned short)50308)))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) 268431360U)) : (var_7))) : (((/* implicit */unsigned long long int) 4294967295U))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
    {
        var_23 ^= ((/* implicit */unsigned long long int) arr_0 [6ULL]);
        var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)32)) ? (2147483647) : (2147483647)));
        arr_13 [i_4] = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_4))));
    }
    /* vectorizable */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
    {
        var_25 = ((/* implicit */unsigned long long int) (~(0LL)));
        arr_17 [i_5] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (arr_15 [i_5] [i_5])));
        arr_18 [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_14 [i_5] [i_5])) ? (((/* implicit */int) arr_6 [i_5] [i_5] [i_5])) : (((/* implicit */int) var_16))));
    }
}
