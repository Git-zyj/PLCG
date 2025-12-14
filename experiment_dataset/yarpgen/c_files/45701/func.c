/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45701
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45701 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45701
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
    var_11 = ((/* implicit */_Bool) (-9223372036854775807LL - 1LL));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_12 = min((((((/* implicit */_Bool) 1778252391)) && ((_Bool)1))), ((!(((/* implicit */_Bool) arr_1 [i_0])))));
        var_13 -= ((/* implicit */signed char) (+(max((((2963408843U) << (((/* implicit */int) (unsigned char)29)))), (((unsigned int) (_Bool)1))))));
        arr_2 [i_0] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_5) : (((/* implicit */int) (_Bool)1))))) ? (((unsigned int) (_Bool)1)) : (min((((/* implicit */unsigned int) arr_0 [i_0])), (arr_1 [i_0]))))) ^ (((/* implicit */unsigned int) ((/* implicit */int) (signed char)1)))));
    }
    /* LoopNest 3 */
    for (unsigned char i_1 = 0; i_1 < 23; i_1 += 4) 
    {
        for (int i_2 = 0; i_2 < 23; i_2 += 2) 
        {
            for (int i_3 = 0; i_3 < 23; i_3 += 2) 
            {
                {
                    var_14 = ((/* implicit */unsigned char) (_Bool)1);
                    var_15 = ((/* implicit */int) arr_6 [i_3]);
                    arr_12 [i_1] [i_1] [i_1] [i_1] = (+(((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)246)) && (((/* implicit */_Bool) arr_10 [i_1] [i_1] [i_1]))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (signed char i_4 = 1; i_4 < 21; i_4 += 4) 
                    {
                        var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) arr_7 [i_4 + 1] [i_4 + 1])) : (arr_9 [i_4 + 2] [i_4] [i_4] [i_4 - 1]))))));
                        var_17 = ((/* implicit */_Bool) 1044480);
                        var_18 = ((/* implicit */signed char) ((unsigned int) (unsigned char)126));
                        var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(2095104U)))) ? (((/* implicit */int) arr_3 [i_4 - 1])) : (((/* implicit */int) arr_13 [i_1] [i_2] [i_4 - 1]))));
                    }
                    for (int i_5 = 2; i_5 < 21; i_5 += 4) 
                    {
                        arr_19 [2U] [i_3] [i_1] [i_1] [i_1] |= ((/* implicit */unsigned int) ((int) ((arr_16 [i_5 + 1] [i_5 + 1] [i_3] [(signed char)18]) != (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))));
                        var_20 += ((/* implicit */int) (unsigned char)9);
                        arr_20 [i_2] [i_1] = ((/* implicit */unsigned char) (+(((arr_13 [5U] [i_5 - 1] [i_5 + 1]) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_4))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)81)))))));
                        arr_21 [i_2] [i_2] [i_3] [i_3] = ((/* implicit */unsigned int) arr_5 [i_5]);
                        arr_22 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */int) var_9);
                    }
                    /* LoopSeq 1 */
                    for (int i_6 = 0; i_6 < 23; i_6 += 2) 
                    {
                        var_21 ^= ((/* implicit */long long int) arr_24 [i_2] [i_1] [i_3] [i_3] [i_2] [i_1]);
                        var_22 = max((((long long int) (_Bool)1)), (((/* implicit */long long int) ((((/* implicit */_Bool) ((signed char) 50331648))) ? (((/* implicit */int) min((((/* implicit */unsigned char) arr_6 [i_1])), ((unsigned char)254)))) : (((/* implicit */int) var_1))))));
                    }
                }
            } 
        } 
    } 
}
