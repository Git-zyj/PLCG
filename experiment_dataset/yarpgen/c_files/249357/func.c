/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249357
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249357 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249357
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
    var_11 = ((/* implicit */_Bool) 1689575913373387430ULL);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (signed char i_1 = 2; i_1 < 9; i_1 += 3) 
        {
            {
                var_12 = ((/* implicit */_Bool) (+(((((((/* implicit */_Bool) var_8)) && ((_Bool)0))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_4 [i_1] [i_1]))))));
                /* LoopSeq 3 */
                for (int i_2 = 3; i_2 < 9; i_2 += 3) 
                {
                    arr_10 [i_1] [i_1 + 3] [i_1] = ((/* implicit */unsigned short) var_6);
                    var_13 = ((/* implicit */_Bool) min((((/* implicit */int) ((((((/* implicit */int) arr_3 [i_0])) * (((/* implicit */int) var_3)))) != (((/* implicit */int) (_Bool)1))))), (max((max((var_7), (((/* implicit */int) arr_7 [i_0])))), (((((/* implicit */_Bool) (signed char)-69)) ? (((/* implicit */int) (signed char)-80)) : (((/* implicit */int) var_2))))))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 12; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 12; i_4 += 4) 
                        {
                            {
                                arr_16 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((!(arr_14 [i_0] [i_0] [i_0] [i_0] [i_1]))) ? (((/* implicit */int) (signed char)-70)) : (((/* implicit */int) min((((/* implicit */signed char) var_6)), (arr_13 [i_1] [i_1] [i_2] [i_3] [i_4]))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_2)))))))) : ((+(((/* implicit */int) (!(var_2))))))));
                                arr_17 [i_0] [i_1] [i_1] [i_3] [i_1] = ((/* implicit */_Bool) var_8);
                            }
                        } 
                    } 
                    var_14 = ((/* implicit */long long int) max((((/* implicit */unsigned short) var_1)), ((unsigned short)2966)));
                }
                /* vectorizable */
                for (unsigned long long int i_5 = 1; i_5 < 8; i_5 += 4) /* same iter space */
                {
                    arr_20 [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) (+(((arr_0 [i_0]) & (((/* implicit */int) var_4))))));
                    var_15 = ((arr_14 [i_5 + 2] [i_1] [i_5] [i_5] [i_1]) && (((/* implicit */_Bool) arr_13 [i_1] [i_1] [i_1] [i_1] [i_0])));
                }
                for (unsigned long long int i_6 = 1; i_6 < 8; i_6 += 4) /* same iter space */
                {
                    var_16 = ((/* implicit */unsigned long long int) max((min((arr_0 [i_6 + 4]), (((/* implicit */int) var_3)))), (max((((((/* implicit */_Bool) 9130241705283723066ULL)) ? (var_5) : (((/* implicit */int) var_1)))), (((((/* implicit */_Bool) (unsigned char)88)) ? (((/* implicit */int) arr_13 [i_1] [i_1] [i_1] [i_1] [i_1])) : (((/* implicit */int) var_6))))))));
                    var_17 *= ((/* implicit */signed char) min(((+(((/* implicit */int) (_Bool)1)))), (((((/* implicit */_Bool) arr_4 [i_6] [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0))))));
                    var_18 = ((/* implicit */long long int) ((((9123801190317007619ULL) << (((/* implicit */int) (_Bool)1)))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_0]))))))));
                }
                var_19 ^= ((/* implicit */unsigned long long int) (((~(var_5))) | ((~(((/* implicit */int) var_2))))));
                var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) (!((_Bool)1))))));
                var_21 -= ((/* implicit */_Bool) min((max((arr_11 [i_1 + 1] [i_1 + 3]), (((/* implicit */signed char) (_Bool)1)))), (max((arr_11 [i_1 + 1] [i_1 + 3]), (((/* implicit */signed char) var_10))))));
            }
        } 
    } 
    var_22 *= ((/* implicit */signed char) (~(max((((/* implicit */long long int) var_0)), (((4092097095437066390LL) | (((/* implicit */long long int) 0))))))));
    var_23 = ((/* implicit */signed char) (-(min((var_7), (((((/* implicit */_Bool) 18158513697557839872ULL)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (_Bool)1))))))));
}
