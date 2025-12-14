/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221955
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221955 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221955
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
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (int i_1 = 2; i_1 < 15; i_1 += 1) 
        {
            {
                arr_5 [i_0] = ((/* implicit */unsigned long long int) var_10);
                var_18 = ((/* implicit */_Bool) ((((var_0) + (2147483647))) >> (((/* implicit */int) ((short) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) > (1962870323U)))))));
                var_19 = ((/* implicit */short) (!(((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 1877520333U)) ? (((/* implicit */int) (short)23894)) : (((/* implicit */int) (signed char)32)))))))));
                arr_6 [i_0] [i_1] = ((/* implicit */unsigned int) max((min((0), (((/* implicit */int) arr_3 [i_1 + 1] [i_1 - 2])))), (((/* implicit */int) min((((/* implicit */unsigned char) arr_1 [i_0])), (arr_3 [i_1 - 2] [i_1 - 2]))))));
            }
        } 
    } 
    var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) var_12))))) + (((/* implicit */int) (signed char)4))))) != (min((((/* implicit */long long int) ((unsigned char) 9223372036854775807LL))), ((-9223372036854775807LL - 1LL)))))))));
    /* LoopNest 2 */
    for (unsigned int i_2 = 0; i_2 < 12; i_2 += 2) 
    {
        for (unsigned char i_3 = 0; i_3 < 12; i_3 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (short i_4 = 0; i_4 < 12; i_4 += 1) 
                {
                    var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) ((((((9223372036854775796LL) ^ (((/* implicit */long long int) ((/* implicit */int) var_4))))) <= (((/* implicit */long long int) ((/* implicit */int) (signed char)-4))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (arr_14 [i_2] [i_3] [i_2]) : (((/* implicit */unsigned long long int) arr_15 [i_2] [i_3]))))))))));
                    var_22 ^= ((/* implicit */unsigned int) ((short) arr_15 [i_2] [i_2]));
                    var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) (_Bool)1))));
                }
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    var_24 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_0))));
                    var_25 |= ((/* implicit */int) -1LL);
                    arr_18 [(unsigned short)0] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) var_15)) || (((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_11 [i_3] [i_5])) ? (((/* implicit */long long int) var_1)) : (9223372036854775807LL))), (((/* implicit */long long int) var_3)))))));
                    arr_19 [i_2] [i_3] [i_5] [i_2] |= ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) max((arr_17 [i_2]), (((/* implicit */short) arr_8 [i_2])))))) ^ (min((((/* implicit */unsigned int) var_14)), (arr_9 [i_2] [i_2])))));
                }
                var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 65535)) ? (((/* implicit */int) (signed char)16)) : (((/* implicit */int) arr_3 [i_2] [13U]))))) ? (((/* implicit */int) min((((/* implicit */short) ((((/* implicit */_Bool) var_14)) && (((/* implicit */_Bool) var_2))))), (var_10)))) : ((~((~(((/* implicit */int) arr_0 [i_3]))))))));
            }
        } 
    } 
}
