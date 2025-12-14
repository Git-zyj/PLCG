/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224960
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224960 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224960
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
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (short i_1 = 1; i_1 < 14; i_1 += 4) 
        {
            {
                var_11 += ((/* implicit */int) ((_Bool) max((((/* implicit */unsigned int) (~(((/* implicit */int) var_10))))), (2255974835U))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned int i_2 = 4; i_2 < 14; i_2 += 4) /* same iter space */
                {
                    arr_6 [i_1] [i_1] [i_0] [i_0] = ((/* implicit */unsigned int) (-(((/* implicit */int) var_0))));
                    var_12 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_2)));
                    arr_7 [i_2 + 2] [9] [i_1] [9] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((int) var_9)))));
                    var_13 = (-(((/* implicit */int) (unsigned short)48204)));
                }
                for (unsigned int i_3 = 4; i_3 < 14; i_3 += 4) /* same iter space */
                {
                    var_14 = ((/* implicit */short) min((var_8), (((/* implicit */unsigned int) (~(max((((/* implicit */int) (short)-32754)), (arr_5 [i_0] [i_1] [i_3] [i_3]))))))));
                    var_15 = ((/* implicit */unsigned int) var_0);
                    var_16 |= ((/* implicit */unsigned int) (+(max((((/* implicit */long long int) var_4)), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) var_6)) : (var_2)))))));
                    var_17 &= (~(((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) arr_1 [i_1 + 3]))))));
                    /* LoopNest 2 */
                    for (unsigned int i_4 = 3; i_4 < 15; i_4 += 4) 
                    {
                        for (int i_5 = 1; i_5 < 15; i_5 += 4) 
                        {
                            {
                                var_18 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_2 [i_0] [(short)1]))));
                                var_19 ^= ((/* implicit */long long int) (-((+(2038992442U)))));
                                var_20 = ((/* implicit */short) (~((~(((/* implicit */int) arr_14 [i_4 - 2]))))));
                                var_21 = ((/* implicit */short) ((((/* implicit */_Bool) arr_2 [i_0] [2])) ? (((((/* implicit */_Bool) (-(var_8)))) ? (((/* implicit */int) arr_3 [i_4] [i_3])) : (min((arr_8 [i_0] [(unsigned short)9] [11ULL] [11ULL]), (((/* implicit */int) (short)-32765)))))) : (((/* implicit */int) (unsigned short)23789))));
                            }
                        } 
                    } 
                }
                for (unsigned short i_6 = 0; i_6 < 17; i_6 += 1) 
                {
                    var_22 = (~(min((arr_17 [i_1 + 3]), (((/* implicit */unsigned int) (+(((/* implicit */int) var_10))))))));
                    /* LoopNest 2 */
                    for (int i_7 = 4; i_7 < 16; i_7 += 2) 
                    {
                        for (long long int i_8 = 2; i_8 < 16; i_8 += 4) 
                        {
                            {
                                var_23 *= ((/* implicit */unsigned int) arr_12 [i_8] [i_1] [7] [i_1]);
                                var_24 = max((((/* implicit */unsigned short) var_5)), ((unsigned short)31));
                                var_25 = ((/* implicit */int) ((min((((/* implicit */unsigned int) (unsigned short)58531)), (((unsigned int) var_2)))) < (var_9)));
                            }
                        } 
                    } 
                }
                /* LoopNest 2 */
                for (signed char i_9 = 0; i_9 < 17; i_9 += 1) 
                {
                    for (unsigned int i_10 = 0; i_10 < 17; i_10 += 1) 
                    {
                        {
                            arr_33 [i_0] [16] [i_9] [i_9] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) var_7)) ? (((unsigned int) arr_20 [i_0] [1U] [1U])) : (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_1 - 1] [i_1 + 2] [i_1 + 1] [i_1 + 3])))))));
                            var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) max((var_7), (((/* implicit */unsigned int) ((((((/* implicit */int) (short)(-32767 - 1))) * (((/* implicit */int) arr_0 [i_9])))) < (((((/* implicit */int) (unsigned short)38796)) | (((/* implicit */int) var_0))))))))))));
                            var_27 = ((/* implicit */short) 532676608U);
                            var_28 ^= ((/* implicit */short) (signed char)-24);
                        }
                    } 
                } 
                arr_34 [i_0] = ((/* implicit */signed char) arr_28 [i_0]);
            }
        } 
    } 
    var_29 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_7)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)41746)))))));
}
