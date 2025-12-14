/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224272
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224272 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224272
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
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned int i_2 = 1; i_2 < 21; i_2 += 2) 
                {
                    arr_9 [i_0] [i_1] [i_1] = (~(max((((/* implicit */long long int) arr_2 [i_2 - 1])), (var_0))));
                    /* LoopNest 2 */
                    for (short i_3 = 3; i_3 < 22; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 23; i_4 += 4) 
                        {
                            {
                                var_10 = ((/* implicit */long long int) min((var_10), (((/* implicit */long long int) min((((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (-(1385670293)))) == (10237191275854866631ULL)))), (282338615U))))));
                                var_11 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (((~(var_3))) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))) << (((((((/* implicit */_Bool) -2101363385)) ? (((/* implicit */int) (unsigned char)251)) : ((-(arr_5 [i_2] [i_1]))))) - (250)))));
                                arr_16 [i_1] [i_1] [i_0] = ((/* implicit */short) (-(arr_12 [i_0] [i_1] [i_2] [i_2] [i_0])));
                                var_12 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)-21226)))))) ^ (((((/* implicit */_Bool) 8209552797854684986ULL)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_1])))))))) ? (max((((/* implicit */unsigned int) ((arr_2 [i_0]) >> (((/* implicit */int) var_9))))), (((((/* implicit */_Bool) (short)2773)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1]))) : (var_5))))) : (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned char) ((_Bool) (short)-13252))), ((unsigned char)255)))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (unsigned long long int i_5 = 0; i_5 < 23; i_5 += 3) 
                    {
                        var_13 &= ((/* implicit */short) min((((/* implicit */unsigned int) arr_14 [i_0] [i_0] [i_2 + 1] [i_5] [i_0] [i_2])), (arr_18 [i_0] [i_0] [i_2] [i_5] [i_0])));
                        var_14 *= ((/* implicit */short) 9223372036854775795LL);
                        arr_19 [6LL] [i_1] [i_2 + 1] [i_1] [i_0] = ((/* implicit */long long int) ((var_9) && (((/* implicit */_Bool) max(((-(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((short) 6402564032294206007ULL))))))));
                        arr_20 [i_0] [i_0] [i_1] [i_5] = ((/* implicit */long long int) var_1);
                        arr_21 [i_1] = ((/* implicit */unsigned long long int) (+((+(9223372036854775795LL)))));
                    }
                }
                var_15 ^= ((/* implicit */_Bool) (((-(max((arr_0 [i_0] [i_1]), (((/* implicit */unsigned long long int) var_0)))))) >> (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0]))) < (((var_3) + (((/* implicit */unsigned long long int) ((/* implicit */int) (short)8178))))))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned char i_6 = 0; i_6 < 23; i_6 += 3) /* same iter space */
                {
                    arr_25 [i_0] [i_1] [i_1] [(unsigned char)4] = ((/* implicit */unsigned long long int) ((10237191275854866617ULL) == (((/* implicit */unsigned long long int) 4294967295U))));
                    var_16 = ((/* implicit */long long int) var_9);
                    var_17 = ((/* implicit */short) (~(((((/* implicit */int) (unsigned char)100)) / (var_7)))));
                }
                for (unsigned char i_7 = 0; i_7 < 23; i_7 += 3) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (long long int i_8 = 1; i_8 < 22; i_8 += 4) 
                    {
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            {
                                arr_34 [i_1] [0LL] [i_8] [0U] [i_8] = ((((/* implicit */unsigned int) var_4)) < (max((282338616U), (4294967284U))));
                                arr_35 [i_1] [i_1] [i_1] [(_Bool)1] [i_1] [(_Bool)1] [i_1] = ((/* implicit */int) max(((!(((/* implicit */_Bool) arr_27 [i_1] [i_1] [i_7] [i_8 - 1])))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_0] [i_0] [i_1] [i_8])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (short)30393))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)36)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (-3547379608982625764LL))))))));
                            }
                        } 
                    } 
                    arr_36 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */short) (((+(17905708220405608235ULL))) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) min(((unsigned char)158), (((/* implicit */unsigned char) (_Bool)1)))))))));
                    var_18 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)2)) || (((/* implicit */_Bool) -7))))) * ((+(-619698575)))))), (var_8)));
                }
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
    {
        arr_40 [i_10] [i_10] = (-(arr_10 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10]));
        arr_41 [i_10] = ((/* implicit */short) ((-2677710337979330015LL) ^ (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_10] [i_10])))));
        arr_42 [i_10] [i_10] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-37))) < (-1863555342512435439LL))))) < (9169368652718137328ULL)));
        var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) ((short) arr_39 [i_10])))));
        arr_43 [i_10] [i_10] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_10] [i_10]))) % (((((/* implicit */_Bool) (unsigned char)6)) ? (17388343159761381701ULL) : (((/* implicit */unsigned long long int) 1953505809))))));
    }
    var_20 = ((/* implicit */int) ((((/* implicit */unsigned int) var_1)) & (max(((~(var_5))), (((/* implicit */unsigned int) var_2))))));
    var_21 = ((/* implicit */int) max((((((((/* implicit */unsigned long long int) 1009283969874460823LL)) < (14102706309755346238ULL))) ? (((/* implicit */long long int) max((((/* implicit */unsigned int) (short)-22369)), (var_5)))) : (3101946385045902378LL))), (((/* implicit */long long int) 1778209104U))));
    var_22 = ((/* implicit */long long int) max((var_22), (((((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) 517298762U)) || (((/* implicit */_Bool) (signed char)37)))))))) + (max((var_0), (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) 2677710337979330032LL)))))))))));
}
