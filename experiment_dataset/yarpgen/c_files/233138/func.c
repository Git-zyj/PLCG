/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233138
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233138 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233138
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
    var_19 = ((/* implicit */unsigned char) ((unsigned long long int) var_16));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (long long int i_1 = 1; i_1 < 21; i_1 += 3) 
        {
            {
                arr_6 [i_0] [i_0] = ((/* implicit */_Bool) var_16);
                /* LoopSeq 2 */
                /* vectorizable */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_20 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)121))));
                    arr_9 [i_0] [i_2] [i_0] = ((/* implicit */_Bool) (unsigned char)252);
                }
                /* vectorizable */
                for (short i_3 = 0; i_3 < 23; i_3 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_4 = 1; i_4 < 22; i_4 += 1) 
                    {
                        var_21 = ((/* implicit */signed char) (+(var_18)));
                        var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) ((((/* implicit */_Bool) 1438179568U)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))))));
                        var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)37))) % (var_10))))));
                    }
                    arr_16 [i_0] [i_1] [i_1] = ((/* implicit */signed char) (~((~(14284195592766292671ULL)))));
                    var_24 = (i_0 % 2 == 0) ? (((/* implicit */signed char) ((arr_3 [i_0] [i_0] [i_1 + 2]) << (((var_2) - (14425791562981022987ULL)))))) : (((/* implicit */signed char) ((((arr_3 [i_0] [i_0] [i_1 + 2]) + (9223372036854775807LL))) << (((var_2) - (14425791562981022987ULL))))));
                    /* LoopSeq 2 */
                    for (signed char i_5 = 0; i_5 < 23; i_5 += 1) 
                    {
                        var_25 = ((/* implicit */short) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned char)194))));
                        var_26 = ((/* implicit */_Bool) 1678012460);
                        var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) -1678012456))));
                    }
                    for (unsigned short i_6 = 0; i_6 < 23; i_6 += 1) 
                    {
                        /* LoopSeq 4 */
                        for (short i_7 = 0; i_7 < 23; i_7 += 1) 
                        {
                            var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_4 [i_0])) % (((/* implicit */int) arr_4 [i_0]))));
                            arr_26 [i_0] [i_0] = ((/* implicit */signed char) var_15);
                        }
                        for (long long int i_8 = 0; i_8 < 23; i_8 += 3) 
                        {
                            arr_29 [i_6] [i_0] [i_1 - 1] [i_6] = ((/* implicit */long long int) (-(((((/* implicit */_Bool) (unsigned char)134)) ? (((/* implicit */unsigned long long int) 1048441907)) : (var_10)))));
                            var_29 += ((/* implicit */_Bool) ((((/* implicit */int) var_11)) | (((/* implicit */int) ((4965850080025564885ULL) > (((/* implicit */unsigned long long int) 0)))))));
                            var_30 *= ((/* implicit */_Bool) (-(((/* implicit */int) var_4))));
                        }
                        for (int i_9 = 0; i_9 < 23; i_9 += 3) 
                        {
                            arr_33 [i_3] [i_1 + 1] [i_0] [i_0] [i_9] = ((/* implicit */long long int) (~((-(((/* implicit */int) (short)(-32767 - 1)))))));
                            var_31 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))));
                            var_32 = ((/* implicit */unsigned long long int) arr_15 [i_0] [i_1 + 2] [i_3] [i_6] [i_9]);
                            arr_34 [i_0] [i_1] [i_0] [i_0] [i_9] = var_12;
                            arr_35 [i_0] [i_6] [i_3] [i_0] [i_0] = ((/* implicit */unsigned char) 3583375251U);
                        }
                        for (signed char i_10 = 0; i_10 < 23; i_10 += 3) 
                        {
                            var_33 = ((/* implicit */_Bool) max((var_33), (((/* implicit */_Bool) ((short) -3987394259242908135LL)))));
                            arr_40 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_11 [i_0] [i_1 + 1]))));
                        }
                        arr_41 [i_6] [i_0] [i_0] [i_0] [i_0] = ((unsigned long long int) 3445377759829663206ULL);
                    }
                }
            }
        } 
    } 
    var_34 = ((/* implicit */unsigned long long int) ((signed char) 711592028U));
    var_35 = var_18;
    var_36 = ((/* implicit */unsigned short) max((var_36), (((/* implicit */unsigned short) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */unsigned long long int) var_7)) : (min((var_18), (((/* implicit */unsigned long long int) var_13)))))))));
}
