/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28955
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28955 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28955
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
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                arr_4 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) max((((/* implicit */unsigned short) (unsigned char)255)), ((unsigned short)62843)));
                var_19 = ((/* implicit */unsigned short) 2346247740U);
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 1; i_2 < 9; i_2 += 2) 
                {
                    for (long long int i_3 = 0; i_3 < 11; i_3 += 1) 
                    {
                        {
                            /* LoopSeq 2 */
                            for (unsigned short i_4 = 0; i_4 < 11; i_4 += 2) 
                            {
                                var_20 = min((((((/* implicit */_Bool) var_7)) ? (arr_6 [i_2 + 2] [i_2 + 2] [i_2 + 1] [i_2 + 1]) : (var_4))), (var_8));
                                arr_13 [i_0] [i_0] [i_2] [i_3] [(unsigned short)7] = ((/* implicit */unsigned short) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((473625439U) | (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-51)))))))))));
                            }
                            /* vectorizable */
                            for (unsigned int i_5 = 0; i_5 < 11; i_5 += 2) 
                            {
                                var_21 -= ((/* implicit */signed char) (-(arr_14 [i_5] [i_2 + 2] [i_2 - 1] [i_2 + 2] [i_2] [i_2 + 2])));
                                var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)15867)) | (-1775606927)))) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) arr_10 [(unsigned char)0] [i_2 - 1] [(unsigned short)6] [i_3] [(_Bool)1] [(unsigned short)7] [i_3])))));
                                var_23 -= ((/* implicit */unsigned long long int) var_9);
                                arr_17 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (-(arr_2 [i_2 + 1])));
                                arr_18 [i_0] [i_1] [i_2] [i_0] [i_2 + 1] = 1294989257U;
                            }
                            arr_19 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) (+((~((~(1948719535U)))))));
                            var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) ((((((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_18)) : (((/* implicit */int) var_13)))) >= (((/* implicit */int) min(((unsigned char)223), (((/* implicit */unsigned char) (_Bool)1))))))) ? (((/* implicit */long long int) (~(((((/* implicit */int) var_16)) | (((/* implicit */int) var_6))))))) : (min((((/* implicit */long long int) var_18)), (var_4))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) var_3))));
}
