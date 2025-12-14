/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206441
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206441 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206441
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
    for (unsigned short i_0 = 2; i_0 < 18; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 19; i_1 += 3) 
        {
            {
                arr_4 [i_1] [i_1] = ((/* implicit */_Bool) (-(((/* implicit */int) (!((!(((/* implicit */_Bool) arr_1 [i_1] [5])))))))));
                /* LoopSeq 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 20; i_4 += 1) 
                        {
                            {
                                arr_12 [i_1] [i_3] [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (+((+(((/* implicit */int) var_8))))))) & (arr_2 [i_1])));
                                arr_13 [i_1] [i_0] [i_1] = ((((/* implicit */_Bool) arr_10 [i_4] [13] [i_2] [i_2] [19U] [i_0])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (+(3260892892U)))) ? (((int) var_8)) : (((/* implicit */int) ((3668400427445182678ULL) < (((/* implicit */unsigned long long int) 79262110)))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_5 = 0; i_5 < 20; i_5 += 3) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 20; i_6 += 2) 
                        {
                            {
                                var_11 = ((/* implicit */int) ((max((((/* implicit */unsigned long long int) 0)), (14485923182241999919ULL))) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_6 [i_6] [i_5] [i_1 - 1] [i_0]) / (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_6] [i_1] [i_2] [i_1] [i_0])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0 + 1]))) : (arr_6 [(signed char)9] [i_6] [i_1 + 1] [i_0 - 1]))))));
                                arr_21 [i_1] [i_5] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_8 [(short)17] [i_5] [i_5] [(signed char)12] [i_1] [(short)9])) && ((!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_20 [i_1])), (arr_11 [i_6] [i_5] [i_2] [i_1] [(signed char)16]))))))));
                            }
                        } 
                    } 
                    arr_22 [i_1] [(signed char)8] [i_0] [i_1] = ((/* implicit */signed char) arr_1 [i_1 + 1] [i_0 + 2]);
                }
                for (short i_7 = 1; i_7 < 16; i_7 += 3) 
                {
                    var_12 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1)))) + (1900369477U)));
                    var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_19 [i_1 + 1] [i_1 - 1]))))) ? (max((arr_7 [i_7 + 4] [i_1 + 1] [i_1]), (((/* implicit */int) arr_19 [i_1 + 1] [i_0 + 2])))) : (((/* implicit */int) ((unsigned short) arr_7 [i_7] [i_1 + 1] [i_0])))));
                    arr_25 [(signed char)18] [i_1 + 1] [10] [(signed char)18] &= ((/* implicit */_Bool) arr_7 [i_7] [i_1] [(signed char)13]);
                }
            }
        } 
    } 
    var_14 = min((((((/* implicit */_Bool) ((((/* implicit */int) var_3)) >> (((((/* implicit */int) var_5)) - (21746)))))) ? (((/* implicit */int) var_8)) : (((((/* implicit */_Bool) var_1)) ? (var_10) : (((/* implicit */int) var_9)))))), (var_4));
}
