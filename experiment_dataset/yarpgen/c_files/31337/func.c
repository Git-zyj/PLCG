/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31337
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31337 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31337
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
    for (int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (unsigned int i_2 = 1; i_2 < 9; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (int i_3 = 0; i_3 < 12; i_3 += 3) 
                    {
                        var_14 = ((/* implicit */short) (_Bool)0);
                        var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) (!(((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (_Bool)0)) : (var_3)))) : ((((_Bool)0) ? (0U) : (((/* implicit */unsigned int) arr_1 [i_0]))))))))))));
                    }
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (int i_4 = 3; i_4 < 9; i_4 += 1) 
                    {
                        var_16 = ((/* implicit */short) ((_Bool) ((((/* implicit */_Bool) 8U)) ? (arr_8 [i_1]) : (((/* implicit */long long int) 32766)))));
                        var_17 = ((/* implicit */long long int) (((_Bool)0) ? (((/* implicit */int) (unsigned short)40853)) : (((/* implicit */int) (unsigned short)24683))));
                    }
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (short i_6 = 2; i_6 < 10; i_6 += 3) 
                        {
                            var_18 *= ((/* implicit */short) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)38662)) ? (((/* implicit */int) arr_14 [(unsigned char)8] [10U] [i_0] [(unsigned char)8])) : (-977909803)))) & (((((/* implicit */_Bool) 4294967289U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (7U)))));
                            var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) ((int) ((arr_0 [i_2 + 1]) & (((/* implicit */unsigned long long int) arr_9 [i_1] [i_2 + 3] [i_6]))))))));
                            var_20 = ((/* implicit */unsigned long long int) ((arr_15 [i_2 + 3] [i_2]) ? (((/* implicit */int) (unsigned short)935)) : (((/* implicit */int) arr_15 [i_2 + 2] [i_6 + 2]))));
                            var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) arr_3 [i_2]))));
                            arr_22 [i_2] [i_1] [(unsigned char)2] [i_1] [(_Bool)1] [i_2] [i_6] = (-(((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) 977909814))))));
                        }
                        arr_23 [i_0] [i_0] [i_1] [9LL] [i_0] = ((/* implicit */int) ((unsigned int) -2710876843008042873LL));
                        var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) var_8))));
                    }
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        var_23 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 16198433740214579368ULL))));
                        var_24 = ((/* implicit */unsigned long long int) min((var_24), (((unsigned long long int) ((arr_5 [8ULL] [i_1] [8ULL]) / (arr_5 [i_0] [i_7] [4]))))));
                    }
                }
            } 
        } 
        var_25 = ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) && (((/* implicit */_Bool) arr_12 [7U] [i_0] [i_0] [7] [i_0] [i_0]))))) < (((/* implicit */int) (short)-17895))));
    }
    /* LoopSeq 1 */
    for (int i_8 = 2; i_8 < 12; i_8 += 3) 
    {
        var_26 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((((/* implicit */int) (!(((/* implicit */_Bool) 8388608U))))), (arr_26 [i_8 - 2]))))));
        var_27 = ((/* implicit */short) (((+(((/* implicit */int) ((short) 2082240224U))))) > (((arr_27 [i_8 - 1] [i_8 + 2]) ? (536739840) : (454782752)))));
    }
}
