/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29999
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29999 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29999
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
    var_17 ^= ((/* implicit */short) var_15);
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 22; i_3 += 4) 
                    {
                        for (long long int i_4 = 1; i_4 < 21; i_4 += 4) 
                        {
                            {
                                arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) (signed char)-117);
                                arr_15 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_12 [16LL] [i_1] [(short)18] [i_1] [i_1])) / (((/* implicit */int) (short)-256))))))))));
                            }
                        } 
                    } 
                    arr_16 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) var_1))) ? (((/* implicit */unsigned long long int) var_10)) : (((unsigned long long int) (short)24576))))) ? (((/* implicit */int) arr_9 [i_0] [i_1] [i_1] [10LL])) : (arr_11 [i_0] [i_0] [i_1] [i_1] [i_2] [i_2])));
                    /* LoopSeq 2 */
                    for (short i_5 = 3; i_5 < 21; i_5 += 2) 
                    {
                        /* LoopSeq 2 */
                        for (signed char i_6 = 0; i_6 < 22; i_6 += 3) 
                        {
                            arr_24 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (_Bool)0);
                            var_18 &= ((/* implicit */signed char) arr_1 [i_6]);
                            arr_25 [i_0] [i_0] [i_0] [i_0] [i_5 - 3] [i_0] [i_6] = ((/* implicit */long long int) arr_18 [i_0] [i_1] [i_2] [(unsigned short)0] [16U]);
                            var_19 -= ((/* implicit */unsigned long long int) arr_4 [i_1] [(_Bool)1]);
                        }
                        for (unsigned long long int i_7 = 1; i_7 < 20; i_7 += 4) 
                        {
                            var_20 = ((/* implicit */unsigned int) var_7);
                            var_21 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((((/* implicit */_Bool) max((arr_23 [i_5]), (arr_26 [i_0] [i_0] [i_2] [i_2])))) || (((/* implicit */_Bool) 0ULL)))))));
                            var_22 = ((/* implicit */unsigned char) (_Bool)1);
                            arr_30 [2LL] [i_1] [i_0] [i_5] [i_0] = ((/* implicit */long long int) (+(((/* implicit */int) arr_18 [i_0] [i_1] [i_2] [i_1] [i_7]))));
                            var_23 = ((/* implicit */long long int) var_12);
                        }
                        arr_31 [i_0] [i_1] [i_0] [i_5 - 1] = arr_21 [i_0] [(unsigned short)17] [i_1] [i_2] [(unsigned short)17];
                    }
                    for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                    {
                        arr_34 [i_2] [i_2] [i_0] [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_6 [i_0] [i_1] [i_1] [8LL]))));
                        arr_35 [i_0] [i_2] = ((/* implicit */short) var_4);
                        /* LoopSeq 1 */
                        for (unsigned int i_9 = 0; i_9 < 22; i_9 += 4) 
                        {
                            var_24 |= ((/* implicit */int) (_Bool)0);
                            var_25 = ((/* implicit */short) var_5);
                        }
                        /* LoopSeq 2 */
                        for (short i_10 = 2; i_10 < 21; i_10 += 2) 
                        {
                            var_26 += ((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_33 [(unsigned short)20] [i_10] [(unsigned short)20] [i_8])))))));
                            var_27 = ((/* implicit */unsigned char) max((var_27), (((/* implicit */unsigned char) var_1))));
                            arr_41 [i_0] [i_0] [i_0] [i_8] [i_8] [i_8] [i_8 - 1] = ((/* implicit */unsigned int) -1301362009);
                        }
                        for (long long int i_11 = 0; i_11 < 22; i_11 += 4) 
                        {
                            var_28 = ((/* implicit */unsigned int) min((var_28), (((/* implicit */unsigned int) (signed char)0))));
                            var_29 = ((/* implicit */long long int) min((var_29), (((/* implicit */long long int) arr_28 [i_0] [i_1] [i_2] [i_8 - 1] [i_1]))));
                            var_30 = ((/* implicit */signed char) max((var_30), (((/* implicit */signed char) (-(((/* implicit */int) (!((_Bool)1)))))))));
                            arr_44 [i_0] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (signed char)9))));
                            arr_45 [i_8] [i_1] [i_0] = ((/* implicit */unsigned char) (_Bool)1);
                        }
                        arr_46 [i_0] [i_0] [i_2] [i_8] = ((/* implicit */unsigned int) min((16586780312199719667ULL), (((/* implicit */unsigned long long int) (_Bool)1))));
                    }
                }
            } 
        } 
    } 
    var_31 = ((/* implicit */_Bool) (+(0U)));
}
