/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227463
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227463 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227463
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
    var_18 = ((/* implicit */short) ((unsigned int) 4294963200U));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (unsigned short i_1 = 3; i_1 < 17; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                {
                    arr_8 [i_1] [i_2] = ((/* implicit */short) 15668375463081512684ULL);
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 21; i_3 += 1) 
                    {
                        for (long long int i_4 = 1; i_4 < 19; i_4 += 4) 
                        {
                            {
                                arr_13 [7U] [i_1] [i_2] [0U] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_11 [i_1 - 1] [i_4] [i_4] [i_4] [i_4] [i_1] [i_4]) - (arr_11 [i_1 + 1] [i_1 - 3] [i_1 + 1] [i_1 - 3] [i_1 + 1] [i_1] [12LL])))) ? (max((arr_11 [i_1 + 1] [i_1 + 1] [i_1 - 1] [i_4] [i_4] [i_1] [i_4]), (arr_11 [i_1 + 4] [i_4] [3LL] [i_4] [i_4] [i_1] [i_4]))) : (max((arr_11 [i_1 - 3] [(_Bool)1] [i_4] [i_4] [i_4] [i_1] [i_4]), (arr_11 [i_1 - 1] [i_1] [i_1 - 1] [i_1] [i_2] [i_1] [i_2])))));
                                var_19 -= ((/* implicit */short) -1731984608);
                                arr_14 [i_0] [18LL] [i_1] [i_3] [i_4 + 2] = ((/* implicit */short) ((arr_7 [i_0] [i_1 + 3] [i_0] [i_4]) != (((/* implicit */unsigned int) min((((/* implicit */int) var_0)), (((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) var_15)))))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (long long int i_5 = 0; i_5 < 21; i_5 += 4) 
                    {
                        var_20 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_10 [i_1] [i_1] [i_1 + 4] [i_1] [i_1])) ? (arr_10 [i_1] [i_1] [i_1] [i_5] [1LL]) : (2642595368435059390ULL))), (arr_10 [i_1] [i_1] [(short)8] [i_2] [i_5])));
                        var_21 -= ((/* implicit */_Bool) -1731984617);
                    }
                    /* LoopNest 2 */
                    for (unsigned long long int i_6 = 2; i_6 < 20; i_6 += 3) 
                    {
                        for (long long int i_7 = 0; i_7 < 21; i_7 += 1) 
                        {
                            {
                                arr_23 [i_0] [i_0] [i_0] [(short)4] [i_0] [i_0] [i_1] = ((/* implicit */short) max((56284868278908668ULL), (((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (((arr_20 [i_0] [i_6] [7ULL]) ? (((/* implicit */unsigned long long int) var_3)) : (2642595368435059372ULL)))))));
                                var_22 = ((/* implicit */unsigned int) max(((+(((unsigned long long int) 489978035)))), (((/* implicit */unsigned long long int) (unsigned short)12932))));
                                var_23 = ((/* implicit */unsigned int) (!((_Bool)0)));
                            }
                        } 
                    } 
                    var_24 *= ((/* implicit */long long int) (_Bool)1);
                }
            } 
        } 
    } 
    var_25 = var_2;
    var_26 = 1731984607;
}
