/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51644
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51644 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51644
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
    for (unsigned int i_0 = 1; i_0 < 12; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 14; i_2 += 4) 
                {
                    for (signed char i_3 = 2; i_3 < 13; i_3 += 2) 
                    {
                        for (int i_4 = 3; i_4 < 11; i_4 += 3) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) ((long long int) arr_8 [i_0] [i_2] [i_2])))) ? (((((/* implicit */_Bool) (-(16383U)))) ? (max((var_4), (((/* implicit */long long int) arr_4 [i_0])))) : (((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_0] [i_3] [i_4] [i_4])) ? (((/* implicit */long long int) 16379U)) : (arr_7 [i_0] [i_1] [i_2] [i_3] [i_4]))))) : (((/* implicit */long long int) arr_0 [i_0 + 1] [i_3 + 1])))))));
                                var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) ((unsigned short) var_10)))));
                                var_20 *= ((/* implicit */_Bool) ((4294950913U) >> (((/* implicit */int) (_Bool)1))));
                                arr_13 [i_0] [i_1] [i_2] &= ((/* implicit */unsigned int) (~(((/* implicit */int) arr_10 [i_0] [i_1]))));
                                var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) arr_9 [i_0] [i_1] [i_2] [i_2] [i_3] [i_4]))));
                            }
                        } 
                    } 
                } 
                var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) (+(((((((/* implicit */_Bool) arr_4 [i_0])) ? (arr_2 [i_0]) : (((/* implicit */long long int) var_2)))) | (((/* implicit */long long int) ((((/* implicit */int) arr_4 [i_1])) >> (((arr_0 [i_0] [i_1]) - (1921803753)))))))))))));
                var_23 += ((/* implicit */unsigned char) (~(((/* implicit */int) (!((!(((/* implicit */_Bool) var_8)))))))));
                /* LoopSeq 4 */
                for (int i_5 = 2; i_5 < 13; i_5 += 4) /* same iter space */
                {
                    arr_17 [i_0] [i_1] &= ((/* implicit */unsigned char) max((((/* implicit */long long int) ((signed char) arr_11 [i_1] [i_5]))), (((arr_3 [i_0 - 1]) >> (((arr_3 [i_1]) - (7077625109913577676LL)))))));
                    arr_18 [i_0] [i_1] [i_5] [i_5] = ((/* implicit */long long int) 4294950912U);
                }
                /* vectorizable */
                for (int i_6 = 2; i_6 < 13; i_6 += 4) /* same iter space */
                {
                    arr_21 [i_6] [i_6] [i_6] |= ((/* implicit */unsigned int) ((arr_2 [i_0 - 1]) / (arr_2 [i_0 - 1])));
                    var_24 *= ((4082067334U) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)95))));
                    var_25 |= arr_16 [i_0] [i_1] [i_6] [i_1];
                    arr_22 [i_0] [i_6] = ((/* implicit */int) ((signed char) arr_14 [i_0] [i_0] [i_0]));
                }
                for (int i_7 = 2; i_7 < 13; i_7 += 4) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (long long int i_8 = 0; i_8 < 14; i_8 += 1) 
                    {
                        for (int i_9 = 0; i_9 < 14; i_9 += 4) 
                        {
                            {
                                var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((4294950913U) > (arr_31 [i_0] [i_1] [i_9] [i_8]))) ? (((((/* implicit */_Bool) arr_23 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_9] [i_1]))) : (arr_8 [i_0] [i_0] [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) 4294950908U))))))) ? (min((((/* implicit */long long int) ((((/* implicit */_Bool) 4294950913U)) && (((/* implicit */_Bool) 212899961U))))), (max((1109548048089095497LL), (((/* implicit */long long int) 4294950913U)))))) : (((/* implicit */long long int) ((/* implicit */int) ((min((arr_31 [i_0] [i_1] [i_7] [i_8]), (arr_5 [i_0] [i_7] [i_8] [i_9]))) == (((/* implicit */unsigned int) ((/* implicit */int) ((arr_9 [i_0] [i_1] [i_7] [i_8] [i_8] [i_9]) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_9])))))))))))));
                                var_27 = ((/* implicit */int) arr_25 [i_9] [i_8] [i_1] [i_0]);
                                var_28 += ((/* implicit */unsigned int) 0);
                                var_29 = ((/* implicit */unsigned short) ((arr_0 [i_1] [i_1]) & (min((((((/* implicit */int) (signed char)2)) ^ (((/* implicit */int) arr_27 [i_9] [i_8] [i_7] [i_1] [i_0])))), (((int) (_Bool)1))))));
                            }
                        } 
                    } 
                    var_30 = ((/* implicit */_Bool) max((((/* implicit */int) (!(((/* implicit */_Bool) -7136842466006165411LL))))), (((((/* implicit */_Bool) 2063924500)) ? (((/* implicit */int) (!(((/* implicit */_Bool) 4082067328U))))) : (((/* implicit */int) ((((/* implicit */_Bool) -9108920610061879244LL)) || (((/* implicit */_Bool) 1048574)))))))));
                }
                /* vectorizable */
                for (unsigned char i_10 = 3; i_10 < 13; i_10 += 4) 
                {
                    var_31 = ((/* implicit */unsigned char) max((var_31), (((/* implicit */unsigned char) arr_16 [i_0] [i_0] [i_0] [i_0]))));
                    /* LoopSeq 1 */
                    for (long long int i_11 = 0; i_11 < 14; i_11 += 2) 
                    {
                        arr_37 [i_0] [i_11] [i_0] [i_0] &= ((/* implicit */unsigned char) -1834427404);
                        var_32 *= ((/* implicit */unsigned char) ((arr_16 [i_0] [i_1] [i_10] [i_11]) & (arr_16 [i_0 + 2] [i_1] [i_10 + 1] [i_11])));
                        var_33 = ((/* implicit */unsigned char) (~(((long long int) arr_4 [i_0]))));
                        arr_38 [i_0] [i_1] [i_10] [i_11] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(arr_8 [i_1] [i_10] [i_11])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 61572651155456LL)) ? (((/* implicit */int) (signed char)24)) : (((/* implicit */int) (unsigned char)167))))) : (((((/* implicit */_Bool) (signed char)2)) ? (var_13) : (var_4)))));
                        var_34 = ((/* implicit */unsigned short) max((var_34), (((/* implicit */unsigned short) (~((-(16378U))))))));
                    }
                }
                var_35 -= ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_0 + 2])) ? (max((var_7), (((/* implicit */unsigned int) arr_24 [i_0])))) : (arr_8 [i_0 - 1] [i_0 + 2] [i_0 - 1])))) > (min((((/* implicit */long long int) ((arr_28 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) >= (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_1])))))), (arr_3 [i_0])))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_12 = 2; i_12 < 11; i_12 += 2) 
    {
        for (signed char i_13 = 0; i_13 < 13; i_13 += 4) 
        {
            {
                var_36 = ((/* implicit */int) max((var_36), (((/* implicit */int) max((((/* implicit */unsigned int) var_14)), ((+(arr_44 [i_12 - 1]))))))));
                arr_45 [i_12] = ((/* implicit */long long int) min((((min((7136842466006165410LL), (((/* implicit */long long int) arr_19 [i_12])))) >= (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (var_5))))), (arr_24 [i_12])));
                /* LoopNest 3 */
                for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                {
                    for (unsigned char i_15 = 0; i_15 < 13; i_15 += 2) 
                    {
                        for (unsigned int i_16 = 0; i_16 < 13; i_16 += 2) 
                        {
                            {
                                arr_52 [i_14] [i_15] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((4294950913U), (((/* implicit */unsigned int) (signed char)0))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_35 [i_12] [i_12] [i_16] [i_12])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_12]))) : (16383U)))) : ((+(arr_1 [i_12])))))) ? ((+(max((arr_16 [i_12] [i_14] [i_15] [i_16]), (((/* implicit */unsigned int) arr_10 [i_12] [i_15])))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))));
                                arr_53 [i_12] [i_13] [i_14] [i_15] [i_16] = max((((((/* implicit */int) arr_29 [i_13] [i_13] [i_14] [i_15] [i_16])) ^ ((~(((/* implicit */int) (signed char)(-127 - 1))))))), (((/* implicit */int) var_11)));
                            }
                        } 
                    } 
                } 
                arr_54 [i_12] [i_13] [i_13] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) arr_47 [i_12 + 1] [i_12 + 1]))))) : (((((((/* implicit */int) arr_42 [i_12] [i_13])) >= (((/* implicit */int) arr_4 [i_12])))) ? (843687739U) : (((/* implicit */unsigned int) ((727793508) & (1834427399))))))));
            }
        } 
    } 
    var_37 = max((((/* implicit */unsigned int) var_14)), ((((!(var_0))) ? (((/* implicit */unsigned int) min((((/* implicit */int) var_9)), (var_15)))) : (2813051392U))));
    var_38 = ((/* implicit */unsigned int) ((unsigned char) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_16))))))));
    var_39 += ((/* implicit */int) var_12);
}
