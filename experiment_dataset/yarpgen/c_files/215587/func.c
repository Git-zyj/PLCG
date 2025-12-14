/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215587
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215587 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215587
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
    var_10 = ((/* implicit */long long int) var_0);
    var_11 = ((/* implicit */short) (_Bool)1);
    var_12 *= 15029525714780352644ULL;
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                var_13 = ((/* implicit */short) ((long long int) max((var_4), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) -5720603858472074113LL))))))));
                arr_4 [i_0] [13] = ((/* implicit */long long int) ((((((/* implicit */_Bool) max((arr_2 [14]), (arr_2 [i_0])))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) : (arr_3 [i_0] [11LL] [i_0]))) < (((/* implicit */long long int) arr_1 [i_1]))));
                /* LoopNest 3 */
                for (unsigned int i_2 = 2; i_2 < 18; i_2 += 2) 
                {
                    for (int i_3 = 0; i_3 < 19; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 16; i_4 += 1) 
                        {
                            {
                                var_14 += ((/* implicit */unsigned char) arr_7 [i_4] [i_4] [i_4] [(unsigned short)6]);
                                arr_13 [i_3] [i_3] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_3])) ? (((/* implicit */int) arr_12 [i_0] [i_0] [i_0])) : (((/* implicit */int) ((((/* implicit */unsigned long long int) arr_2 [i_4])) < (max((var_8), (((/* implicit */unsigned long long int) 3554640325U)))))))));
                                arr_14 [13LL] [i_3] [(unsigned char)5] [13LL] [(unsigned char)5] [(unsigned char)5] [(signed char)9] = ((/* implicit */long long int) ((var_6) ^ (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) max((-2147483624), (319617910)))), (((unsigned int) arr_9 [i_3] [i_3] [i_3] [i_3] [6ULL] [3U])))))));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 3 */
                for (short i_5 = 2; i_5 < 17; i_5 += 3) 
                {
                    var_15 += ((/* implicit */unsigned short) max((4294967295U), (0U)));
                    var_16 += ((/* implicit */unsigned char) var_0);
                    var_17 = 4294967295U;
                }
                for (unsigned char i_6 = 0; i_6 < 19; i_6 += 2) 
                {
                    var_18 |= ((/* implicit */long long int) ((arr_10 [i_0] [i_1] [i_1] [i_1] [i_1] [i_1] [i_0]) > (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_17 [i_0] [i_0] [i_0])) || (((/* implicit */_Bool) arr_17 [i_6] [(unsigned short)18] [(unsigned short)18]))))))));
                    var_19 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (-(arr_3 [i_0] [i_0] [(short)6])))), (var_4)));
                }
                for (short i_7 = 1; i_7 < 17; i_7 += 3) 
                {
                    /* LoopSeq 2 */
                    for (short i_8 = 2; i_8 < 17; i_8 += 3) 
                    {
                        arr_25 [i_1] = ((/* implicit */unsigned long long int) (!(((133955584) <= (((/* implicit */int) arr_11 [i_0] [i_0] [i_1] [i_0] [i_1]))))));
                        arr_26 [i_0] [i_0] [i_0] [i_0] &= ((/* implicit */unsigned long long int) ((unsigned int) var_0));
                        arr_27 [i_0] = ((/* implicit */unsigned long long int) min(((unsigned short)1453), (((/* implicit */unsigned short) arr_22 [i_8] [i_8] [i_8]))));
                    }
                    for (unsigned short i_9 = 2; i_9 < 15; i_9 += 1) 
                    {
                        arr_30 [i_0] [i_0] [0U] = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((unsigned int) arr_5 [i_0] [10U] [2]))), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) 2489272053U)) : (var_4)))))) ? (var_6) : (((/* implicit */unsigned long long int) min((((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) (short)-9))))), (arr_1 [i_0]))))));
                        arr_31 [i_0] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((long long int) (unsigned short)41576)))));
                        var_20 = ((/* implicit */unsigned char) min((var_20), ((unsigned char)128)));
                        var_21 = ((/* implicit */signed char) var_9);
                        var_22 |= ((/* implicit */unsigned short) ((((/* implicit */long long int) max((arr_1 [i_1]), ((+(arr_18 [i_0] [i_0] [i_0])))))) <= (var_9)));
                    }
                    var_23 = ((/* implicit */short) min((var_23), (arr_12 [i_7] [17LL] [i_7])));
                }
            }
        } 
    } 
    var_24 = var_4;
}
