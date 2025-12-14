/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209670
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209670 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209670
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
    var_17 = ((_Bool) ((((/* implicit */_Bool) var_11)) ? (min((var_8), (((/* implicit */int) var_2)))) : ((~(((/* implicit */int) (unsigned char)56))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 2; i_0 < 19; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 18; i_2 += 2) 
            {
                {
                    var_18 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 1467558227207159163ULL)) ? (((((/* implicit */_Bool) ((unsigned int) arr_3 [i_2] [i_2] [i_2]))) ? (var_9) : (((/* implicit */unsigned long long int) ((int) (unsigned char)126))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)48847)))));
                    /* LoopSeq 3 */
                    for (int i_3 = 0; i_3 < 22; i_3 += 3) /* same iter space */
                    {
                        arr_9 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */int) ((unsigned short) (_Bool)1));
                        arr_10 [i_3] [i_2] [i_1] [i_0] |= ((_Bool) (((_Bool)1) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)25138))))) : (((((/* implicit */_Bool) 9223372036854775807LL)) ? (var_3) : (((/* implicit */unsigned int) -696493658))))));
                    }
                    for (int i_4 = 0; i_4 < 22; i_4 += 3) /* same iter space */
                    {
                        arr_13 [i_0] [i_0] [i_0] [i_4] [i_4] [(unsigned short)8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max(((unsigned short)48849), (((/* implicit */unsigned short) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) ^ (var_6)))) ? (((/* implicit */int) ((short) (short)-4085))) : (((/* implicit */int) arr_2 [i_0 + 1] [i_0 + 2] [i_2 - 1]))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) - (var_9)))));
                        arr_14 [i_0] [i_0] [i_1] [i_2] [i_2] [i_0] = ((/* implicit */unsigned short) (((+((((_Bool)1) ? (((/* implicit */unsigned long long int) var_5)) : (var_9))))) * (((/* implicit */unsigned long long int) ((((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (_Bool)1)))) ^ (-2089140563))))));
                    }
                    for (signed char i_5 = 0; i_5 < 22; i_5 += 1) 
                    {
                        arr_17 [i_0] [i_1] [i_0] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_8 [(signed char)12] [i_1] [i_1] [i_2 - 2] [i_5] [(signed char)12]), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_13)))))))) ? (((((/* implicit */_Bool) (signed char)3)) ? (((/* implicit */long long int) ((int) (unsigned short)16688))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-1))) : (arr_3 [i_1] [i_1] [i_2]))))) : (((/* implicit */long long int) ((/* implicit */int) var_4)))));
                        arr_18 [10ULL] [10ULL] [i_1] [i_0] = ((/* implicit */unsigned short) ((unsigned char) min((((/* implicit */short) (unsigned char)80)), (arr_2 [i_0 + 1] [i_2 + 1] [i_2 + 1]))));
                    }
                    var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)77)) ? (((/* implicit */int) (unsigned short)16681)) : (((/* implicit */int) (_Bool)1))));
                    /* LoopSeq 2 */
                    for (unsigned short i_6 = 3; i_6 < 20; i_6 += 3) /* same iter space */
                    {
                        var_20 = ((/* implicit */int) ((((3772264484U) < (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) min(((signed char)-31), (var_12)))) ? (((((/* implicit */_Bool) var_10)) ? (arr_3 [i_0] [i_1] [(short)9]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)4))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned char)120)) : (arr_7 [10U] [10U])))))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)135)))));
                        var_21 *= ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_11 [i_0 - 1] [i_6 + 1] [i_2 - 2] [i_0 - 1])), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)136))) : (var_5)))))) ? (((/* implicit */unsigned int) (((~(((/* implicit */int) var_4)))) * (((/* implicit */int) var_12))))) : (max((var_16), (arr_15 [i_2 - 2] [i_2] [i_2 + 1] [i_2] [i_2 - 1])))));
                        arr_21 [i_6] [i_1] [i_1] = ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)2031))) == ((((_Bool)1) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))))));
                        arr_22 [i_0] [i_6] [i_0] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) max((((var_2) ? (-459010143) : (((/* implicit */int) var_14)))), (((((/* implicit */_Bool) arr_0 [20] [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)25932))))))) <= (min((((/* implicit */unsigned int) ((((/* implicit */int) arr_11 [i_6] [(_Bool)1] [12] [12])) <= (((/* implicit */int) var_1))))), (((unsigned int) var_16))))));
                    }
                    for (unsigned short i_7 = 3; i_7 < 20; i_7 += 3) /* same iter space */
                    {
                        arr_25 [i_2] [i_7] = ((/* implicit */unsigned int) (_Bool)1);
                        /* LoopSeq 2 */
                        for (unsigned int i_8 = 4; i_8 < 21; i_8 += 1) 
                        {
                            arr_29 [i_7] [0U] = ((/* implicit */unsigned short) var_14);
                            arr_30 [(_Bool)1] [i_1] [(_Bool)1] [i_1] [(short)21] = ((/* implicit */_Bool) var_9);
                            arr_31 [i_0] [15U] [10LL] [(_Bool)1] [i_8] = ((/* implicit */_Bool) var_6);
                        }
                        for (unsigned int i_9 = 0; i_9 < 22; i_9 += 1) 
                        {
                            arr_35 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)154))))) != (((/* implicit */int) max(((_Bool)1), ((_Bool)1))))));
                            var_22 = ((/* implicit */unsigned char) (+((-2147483647 - 1))));
                            var_23 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((unsigned short) -1249455434)))));
                            var_24 ^= ((/* implicit */_Bool) ((((/* implicit */int) max(((signed char)-108), (((/* implicit */signed char) (_Bool)1))))) - (min((((/* implicit */int) (unsigned short)42979)), (-663499313)))));
                            var_25 = ((/* implicit */long long int) var_1);
                        }
                        /* LoopSeq 4 */
                        for (unsigned short i_10 = 0; i_10 < 22; i_10 += 2) /* same iter space */
                        {
                            var_26 = ((/* implicit */signed char) (!((!(((((/* implicit */_Bool) arr_24 [i_0] [i_1] [18LL] [18LL] [i_10])) && (((/* implicit */_Bool) (unsigned short)42979))))))));
                            var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) 503573588))) ? ((-(var_16))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 2147483628)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (_Bool)1)))))));
                            var_28 = ((/* implicit */short) max((var_28), (((/* implicit */short) ((((unsigned int) 503573588)) > (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_24 [i_2 - 1] [i_2] [i_2 + 4] [i_2 - 1] [i_2 + 4])))))))));
                            var_29 = ((/* implicit */_Bool) max((var_29), (((((/* implicit */_Bool) ((short) var_9))) || (((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) + (1249455421))))))));
                            arr_38 [i_0] [i_0] [i_2] [i_7] [i_7] [i_7 - 2] [18] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) 1249455407)) ? (2466417227090333267LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) ^ (((/* implicit */long long int) (~(var_11)))))))));
                        }
                        for (unsigned short i_11 = 0; i_11 < 22; i_11 += 2) /* same iter space */
                        {
                            arr_42 [i_0] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)120)) ? (((/* implicit */int) (unsigned char)141)) : (2147483631)))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) != (arr_8 [i_0] [i_0] [i_2 + 4] [i_2 - 2] [i_7] [18ULL])))) : (((/* implicit */int) var_2))))));
                            var_30 = ((/* implicit */short) var_4);
                        }
                        for (unsigned short i_12 = 0; i_12 < 22; i_12 += 2) /* same iter space */
                        {
                            var_31 = ((/* implicit */short) min((var_31), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) var_0)) + (2147483631)))) ? (min((1815718910226379500ULL), (((/* implicit */unsigned long long int) var_4)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3531152189U)) ? (arr_7 [i_0 - 2] [i_2 + 4]) : (((/* implicit */int) (_Bool)1))))))))));
                            arr_47 [i_7] [i_0] [i_0] = ((/* implicit */unsigned char) (!((((_Bool)1) || (((/* implicit */_Bool) 1294785071))))));
                            arr_48 [i_0] [i_1] [i_2] [i_7] [(unsigned short)16] [i_12] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2147483628)) && (((/* implicit */_Bool) -1249455407))))), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)48855))) : (var_10)))))) && (((/* implicit */_Bool) (short)-32746))));
                            arr_49 [i_0 + 2] [11U] [3] [i_0 + 2] [i_12] = ((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) -820147907)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (399307629U)))), (var_5)));
                        }
                        for (unsigned short i_13 = 0; i_13 < 22; i_13 += 2) /* same iter space */
                        {
                            arr_52 [i_0] [i_13] = ((/* implicit */int) var_0);
                            arr_53 [1U] [i_0] [i_1] [i_2 + 1] [7U] [14] [i_13] = ((/* implicit */unsigned long long int) ((unsigned char) ((((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_6))) <= (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)3))))))));
                            arr_54 [i_0] [i_1] [(_Bool)1] [(short)15] = ((/* implicit */unsigned short) arr_8 [i_0] [i_0] [i_0 + 2] [i_0] [(short)2] [(short)2]);
                            var_32 *= ((/* implicit */unsigned int) (-(((((/* implicit */int) (signed char)-113)) | (((/* implicit */int) (_Bool)1))))));
                        }
                        var_33 = ((/* implicit */short) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_7))))) ^ (((((/* implicit */_Bool) arr_46 [i_0 + 2] [i_0 + 2] [i_2 + 2] [i_7 - 1] [i_7])) ? (((/* implicit */unsigned long long int) var_5)) : (var_10)))));
                    }
                }
            } 
        } 
    } 
}
