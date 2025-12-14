/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35193
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35193 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35193
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
    var_11 = ((/* implicit */unsigned short) var_4);
    var_12 = ((/* implicit */unsigned int) ((var_5) != (((((/* implicit */_Bool) var_5)) ? ((~(1179433191U))) : (((/* implicit */unsigned int) var_3))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (short i_3 = 0; i_3 < 10; i_3 += 1) 
                    {
                        arr_10 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_1] [i_2] [i_3] [i_3])) || (((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_2] [i_3]))));
                        /* LoopSeq 3 */
                        for (signed char i_4 = 0; i_4 < 10; i_4 += 1) 
                        {
                            var_13 = ((/* implicit */unsigned int) (unsigned short)49948);
                            var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) ((unsigned int) var_0)))));
                        }
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            var_15 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_16 [i_0] [i_1] [i_2] [i_2] [i_3] [i_5])) ? (((/* implicit */int) arr_1 [(short)4])) : (((/* implicit */int) arr_1 [(unsigned short)4]))));
                            var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) (~(((/* implicit */int) (signed char)127)))))));
                            var_17 = ((((/* implicit */_Bool) (short)-1866)) ? (((/* implicit */unsigned int) var_9)) : (arr_15 [i_0] [i_2] [i_2] [i_3] [i_5]));
                            var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)1885)) ? (((/* implicit */int) (short)2448)) : (((/* implicit */int) arr_2 [i_1] [i_2] [i_0]))));
                        }
                        for (unsigned short i_6 = 0; i_6 < 10; i_6 += 4) 
                        {
                            var_19 = ((/* implicit */unsigned short) ((((/* implicit */int) var_4)) & (((/* implicit */int) arr_4 [i_3] [i_1]))));
                            var_20 = ((/* implicit */_Bool) var_8);
                            arr_20 [i_3] [i_0] [i_2] [i_2] [i_0] [i_1] [i_3] = ((/* implicit */short) (-(((/* implicit */int) var_10))));
                        }
                    }
                    /* LoopSeq 2 */
                    for (unsigned int i_7 = 0; i_7 < 10; i_7 += 2) 
                    {
                        var_21 += ((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_1 [i_7])))) ? ((+(((/* implicit */int) (signed char)-12)))) : (((/* implicit */int) arr_12 [i_0] [i_1] [i_0] [i_2] [i_2] [i_7] [5ULL]))));
                        var_22 = ((/* implicit */int) min((((/* implicit */unsigned int) (~((+(((/* implicit */int) (_Bool)1))))))), (var_5)));
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (unsigned short i_8 = 0; i_8 < 10; i_8 += 1) 
                        {
                            var_23 = var_2;
                            var_24 -= ((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */int) arr_24 [(_Bool)1] [i_1] [i_2] [i_7] [i_8])) <= (var_3))))));
                            var_25 -= ((/* implicit */_Bool) ((unsigned short) (!(((/* implicit */_Bool) (signed char)-51)))));
                        }
                        for (unsigned int i_9 = 0; i_9 < 10; i_9 += 3) 
                        {
                            var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) var_9))));
                            arr_29 [i_0] [(unsigned short)3] [i_0] = ((/* implicit */unsigned short) (+(((((/* implicit */int) max((var_10), (((/* implicit */unsigned short) arr_3 [i_0] [i_2] [i_9]))))) | ((~(((/* implicit */int) var_0))))))));
                        }
                        for (unsigned short i_10 = 0; i_10 < 10; i_10 += 3) 
                        {
                            arr_33 [i_0] [i_1] [i_0] [i_7] [i_7] [i_10] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) (short)-1885)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (short)-2448)))))) ? (((/* implicit */int) ((((/* implicit */int) min((((/* implicit */unsigned short) var_8)), ((unsigned short)40242)))) == (((/* implicit */int) ((((/* implicit */int) var_8)) == (((/* implicit */int) arr_8 [i_1])))))))) : (((/* implicit */int) ((((/* implicit */_Bool) (~(arr_18 [i_0] [i_1] [i_0] [i_7] [i_10] [i_2] [i_2])))) && (((8483577723362163584ULL) < (((/* implicit */unsigned long long int) 4291262994U)))))))));
                            var_27 = ((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))));
                        }
                        for (signed char i_11 = 0; i_11 < 10; i_11 += 2) 
                        {
                            var_28 = ((/* implicit */signed char) max((var_28), (((/* implicit */signed char) (+(var_5))))));
                            arr_37 [i_0] [i_0] = ((/* implicit */short) min(((~(((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)56073)) || (((/* implicit */_Bool) var_3))))))), (((/* implicit */int) var_4))));
                            var_29 = ((/* implicit */_Bool) max((var_29), (((/* implicit */_Bool) (-(((/* implicit */int) ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) var_5)) : (arr_9 [i_0] [i_1] [i_1] [i_1] [2U] [i_1]))) != (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))))))));
                        }
                    }
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        arr_42 [i_0] [i_1] [i_2] [i_2] [i_12] [i_12] = ((/* implicit */unsigned char) (-((-(var_3)))));
                        var_30 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_3 [i_0] [i_2] [i_12]))));
                        arr_43 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (signed char)-36);
                    }
                }
            } 
        } 
    } 
    var_31 = ((/* implicit */short) (~(((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_4)), (var_7)))))))));
    var_32 = ((/* implicit */short) (+(((/* implicit */int) ((((/* implicit */_Bool) (+(var_7)))) && ((!(((/* implicit */_Bool) var_7)))))))));
}
