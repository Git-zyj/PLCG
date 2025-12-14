/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221458
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221458 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221458
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
    var_20 = ((/* implicit */_Bool) ((min((((/* implicit */unsigned long long int) (((-9223372036854775807LL - 1LL)) / (((/* implicit */long long int) ((/* implicit */int) (short)(-32767 - 1))))))), (max((((/* implicit */unsigned long long int) var_15)), (9398684781028121769ULL))))) ^ (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */int) var_15)) < (((/* implicit */int) (_Bool)0))))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (short i_2 = 0; i_2 < 23; i_2 += 3) 
                {
                    var_21 = ((/* implicit */_Bool) (-(((((/* implicit */long long int) ((/* implicit */int) var_15))) / (arr_4 [(short)20] [i_1])))));
                    arr_7 [i_2] = (-(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_15))) <= (var_14)))));
                    var_22 = ((/* implicit */unsigned short) ((((/* implicit */int) ((var_19) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [3] [i_1] [i_1])))))) >= (((/* implicit */int) ((((/* implicit */_Bool) var_19)) || (((/* implicit */_Bool) var_11)))))));
                    var_23 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)19162))))) ? ((~(((/* implicit */int) arr_0 [i_1])))) : (((((/* implicit */_Bool) (short)27502)) ? (((/* implicit */int) (unsigned short)64440)) : (((/* implicit */int) var_9))))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 3) 
                    {
                        var_24 += ((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)26)))))));
                        arr_10 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_19)) ? (((/* implicit */int) (short)3540)) : (((/* implicit */int) (_Bool)0)))) < (((/* implicit */int) ((arr_1 [i_0]) <= (((/* implicit */int) var_7)))))));
                    }
                }
                /* LoopNest 2 */
                for (unsigned short i_4 = 0; i_4 < 23; i_4 += 3) 
                {
                    for (short i_5 = 0; i_5 < 23; i_5 += 3) 
                    {
                        {
                            var_25 ^= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (-(-7474997041837615598LL)))) ? (((/* implicit */int) max(((_Bool)1), ((_Bool)1)))) : (((/* implicit */int) min((((/* implicit */short) var_1)), ((short)6734)))))) * (max(((-(((/* implicit */int) (_Bool)0)))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_4])))))))));
                            var_26 = ((/* implicit */unsigned char) (+(min((((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) var_17)) : (((/* implicit */int) arr_14 [i_0] [i_4] [i_1] [i_5])))), ((~(((/* implicit */int) arr_14 [i_0] [i_4] [i_0] [i_0]))))))));
                            arr_15 [i_0] [i_1] [i_0] [i_4] = ((/* implicit */unsigned long long int) (-((-((-(((/* implicit */int) (signed char)59))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_27 = ((/* implicit */_Bool) (~(min(((+(((/* implicit */int) var_9)))), ((~(((/* implicit */int) var_3))))))));
    var_28 = ((/* implicit */short) min((((((/* implicit */_Bool) ((((/* implicit */int) var_15)) / (((/* implicit */int) var_6))))) ? (((/* implicit */unsigned long long int) ((1091062232) / (((/* implicit */int) var_7))))) : (min((((/* implicit */unsigned long long int) var_10)), (8471484399074370147ULL))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((_Bool)0) ? (var_12) : (((/* implicit */int) var_15))))) ? (((-1091062229) / (((/* implicit */int) var_7)))) : (((((((/* implicit */int) var_15)) + (2147483647))) << (((((/* implicit */int) var_1)) - (90))))))))));
}
