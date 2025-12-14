/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221378
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221378 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221378
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
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) max((((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)0))) * (var_1))) / (max((((/* implicit */unsigned long long int) (unsigned char)77)), (arr_0 [i_0] [i_0]))))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_1 [i_0])))))));
        var_13 += (~(((((/* implicit */_Bool) (unsigned char)170)) ? (12493158141728849424ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)0))))));
        var_14 &= ((/* implicit */unsigned char) var_11);
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 19; i_2 += 4) 
            {
                {
                    var_15 = ((/* implicit */short) ((((6489822037900711135LL) - (((/* implicit */long long int) ((/* implicit */int) (short)31888))))) & (((/* implicit */long long int) ((arr_3 [i_2 - 3]) ? ((-(((/* implicit */int) (short)23754)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_1]))))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 1; i_3 < 19; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 4; i_4 < 18; i_4 += 4) 
                        {
                            {
                                arr_15 [i_0] [i_1] [i_1] [i_0] [i_2] [i_3] [i_0] = ((/* implicit */_Bool) min((((unsigned int) 6489822037900711135LL)), (((/* implicit */unsigned int) (-(((/* implicit */int) (short)6)))))));
                                var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-31888)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_4 [12ULL] [i_0] [(short)0])) : (((/* implicit */int) arr_13 [i_3]))))) : (((unsigned int) 1047337172U))))) ? (max((((/* implicit */unsigned long long int) ((var_11) >= (1116267962U)))), (arr_14 [i_4 + 2] [i_4 + 2] [i_3 + 1] [i_2 - 2] [i_4 + 2] [i_1] [i_3]))) : (((/* implicit */unsigned long long int) min((((/* implicit */int) min(((short)31893), ((short)-31869)))), (((((/* implicit */_Bool) (unsigned char)163)) ? (((/* implicit */int) arr_12 [i_4])) : (((/* implicit */int) (unsigned char)101)))))))));
                                var_17 = ((/* implicit */short) min((arr_14 [(short)10] [i_4 - 2] [i_2 - 2] [17] [(short)10] [i_2] [i_1]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_13 [i_2]), (((/* implicit */short) (_Bool)0))))) ? (((/* implicit */int) arr_8 [i_2 - 2] [i_3 - 1] [i_3 - 1] [i_4 - 4])) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (short)31869)) : (((/* implicit */int) (_Bool)1)))))))));
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) max((var_10), (((/* implicit */int) (short)-13545))))) && (((/* implicit */_Bool) (short)13551))))), (max((((/* implicit */long long int) arr_6 [(unsigned char)0] [i_1] [i_2 - 2])), ((+(-3463032004960883614LL)))))));
                }
            } 
        } 
    }
    var_19 = ((/* implicit */unsigned char) (+(max(((+(var_9))), (((/* implicit */unsigned long long int) min((-3463032004960883617LL), (((/* implicit */long long int) var_4)))))))));
    var_20 = ((/* implicit */_Bool) (short)-32767);
}
