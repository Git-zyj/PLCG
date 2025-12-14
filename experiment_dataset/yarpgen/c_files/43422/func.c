/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43422
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43422 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43422
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
    /* LoopNest 3 */
    for (long long int i_0 = 2; i_0 < 19; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            for (unsigned int i_2 = 1; i_2 < 18; i_2 += 1) 
            {
                {
                    arr_11 [(_Bool)1] = ((/* implicit */short) (signed char)-38);
                    /* LoopSeq 2 */
                    for (unsigned int i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned short i_4 = 0; i_4 < 20; i_4 += 1) 
                        {
                            var_15 = ((/* implicit */signed char) ((((((/* implicit */int) ((((/* implicit */int) arr_15 [i_4] [(unsigned char)11] [(unsigned char)11] [i_1] [(short)2] [(short)2] [(short)2])) > (((/* implicit */int) arr_3 [i_0]))))) > (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_0]))) > (arr_0 [i_3])))))) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_17 [i_0] [(unsigned char)9] [i_2] [i_2] [i_3] [i_2] [i_4])))) > (((((/* implicit */_Bool) (signed char)-38)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))))));
                            arr_18 [i_0] [i_1] [(unsigned char)9] [i_2] [i_1] = ((/* implicit */short) (~(((/* implicit */int) ((unsigned short) ((var_8) > (((/* implicit */unsigned long long int) 2002045370U))))))));
                        }
                        /* vectorizable */
                        for (unsigned char i_5 = 0; i_5 < 20; i_5 += 1) 
                        {
                            var_16 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) (unsigned char)38)))) ? (arr_0 [i_0 - 2]) : (((/* implicit */unsigned long long int) (+(5566089901754234300LL))))));
                            arr_21 [9LL] [i_0] = ((/* implicit */unsigned char) arr_8 [i_1] [i_2 - 1] [i_5]);
                        }
                        arr_22 [i_2] [i_3] = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) min((29U), (((/* implicit */unsigned int) arr_6 [i_0]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_0] [(unsigned char)18] [i_0])) || (((/* implicit */_Bool) arr_16 [i_0] [17ULL] [i_1] [i_0] [i_1] [i_3] [i_0])))))) : ((~(arr_9 [i_1] [i_2] [i_3])))))));
                    }
                    /* vectorizable */
                    for (unsigned short i_6 = 0; i_6 < 20; i_6 += 4) 
                    {
                        arr_25 [i_0] [i_1] [i_1] [i_2] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) > (9223372036854775807LL)));
                        arr_26 [(signed char)18] [i_2 + 2] [i_2 + 2] [i_1] [15U] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0 - 1] [i_0] [i_0])) ? (((/* implicit */int) (signed char)69)) : (((/* implicit */int) arr_1 [i_0] [i_0]))))) ? (arr_16 [i_0] [i_0] [i_0 + 1] [i_1] [i_2 - 1] [i_6] [i_6]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-3834)) ? (((/* implicit */int) arr_2 [i_2])) : (((/* implicit */int) arr_17 [i_6] [i_2] [i_2 + 1] [i_1] [i_0] [i_0] [i_0])))))));
                        var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) ((((((/* implicit */int) (short)267)) > (((/* implicit */int) arr_12 [i_2])))) ? (arr_16 [i_0 + 1] [i_0 - 2] [i_0 - 1] [(short)4] [i_0] [i_0 - 2] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-17067))))))));
                        arr_27 [i_0] [i_1] [i_2] [i_6] = ((/* implicit */_Bool) 4863554058012761022ULL);
                    }
                    var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_14)) > (((/* implicit */int) ((unsigned char) ((unsigned int) arr_3 [i_1])))))))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */long long int) var_0);
}
