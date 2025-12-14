/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20297
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20297 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20297
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
    for (long long int i_0 = 1; i_0 < 20; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                var_15 &= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0 + 1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_2 [i_0 + 2]))))) > (min((((/* implicit */unsigned long long int) 3207092197U)), (1148417904979476480ULL)))));
                /* LoopNest 3 */
                for (signed char i_2 = 0; i_2 < 22; i_2 += 2) 
                {
                    for (unsigned short i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 3; i_4 < 20; i_4 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned int) (+(max((arr_3 [i_0 - 1] [i_1] [i_2]), (((/* implicit */int) arr_7 [i_2] [i_4 + 1] [i_4 - 2] [i_4] [i_4]))))));
                                var_17 = (!(((/* implicit */_Bool) ((signed char) min((1643438711U), (((/* implicit */unsigned int) var_4)))))));
                                var_18 = ((/* implicit */unsigned short) (((-(min((529819401), (((/* implicit */int) var_10)))))) | (((/* implicit */int) arr_7 [i_4 - 3] [i_2] [i_2] [i_1] [i_0]))));
                                var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) / (((7129940036971227574ULL) - (((/* implicit */unsigned long long int) min((var_6), (((/* implicit */int) (unsigned short)3))))))))))));
                                var_20 = ((/* implicit */long long int) (_Bool)1);
                            }
                        } 
                    } 
                } 
                var_21 = (-(((/* implicit */int) min((var_0), (((((/* implicit */int) (_Bool)0)) >= (((/* implicit */int) (unsigned short)65533))))))));
                var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) ((((/* implicit */int) var_5)) | (((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_0 - 1] [i_0 + 2] [(signed char)4]))))))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned long long int i_5 = 2; i_5 < 18; i_5 += 1) 
    {
        for (unsigned long long int i_6 = 0; i_6 < 19; i_6 += 4) 
        {
            for (long long int i_7 = 0; i_7 < 19; i_7 += 4) 
            {
                {
                    var_23 = ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) ((4749140780663998705LL) & (((/* implicit */long long int) ((/* implicit */int) var_0)))))) ? (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (unsigned short)65533)) : (((/* implicit */int) var_1))))) : (-4519365991608099364LL))));
                    var_24 = ((/* implicit */signed char) min((((/* implicit */int) ((((/* implicit */int) arr_19 [i_5 + 1] [i_5 + 1])) <= (((/* implicit */int) arr_8 [i_5] [i_5 - 1] [i_5] [i_7] [i_5] [i_5 - 1]))))), (arr_0 [i_5])));
                    /* LoopNest 2 */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        for (unsigned char i_9 = 0; i_9 < 19; i_9 += 4) 
                        {
                            {
                                var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_23 [i_5 - 2] [i_5 - 1] [i_5 - 2] [i_5 + 1] [i_5 - 1] [i_5]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_5 - 2])))))) ? (((/* implicit */int) min(((unsigned short)0), (((/* implicit */unsigned short) var_8))))) : (((/* implicit */int) ((((/* implicit */int) arr_9 [(short)16] [(short)16] [6ULL] [(short)16] [(short)16] [i_9] [(short)16])) < (((/* implicit */int) (unsigned short)65533)))))));
                                var_26 = ((/* implicit */_Bool) arr_0 [i_8]);
                                var_27 = ((/* implicit */_Bool) min((var_27), ((!((!(((/* implicit */_Bool) arr_20 [i_5 - 1] [(_Bool)1] [i_8] [i_9]))))))));
                                var_28 = ((/* implicit */int) min((var_28), (((/* implicit */int) ((((_Bool) arr_10 [i_5] [i_6] [i_7] [i_8] [i_9] [i_9])) ? (((max((((/* implicit */long long int) arr_21 [i_5] [i_6] [9ULL] [i_5])), (-6768522192670727935LL))) >> (((((((/* implicit */_Bool) (unsigned char)1)) ? (arr_18 [i_8] [(unsigned char)14]) : (((/* implicit */long long int) ((/* implicit */int) arr_16 [(unsigned short)6] [16] [i_9]))))) + (2221625208100411249LL))))) : (((/* implicit */long long int) ((/* implicit */int) var_7))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_10 = 2; i_10 < 18; i_10 += 4) 
                    {
                        for (unsigned short i_11 = 0; i_11 < 19; i_11 += 2) 
                        {
                            {
                                var_29 = ((((/* implicit */long long int) ((arr_28 [i_5 - 2] [i_6]) & (arr_28 [i_5 - 2] [i_6])))) | (-1002373353352885639LL));
                                var_30 = ((/* implicit */_Bool) min((var_30), ((_Bool)0)));
                                var_31 = ((/* implicit */long long int) max((var_31), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_1 [i_5 + 1])))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
