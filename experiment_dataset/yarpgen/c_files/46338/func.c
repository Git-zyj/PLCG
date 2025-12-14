/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46338
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46338 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46338
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
    var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_15)) ? (var_10) : (((/* implicit */unsigned long long int) max((min((1769580144U), (8U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-19)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_3))))))))));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 1; i_0 < 11; i_0 += 1) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)63)) ? (((unsigned int) 2097136U)) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) max(((signed char)-32), (var_0))))))))));
        var_21 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (-(((/* implicit */int) arr_0 [i_0 + 2]))))), (min((2637539150U), (((/* implicit */unsigned int) arr_0 [i_0 + 2]))))));
    }
    /* vectorizable */
    for (unsigned char i_1 = 1; i_1 < 11; i_1 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned short i_2 = 0; i_2 < 13; i_2 += 1) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_4 = 0; i_4 < 13; i_4 += 2) 
                    {
                        arr_15 [i_4] [i_4] [i_2] [i_3] [i_2] [i_1] = ((/* implicit */unsigned long long int) arr_3 [10ULL]);
                        arr_16 [i_4] [i_2] [i_1 + 1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_4])) * (((/* implicit */int) var_2))))) ? (arr_1 [i_1 - 1]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_4] [i_3] [i_2])) ? (((/* implicit */int) var_18)) : (((/* implicit */int) (short)-27443)))))));
                    }
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        arr_21 [i_1] [i_2] [i_1] [i_5] = ((signed char) arr_9 [i_1] [i_1] [i_1 - 1] [i_1]);
                        arr_22 [i_1] [i_2] [i_1] [i_5] = ((((/* implicit */int) arr_0 [i_1 - 1])) / (((/* implicit */int) (_Bool)1)));
                    }
                    var_22 = ((/* implicit */short) (~(((((/* implicit */_Bool) var_13)) ? (3030679796U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_2] [i_2] [i_2] [i_2])))))));
                    var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) var_13))));
                }
            } 
        } 
        var_24 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) (short)13522)))) ? (((13554777072117801200ULL) >> (((/* implicit */int) (_Bool)1)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32765)))));
        arr_23 [i_1] [i_1] = ((/* implicit */unsigned int) ((((((/* implicit */int) (_Bool)1)) - (2147483632))) > (((/* implicit */int) (_Bool)1))));
        arr_24 [i_1] = ((/* implicit */signed char) (-(((/* implicit */int) arr_3 [i_1 + 2]))));
    }
    for (unsigned char i_6 = 1; i_6 < 11; i_6 += 1) /* same iter space */
    {
        var_25 -= ((/* implicit */int) ((arr_4 [i_6 + 1]) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_6 - 1] [i_6] [i_6 - 1])) ? (((/* implicit */int) ((((/* implicit */int) arr_20 [i_6] [i_6] [i_6])) > (((/* implicit */int) arr_26 [i_6]))))) : (((/* implicit */int) (short)32686)))))));
        /* LoopNest 2 */
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            for (short i_8 = 0; i_8 < 13; i_8 += 2) 
            {
                {
                    var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)32757)) ? (((((/* implicit */_Bool) (signed char)-78)) ? (((((/* implicit */_Bool) (signed char)-4)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)120))) : (-5913444992536266226LL))) : (((((/* implicit */_Bool) 11728079531152500755ULL)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (-5913444992536266213LL))))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)58844)))));
                    var_27 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((2334276848735130010ULL), (arr_9 [i_7] [i_7] [i_7] [i_6])))) ? (((/* implicit */int) max((((/* implicit */unsigned char) (signed char)86)), ((unsigned char)226)))) : (((/* implicit */int) (_Bool)1))))) & (min((((/* implicit */unsigned long long int) max((var_15), (var_15)))), (min((arr_5 [i_7]), (((/* implicit */unsigned long long int) var_15))))))));
                    var_28 = ((/* implicit */unsigned int) (+(((/* implicit */int) ((arr_28 [i_6]) <= (((/* implicit */unsigned int) ((/* implicit */int) var_8))))))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (signed char i_9 = 0; i_9 < 13; i_9 += 2) 
                    {
                        var_29 = ((/* implicit */short) max((var_29), (((/* implicit */short) ((((/* implicit */long long int) 1810284847U)) >= (arr_13 [i_6] [i_7] [i_7] [i_9]))))));
                        arr_36 [i_6] [i_7] [i_7] [(_Bool)1] [i_9] = ((/* implicit */_Bool) var_2);
                        arr_37 [i_7] [i_7] [i_8] = ((/* implicit */short) arr_5 [i_7]);
                        var_30 = (((+(953133014))) >> (((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned char)142)) : (((/* implicit */int) var_17)))) - (134))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_10 = 3; i_10 < 12; i_10 += 2) 
                    {
                        arr_40 [i_7] [i_8] [i_7] [i_7] = ((/* implicit */short) 6U);
                        var_31 += ((_Bool) (!(((/* implicit */_Bool) (signed char)36))));
                    }
                    for (int i_11 = 0; i_11 < 13; i_11 += 1) 
                    {
                        arr_44 [i_7] [(signed char)10] [i_7] = ((/* implicit */long long int) ((arr_28 [i_8]) != (((/* implicit */unsigned int) min(((-(((/* implicit */int) (unsigned short)56100)))), (((/* implicit */int) ((((/* implicit */unsigned int) var_5)) == (3479786220U)))))))));
                        /* LoopSeq 1 */
                        for (unsigned int i_12 = 0; i_12 < 13; i_12 += 2) 
                        {
                            var_32 = ((/* implicit */short) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1)))))))), (((((/* implicit */_Bool) 4294967271U)) ? (arr_25 [i_6 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)85)))))));
                            var_33 = ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) min(((signed char)-48), (arr_33 [i_6 - 1] [i_6 - 1] [i_6 - 1] [(_Bool)1] [i_12])))) && (((/* implicit */_Bool) 415509743U)))));
                            var_34 = ((/* implicit */short) ((long long int) ((((/* implicit */_Bool) arr_39 [i_6 + 2] [i_6 - 1] [(short)8] [(unsigned char)1])) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) -1267855521)) : (2484682450U))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 14U)))))))));
                            var_35 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) (signed char)72)), (4227858432U)));
                        }
                        var_36 *= ((/* implicit */signed char) 3U);
                        arr_47 [i_11] [i_7] [i_7] [i_6] = ((/* implicit */unsigned long long int) (((+(((((/* implicit */unsigned int) ((/* implicit */int) var_1))) ^ (arr_43 [i_6 + 2]))))) ^ (((/* implicit */unsigned int) (-((-(((/* implicit */int) arr_14 [i_6 + 1] [i_6 + 1] [i_11])))))))));
                    }
                    var_37 ^= ((/* implicit */_Bool) ((arr_12 [i_8] [i_8] [i_7] [i_7] [0]) ? (((((/* implicit */_Bool) ((unsigned int) (_Bool)1))) ? (min((((/* implicit */unsigned long long int) var_5)), (13071478048375657233ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_38 [i_8]), (((/* implicit */unsigned short) (_Bool)1)))))))) : (((/* implicit */unsigned long long int) (((!(var_12))) ? (((((/* implicit */_Bool) (signed char)-28)) ? ((-2147483647 - 1)) : (((/* implicit */int) var_2)))) : (((/* implicit */int) ((((/* implicit */int) (unsigned char)225)) != (((/* implicit */int) (short)4698))))))))));
                }
            } 
        } 
    }
    var_38 = ((/* implicit */short) (!(var_17)));
}
