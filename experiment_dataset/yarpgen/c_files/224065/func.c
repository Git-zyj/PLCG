/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224065
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224065 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224065
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
    var_18 = ((/* implicit */signed char) ((((unsigned int) ((((/* implicit */_Bool) 3724304552U)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_4))))) > (((((/* implicit */_Bool) ((unsigned char) var_3))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((var_12), ((short)32767))))) : (1400136584U)))));
    var_19 = ((/* implicit */unsigned int) (-(((/* implicit */int) (short)-32767))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                var_20 = ((/* implicit */short) ((_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (short)32736)) & (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) min((((/* implicit */unsigned short) arr_1 [i_1])), ((unsigned short)60068)))) : (((((/* implicit */int) (short)(-32767 - 1))) * (((/* implicit */int) (unsigned char)0)))))));
                /* LoopSeq 3 */
                for (short i_2 = 0; i_2 < 19; i_2 += 4) 
                {
                    var_21 = ((/* implicit */unsigned long long int) min((max((((/* implicit */short) (signed char)-21)), ((short)-16457))), ((short)-32767)));
                    arr_8 [i_2] [i_1] [i_0] = ((/* implicit */int) min((1400136584U), (((/* implicit */unsigned int) (signed char)39))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_22 -= ((/* implicit */unsigned short) arr_6 [i_0] [i_1] [i_2]);
                                var_23 ^= max((((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) (signed char)-28))))))), (max((((/* implicit */unsigned long long int) (short)32767)), (arr_13 [i_0] [i_0] [i_1] [i_2] [i_3] [i_4]))));
                                arr_14 [i_0] [11ULL] [i_4] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) 0)), (((((/* implicit */_Bool) (short)-32758)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (16140901064495857664ULL)))));
                                var_24 = ((/* implicit */_Bool) arr_0 [i_1]);
                            }
                        } 
                    } 
                }
                for (unsigned char i_5 = 1; i_5 < 18; i_5 += 3) /* same iter space */
                {
                    var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((((/* implicit */int) arr_12 [i_0] [i_1] [i_5 - 1])) % (((/* implicit */int) arr_12 [i_5] [i_1] [i_0]))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : ((~(2488199339U)))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 19; i_6 += 1) 
                    {
                        var_26 = ((/* implicit */long long int) min((var_26), (((/* implicit */long long int) arr_5 [i_5 + 1] [i_5 + 1] [i_5 - 1] [i_5]))));
                        arr_20 [i_0] [i_0] [i_0] [i_0] [(short)2] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) arr_2 [i_6])))) ? (((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) arr_5 [i_6] [i_5] [i_1] [i_0])))) : (((/* implicit */int) arr_5 [i_5 + 1] [i_5 - 1] [i_5] [i_0]))));
                        var_27 -= ((/* implicit */_Bool) arr_5 [i_6] [i_5] [i_1] [i_0]);
                    }
                }
                /* vectorizable */
                for (unsigned char i_7 = 1; i_7 < 18; i_7 += 3) /* same iter space */
                {
                    var_28 = ((/* implicit */_Bool) (((_Bool)0) ? (((var_9) ? (((/* implicit */int) (short)-32767)) : (((/* implicit */int) (_Bool)0)))) : ((~(((/* implicit */int) (_Bool)0))))));
                    var_29 = ((/* implicit */short) ((((/* implicit */_Bool) arr_15 [i_7 - 1] [i_7 - 1])) ? (((/* implicit */int) arr_12 [i_7 - 1] [i_7 + 1] [i_7 - 1])) : (((/* implicit */int) arr_12 [i_7 + 1] [i_7 + 1] [i_7 - 1]))));
                    var_30 = ((/* implicit */unsigned int) (_Bool)1);
                }
                arr_24 [(unsigned char)5] [i_1] [i_0] = ((/* implicit */unsigned short) arr_5 [i_0] [i_0] [i_1] [(unsigned char)9]);
                arr_25 [i_1] = ((((/* implicit */int) arr_17 [i_1] [i_1] [i_1] [18U] [i_0] [i_0])) != (((/* implicit */int) (short)-32767)));
            }
        } 
    } 
}
