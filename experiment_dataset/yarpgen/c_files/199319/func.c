/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199319
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199319 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199319
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
    var_13 = ((/* implicit */unsigned int) var_8);
    var_14 = ((/* implicit */int) ((((/* implicit */_Bool) max(((-(((/* implicit */int) var_1)))), (((/* implicit */int) ((4312525896453156124LL) != (((/* implicit */long long int) ((/* implicit */int) (signed char)-72))))))))) ? (((((/* implicit */_Bool) (unsigned short)16904)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-4))) : (520647252U))) : (((unsigned int) var_7))));
    var_15 = ((/* implicit */unsigned short) var_2);
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (signed char i_1 = 0; i_1 < 20; i_1 += 1) /* same iter space */
        {
            var_16 = ((/* implicit */unsigned short) min((((/* implicit */long long int) ((int) (_Bool)1))), (((arr_1 [i_1]) >> ((((~(((/* implicit */int) var_2)))) + (46)))))));
            var_17 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((signed char) ((short) (unsigned short)16917))))));
            var_18 = ((/* implicit */int) arr_4 [(signed char)19] [(signed char)19] [(signed char)19]);
        }
        for (signed char i_2 = 0; i_2 < 20; i_2 += 1) /* same iter space */
        {
            var_19 = ((/* implicit */short) min((((/* implicit */long long int) var_3)), (((((((/* implicit */_Bool) arr_3 [i_2])) ? (arr_5 [i_2] [7U]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) - (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [16LL]))))))))));
            arr_9 [i_0] [i_0] [i_2] = ((/* implicit */long long int) max((((/* implicit */unsigned int) ((((((/* implicit */int) arr_6 [i_0])) * (((/* implicit */int) (unsigned short)36688)))) <= (((/* implicit */int) ((_Bool) 520647252U)))))), (arr_8 [i_2])));
            /* LoopSeq 3 */
            for (unsigned short i_3 = 0; i_3 < 20; i_3 += 4) 
            {
                arr_14 [i_3] [i_2] [i_3] [i_3] |= ((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) (~(arr_2 [i_0] [i_0])))))))));
                arr_15 [i_2] = max((((/* implicit */long long int) ((int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) 520647275U)) : (288230376118157312LL))))), (arr_1 [i_0]));
                /* LoopNest 2 */
                for (unsigned int i_4 = 1; i_4 < 19; i_4 += 4) 
                {
                    for (unsigned long long int i_5 = 0; i_5 < 20; i_5 += 1) 
                    {
                        {
                            arr_20 [5] [i_2] [i_5] = ((/* implicit */short) ((signed char) arr_13 [i_0] [i_3] [i_5]));
                            var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((unsigned int) arr_17 [i_0] [i_2] [i_0] [i_0] [i_2] [i_0]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((((_Bool) arr_5 [i_2] [i_0])), (((-3536405234844319475LL) > (arr_5 [i_2] [i_2]))))))) : (max((((/* implicit */unsigned int) (signed char)-107)), (arr_18 [i_4 + 1] [i_4] [i_4 + 1] [i_4] [i_4] [i_4 + 1])))));
                        }
                    } 
                } 
                var_21 = max((9223372036854775807LL), (min((((/* implicit */long long int) ((arr_2 [i_0] [i_2]) * (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0])))))), (min((((/* implicit */long long int) arr_18 [i_0] [i_2] [i_3] [i_0] [i_3] [i_3])), (arr_5 [i_2] [i_2]))))));
                /* LoopSeq 3 */
                for (unsigned short i_6 = 0; i_6 < 20; i_6 += 2) 
                {
                    arr_23 [i_2] [i_2] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4312525896453156115LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (arr_2 [i_0] [i_0])))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_0] [i_2] [i_3] [i_6]))) : (min((var_9), (((/* implicit */unsigned int) arr_6 [(unsigned short)19])))))))));
                    /* LoopSeq 1 */
                    for (unsigned int i_7 = 2; i_7 < 17; i_7 += 1) 
                    {
                        var_22 = ((/* implicit */unsigned short) min((1747976001U), (((/* implicit */unsigned int) arr_17 [i_7] [i_2] [i_7] [i_7] [i_2] [i_7 + 3]))));
                        arr_26 [i_2] [i_7] [i_6] [i_3] [i_0] [i_2] = ((/* implicit */short) (-(((/* implicit */int) (_Bool)1))));
                    }
                }
                for (unsigned int i_8 = 0; i_8 < 20; i_8 += 2) 
                {
                    arr_29 [i_0] [i_2] [i_3] [i_2] &= min((((((/* implicit */_Bool) arr_21 [i_0] [i_2] [i_3] [i_8])) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_6))) < (4651848848308152899LL))))) : ((~(arr_5 [i_0] [i_3]))))), (((/* implicit */long long int) (!((!(((/* implicit */_Bool) (unsigned short)31))))))));
                    var_23 = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_10 [i_0])), (((((/* implicit */_Bool) arr_27 [i_0] [i_2] [(short)8])) ? (arr_28 [13U] [i_0] [i_2] [17LL] [i_3] [i_0]) : (((/* implicit */unsigned long long int) arr_7 [i_0]))))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) var_6)) & (((/* implicit */int) (signed char)-71))))) ? (arr_19 [i_0] [i_2] [i_3] [i_3] [i_3] [(unsigned short)10]) : (((/* implicit */int) (signed char)20)))) : ((~(((/* implicit */int) arr_27 [i_0] [i_2] [i_3]))))));
                }
                for (long long int i_9 = 0; i_9 < 20; i_9 += 3) 
                {
                    arr_32 [i_2] [i_3] [i_3] = ((/* implicit */short) min((((/* implicit */unsigned long long int) (unsigned short)4285)), (15187681772627137307ULL)));
                    var_24 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) arr_3 [i_0])) ? (min((((/* implicit */unsigned long long int) var_3)), (6776095015510515370ULL))) : (((/* implicit */unsigned long long int) ((int) 2147483647)))))));
                }
            }
            for (unsigned int i_10 = 0; i_10 < 20; i_10 += 3) 
            {
                var_25 = ((/* implicit */unsigned int) min((var_25), (max((arr_8 [i_0]), (((/* implicit */unsigned int) max((((/* implicit */signed char) (_Bool)1)), ((signed char)-21))))))));
                var_26 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_1 [i_2]))));
                /* LoopNest 2 */
                for (short i_11 = 2; i_11 < 16; i_11 += 4) 
                {
                    for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
                    {
                        {
                            var_27 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */long long int) 268435456)) : (633517406922710327LL)));
                            arr_43 [i_0] [i_0] [i_0] [(unsigned short)3] [i_0] [i_2] [i_0] = ((/* implicit */short) min(((unsigned short)58704), (((/* implicit */unsigned short) max((((/* implicit */signed char) arr_42 [2] [2] [i_11] [i_2] [i_11] [2])), ((signed char)123))))));
                        }
                    } 
                } 
            }
            for (short i_13 = 0; i_13 < 20; i_13 += 3) 
            {
                arr_47 [i_0] &= arr_18 [i_0] [i_2] [i_2] [i_2] [i_13] [i_13];
                arr_48 [i_2] [i_13] [i_13] = ((/* implicit */_Bool) arr_40 [15] [i_0] [i_2] [i_2] [i_0] [i_2]);
                var_28 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_36 [i_0]), (arr_36 [i_0])))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)116)) ? (arr_28 [i_0] [i_13] [i_13] [19LL] [i_13] [19LL]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [i_0] [i_2] [i_2])))))) ? (((/* implicit */int) ((short) var_6))) : (((/* implicit */int) arr_35 [i_13] [i_13] [i_13] [i_13]))))) : (4294967295U)));
                /* LoopNest 2 */
                for (int i_14 = 0; i_14 < 20; i_14 += 1) 
                {
                    for (unsigned int i_15 = 0; i_15 < 20; i_15 += 1) 
                    {
                        {
                            var_29 = ((/* implicit */unsigned short) max((var_29), ((unsigned short)48644)));
                            arr_54 [i_0] [i_2] [i_0] [i_14] [(signed char)8] |= ((/* implicit */unsigned int) arr_0 [i_0]);
                            arr_55 [i_15] [i_13] [i_0] [i_14] [i_0] [i_2] [i_0] |= ((/* implicit */short) max((max((arr_16 [i_15] [i_14] [i_13] [i_2] [i_0]), ((unsigned short)35548))), (((/* implicit */unsigned short) (signed char)-24))));
                        }
                    } 
                } 
            }
            arr_56 [i_0] &= ((unsigned short) min(((unsigned short)48619), (((/* implicit */unsigned short) arr_50 [i_2] [i_0] [i_0] [i_0] [i_0] [i_0]))));
        }
        var_30 = ((/* implicit */short) min((((/* implicit */int) min((arr_24 [(signed char)17] [i_0] [i_0] [i_0]), (arr_24 [i_0] [i_0] [i_0] [i_0])))), ((~(((/* implicit */int) arr_24 [(signed char)0] [i_0] [i_0] [i_0]))))));
    }
    var_31 = min((max((((/* implicit */unsigned int) (~(((/* implicit */int) var_6))))), (max((((/* implicit */unsigned int) var_6)), (var_11))))), (var_11));
}
