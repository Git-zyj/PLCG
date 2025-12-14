/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198171
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198171 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198171
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
    for (int i_0 = 1; i_0 < 16; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_4 [(_Bool)1] [(_Bool)1] [i_1] |= ((/* implicit */int) var_6);
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 20; i_2 += 2) 
                {
                    for (signed char i_3 = 0; i_3 < 20; i_3 += 2) 
                    {
                        {
                            var_11 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_0] [5ULL] [i_2] [i_0])) ? (((/* implicit */unsigned long long int) (~(-1893307035)))) : ((~(max((((/* implicit */unsigned long long int) var_9)), (8056977554856748063ULL)))))));
                            /* LoopSeq 4 */
                            for (unsigned short i_4 = 4; i_4 < 19; i_4 += 2) 
                            {
                                arr_14 [i_2] [i_3] [i_1] [i_2] [i_2] [i_1] [i_0] = ((/* implicit */int) max((((arr_6 [i_4 - 4] [i_4 - 4] [i_0 + 1] [i_0]) >> (((2426202855305831285ULL) - (2426202855305831263ULL))))), (((arr_12 [i_0 + 4] [i_0 + 3] [i_3] [(_Bool)1] [i_4 - 3] [16LL]) ? (((/* implicit */unsigned long long int) 554142407)) : (arr_6 [i_4 - 4] [(short)1] [i_0 + 4] [i_0])))));
                                var_12 = ((/* implicit */int) (unsigned char)159);
                            }
                            for (unsigned int i_5 = 0; i_5 < 20; i_5 += 2) 
                            {
                                var_13 = ((/* implicit */unsigned short) max((max((((((/* implicit */_Bool) (unsigned short)40121)) ? (var_2) : (10389766518852803534ULL))), (((/* implicit */unsigned long long int) arr_9 [i_1] [i_3] [i_5])))), (((/* implicit */unsigned long long int) max((-734743315), (((/* implicit */int) (unsigned short)55807)))))));
                                arr_19 [i_0] [i_2] [i_3] [i_5] = min((((/* implicit */unsigned int) (-(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (short)-5698))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_2] [i_3])) ? (arr_1 [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)59)))))) ? (((unsigned int) var_10)) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))));
                            }
                            for (signed char i_6 = 0; i_6 < 20; i_6 += 2) 
                            {
                                var_14 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 16020541218403720340ULL)) ? (arr_1 [i_0 - 1] [i_0 + 1]) : (arr_1 [i_0 + 1] [i_0 + 1])))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0 - 1] [i_0 + 4])))))) : (max((((/* implicit */long long int) 703522091)), (var_6)))));
                                var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [i_0 + 4] [i_0] [i_0 + 3] [i_0 + 1] [i_0 + 3] [i_0 + 1])) ? (arr_23 [i_0 + 2] [i_0] [i_0] [i_0] [i_0 + 4] [15ULL]) : (((/* implicit */long long int) arr_18 [i_0 + 1] [i_0 + 4] [i_0 - 1] [i_0]))))) ? (((/* implicit */int) ((((/* implicit */int) arr_9 [i_0 + 4] [i_0 + 1] [i_0 + 1])) <= (((/* implicit */int) max((((/* implicit */unsigned short) (short)5692)), ((unsigned short)19752))))))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) != ((~(var_4))))))));
                                var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */signed char) arr_12 [i_6] [i_3] [i_3] [i_0] [i_1] [i_0])), ((signed char)-89)))) ? (((unsigned long long int) (_Bool)1)) : (((/* implicit */unsigned long long int) (+(arr_10 [i_0 + 1] [i_0 + 1] [i_2]))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!((!((_Bool)1))))))) : (var_4)));
                            }
                            /* vectorizable */
                            for (long long int i_7 = 1; i_7 < 16; i_7 += 3) 
                            {
                                var_17 = ((/* implicit */unsigned int) ((int) (-(((/* implicit */int) (_Bool)0)))));
                                var_18 = ((/* implicit */unsigned long long int) ((unsigned short) (signed char)-62));
                                var_19 = ((/* implicit */int) min((var_19), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-79)) ? (3817258072U) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))) ? (((/* implicit */int) (unsigned short)57343)) : (((((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_0 + 3] [i_0] [i_0])) ? (734743329) : (((/* implicit */int) (signed char)77))))))));
                            }
                            arr_27 [i_2] [i_0] = ((/* implicit */_Bool) max((1380599823U), (((/* implicit */unsigned int) (signed char)-89))));
                            arr_28 [i_0] [i_1] [i_1] [i_1] [i_2] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_12 [i_0 - 1] [i_0] [i_0] [i_1] [i_2] [i_3]) ? (((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) (unsigned short)11064)) : (((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) (!(((/* implicit */_Bool) 2161070595U)))))))) ? ((~(((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) arr_15 [i_0 - 1] [i_0 - 1] [(short)15] [i_2] [i_3])) : (((/* implicit */int) var_3)))))) : (((/* implicit */int) (signed char)89))));
                        }
                    } 
                } 
                arr_29 [i_0 + 4] = ((/* implicit */short) max((((/* implicit */unsigned int) ((((((/* implicit */_Bool) (-2147483647 - 1))) || (((/* implicit */_Bool) (short)12831)))) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) ((unsigned short) arr_9 [i_0] [i_0] [i_0])))))), (((((/* implicit */_Bool) arr_18 [i_0] [i_1] [i_0 + 4] [i_1])) ? (min((((/* implicit */unsigned int) (unsigned char)0)), (arr_18 [i_0] [i_0] [i_0] [(signed char)13]))) : (((/* implicit */unsigned int) (~(((/* implicit */int) arr_25 [i_0] [i_1])))))))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) min((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned short)45768)) : (var_0))), (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-55))))))))));
}
