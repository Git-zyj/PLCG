/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23902
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23902 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23902
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
    var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) (-(((/* implicit */int) var_14)))))));
    var_17 = ((/* implicit */int) var_4);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                arr_5 [i_0] [(signed char)10] = ((/* implicit */unsigned long long int) 4029542799U);
                var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 265424496U)) || (((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0])) & (((((/* implicit */int) arr_0 [i_0])) + (var_7))))))));
                arr_6 [i_1] [i_1] [i_0] = ((/* implicit */long long int) arr_1 [i_0] [i_1]);
                var_19 = ((((/* implicit */_Bool) arr_1 [i_0] [i_1])) && (((/* implicit */_Bool) arr_1 [i_0] [i_1])));
                /* LoopSeq 3 */
                for (int i_2 = 0; i_2 < 15; i_2 += 3) 
                {
                    var_20 = ((/* implicit */int) min((var_20), (((((((/* implicit */int) var_11)) + (2147483647))) >> (((/* implicit */int) arr_7 [i_0] [i_1]))))));
                    arr_9 [i_1] [i_2] = ((/* implicit */signed char) 927978308669159999ULL);
                    /* LoopSeq 3 */
                    for (signed char i_3 = 0; i_3 < 15; i_3 += 3) 
                    {
                        arr_12 [i_2] [i_0] [i_1] [i_2] [(unsigned char)8] [i_3] = ((/* implicit */short) arr_3 [i_0] [i_3]);
                        arr_13 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) var_5)), (var_8)));
                        /* LoopSeq 2 */
                        for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 2) 
                        {
                            arr_16 [i_0] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) arr_3 [i_0] [i_0])) - (arr_11 [i_1] [1] [i_1] [8] [i_1] [10])));
                            var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) && (((3005666472U) != (265424490U)))));
                            arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] [i_2] [i_0] = ((/* implicit */unsigned short) ((9750116601351923316ULL) | ((-(min((17518765765040391617ULL), (arr_11 [(signed char)3] [i_2] [i_2] [10LL] [i_4] [i_4])))))));
                            var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) max((((/* implicit */int) min((arr_2 [i_1]), (((/* implicit */unsigned short) var_15))))), (4194303))))));
                        }
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            var_23 = ((/* implicit */unsigned int) (signed char)1);
                            arr_20 [i_2] = ((/* implicit */unsigned short) arr_10 [i_2] [i_1] [(signed char)0] [i_3] [i_5]);
                            var_24 -= ((/* implicit */long long int) arr_1 [i_0] [i_1]);
                        }
                    }
                    for (long long int i_6 = 2; i_6 < 13; i_6 += 4) 
                    {
                        arr_23 [i_0] [i_1] [(unsigned char)6] [i_2] = ((/* implicit */_Bool) (+(1820814024U)));
                        var_25 = ((/* implicit */short) min((((/* implicit */unsigned long long int) var_1)), (927978308669159999ULL)));
                        var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) arr_1 [i_0] [i_1]))));
                    }
                    for (int i_7 = 4; i_7 < 14; i_7 += 4) 
                    {
                        var_27 = max((((/* implicit */unsigned int) (_Bool)1)), (3209817479U));
                        var_28 = ((/* implicit */int) max((var_28), (((/* implicit */int) (!(((/* implicit */_Bool) (~(arr_8 [i_0])))))))));
                    }
                }
                for (long long int i_8 = 0; i_8 < 15; i_8 += 4) 
                {
                    /* LoopNest 2 */
                    for (int i_9 = 1; i_9 < 14; i_9 += 1) 
                    {
                        for (int i_10 = 0; i_10 < 15; i_10 += 4) 
                        {
                            {
                                var_29 &= ((/* implicit */long long int) (~(((/* implicit */int) arr_19 [i_0] [i_1] [i_8] [i_10] [i_10]))));
                                arr_33 [i_0] [i_1] [i_8] [i_8] [i_9 + 1] [i_9 + 1] [i_10] = ((/* implicit */unsigned char) 5U);
                            }
                        } 
                    } 
                    arr_34 [i_0] [i_1] [i_8] [i_1] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) var_14)), (arr_24 [i_0] [(unsigned char)9] [i_8] [i_0])));
                    var_30 = ((/* implicit */unsigned char) 14516241972185668240ULL);
                    arr_35 [i_8] = ((/* implicit */signed char) arr_21 [i_0] [i_1] [i_8] [i_0] [i_0] [(_Bool)1]);
                }
                for (unsigned short i_11 = 0; i_11 < 15; i_11 += 4) 
                {
                    arr_39 [i_0] [i_1] [1] [i_1] = ((/* implicit */signed char) ((((/* implicit */int) ((arr_10 [i_0] [14U] [i_11] [i_1] [i_11]) || (((/* implicit */_Bool) min((((/* implicit */int) arr_26 [i_0] [i_0] [i_0])), (arr_3 [i_0] [i_0]))))))) <= (((/* implicit */int) (!(((/* implicit */_Bool) ((var_12) >> (((arr_8 [i_1]) - (4801052805487982192ULL)))))))))));
                    arr_40 [i_0] [i_1] [i_1] = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_37 [i_0] [i_1] [i_1] [i_11]))) >= (arr_4 [i_11])))), (var_6)));
                    var_31 = ((/* implicit */unsigned int) min((var_31), (((/* implicit */unsigned int) arr_2 [i_0]))));
                    arr_41 [i_0] [i_11] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_18 [3LL] [i_11] [i_1] [i_1] [i_0] [i_0] [i_0])) | (((/* implicit */int) (_Bool)1)))) != (max((((/* implicit */int) arr_18 [i_0] [i_1] [i_1] [i_1] [i_1] [i_11] [i_11])), (var_7)))));
                }
            }
        } 
    } 
}
