/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204067
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204067 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204067
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
    for (unsigned char i_0 = 1; i_0 < 18; i_0 += 4) 
    {
        for (signed char i_1 = 4; i_1 < 20; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned char i_2 = 0; i_2 < 21; i_2 += 1) 
                {
                    arr_9 [i_0 + 3] [i_0 + 3] [i_1] = ((/* implicit */signed char) (~(((/* implicit */int) ((short) ((((/* implicit */int) arr_8 [i_0] [i_1] [18ULL])) - (((/* implicit */int) arr_1 [i_0]))))))));
                    var_16 = ((((((/* implicit */_Bool) (+(((/* implicit */int) var_11))))) ? (max((5686848174194993846ULL), (((/* implicit */unsigned long long int) arr_1 [i_0])))) : (((/* implicit */unsigned long long int) max((var_12), (((/* implicit */long long int) arr_7 [i_1]))))))) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (unsigned short)55029)))));
                }
                for (signed char i_3 = 0; i_3 < 21; i_3 += 3) 
                {
                    var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) min(((+(max((((/* implicit */long long int) arr_5 [i_0] [6LL] [6LL])), (var_12))))), (((/* implicit */long long int) (-(((/* implicit */int) var_14))))))))));
                    var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) ((int) 12759895899514557752ULL)))));
                    arr_14 [i_1] [i_3] [i_1] [i_3] = ((/* implicit */unsigned long long int) min((var_12), (((/* implicit */long long int) (-(((unsigned int) arr_3 [i_3])))))));
                    /* LoopNest 2 */
                    for (unsigned char i_4 = 0; i_4 < 21; i_4 += 3) 
                    {
                        for (signed char i_5 = 0; i_5 < 21; i_5 += 4) 
                        {
                            {
                                arr_19 [i_5] [i_5] [i_1] [i_4] [i_1] [i_1 - 4] [i_0 + 3] = ((/* implicit */signed char) arr_13 [i_0] [i_1] [i_0]);
                                var_19 += ((/* implicit */signed char) var_8);
                                arr_20 [i_1] [i_4] [i_3] [i_1 - 3] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_3 [i_5])) <= (((/* implicit */int) var_7))));
                            }
                        } 
                    } 
                }
                /* LoopSeq 1 */
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    var_20 += ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_1))));
                    var_21 *= ((/* implicit */signed char) ((_Bool) min((((((/* implicit */int) (short)21458)) % (((/* implicit */int) (short)9727)))), (((/* implicit */int) ((var_15) != (var_15)))))));
                }
                arr_25 [14U] [14U] [i_1] &= ((/* implicit */_Bool) var_9);
                var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) min(((+(12759895899514557764ULL))), (((/* implicit */unsigned long long int) max((arr_24 [i_0 + 2] [i_1]), (((/* implicit */short) var_13)))))))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) ((signed char) (unsigned short)65535)))));
                var_23 *= ((/* implicit */short) (signed char)-92);
            }
        } 
    } 
    var_24 = ((/* implicit */long long int) (-(((unsigned int) (+(1343530450U))))));
    var_25 = ((/* implicit */unsigned int) ((var_0) == (((/* implicit */int) max((min((var_8), (((/* implicit */short) var_2)))), (var_11))))));
}
