/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199887
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199887 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199887
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
    for (long long int i_0 = 1; i_0 < 17; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 2; i_2 < 16; i_2 += 2) 
                {
                    for (int i_3 = 0; i_3 < 18; i_3 += 2) 
                    {
                        {
                            var_10 = ((/* implicit */long long int) max((((((/* implicit */_Bool) ((var_5) ? (((/* implicit */unsigned long long int) var_3)) : (arr_9 [i_3] [i_2] [i_1])))) ? (((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)4627))) : (2077535426U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((signed char) var_5))) ? (((/* implicit */int) max((var_1), (((/* implicit */short) arr_4 [i_0] [i_0] [i_0]))))) : (((142651003) / (((/* implicit */int) arr_0 [i_2 + 2])))))))));
                            arr_13 [i_0] [(short)10] [(short)10] [i_3] = ((/* implicit */unsigned short) arr_6 [i_0] [i_1] [i_1]);
                            arr_14 [i_0] [i_0] [i_2 - 2] = max((2077535443U), (((/* implicit */unsigned int) var_6)));
                        }
                    } 
                } 
                arr_15 [i_0] = ((/* implicit */short) max((((((/* implicit */_Bool) ((var_4) & (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))) ? ((~(var_0))) : (((/* implicit */int) arr_12 [i_1] [i_0 + 1] [i_0 - 1] [(signed char)8])))), (((/* implicit */int) arr_2 [i_0]))));
                var_11 = ((/* implicit */unsigned int) max((var_11), (((/* implicit */unsigned int) ((_Bool) (-(((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_7 [i_0 - 1] [i_1])) : (((/* implicit */int) arr_2 [i_0]))))))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (signed char i_4 = 0; i_4 < 18; i_4 += 1) 
                {
                    arr_18 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_10 [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0 + 1] [i_0] [i_0 + 1]))) : (2077535443U)));
                    /* LoopSeq 2 */
                    for (unsigned short i_5 = 0; i_5 < 18; i_5 += 1) 
                    {
                        var_12 = ((/* implicit */unsigned long long int) ((short) arr_12 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0]));
                        var_13 += ((/* implicit */_Bool) ((short) var_4));
                    }
                    for (unsigned int i_6 = 0; i_6 < 18; i_6 += 4) 
                    {
                        var_14 ^= ((/* implicit */unsigned short) ((short) (+(2077535427U))));
                        arr_23 [i_0 - 1] [i_0] [i_0] [i_6] = ((/* implicit */long long int) (~(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_4 [i_6] [i_1] [i_1]))))));
                        var_15 = ((/* implicit */unsigned long long int) var_7);
                    }
                }
                for (short i_7 = 0; i_7 < 18; i_7 += 2) 
                {
                    var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) ((((((/* implicit */_Bool) (unsigned short)50195)) ? (((((/* implicit */_Bool) arr_4 [(unsigned char)1] [i_1] [i_7])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-5))) : (arr_9 [i_0] [i_1] [i_7]))) : (arr_24 [i_0] [i_0 - 1] [i_0 - 1]))) & (((/* implicit */unsigned long long int) ((((var_5) ? (var_3) : (var_4))) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) 523776))))))))))))));
                    arr_26 [i_0] [(short)4] [(short)4] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 16590408240554482305ULL)) ? (((/* implicit */int) (signed char)-123)) : (1)))) ? (var_8) : (((/* implicit */int) ((unsigned short) var_8)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1] [i_1] [i_0]))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_0 + 1]))) : (283591563U)))));
                    var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_25 [i_0 + 1] [i_7])) ? (((/* implicit */int) ((short) arr_3 [i_7] [i_7]))) : (((((/* implicit */int) arr_16 [i_0] [i_0])) / (((/* implicit */int) (short)29967)))))) - (((/* implicit */int) ((short) ((short) var_2)))))))));
                    var_18 = ((/* implicit */unsigned char) ((((max((var_8), (((/* implicit */int) (unsigned short)6063)))) * (((((/* implicit */int) var_7)) * (((/* implicit */int) var_5)))))) << (((long long int) ((((/* implicit */_Bool) (unsigned char)47)) && ((_Bool)0))))));
                }
            }
        } 
    } 
    var_19 = ((/* implicit */int) var_6);
    var_20 = ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))) > (16511231331450340033ULL))) ? (max((((((/* implicit */_Bool) (unsigned short)11143)) ? (((/* implicit */int) (signed char)100)) : (((/* implicit */int) (short)-10488)))), (((((/* implicit */_Bool) var_0)) ? (var_0) : (var_0))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) var_9)) : (var_8)))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) ((((/* implicit */_Bool) 510830851)) && (((/* implicit */_Bool) (unsigned char)15)))))))));
    var_21 = ((/* implicit */unsigned int) (+(((/* implicit */int) (short)-26865))));
}
