/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33004
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33004 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33004
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
    var_19 = ((/* implicit */short) var_4);
    var_20 = ((/* implicit */signed char) (!(((((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) -538285112)))) && (((/* implicit */_Bool) max((var_3), (((/* implicit */int) var_10)))))))));
    var_21 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((var_18) >= (7ULL))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (unsigned char i_1 = 1; i_1 < 20; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 21; i_2 += 1) 
                {
                    for (long long int i_3 = 3; i_3 < 17; i_3 += 2) 
                    {
                        {
                            /* LoopSeq 4 */
                            /* vectorizable */
                            for (int i_4 = 0; i_4 < 21; i_4 += 1) 
                            {
                                arr_17 [i_0] [i_4] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_15 [i_1 + 1] [i_1] [i_1 - 1] [i_3 - 2] [i_3 - 2])) ? (arr_15 [i_1 + 1] [(short)6] [i_1 - 1] [i_3 + 3] [i_3 + 4]) : (arr_15 [i_1 - 1] [14LL] [i_1 + 1] [i_3 - 2] [i_3 - 2])));
                                var_22 = ((14985419821913138436ULL) <= (((((/* implicit */_Bool) 15ULL)) ? (7ULL) : (((/* implicit */unsigned long long int) arr_14 [i_0] [i_1 + 1] [i_2] [i_3])))));
                            }
                            for (unsigned long long int i_5 = 0; i_5 < 21; i_5 += 4) /* same iter space */
                            {
                                arr_22 [i_0] [i_0] [i_0] [i_0] [i_3] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_1] [i_1 - 1] [i_3] [i_5] [i_1])) ? (arr_15 [i_0] [i_1 - 1] [i_1] [(unsigned char)13] [i_3]) : (arr_15 [i_1] [i_1 + 1] [i_1] [i_5] [i_5])))) ? ((-(arr_15 [i_1] [i_1 - 1] [i_3 + 2] [i_5] [i_5]))) : (((/* implicit */unsigned long long int) (+(538285095))))));
                                var_23 = ((/* implicit */short) (+((((!(((/* implicit */_Bool) var_9)))) ? (((((/* implicit */_Bool) var_4)) ? (18446744073709551605ULL) : (7ULL))) : (((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0] [i_0])) ? (arr_4 [i_1] [i_5]) : (((/* implicit */unsigned long long int) (-2147483647 - 1)))))))));
                            }
                            for (unsigned long long int i_6 = 0; i_6 < 21; i_6 += 4) /* same iter space */
                            {
                                var_24 = ((/* implicit */unsigned short) arr_5 [i_0]);
                                arr_26 [i_0] [i_1] [i_1 - 1] [i_1] [i_3] [i_6] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_13 [i_1] [i_1 - 1] [i_1 - 1])) ? (arr_13 [i_1] [i_1 - 1] [i_1 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))))), (((/* implicit */unsigned long long int) -5993677143930314243LL))));
                                var_25 = ((/* implicit */long long int) -538285111);
                                var_26 = ((/* implicit */signed char) (+(var_3)));
                                var_27 = ((/* implicit */unsigned char) arr_2 [i_2]);
                            }
                            for (unsigned char i_7 = 3; i_7 < 17; i_7 += 1) 
                            {
                                arr_29 [i_2] [i_7] = ((/* implicit */short) (+(((/* implicit */int) ((((((/* implicit */int) (_Bool)1)) + (-1440902755))) != (1440902758))))));
                                var_28 = ((/* implicit */short) (((!(((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0] [13ULL])))) ? (((((/* implicit */int) ((var_1) != (((/* implicit */long long int) ((/* implicit */int) var_12)))))) ^ (((((/* implicit */_Bool) (unsigned char)254)) ? (((/* implicit */int) arr_7 [i_0])) : (((/* implicit */int) arr_1 [i_1] [i_3])))))) : (((/* implicit */int) (short)32762))));
                            }
                            arr_30 [11ULL] [i_2] [i_1 - 1] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_28 [i_0] [(_Bool)1] [i_2] [i_3] [(unsigned char)18] [i_3])) ? ((+(((/* implicit */int) (!(((/* implicit */_Bool) arr_18 [(_Bool)1] [(_Bool)1]))))))) : (((/* implicit */int) ((((((/* implicit */int) arr_6 [i_0] [i_1])) == (((/* implicit */int) (_Bool)1)))) && (((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_2])))))))));
                        }
                    } 
                } 
                arr_31 [i_0] [i_1] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1440902755)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_8 [i_1] [i_1] [i_1 + 1] [i_1 + 1]))))) || (((/* implicit */_Bool) (+(((int) arr_16 [i_0] [i_0] [i_0] [i_0] [i_0])))))));
                var_29 = min((((/* implicit */unsigned long long int) max((arr_16 [i_0] [i_1] [i_1 + 1] [i_0] [i_1 + 1]), (arr_16 [i_0] [i_1] [i_1] [i_0] [i_1 - 1])))), (max((arr_4 [i_0] [i_1 - 1]), (4ULL))));
            }
        } 
    } 
}
