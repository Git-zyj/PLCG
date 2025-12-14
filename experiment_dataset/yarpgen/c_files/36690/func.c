/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36690
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36690 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36690
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
    var_15 = ((/* implicit */int) var_10);
    var_16 = ((/* implicit */long long int) ((((/* implicit */int) var_6)) / (((/* implicit */int) ((0LL) <= (((/* implicit */long long int) ((((/* implicit */int) (_Bool)0)) & (((/* implicit */int) var_9))))))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 2; i_0 < 18; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                {
                    var_17 *= ((/* implicit */short) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) 0LL)) ? (23LL) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [(unsigned short)14])))))) ? (15064768200257149896ULL) : (((/* implicit */unsigned long long int) -1927171621))))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 19; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 19; i_4 += 1) 
                        {
                            {
                                arr_14 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) max((arr_1 [i_3]), (((unsigned long long int) (short)32767)))))));
                                var_18 = ((/* implicit */unsigned long long int) ((unsigned short) arr_9 [i_0 + 1] [i_3] [i_0]));
                            }
                        } 
                    } 
                    arr_15 [i_0] [i_0] [i_0] [i_0 - 2] = ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) (short)-28543)) ? (((/* implicit */int) arr_8 [i_0] [i_1] [i_0] [14U])) : (((/* implicit */int) (short)11312))))))) | (max((((/* implicit */unsigned long long int) ((5495572279072209050LL) | (((/* implicit */long long int) ((/* implicit */int) (short)28543)))))), (max((var_4), (((/* implicit */unsigned long long int) -5495572279072209063LL)))))));
                    arr_16 [i_0 + 1] [i_0] = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) min((((/* implicit */int) min((arr_11 [(short)6] [i_0] [i_1] [i_2] [i_2]), (((/* implicit */unsigned short) (short)-28543))))), (min((((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_2] [i_2] [i_2])), (8054608)))))), (arr_6 [i_0] [i_0 - 1] [i_0 + 1])));
                    /* LoopSeq 1 */
                    for (int i_5 = 3; i_5 < 15; i_5 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (int i_6 = 1; i_6 < 18; i_6 += 1) 
                        {
                            var_19 -= ((/* implicit */unsigned short) ((long long int) arr_22 [i_5] [i_1] [17LL] [i_5] [i_6 - 1]));
                            arr_24 [i_0] [i_2] [i_5] [i_6 + 1] = ((/* implicit */unsigned short) (short)28526);
                            arr_25 [i_0] [i_1] [i_2] [i_5] [i_6 - 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1524340225)) ? (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */unsigned long long int) 8054610)) : (18446744073709551615ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)22)))))) && (((/* implicit */_Bool) ((unsigned short) arr_22 [i_0 + 1] [i_5 - 2] [i_6 + 1] [i_0 - 2] [i_6])))));
                            arr_26 [i_0 + 1] [i_1] [i_0] [i_5 + 1] [i_6] [i_0] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) min(((!(((/* implicit */_Bool) (short)-28568)))), (((((/* implicit */_Bool) arr_7 [i_0 - 2] [i_0] [i_0 - 2] [i_0])) || (((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_0])))))))) & (min((arr_5 [i_0 + 1] [i_6 - 1]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) -8272021650536261150LL)) ? (-1) : (((/* implicit */int) (unsigned char)48)))))))));
                        }
                        arr_27 [i_0] [i_2] [(unsigned char)5] [6U] [i_1] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((/* implicit */long long int) ((signed char) arr_11 [i_0] [i_1] [0U] [i_5 + 3] [i_5 + 3]))), (max((4486007441326080LL), (((/* implicit */long long int) (unsigned short)5)))))))));
                    }
                }
            } 
        } 
    } 
}
