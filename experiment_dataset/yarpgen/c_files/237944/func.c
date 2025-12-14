/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237944
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237944 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237944
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
    var_18 = ((/* implicit */long long int) var_14);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (short i_2 = 0; i_2 < 19; i_2 += 2) 
                {
                    arr_7 [i_0] = ((/* implicit */long long int) var_0);
                    arr_8 [i_0] [i_2] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)15)) ? (((((/* implicit */int) (signed char)104)) - (((/* implicit */int) (signed char)46)))) : (((/* implicit */int) (unsigned char)255))))) | (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_3 [i_0]))))) % (arr_6 [i_0] [i_0])))));
                }
                arr_9 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) max((((/* implicit */unsigned char) (signed char)120)), ((unsigned char)15)))) / (((((/* implicit */_Bool) (signed char)-105)) ? (var_14) : ((+(((/* implicit */int) arr_1 [i_1]))))))));
                arr_10 [i_0] [i_0] [i_0] = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((arr_4 [i_0]) != (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0)))))), (var_15)));
                /* LoopNest 2 */
                for (long long int i_3 = 0; i_3 < 19; i_3 += 2) 
                {
                    for (int i_4 = 1; i_4 < 16; i_4 += 4) 
                    {
                        {
                            var_19 -= ((/* implicit */long long int) -2147483638);
                            arr_15 [i_4] [i_1] [i_0] [i_0] = ((/* implicit */short) (+(var_9)));
                            /* LoopSeq 2 */
                            for (signed char i_5 = 1; i_5 < 18; i_5 += 1) 
                            {
                                arr_18 [i_0] [i_1] [i_3] [i_3] [i_0] [i_0] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 849571421)) ? (((/* implicit */int) var_4)) : (((arr_13 [i_4] [i_4 + 2] [i_4] [i_4 + 1]) | (((/* implicit */int) var_17))))));
                                var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) (+(max((arr_5 [i_4 + 3] [i_3] [i_5 - 1]), (((/* implicit */unsigned long long int) arr_3 [i_0])))))))));
                                arr_19 [i_0] [i_0] [i_0] [i_5] = ((/* implicit */short) (+(((/* implicit */int) ((((/* implicit */int) var_1)) < (((/* implicit */int) arr_14 [2LL] [i_4 - 1] [i_4 + 1] [i_4 + 1] [i_4 - 1] [i_4 + 2])))))));
                            }
                            for (signed char i_6 = 0; i_6 < 19; i_6 += 1) 
                            {
                                arr_24 [i_0] [i_1] [i_3] [i_0] [i_3] |= ((/* implicit */int) ((short) max((arr_6 [i_0] [i_3]), (((/* implicit */unsigned long long int) var_4)))));
                                arr_25 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) var_16))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_14 [i_0] [i_1] [8] [i_4 + 2] [i_6] [i_4 - 1]))) < (2068604358993241068LL)))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) -3677041772174047270LL)) < (arr_4 [i_4 - 1]))))));
                            }
                        }
                    } 
                } 
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned int) var_2);
}
