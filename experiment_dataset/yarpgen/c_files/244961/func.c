/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244961
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244961 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244961
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
    var_16 = ((/* implicit */long long int) var_2);
    var_17 = ((/* implicit */short) (~(max((((4294967280U) - (3311465119U))), (((((/* implicit */_Bool) 1220817898U)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)40)))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                /* LoopSeq 2 */
                for (short i_2 = 0; i_2 < 11; i_2 += 3) /* same iter space */
                {
                    var_18 -= ((/* implicit */unsigned char) min((((((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (1085292996U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [i_0 - 1])))))) / (142989288169013248LL))), (((var_8) | (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0 - 1] [i_0 - 1])))))));
                    var_19 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_0 [i_1]))))) ? (((142989288169013248LL) - (((/* implicit */long long int) 4294967295U)))) : (142989288169013265LL)))));
                    var_20 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_9 [i_0] [i_0] [i_0 - 1]), (arr_9 [i_0 - 1] [i_0] [i_0 - 1])))) ? (((/* implicit */unsigned int) min((arr_3 [8ULL] [i_0 - 1]), (arr_3 [2U] [i_0])))) : ((-(arr_9 [i_0 - 1] [0ULL] [i_0 - 1])))));
                    var_21 *= ((/* implicit */_Bool) var_5);
                    var_22 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0 - 1] [i_1])) ? (arr_2 [i_1]) : (((/* implicit */int) arr_4 [i_0]))))) ? (((((/* implicit */_Bool) var_5)) ? (var_8) : (((/* implicit */long long int) arr_9 [i_0] [i_2] [i_2])))) : (((/* implicit */long long int) (+(((/* implicit */int) (short)-27416)))))))) ? (((/* implicit */int) var_4)) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_8 [10LL] [i_1] [6U])) : (((/* implicit */int) arr_6 [4ULL] [i_2]))))));
                }
                for (short i_3 = 0; i_3 < 11; i_3 += 3) /* same iter space */
                {
                    arr_14 [(signed char)2] [i_1] |= ((/* implicit */short) (-(((/* implicit */int) ((((/* implicit */int) (short)-13772)) >= (((/* implicit */int) max((arr_11 [i_3] [i_1] [i_0 - 1]), (arr_4 [i_0 - 1])))))))));
                    arr_15 [i_0 - 1] [i_1] [i_3] = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (+(((((/* implicit */int) (signed char)114)) % (((/* implicit */int) (unsigned char)28))))))), ((~(max((var_15), (552635453U)))))));
                }
                var_23 = ((/* implicit */unsigned int) min(((-(((/* implicit */int) arr_12 [i_1] [i_0])))), (((/* implicit */int) min((((/* implicit */short) (!(((/* implicit */_Bool) var_11))))), ((short)-23735))))));
                var_24 = ((/* implicit */signed char) ((unsigned char) arr_3 [i_1] [i_1]));
                var_25 += ((/* implicit */short) min((((((/* implicit */int) (short)8614)) & (((/* implicit */int) (signed char)28)))), (((/* implicit */int) min((arr_4 [i_0 - 1]), (arr_11 [i_0] [i_0 - 1] [i_0 - 1]))))));
                /* LoopNest 3 */
                for (unsigned short i_4 = 0; i_4 < 11; i_4 += 1) 
                {
                    for (int i_5 = 2; i_5 < 10; i_5 += 2) 
                    {
                        for (signed char i_6 = 0; i_6 < 11; i_6 += 2) 
                        {
                            {
                                var_26 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (-(((/* implicit */int) (short)8184))))) ? (((/* implicit */int) max((var_9), (((/* implicit */short) arr_23 [i_0 - 1] [i_0 - 1] [i_4] [i_5] [i_1]))))) : (((/* implicit */int) min((var_4), (((/* implicit */signed char) arr_7 [i_5] [(signed char)9] [i_0]))))))) == (((/* implicit */int) var_12))));
                                var_27 = ((/* implicit */unsigned int) (_Bool)0);
                                var_28 = ((/* implicit */unsigned long long int) max((var_28), (((/* implicit */unsigned long long int) ((min((((/* implicit */unsigned int) var_0)), (var_11))) << (((((/* implicit */int) var_3)) + (10654))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_29 = ((/* implicit */unsigned short) var_10);
}
