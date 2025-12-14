/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212159
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212159 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212159
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
    /* LoopSeq 3 */
    for (signed char i_0 = 3; i_0 < 7; i_0 += 3) 
    {
        arr_4 [i_0] [i_0] = (-(arr_2 [i_0] [(short)5]));
        arr_5 [(unsigned short)6] = var_2;
        var_15 &= ((/* implicit */unsigned char) (+(10ULL)));
        arr_6 [i_0] [i_0 - 3] = max((((/* implicit */int) ((short) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0 + 2]))) : (arr_1 [i_0] [i_0]))))), ((-(((/* implicit */int) (short)(-32767 - 1))))));
    }
    for (unsigned char i_1 = 0; i_1 < 25; i_1 += 3) 
    {
        var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551602ULL)) ? (18446744073709551611ULL) : (10ULL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_1] [i_1])) ? (((unsigned int) 13704039331248801684ULL)) : (((/* implicit */unsigned int) ((/* implicit */int) (short)32333)))))) : (min((((((/* implicit */_Bool) (unsigned short)8943)) ? (18446744073709551604ULL) : (((/* implicit */unsigned long long int) -6026226362987579043LL)))), (((/* implicit */unsigned long long int) arr_7 [19U])))))))));
        var_17 -= ((/* implicit */unsigned int) arr_7 [i_1]);
    }
    for (unsigned int i_2 = 0; i_2 < 13; i_2 += 3) 
    {
        var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_10 [i_2])) + (((/* implicit */int) ((4294967295U) > (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [(signed char)4]))))))))) ? (max((((((/* implicit */_Bool) arr_9 [(short)10])) ? (((/* implicit */unsigned long long int) var_10)) : (18446744073709551598ULL))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 18446744073709551597ULL))))))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_14))))))))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned short i_3 = 0; i_3 < 13; i_3 += 3) 
        {
            var_19 = ((/* implicit */unsigned char) ((long long int) arr_14 [i_3]));
            /* LoopSeq 1 */
            for (int i_4 = 2; i_4 < 11; i_4 += 3) 
            {
                arr_17 [i_2] [i_2] [i_4] = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_12 [i_2] [i_4 + 2] [i_2]))));
                arr_18 [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) arr_15 [i_4] [i_3] [(_Bool)1] [i_2]);
            }
            arr_19 [i_2] [i_3] [(signed char)4] = ((short) arr_16 [i_2] [i_3] [i_3] [i_2]);
        }
        for (unsigned char i_5 = 3; i_5 < 12; i_5 += 4) 
        {
            arr_23 [i_5] [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((1U) < (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))) ? (((/* implicit */int) ((short) 18446744073709551605ULL))) : ((-(((/* implicit */int) arr_14 [i_2]))))))) ? (((/* implicit */unsigned long long int) (~(((2107480507) ^ (((/* implicit */int) (unsigned char)94))))))) : (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)7936)) ? (((/* implicit */int) (unsigned char)13)) : (((/* implicit */int) (unsigned char)13))))) * (((18446744073709551611ULL) / (((/* implicit */unsigned long long int) -1218398200))))))));
            /* LoopSeq 1 */
            for (unsigned short i_6 = 0; i_6 < 13; i_6 += 3) 
            {
                var_20 *= ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_9))) <= (var_10)))) >= (((/* implicit */int) ((short) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)0))) - (524794776U))))));
                arr_28 [i_2] [i_5] = ((/* implicit */unsigned int) max((((unsigned char) ((((/* implicit */int) var_13)) + (((/* implicit */int) arr_24 [i_2] [i_2]))))), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)8943))))))))));
                /* LoopSeq 1 */
                for (short i_7 = 0; i_7 < 13; i_7 += 3) 
                {
                    var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) arr_9 [(unsigned char)4]))));
                    /* LoopSeq 1 */
                    for (unsigned int i_8 = 0; i_8 < 13; i_8 += 3) 
                    {
                        arr_37 [i_6] [i_2] = ((/* implicit */long long int) (~((+(((((/* implicit */int) arr_12 [i_6] [i_5] [i_2])) * (((/* implicit */int) arr_21 [i_2] [11U] [i_2]))))))));
                        arr_38 [i_2] = ((/* implicit */int) (+(max((((/* implicit */unsigned int) arr_21 [i_2] [i_6] [i_2])), (max((((/* implicit */unsigned int) arr_33 [i_6] [i_7] [i_8])), (var_7)))))));
                        arr_39 [i_2] [i_2] [(signed char)10] [i_2] [i_2] |= ((/* implicit */signed char) ((((/* implicit */int) arr_29 [(unsigned char)10])) + ((+(((/* implicit */int) arr_21 [i_2] [(signed char)4] [8U]))))));
                    }
                    arr_40 [i_5] [i_2] [i_6] [(unsigned short)12] = ((/* implicit */unsigned int) max((((/* implicit */int) ((arr_31 [i_5 + 1] [i_6] [i_6] [i_5 + 1]) < (((/* implicit */int) ((short) var_7)))))), ((-(((/* implicit */int) max((((/* implicit */unsigned short) (signed char)28)), (arr_25 [i_2]))))))));
                    /* LoopSeq 1 */
                    for (unsigned char i_9 = 1; i_9 < 12; i_9 += 3) 
                    {
                        var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) ((unsigned long long int) (unsigned short)56593)))) ? (((/* implicit */int) arr_21 [i_2] [i_6] [i_2])) : (((((/* implicit */_Bool) arr_29 [i_2])) ? (((/* implicit */int) arr_29 [i_2])) : (((/* implicit */int) arr_29 [i_2]))))));
                        var_23 = ((/* implicit */signed char) ((((var_10) + (((/* implicit */long long int) ((/* implicit */int) arr_24 [i_2] [i_7]))))) + (((/* implicit */long long int) ((((/* implicit */int) var_14)) * (((/* implicit */int) arr_24 [i_2] [i_5])))))));
                    }
                    /* LoopSeq 1 */
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        var_24 = ((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_14))))) < (((/* implicit */int) ((((/* implicit */int) (short)12524)) < (((/* implicit */int) (short)-16265))))))))));
                        var_25 |= ((/* implicit */unsigned short) max((min((((/* implicit */short) var_4)), (var_6))), (((/* implicit */short) ((((/* implicit */int) arr_45 [i_6] [(unsigned char)6])) <= (((/* implicit */int) (unsigned short)8943)))))));
                        var_26 = ((/* implicit */int) max((var_26), (((/* implicit */int) ((((((/* implicit */int) (unsigned char)20)) >= (((/* implicit */int) (_Bool)1)))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)28923)) ? (((/* implicit */int) (short)-29129)) : (((/* implicit */int) (signed char)-47))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((4233536630U) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_29 [(signed char)4]))))))) : (max((var_7), (((/* implicit */unsigned int) var_6)))))) : (((/* implicit */unsigned int) (+(((int) var_10))))))))));
                    }
                }
            }
            arr_46 [i_2] [i_2] [i_2] = ((/* implicit */signed char) ((((((/* implicit */_Bool) max((((/* implicit */unsigned short) (unsigned char)28)), (arr_25 [i_2])))) ? (((/* implicit */int) max((arr_44 [0ULL] [0ULL] [i_5] [i_2] [i_5 - 1]), (((/* implicit */unsigned short) (_Bool)1))))) : (((((/* implicit */_Bool) 116866603)) ? (((/* implicit */int) (short)-20641)) : (((/* implicit */int) (short)-30816)))))) / (((/* implicit */int) (((~(((/* implicit */int) (short)12543)))) != (((/* implicit */int) ((unsigned char) 7645168394250915972ULL))))))));
            var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) ((min(((~(arr_34 [i_2] [i_2] [i_2] [(short)8] [i_2] [2ULL]))), (((/* implicit */unsigned long long int) arr_30 [i_5 - 2] [i_5 - 2] [i_5 + 1] [i_5 - 1])))) / (((/* implicit */unsigned long long int) (-(((((/* implicit */int) var_14)) / (((/* implicit */int) var_2))))))))))));
        }
        for (unsigned char i_11 = 0; i_11 < 13; i_11 += 3) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (long long int i_12 = 0; i_12 < 13; i_12 += 3) 
            {
                /* LoopSeq 1 */
                for (unsigned char i_13 = 1; i_13 < 11; i_13 += 3) 
                {
                    var_28 = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_27 [i_2] [i_13 + 1] [i_2] [i_13]))));
                    var_29 = ((/* implicit */unsigned char) max((var_29), (((/* implicit */unsigned char) ((((/* implicit */int) arr_27 [i_13 - 1] [i_12] [i_13 + 1] [i_12])) != (((/* implicit */int) arr_27 [i_13 + 2] [i_13] [i_13 + 1] [i_13])))))));
                    arr_53 [i_2] = ((/* implicit */_Bool) ((((/* implicit */int) (short)12555)) - (((/* implicit */int) (_Bool)0))));
                    var_30 = ((/* implicit */short) max((var_30), (((/* implicit */short) (!(((/* implicit */_Bool) ((short) arr_7 [i_11]))))))));
                }
                var_31 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_27 [(signed char)0] [i_11] [i_11] [i_12]))));
            }
            arr_54 [i_2] [9ULL] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((unsigned short) ((unsigned char) var_0))))));
            arr_55 [i_2] [i_11] [i_11] = ((/* implicit */long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_5)) < (-503716923))))) - (871316839U))) % (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_48 [i_11])) : (((/* implicit */int) arr_48 [i_11])))))));
            arr_56 [i_2] = ((/* implicit */unsigned long long int) ((signed char) var_3));
            /* LoopSeq 1 */
            for (short i_14 = 0; i_14 < 13; i_14 += 4) 
            {
                arr_60 [i_2] = ((/* implicit */signed char) ((unsigned char) ((signed char) 1554679503)));
                var_32 = (-((+(((/* implicit */int) var_9)))));
                arr_61 [i_2] [i_11] [i_2] = ((/* implicit */short) ((((((/* implicit */_Bool) ((int) var_3))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_58 [i_2] [i_2] [i_2])) && (((/* implicit */_Bool) 6546802914385653721LL))))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_10 [i_11])) : (((/* implicit */int) var_6)))))) * (((/* implicit */int) arr_44 [i_2] [i_11] [i_14] [i_14] [i_14]))));
            }
        }
        var_33 *= ((/* implicit */unsigned int) (+(((/* implicit */int) ((min((((/* implicit */unsigned long long int) (unsigned short)56576)), (22ULL))) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((1554679525) < (1554679525))))))))));
    }
    var_34 = ((/* implicit */int) var_9);
    var_35 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(((unsigned int) var_7)))))));
}
