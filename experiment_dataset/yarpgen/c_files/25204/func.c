/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25204
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25204 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25204
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            for (signed char i_2 = 3; i_2 < 15; i_2 += 4) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned char i_3 = 0; i_3 < 18; i_3 += 2) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned char i_4 = 1; i_4 < 15; i_4 += 4) /* same iter space */
                        {
                            var_13 = ((/* implicit */long long int) min((var_13), (((/* implicit */long long int) (+(((/* implicit */int) (signed char)-9)))))));
                            arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] [i_0] [i_4] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_9 [i_2] [i_2]))));
                        }
                        for (unsigned char i_5 = 1; i_5 < 15; i_5 += 4) /* same iter space */
                        {
                            arr_17 [i_0] [i_0] [i_5] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (+(((((/* implicit */int) arr_4 [i_2] [i_2] [i_2 + 3])) | (((/* implicit */int) arr_12 [i_1] [i_2] [i_2 + 1] [i_5 - 1] [i_5 + 3] [i_5]))))));
                            arr_18 [i_0] [i_1] [i_5] [i_3] [i_5] [i_0] [i_5] = ((((/* implicit */_Bool) (signed char)3)) ? (((/* implicit */long long int) 1067633084U)) : (-9176176632656535083LL));
                        }
                        var_14 = ((/* implicit */unsigned long long int) min((var_14), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) (+(var_1)))) + (((((/* implicit */long long int) var_1)) - (arr_0 [i_2 + 3]))))))));
                    }
                    for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
                    {
                        arr_22 [i_0] [i_0] [i_1] [i_1] [i_2 - 1] [i_6 + 1] = ((/* implicit */unsigned char) (~(((/* implicit */int) var_3))));
                        var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) (-(6887313088386656347LL))))));
                        var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) min((arr_7 [i_2 - 3] [i_2 + 3] [i_2 - 1]), (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (unsigned short)11429)))))))) == (((unsigned long long int) var_0))));
                        var_17 = ((/* implicit */signed char) (((-(((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) + (arr_16 [i_6] [i_0]))))) <= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_6))))) ? (((/* implicit */int) min((var_12), (((/* implicit */unsigned short) var_6))))) : (((/* implicit */int) ((((/* implicit */int) (unsigned char)236)) <= (((/* implicit */int) (short)32750))))))))));
                        var_18 = ((/* implicit */unsigned int) arr_1 [i_1]);
                    }
                    for (unsigned short i_7 = 3; i_7 < 17; i_7 += 2) 
                    {
                        arr_26 [i_0] [i_0] [i_0] |= ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_15 [i_7 - 1])), (9059534133816509480LL)))) ? (((/* implicit */int) ((signed char) arr_15 [i_7 - 2]))) : (((/* implicit */int) min((((/* implicit */unsigned char) arr_15 [i_7 - 3])), (var_6))))));
                        /* LoopSeq 2 */
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            var_19 = ((((/* implicit */_Bool) (short)-32760)) ? (((/* implicit */int) (short)(-32767 - 1))) : ((-(((/* implicit */int) arr_4 [i_2 - 2] [i_2 + 2] [i_7 - 3])))));
                            var_20 = ((/* implicit */signed char) (-(((/* implicit */int) (short)-32760))));
                            arr_31 [i_0] [i_7] = ((/* implicit */signed char) var_2);
                            arr_32 [i_0] [i_1] [i_2] [i_7] [i_8] = ((max(((-(arr_24 [i_0] [i_0] [i_0]))), (((/* implicit */unsigned long long int) var_0)))) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))));
                        }
                        for (unsigned long long int i_9 = 0; i_9 < 18; i_9 += 2) 
                        {
                            var_21 = ((/* implicit */signed char) arr_24 [i_0] [i_0] [i_0]);
                            arr_35 [i_0] [i_1] [i_1] [i_0] [i_7] [i_7] [i_7] = ((/* implicit */signed char) arr_6 [i_9] [i_1] [i_0]);
                            arr_36 [i_9] [i_7] [i_7] [i_0] = ((/* implicit */unsigned char) arr_11 [i_7 - 2] [i_7 - 2] [i_7] [i_7 - 1] [i_7 - 1] [i_7 - 1]);
                            var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_34 [i_0] [0] [i_7 - 1] [i_7])) % (((/* implicit */int) arr_34 [i_9] [i_1] [i_7 + 1] [5ULL]))))) ? (((long long int) arr_34 [i_0] [i_1] [i_7 - 3] [i_7])) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_34 [i_0] [i_9] [i_7 - 2] [i_9]))))))));
                            arr_37 [i_2] [i_1] [i_7] [i_7] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (short)-22247)) ? (arr_13 [i_9] [i_9] [i_7] [i_2 + 2] [i_1] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)18)))));
                        }
                        var_23 &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */int) arr_2 [i_0] [i_0])) + (2147483647))) >> (((2147483647) - (2147483622)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)3))) : ((-(arr_33 [i_7] [i_0] [i_7 + 1] [i_7])))))) ? (((/* implicit */int) (((~(((/* implicit */int) arr_20 [i_0] [i_0] [i_0] [i_0])))) > (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_11))) > (arr_29 [i_7] [i_2] [i_1] [i_0] [i_0]))))))) : (((/* implicit */int) var_10))));
                        arr_38 [i_7] [i_7] [i_2] [i_7] [i_0] = ((/* implicit */unsigned short) (-((+(((/* implicit */int) var_12))))));
                        arr_39 [i_7] [i_7] [i_2] [i_2] = ((/* implicit */signed char) (unsigned char)31);
                    }
                    var_24 = ((/* implicit */signed char) ((unsigned int) ((((/* implicit */_Bool) arr_7 [i_2 - 3] [i_2 - 2] [i_2 - 2])) ? (arr_7 [i_2 + 2] [i_2 + 2] [i_2 + 3]) : (arr_7 [i_2 - 3] [i_2 + 1] [i_2 - 2]))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_10 = 0; i_10 < 14; i_10 += 1) 
    {
        for (unsigned long long int i_11 = 0; i_11 < 14; i_11 += 3) 
        {
            {
                arr_46 [i_10] [i_10] = ((/* implicit */short) arr_45 [i_10]);
                var_25 = (-(((/* implicit */int) ((signed char) 4452750498955799138ULL))));
            }
        } 
    } 
}
