/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42376
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42376 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42376
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
    var_20 = ((/* implicit */unsigned short) (-(((((((/* implicit */int) var_2)) > (((/* implicit */int) (_Bool)1)))) ? (((/* implicit */int) max((((/* implicit */unsigned char) (signed char)-32)), ((unsigned char)3)))) : (((/* implicit */int) max((((/* implicit */unsigned char) (signed char)34)), (var_17))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (unsigned char i_1 = 1; i_1 < 12; i_1 += 4) 
        {
            {
                /* LoopSeq 3 */
                for (signed char i_2 = 0; i_2 < 16; i_2 += 3) /* same iter space */
                {
                    var_21 = max((((/* implicit */unsigned long long int) ((((/* implicit */int) max((arr_2 [i_0]), (((/* implicit */unsigned char) var_12))))) / ((+(((/* implicit */int) var_17))))))), (((min((1804166240944302426ULL), (arr_4 [i_0] [i_0]))) ^ (((/* implicit */unsigned long long int) min((((/* implicit */int) (signed char)38)), (-667968310)))))));
                    arr_6 [i_0] = ((/* implicit */long long int) ((_Bool) min((((/* implicit */int) var_19)), (arr_1 [i_1 + 4] [i_1 + 2]))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (long long int i_3 = 0; i_3 < 16; i_3 += 3) 
                    {
                        var_22 += ((/* implicit */unsigned char) arr_0 [0] [0]);
                        var_23 = ((/* implicit */_Bool) ((((/* implicit */int) var_5)) * (((/* implicit */int) ((var_14) >= (((/* implicit */unsigned int) ((/* implicit */int) var_17))))))));
                        var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_8 [i_0] [(signed char)12] [(unsigned short)6] [i_3]))))) || (((/* implicit */_Bool) (-(arr_5 [i_0] [i_0])))))))));
                    }
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        arr_14 [i_0] [i_1 + 3] [i_1 + 1] [i_1 + 3] = ((/* implicit */unsigned int) (~((+(((arr_4 [i_1 + 1] [i_1 + 1]) - (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)32)))))))));
                        arr_15 [6U] [i_1] [i_1 - 1] [6U] [4] &= ((/* implicit */signed char) (~(var_16)));
                    }
                    var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) ((unsigned short) ((28339066) == (((/* implicit */int) (signed char)43))))))));
                }
                for (signed char i_5 = 0; i_5 < 16; i_5 += 3) /* same iter space */
                {
                    var_26 = ((/* implicit */short) ((((/* implicit */_Bool) (~(max((var_14), (((/* implicit */unsigned int) var_10))))))) ? (arr_0 [i_1] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_17)))));
                    /* LoopSeq 1 */
                    for (unsigned char i_6 = 0; i_6 < 16; i_6 += 4) 
                    {
                        var_27 = ((/* implicit */unsigned short) max((var_27), (((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (((~(((/* implicit */int) (short)-13443)))) | (((/* implicit */int) min((((/* implicit */unsigned short) var_15)), (var_3))))))), ((~(((arr_4 [i_0] [(_Bool)1]) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)192))))))))))));
                        arr_21 [i_0] [i_1 + 1] [i_0] [i_5] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(arr_10 [i_1 + 2] [i_0] [i_1 - 1] [i_1 + 2])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)43))) : (max((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)29704))) ^ (var_16))), (((((/* implicit */_Bool) 7262756650406733438LL)) ? (4353329946409631332ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)57964)))))))));
                    }
                    var_28 = ((/* implicit */unsigned short) max(((+(((/* implicit */int) (_Bool)1)))), (min((((/* implicit */int) min((((/* implicit */unsigned short) var_13)), (var_19)))), (((((/* implicit */int) var_10)) * (((/* implicit */int) var_0))))))));
                }
                for (signed char i_7 = 0; i_7 < 16; i_7 += 3) /* same iter space */
                {
                    var_29 = ((/* implicit */int) max((arr_9 [i_7]), (((/* implicit */unsigned int) var_10))));
                    var_30 = ((/* implicit */int) min((var_30), (((/* implicit */int) ((unsigned short) (signed char)34)))));
                    var_31 = ((/* implicit */unsigned short) var_7);
                }
                var_32 = ((/* implicit */unsigned long long int) max((var_32), (max((((((/* implicit */_Bool) arr_0 [i_1 + 4] [4U])) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (arr_7 [2LL] [i_1] [i_1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned short)63906), (((/* implicit */unsigned short) arr_3 [(unsigned short)6] [(unsigned short)6])))))))), (((/* implicit */unsigned long long int) min((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)57))))), (((((/* implicit */_Bool) arr_17 [i_0] [i_1])) ? (((/* implicit */int) (unsigned short)63906)) : (((/* implicit */int) var_13)))))))))));
                /* LoopNest 3 */
                for (unsigned short i_8 = 3; i_8 < 15; i_8 += 4) 
                {
                    for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
                    {
                        for (signed char i_10 = 0; i_10 < 16; i_10 += 3) 
                        {
                            {
                                arr_33 [i_0] [i_0] [i_8] [i_9 - 1] [i_10] = max(((+(var_16))), (((/* implicit */unsigned long long int) var_12)));
                                arr_34 [i_0] [i_0] [i_8 + 1] [i_9] [i_10] = ((/* implicit */signed char) ((((int) (~(((/* implicit */int) (unsigned short)1615))))) == (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) arr_19 [4U] [i_9 - 1] [(unsigned char)13] [i_0] [i_0])) ? (((/* implicit */int) var_19)) : (((/* implicit */int) arr_8 [i_0] [i_0] [i_9] [(signed char)1]))))))));
                                arr_35 [i_0] [i_0] [i_1] [i_8] [10ULL] [i_9] [i_10] &= ((/* implicit */_Bool) (-(((/* implicit */int) max((arr_26 [i_0] [i_10] [i_8] [i_0] [i_1 + 3]), (arr_26 [i_0] [i_1] [i_1] [i_9 - 1] [i_1 + 3]))))));
                            }
                        } 
                    } 
                } 
                arr_36 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (signed char)48)))) % (((((/* implicit */long long int) ((/* implicit */int) var_2))) + (arr_0 [i_0] [i_0])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (max((((/* implicit */unsigned int) (~(((/* implicit */int) arr_29 [i_1 + 1] [i_1] [i_0] [i_0] [i_0]))))), (arr_32 [i_1 - 1] [i_0])))));
            }
        } 
    } 
}
