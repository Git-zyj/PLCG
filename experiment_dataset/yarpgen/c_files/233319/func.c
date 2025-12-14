/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233319
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233319 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233319
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
    var_15 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (unsigned char)194)) : (((/* implicit */int) (_Bool)1)))), ((+(((/* implicit */int) var_14))))))) ? ((~(max((var_8), (((/* implicit */unsigned long long int) var_9)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(18446744073709551615ULL)))) ? (((/* implicit */int) ((short) var_10))) : (((/* implicit */int) ((_Bool) var_6))))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_16 = ((/* implicit */unsigned long long int) ((unsigned short) ((arr_2 [i_0]) ^ (arr_2 [i_0]))));
        var_17 |= ((/* implicit */signed char) ((_Bool) (!(((/* implicit */_Bool) (unsigned char)252)))));
        arr_3 [i_0] = ((/* implicit */unsigned short) ((arr_0 [i_0]) ? (((/* implicit */unsigned long long int) min((((/* implicit */int) arr_1 [(unsigned short)9] [i_0])), (min((((/* implicit */int) arr_0 [i_0])), (arr_2 [i_0])))))) : (((((18139888770239142300ULL) & (5ULL))) | (((var_8) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))))));
    }
    /* LoopNest 3 */
    for (unsigned char i_1 = 0; i_1 < 13; i_1 += 2) 
    {
        for (unsigned char i_2 = 4; i_2 < 11; i_2 += 4) 
        {
            for (unsigned char i_3 = 0; i_3 < 13; i_3 += 2) 
            {
                {
                    var_18 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_2 - 2])) && ((!(((/* implicit */_Bool) arr_11 [i_2]))))))) * (((/* implicit */int) arr_8 [i_1] [i_2] [i_3]))));
                    /* LoopSeq 1 */
                    for (unsigned char i_4 = 0; i_4 < 13; i_4 += 2) 
                    {
                        var_19 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) (+(var_11)))))) ? ((+(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)196))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((signed char) (_Bool)1))))))));
                        var_20 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) var_8)))) || (((/* implicit */_Bool) ((unsigned int) arr_13 [(short)9] [i_2])))));
                        var_21 = ((/* implicit */unsigned int) ((int) ((unsigned long long int) ((var_10) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_3])))))));
                        var_22 = ((/* implicit */unsigned int) (~((~(((/* implicit */int) min((arr_8 [i_4] [i_3] [i_1]), (((/* implicit */signed char) arr_0 [i_1])))))))));
                    }
                    var_23 = ((/* implicit */_Bool) (-(((/* implicit */int) ((unsigned char) (!(((/* implicit */_Bool) var_2))))))));
                    var_24 = ((/* implicit */signed char) max((((/* implicit */short) (((+(((/* implicit */int) arr_5 [i_1] [i_1])))) < (((((/* implicit */int) arr_8 [i_1] [i_2 + 2] [i_3])) >> (((/* implicit */int) (_Bool)1))))))), (max((arr_9 [i_2 - 1] [i_2 + 1]), (((/* implicit */short) arr_5 [i_2 - 3] [i_2 + 2]))))));
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)0)) ? (((/* implicit */int) (signed char)-50)) : (((/* implicit */int) (signed char)3))));
}
