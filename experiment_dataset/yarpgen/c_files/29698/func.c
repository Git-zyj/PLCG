/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29698
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29698 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29698
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
    var_17 = ((/* implicit */int) (+(((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) (-(var_7)))) : (var_0)))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                var_18 = ((/* implicit */_Bool) max(((+(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [7U]))) <= (arr_3 [i_1])))))), (((/* implicit */int) ((arr_3 [i_1]) == (var_11))))));
                /* LoopSeq 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 4) 
                    {
                        for (int i_4 = 0; i_4 < 11; i_4 += 4) 
                        {
                            {
                                arr_11 [i_0] [(_Bool)1] [i_0] [i_1] [i_3] [i_3] [10ULL] &= (+(arr_4 [i_0] [i_0] [i_4]));
                                arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] [i_1] = ((/* implicit */unsigned long long int) var_3);
                            }
                        } 
                    } 
                    arr_13 [8ULL] [i_1] [i_2] &= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (7106289919918104465ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)5))) : (((534773760ULL) >> (((unsigned long long int) (_Bool)1))))));
                }
                /* vectorizable */
                for (short i_5 = 0; i_5 < 11; i_5 += 4) 
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_6 = 1; i_6 < 8; i_6 += 4) 
                    {
                        for (unsigned long long int i_7 = 0; i_7 < 11; i_7 += 3) 
                        {
                            {
                                arr_23 [i_1] [9ULL] [i_5] [i_0] [i_1] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)496))));
                                arr_24 [i_1] [i_1] = ((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1))));
                                var_19 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((short) arr_14 [i_1])))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        arr_27 [i_1] [i_1] [i_1] [(_Bool)1] = (+(var_0));
                        arr_28 [i_0] [i_1] [(unsigned short)9] [(unsigned char)10] [i_1] [0U] = ((/* implicit */short) (~(((unsigned int) var_15))));
                        var_20 = ((/* implicit */unsigned long long int) arr_20 [(_Bool)1] [i_1] [i_1] [i_1] [5ULL] [i_1]);
                        var_21 = ((/* implicit */unsigned long long int) ((_Bool) arr_1 [i_0]));
                    }
                    var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) arr_20 [i_0] [7ULL] [i_5] [i_0] [i_0] [i_1]))) ? (arr_3 [i_1]) : (arr_9 [i_5] [(unsigned char)9] [i_0] [i_0])));
                    var_23 = ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [5] [i_1] [8U] [i_1] [i_1]))) | (var_4))) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [(unsigned char)1] [i_1] [(unsigned short)2] [(unsigned char)1]))));
                    var_24 = ((/* implicit */int) var_14);
                }
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned int i_9 = 0; i_9 < 11; i_9 += 4) 
                {
                    arr_31 [i_1] [i_1] = ((/* implicit */unsigned long long int) arr_29 [i_1]);
                    var_25 = ((/* implicit */unsigned char) ((arr_5 [i_9]) - (((((/* implicit */_Bool) 17592186036224ULL)) ? (((/* implicit */unsigned long long int) 2313136713U)) : (arr_5 [i_0])))));
                }
                for (unsigned int i_10 = 0; i_10 < 11; i_10 += 4) 
                {
                    var_26 = ((/* implicit */short) (~(1981830583U)));
                    var_27 = 1981830588U;
                    arr_36 [i_1] [i_1] [i_10] = ((((((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)0))))) & (((1981830593U) ^ (2313136726U))))) | (((/* implicit */unsigned int) min((((/* implicit */int) (short)-32557)), ((~(((/* implicit */int) (unsigned char)255))))))));
                    var_28 = ((/* implicit */unsigned long long int) max((var_28), (((((((arr_35 [i_0] [10U]) & (((/* implicit */unsigned long long int) 732413722U)))) & (11493402529771315853ULL))) & (((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_14 [i_10])))) | (((unsigned long long int) 3475480023U))))))));
                }
                for (unsigned long long int i_11 = 0; i_11 < 11; i_11 += 4) 
                {
                    /* LoopSeq 3 */
                    for (unsigned char i_12 = 0; i_12 < 11; i_12 += 3) 
                    {
                        arr_41 [i_0] [i_0] [i_0] [i_1] [i_11] [i_1] = ((/* implicit */unsigned long long int) arr_39 [i_0]);
                        var_29 = ((/* implicit */unsigned char) max((var_29), (((/* implicit */unsigned char) (+(((/* implicit */int) var_6)))))));
                    }
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        var_30 = ((/* implicit */unsigned char) min((var_30), (((/* implicit */unsigned char) max((((((/* implicit */_Bool) (-(((/* implicit */int) arr_22 [i_13]))))) ? (arr_35 [i_1] [i_0]) : (arr_34 [i_0] [i_0] [(short)3] [i_0]))), ((((_Bool)1) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_15 [i_0] [i_11]))))) : ((+(var_16))))))))));
                        arr_44 [i_0] [i_0] [i_1] = ((/* implicit */unsigned char) ((unsigned long long int) arr_18 [i_0] [i_1] [i_11] [i_13] [i_0] [i_1]));
                    }
                    for (int i_14 = 0; i_14 < 11; i_14 += 1) 
                    {
                        arr_49 [(short)8] [i_1] [2] [i_1] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) >> (((1048544U) - (1048529U)))))), (((unsigned long long int) (_Bool)1))));
                        arr_50 [i_0] [i_0] [i_0] [i_1] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) ((unsigned long long int) 14873300982455515567ULL))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_1]))) : (((((/* implicit */_Bool) 6940555785091187892ULL)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_1] [i_0] [i_1] [9U] [4ULL]))))))), (((/* implicit */unsigned long long int) (~((~(((/* implicit */int) arr_37 [6U] [i_1] [i_11] [i_14])))))))));
                        var_31 = ((/* implicit */_Bool) (+(((/* implicit */int) arr_17 [i_0] [(unsigned char)9] [i_11] [i_14]))));
                    }
                    arr_51 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned char) ((arr_5 [i_0]) >> (((((/* implicit */int) arr_2 [i_0] [i_11])) - (222))))))) || (((/* implicit */_Bool) arr_33 [i_0] [i_1] [i_1]))));
                    var_32 = ((/* implicit */unsigned long long int) arr_48 [i_0] [i_1] [i_0]);
                }
            }
        } 
    } 
    var_33 = ((var_5) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((11493402529771315853ULL) < (((/* implicit */unsigned long long int) ((unsigned int) var_5))))))));
}
