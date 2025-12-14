/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215946
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215946 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215946
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
    var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned char)209)) : (((/* implicit */int) var_14))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (((((/* implicit */_Bool) (+(var_8)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (max((((/* implicit */unsigned int) (_Bool)1)), (3044640315U))))))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                {
                    arr_10 [(unsigned char)8] [i_1] [i_1] = ((/* implicit */_Bool) (unsigned char)244);
                    var_18 = ((/* implicit */unsigned char) (!((_Bool)0)));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        var_19 = ((/* implicit */short) 805499753);
                        arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((min((((/* implicit */unsigned int) arr_12 [i_3] [(_Bool)1] [i_1] [i_1] [i_1] [i_0])), (3044640315U))) + (((/* implicit */unsigned int) (-(((/* implicit */int) arr_12 [i_0] [(unsigned char)5] [i_2] [i_0] [i_2] [i_2])))))));
                    }
                    for (short i_4 = 0; i_4 < 10; i_4 += 2) 
                    {
                        /* LoopSeq 2 */
                        for (int i_5 = 0; i_5 < 10; i_5 += 4) 
                        {
                            var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) (-(((((/* implicit */int) arr_4 [i_0])) | (((/* implicit */int) arr_4 [i_1])))))))));
                            var_21 = ((/* implicit */int) ((max((min((((/* implicit */unsigned int) var_13)), (3493858529U))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_4 [i_5])) == (((/* implicit */int) arr_2 [i_4]))))))) << (((/* implicit */int) ((((((/* implicit */_Bool) arr_1 [i_0])) || ((_Bool)1))) || (((/* implicit */_Bool) max((((/* implicit */unsigned int) (_Bool)1)), (var_10)))))))));
                            var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((1862461879), (((/* implicit */int) (short)32043))))) ? (((/* implicit */int) ((((((/* implicit */int) arr_2 [i_0])) ^ (((/* implicit */int) arr_16 [i_1] [i_1] [i_1] [i_1] [i_1])))) <= ((~(((/* implicit */int) arr_7 [i_0]))))))) : (((/* implicit */int) (unsigned char)208))));
                        }
                        for (long long int i_6 = 0; i_6 < 10; i_6 += 2) 
                        {
                            var_23 = ((/* implicit */short) (-(max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) < (0ULL)))), (arr_17 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6])))));
                            var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) max(((((((~(((/* implicit */int) (unsigned char)246)))) + (2147483647))) >> ((((~(11088201837725020373ULL))) - (7358542235984531238ULL))))), (((/* implicit */int) ((((/* implicit */int) (unsigned char)209)) < (((/* implicit */int) arr_0 [i_1]))))))))));
                            var_25 = ((/* implicit */short) arr_3 [i_6]);
                            var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) (unsigned char)10))));
                        }
                        var_27 = ((/* implicit */_Bool) max((arr_8 [i_4] [i_1]), ((+(arr_8 [i_0] [i_1])))));
                        var_28 ^= ((/* implicit */short) (-(((((arr_19 [i_0] [i_1] [i_2]) / (arr_19 [i_2] [i_2] [i_2]))) * (max((((/* implicit */long long int) (_Bool)1)), (0LL)))))));
                    }
                    var_29 = ((/* implicit */unsigned long long int) max((var_29), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) arr_15 [i_0] [i_1]))))) << ((((~(((/* implicit */int) (unsigned char)9)))) + (21))))))));
                }
            } 
        } 
    } 
    var_30 = ((/* implicit */unsigned char) min((((/* implicit */long long int) max((((/* implicit */int) var_0)), (((((/* implicit */_Bool) (unsigned char)157)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)21915))))))), (((((/* implicit */_Bool) (-(-6806888497355485855LL)))) ? (((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) var_6)) ? (var_16) : (((/* implicit */long long int) ((/* implicit */int) var_7)))))))));
    var_31 ^= ((/* implicit */short) var_1);
}
