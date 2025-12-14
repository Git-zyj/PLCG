/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233858
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233858 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233858
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
    /* LoopSeq 4 */
    for (short i_0 = 2; i_0 < 10; i_0 += 4) /* same iter space */
    {
        var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((((/* implicit */long long int) 0U)) ^ (-6592234166833340317LL))))));
        arr_2 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned char) var_16)))))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))))))));
    }
    for (short i_1 = 2; i_1 < 10; i_1 += 4) /* same iter space */
    {
        arr_7 [i_1 - 2] [i_1] = ((/* implicit */int) ((signed char) var_4));
        arr_8 [i_1 - 2] = ((/* implicit */_Bool) min((max((((((/* implicit */_Bool) var_19)) ? (var_14) : (((/* implicit */long long int) var_18)))), (((((/* implicit */_Bool) 7141291711784594816LL)) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [(_Bool)1]))))))), (((/* implicit */long long int) min((3270870000U), (((/* implicit */unsigned int) (_Bool)1)))))));
        var_21 = ((/* implicit */int) (-(((arr_6 [3ULL] [i_1 + 1]) & (var_14)))));
        var_22 += ((/* implicit */long long int) (+(((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (var_18)))));
    }
    for (unsigned long long int i_2 = 1; i_2 < 17; i_2 += 3) 
    {
        var_23 = ((/* implicit */long long int) var_1);
        arr_12 [i_2 + 2] = ((/* implicit */long long int) var_17);
    }
    for (int i_3 = 0; i_3 < 20; i_3 += 2) 
    {
        var_24 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_11 [i_3]))));
        var_25 = ((/* implicit */_Bool) max((((/* implicit */int) var_4)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [8LL])) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_13 [i_3]))))) ? (((/* implicit */int) arr_9 [(short)13] [i_3])) : (((/* implicit */int) (_Bool)0))))));
    }
    /* LoopSeq 3 */
    for (unsigned char i_4 = 0; i_4 < 10; i_4 += 3) /* same iter space */
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (int i_5 = 3; i_5 < 7; i_5 += 1) 
        {
            arr_19 [i_4] [i_4] [4LL] = ((/* implicit */unsigned long long int) ((var_17) / (((/* implicit */unsigned int) ((/* implicit */int) var_19)))));
            var_26 -= ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_10 [i_5 + 3] [i_5 + 1])) > (((/* implicit */int) var_4))));
            var_27 = ((/* implicit */int) var_6);
            var_28 = ((((((/* implicit */_Bool) 1822588865)) ? (((/* implicit */long long int) 0U)) : (-7469046670784053911LL))) + (((/* implicit */long long int) 266920601U)));
        }
        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
        {
            /* LoopSeq 2 */
            for (signed char i_7 = 2; i_7 < 9; i_7 += 3) 
            {
                var_29 = ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */int) var_10)) & (((/* implicit */int) (short)-12570)))));
                var_30 |= ((/* implicit */long long int) var_13);
                /* LoopSeq 1 */
                for (unsigned short i_8 = 1; i_8 < 9; i_8 += 2) 
                {
                    arr_27 [i_8] [i_8] [i_8 - 1] = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) arr_5 [i_6 - 1] [i_7 - 2])) ? (var_14) : (((/* implicit */long long int) ((/* implicit */int) var_1)))))));
                    var_31 = ((/* implicit */unsigned char) var_5);
                }
            }
            for (unsigned short i_9 = 2; i_9 < 8; i_9 += 4) 
            {
                arr_31 [i_4] = ((/* implicit */signed char) ((((/* implicit */int) ((var_17) > (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) & (((/* implicit */int) min((var_10), (((/* implicit */unsigned short) ((signed char) arr_18 [i_9] [i_6 - 1] [i_4]))))))));
                /* LoopNest 2 */
                for (unsigned char i_10 = 0; i_10 < 10; i_10 += 3) 
                {
                    for (int i_11 = 1; i_11 < 6; i_11 += 1) 
                    {
                        {
                            arr_36 [(unsigned char)6] [i_11] [i_9] [i_10] [i_9] = ((/* implicit */long long int) ((var_1) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_18)))))));
                            var_32 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_13 [(unsigned char)19])) & (((int) var_8))));
                            var_33 = ((/* implicit */short) max((var_33), (((/* implicit */short) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (_Bool)1)), (1ULL)))))))));
                        }
                    } 
                } 
                var_34 = ((/* implicit */int) ((((/* implicit */_Bool) min((arr_4 [i_4]), (((/* implicit */unsigned short) arr_26 [i_4] [i_4] [9] [i_4] [i_4] [9]))))) ? (((arr_14 [i_6 - 1]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))) : (((((/* implicit */_Bool) ((arr_14 [i_4]) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_4] [i_4] [i_4] [i_4] [i_4])))))) ? (max((arr_20 [i_4]), (((/* implicit */unsigned long long int) var_18)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))));
            }
            var_35 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) var_1)) ^ (((/* implicit */int) var_13))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_24 [i_4] [i_6] [i_6] [i_6] [i_6 - 1])) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)20)))))))) : (var_12)));
            /* LoopNest 2 */
            for (int i_12 = 0; i_12 < 10; i_12 += 3) 
            {
                for (short i_13 = 2; i_13 < 8; i_13 += 1) 
                {
                    {
                        arr_43 [i_4] [i_13] [i_12] [i_13 + 2] = ((/* implicit */short) var_11);
                        arr_44 [i_4] [6] [6] [6] &= ((/* implicit */unsigned short) arr_23 [(signed char)2] [i_6] [i_13 - 1]);
                        var_36 -= ((/* implicit */unsigned char) ((int) ((((/* implicit */_Bool) -2032121131)) ? (18446744073709551588ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)99))))));
                        var_37 = ((/* implicit */unsigned char) max((var_5), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_3 [i_4])) ^ (((/* implicit */int) (!(((/* implicit */_Bool) var_17))))))))));
                        arr_45 [i_4] [i_4] [i_13] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_34 [i_6 - 1] [i_6 - 1] [i_12] [i_13 - 1] [8U])) ? (max((((/* implicit */long long int) var_17)), (var_12))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_19)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_18 [i_4] [i_12] [0]))))))) ^ (((/* implicit */long long int) ((((/* implicit */int) var_10)) ^ (((/* implicit */int) var_16)))))));
                    }
                } 
            } 
        }
        for (unsigned short i_14 = 0; i_14 < 10; i_14 += 1) 
        {
            var_38 = ((/* implicit */long long int) min((var_38), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((1628207223651904290LL) / (((/* implicit */long long int) ((/* implicit */int) var_8))))) ^ (((/* implicit */long long int) ((((/* implicit */_Bool) arr_40 [i_4] [i_14] [i_14] [(signed char)9] [i_14] [i_14])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_13)))))))) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((var_4) ? (var_18) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_14])))))) : (((((/* implicit */_Bool) 18446744073709551607ULL)) ? (((/* implicit */unsigned long long int) var_12)) : (arr_20 [i_14]))))) : (((/* implicit */unsigned long long int) max(((-(-1864295364))), (4863300)))))))));
            var_39 |= ((/* implicit */int) ((((var_15) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_5))) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))));
        }
        arr_49 [i_4] = ((/* implicit */signed char) ((((((/* implicit */int) var_3)) ^ (((/* implicit */int) var_3)))) > (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) arr_34 [i_4] [i_4] [i_4] [i_4] [4ULL])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (arr_39 [i_4] [i_4] [6] [2] [i_4] [8])))))));
        var_40 = (!((!(((/* implicit */_Bool) var_2)))));
    }
    for (unsigned char i_15 = 0; i_15 < 10; i_15 += 3) /* same iter space */
    {
        arr_52 [i_15] = ((/* implicit */short) max((((int) arr_24 [i_15] [i_15] [i_15] [i_15] [i_15])), (((/* implicit */int) ((((/* implicit */int) arr_26 [i_15] [i_15] [i_15] [(unsigned short)0] [i_15] [i_15])) == (var_0))))));
        var_41 = ((/* implicit */unsigned short) min((((_Bool) ((var_1) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (arr_17 [i_15])))), (((((/* implicit */int) var_8)) == (((var_4) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_7))))))));
    }
    for (unsigned char i_16 = 0; i_16 < 10; i_16 += 3) /* same iter space */
    {
        var_42 = ((/* implicit */short) max((var_42), (((/* implicit */short) ((max((((/* implicit */unsigned int) var_7)), (var_17))) == (((/* implicit */unsigned int) ((/* implicit */int) min((var_6), (max((var_6), (((/* implicit */short) arr_9 [9LL] [i_16])))))))))))));
        arr_57 [i_16] [i_16] = var_15;
    }
    var_43 = (-(((/* implicit */int) ((((/* implicit */int) (unsigned short)10987)) == (((/* implicit */int) (_Bool)1))))));
}
