/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2745
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2745 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2745
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
    var_20 = ((/* implicit */unsigned char) ((var_3) ? (var_4) : (max((((/* implicit */long long int) 4194303U)), (3502460035191521865LL)))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned int i_2 = 0; i_2 < 14; i_2 += 1) 
                {
                    arr_8 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((3502460035191521865LL), (((/* implicit */long long int) (unsigned char)183))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_6 [i_0] [i_1] [i_0] [2ULL]))))) ? (3502460035191521864LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)57180)))));
                    arr_9 [i_0] [i_0] [i_0] = ((/* implicit */signed char) arr_6 [i_0] [i_0] [i_0] [i_0]);
                }
                for (long long int i_3 = 0; i_3 < 14; i_3 += 1) 
                {
                    var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) arr_5 [i_0] [i_0] [i_0]))));
                    arr_12 [i_0] [i_0] [i_0] [i_0] = arr_6 [i_0] [i_0] [i_0] [i_0];
                }
                /* LoopNest 2 */
                for (long long int i_4 = 0; i_4 < 14; i_4 += 1) 
                {
                    for (long long int i_5 = 2; i_5 < 11; i_5 += 1) 
                    {
                        {
                            arr_18 [i_0] = ((/* implicit */unsigned char) arr_17 [(short)0] [i_0] [i_4] [i_5 + 2]);
                            /* LoopSeq 3 */
                            for (unsigned int i_6 = 1; i_6 < 13; i_6 += 1) /* same iter space */
                            {
                                arr_22 [i_0] [i_1] [i_4] [i_0] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -2077690717)) ? (-3502460035191521871LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)181)))));
                                arr_23 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) max((((arr_3 [i_5 + 3]) ? (arr_5 [i_5 - 1] [i_6 - 1] [i_6 - 1]) : (arr_5 [i_5 - 2] [i_6 - 1] [i_6]))), (((((/* implicit */_Bool) (unsigned char)191)) ? (((/* implicit */int) arr_6 [i_6 + 1] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_6 [i_5 - 1] [i_1] [i_0] [i_5 + 1]))))));
                                arr_24 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (_Bool)1);
                                var_22 = ((/* implicit */signed char) min((var_22), (arr_2 [6LL])));
                            }
                            for (unsigned int i_7 = 1; i_7 < 13; i_7 += 1) /* same iter space */
                            {
                                var_23 = ((/* implicit */_Bool) arr_5 [i_5 + 1] [i_7 - 1] [i_7 + 1]);
                                arr_29 [i_0] [i_1] [1LL] [i_0] [i_1] [i_7] = ((/* implicit */int) (short)-24508);
                                arr_30 [i_0] [i_1] [i_0] [i_1] [i_1] = ((/* implicit */short) min((((((/* implicit */_Bool) arr_10 [i_0] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) min(((_Bool)1), ((_Bool)1))))) : (1869218800U))), (((/* implicit */unsigned int) max(((unsigned short)45050), (((/* implicit */unsigned short) arr_3 [i_0])))))));
                            }
                            for (unsigned int i_8 = 1; i_8 < 13; i_8 += 1) /* same iter space */
                            {
                                arr_33 [i_0] [i_0] [i_4] [i_0] [i_5] [i_8 + 1] [i_8 - 1] = ((((/* implicit */_Bool) (unsigned char)181)) ? (-4716549412258433560LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)46272))));
                                arr_34 [i_0] [i_0] [i_4] [i_5] [i_8] = ((/* implicit */signed char) min((((((/* implicit */_Bool) (short)-28007)) ? (((/* implicit */int) min(((short)-29401), (((/* implicit */short) (unsigned char)58))))) : (((/* implicit */int) (unsigned char)192)))), (((/* implicit */int) (unsigned short)46207))));
                                arr_35 [i_0] [i_1] [i_0] [i_0] [i_8] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_8] [i_8] [i_8] [i_8] [i_0])) ? (max((((/* implicit */long long int) arr_6 [i_1] [i_4] [i_0] [i_1])), (((((/* implicit */_Bool) arr_17 [i_0] [i_1] [i_1] [i_1])) ? (3502460035191521871LL) : (-6543958514706415971LL))))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)19280)))));
                            }
                        }
                    } 
                } 
            }
        } 
    } 
}
