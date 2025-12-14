/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236996
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236996 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236996
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
    var_17 = ((/* implicit */short) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))));
    var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) (~(max((((/* implicit */unsigned int) (-(((/* implicit */int) var_5))))), ((-(var_16))))))))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (signed char i_1 = 2; i_1 < 22; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                {
                    arr_8 [i_0 - 1] [i_2] [i_0 - 1] |= ((/* implicit */unsigned long long int) arr_4 [i_1] [i_1 - 2]);
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 23; i_3 += 4) 
                    {
                        for (short i_4 = 0; i_4 < 23; i_4 += 3) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0])) || (((/* implicit */_Bool) max((max((((/* implicit */short) (_Bool)1)), ((short)-27796))), (((/* implicit */short) (signed char)-1))))))))));
                                var_20 ^= (((+(((unsigned long long int) (signed char)-54)))) + (((/* implicit */unsigned long long int) (+((-(((/* implicit */int) arr_2 [i_0] [i_0]))))))));
                            }
                        } 
                    } 
                    var_21 -= ((/* implicit */signed char) min((((/* implicit */int) arr_9 [i_0 - 1])), (((((/* implicit */int) arr_9 [i_0 - 1])) << (((/* implicit */int) arr_9 [i_0 - 1]))))));
                    arr_15 [i_1] [i_1] |= ((/* implicit */int) arr_12 [i_1] [i_1] [(_Bool)1] [i_1 - 1] [i_1 - 2]);
                    var_22 -= ((/* implicit */long long int) arr_10 [18LL] [0]);
                }
            } 
        } 
        arr_16 [i_0] = ((/* implicit */signed char) max((((/* implicit */unsigned int) var_5)), (arr_13 [i_0] [i_0])));
        var_23 = ((/* implicit */int) arr_11 [i_0]);
    }
    /* vectorizable */
    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) /* same iter space */
    {
        var_24 *= ((/* implicit */unsigned int) (-(((/* implicit */int) arr_5 [i_5 - 1]))));
        var_25 *= var_14;
        var_26 = ((/* implicit */long long int) max((var_26), (((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_5] [(signed char)8] [(short)6]))))))))));
        arr_20 [i_5] [i_5] = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_3 [i_5] [i_5] [i_5 - 1])) && (((/* implicit */_Bool) var_15)))) || ((!(arr_7 [(signed char)11] [i_5 - 1])))));
        var_27 = ((/* implicit */int) (!(((/* implicit */_Bool) var_1))));
    }
    var_28 = min((((/* implicit */long long int) ((((/* implicit */_Bool) min((var_2), (var_16)))) && (((/* implicit */_Bool) var_2))))), (var_13));
}
