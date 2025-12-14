/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220748
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220748 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220748
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
    var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) ((((/* implicit */_Bool) var_11)) ? (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) var_1))))), (((18446744073709551615ULL) << (((((/* implicit */int) var_8)) + (11583))))))) : (((/* implicit */unsigned long long int) (-(((var_11) / (((/* implicit */long long int) ((/* implicit */int) var_12)))))))))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 1; i_0 < 17; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                {
                    /* LoopSeq 3 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        arr_11 [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_3 [i_3] [i_3] [i_0 + 1])) > (((/* implicit */int) var_14)))) ? (((((/* implicit */_Bool) arr_3 [13U] [i_0 - 1] [i_0 - 1])) ? (arr_9 [i_0] [i_0 + 2] [i_0] [(unsigned short)14]) : (((/* implicit */int) arr_3 [i_0 + 2] [(signed char)13] [i_0 + 2])))) : (min((arr_9 [i_0] [i_0 - 1] [i_0 - 1] [i_0 - 1]), (((/* implicit */int) arr_3 [i_1] [i_1] [i_0 - 1]))))));
                        var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) ((((/* implicit */_Bool) min((min((0), (((/* implicit */int) (signed char)125)))), (((/* implicit */int) arr_6 [i_1] [i_1] [(short)14]))))) ? (7100650434757967477LL) : (((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) (signed char)106)) > (((/* implicit */int) var_7))))) | ((~(((/* implicit */int) arr_0 [i_0] [i_0]))))))))))));
                        var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) (+(min((((/* implicit */int) arr_6 [i_0 - 1] [i_0 + 2] [i_0 + 2])), (((((/* implicit */int) arr_0 [i_0] [i_1])) - (((/* implicit */int) var_7)))))))))));
                        var_18 += ((/* implicit */_Bool) ((((/* implicit */int) var_9)) + (((/* implicit */int) var_14))));
                        var_19 ^= min((((unsigned long long int) 18446744073709551590ULL)), (((/* implicit */unsigned long long int) arr_1 [i_0])));
                    }
                    /* vectorizable */
                    for (long long int i_4 = 0; i_4 < 19; i_4 += 2) 
                    {
                        var_20 = ((/* implicit */short) arr_7 [i_0] [i_0] [i_0] [i_0 + 1] [i_0 - 1]);
                        var_21 = ((/* implicit */_Bool) min((var_21), (((((/* implicit */_Bool) (unsigned char)0)) && (arr_2 [i_0 + 2] [i_1])))));
                        var_22 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_5 [i_0] [i_0 - 1] [i_2]))));
                    }
                    /* vectorizable */
                    for (unsigned char i_5 = 1; i_5 < 15; i_5 += 4) 
                    {
                        var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) ((((/* implicit */int) ((unsigned char) arr_13 [i_0] [i_1] [i_5 + 4] [i_5] [i_0]))) % (((/* implicit */int) arr_0 [i_2] [i_2])))))));
                        var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) 9223372036854775795LL)) ? (arr_17 [(short)1] [i_0] [i_0]) : (((/* implicit */long long int) arr_9 [i_1] [i_1] [i_1] [i_1])))) <= (((/* implicit */long long int) var_2)))))));
                        var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) arr_8 [(_Bool)1] [i_0 + 1] [i_2] [i_5]))));
                        var_26 = ((/* implicit */unsigned short) var_12);
                    }
                    var_27 = ((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)49)) && (((/* implicit */_Bool) arr_17 [i_0 - 1] [(unsigned char)7] [i_0 + 2])))))));
                }
            } 
        } 
    } 
    var_28 += ((/* implicit */signed char) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) || (((/* implicit */_Bool) var_6)))))) / (min((((/* implicit */unsigned long long int) var_11)), (11230918713009933432ULL))))))));
}
