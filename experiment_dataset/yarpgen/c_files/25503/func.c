/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25503
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25503 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25503
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
    for (long long int i_0 = 2; i_0 < 22; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                var_11 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)181)))))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_3 [i_0] [(short)4] [i_0 + 1])) : (((/* implicit */int) arr_3 [(short)11] [i_0] [(short)11])))) : (((/* implicit */int) arr_2 [i_0 + 1] [i_0 - 2]))))) ? (((/* implicit */int) (unsigned short)7936)) : (max(((+(((/* implicit */int) var_5)))), (((/* implicit */int) ((((/* implicit */_Bool) -229153116933364202LL)) || (((/* implicit */_Bool) (short)16333)))))))));
                /* LoopSeq 1 */
                for (unsigned short i_2 = 0; i_2 < 23; i_2 += 2) 
                {
                    arr_8 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) var_1))))) >> (((((((((/* implicit */_Bool) arr_0 [i_1] [i_2])) && (((/* implicit */_Bool) var_7)))) ? (min((((/* implicit */long long int) arr_1 [i_1])), (var_9))) : (((/* implicit */long long int) (+(((/* implicit */int) var_8))))))) + (9211963805787185580LL)))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (long long int i_3 = 0; i_3 < 23; i_3 += 2) 
                    {
                        var_12 = (short)-14527;
                        var_13 = ((((/* implicit */_Bool) var_10)) ? (9223372036854775793LL) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [(unsigned short)10] [i_0 - 1] [i_0 - 2] [i_0]))));
                        arr_12 [i_0] [i_1] [i_2] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_7 [i_0] [i_0 - 1] [i_0] [i_0 - 1])) ? (((/* implicit */int) arr_7 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 - 2])) : (((/* implicit */int) arr_7 [i_0 + 1] [i_0 + 1] [i_0] [i_0 + 1]))));
                        arr_13 [i_3] [i_2] [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_10 [i_0 - 1] [i_0 - 2] [i_0] [i_0 - 2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_0 - 1] [i_0 - 2] [i_0] [i_0]))) : (var_7)));
                    }
                    for (long long int i_4 = 0; i_4 < 23; i_4 += 1) 
                    {
                        arr_16 [i_0] [i_4] [i_1] [i_0] [i_0] [i_4] = min((var_10), (((/* implicit */long long int) (unsigned short)32768)));
                        arr_17 [(short)2] [i_1] [i_2] [i_4] [i_4] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) var_5)) ? (min((arr_0 [i_2] [i_0 - 1]), (((/* implicit */long long int) var_1)))) : (((/* implicit */long long int) ((/* implicit */int) var_5)))));
                    }
                }
            }
        } 
    } 
    var_14 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_9) : (var_7)))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (short)-14537)) : (((/* implicit */int) var_1)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))))) ? (((((/* implicit */long long int) ((/* implicit */int) var_0))) + (((var_7) - (((/* implicit */long long int) ((/* implicit */int) var_1))))))) : (((/* implicit */long long int) ((((((/* implicit */int) var_5)) < (((/* implicit */int) (unsigned char)70)))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_8))))))))));
}
