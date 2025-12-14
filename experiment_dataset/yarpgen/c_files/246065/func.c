/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246065
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246065 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246065
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
    var_16 *= ((/* implicit */short) max((((((/* implicit */_Bool) (short)-1)) ? ((+(((/* implicit */int) (short)15310)))) : (((/* implicit */int) min((((/* implicit */short) var_9)), (var_3)))))), (((/* implicit */int) var_3))));
    var_17 = min((((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) var_2))) <= (5223546272312747404LL)))), ((signed char)-1));
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 12; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            for (unsigned short i_2 = 2; i_2 < 12; i_2 += 3) 
            {
                {
                    var_18 = ((/* implicit */long long int) ((((/* implicit */int) var_4)) | ((~(max((arr_7 [i_1] [i_2 + 1] [i_0 - 2] [i_0 - 2]), (((/* implicit */int) arr_0 [i_0] [i_2]))))))));
                    /* LoopNest 2 */
                    for (short i_3 = 2; i_3 < 12; i_3 += 2) 
                    {
                        for (long long int i_4 = 0; i_4 < 13; i_4 += 3) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)-1)) >= (((/* implicit */int) (short)-14))));
                                var_20 = ((/* implicit */unsigned int) min(((+(((/* implicit */int) arr_5 [i_4])))), ((-(((/* implicit */int) var_9))))));
                                var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) (-(2652253963065746165LL))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_5 = 0; i_5 < 15; i_5 += 1) 
    {
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            for (signed char i_7 = 0; i_7 < 15; i_7 += 2) 
            {
                {
                    var_22 = ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_7]))) * (arr_15 [i_7] [i_6] [i_5]))) < (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_14), (var_15))))));
                    /* LoopSeq 2 */
                    for (unsigned char i_8 = 0; i_8 < 15; i_8 += 1) 
                    {
                        arr_21 [i_5] [i_5] [i_6] [i_5] = ((short) (!(((/* implicit */_Bool) max((var_5), (((/* implicit */unsigned short) (short)13)))))));
                        var_23 = ((/* implicit */signed char) var_12);
                    }
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */int) var_9)), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_14 [i_6])) : (((/* implicit */int) var_0))))))) || (((/* implicit */_Bool) max((min((arr_22 [i_9] [i_6] [i_7]), (((/* implicit */unsigned long long int) (signed char)-99)))), (((/* implicit */unsigned long long int) ((int) arr_13 [i_5] [i_5]))))))));
                        arr_24 [i_6] = ((/* implicit */signed char) ((short) ((((/* implicit */int) arr_13 [i_6] [i_7])) + (((/* implicit */int) arr_13 [i_5] [i_6])))));
                        var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((short) (signed char)0))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_22 [i_9] [i_6] [i_5]))))) : (((/* implicit */int) arr_14 [i_6]))));
                        /* LoopSeq 2 */
                        for (unsigned short i_10 = 0; i_10 < 15; i_10 += 1) /* same iter space */
                        {
                            var_26 = min(((!(((/* implicit */_Bool) var_14)))), ((!(((/* implicit */_Bool) arr_13 [i_6] [i_5])))));
                            var_27 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(arr_15 [i_6] [i_6] [i_7])))) ? ((~(((/* implicit */int) min(((short)9), (var_0)))))) : (((/* implicit */int) arr_14 [i_6]))));
                        }
                        for (unsigned short i_11 = 0; i_11 < 15; i_11 += 1) /* same iter space */
                        {
                            var_28 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) ((int) arr_17 [i_7]))) ? (((/* implicit */int) arr_25 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5])) : (((/* implicit */int) max(((short)9), (var_11)))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (arr_17 [i_6]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_11])))))) ? (((/* implicit */int) arr_30 [i_5] [i_6] [i_7] [i_9] [i_6])) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)16383)))))))));
                            var_29 ^= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)99)) ? (arr_29 [i_11] [i_9] [i_6] [i_6] [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)30720))))))));
                            arr_31 [i_6] [i_6] [i_6] [i_6] [i_11] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_6] [i_7] [i_6]))) & (((arr_17 [i_6]) % (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)23954)))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */long long int) ((/* implicit */int) (short)9))) : (288229276640083968LL)))) : (arr_15 [i_5] [i_6] [i_11])));
                            var_30 = ((/* implicit */short) max((var_30), (((/* implicit */short) arr_25 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5]))));
                        }
                    }
                }
            } 
        } 
    } 
}
