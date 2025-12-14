/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48610
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48610 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48610
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (unsigned int i_2 = 1; i_2 < 20; i_2 += 4) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        arr_12 [i_0] [i_1] [i_2] [i_2] [i_1] [i_2] = ((/* implicit */unsigned int) (unsigned short)511);
                        /* LoopSeq 2 */
                        for (int i_4 = 3; i_4 < 17; i_4 += 1) 
                        {
                            var_11 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-3512)) ? (((/* implicit */int) arr_1 [i_2 - 1])) : (((/* implicit */int) arr_7 [i_0] [i_1] [i_4 + 3]))));
                            var_12 -= ((/* implicit */_Bool) (((((-(((/* implicit */int) arr_13 [i_0] [i_1] [i_2] [i_3] [i_4])))) + (2147483647))) >> (((((/* implicit */int) var_3)) - (226)))));
                            var_13 ^= ((/* implicit */unsigned long long int) arr_0 [i_0]);
                            arr_16 [(short)20] = ((/* implicit */short) arr_0 [i_3]);
                            arr_17 [i_4] [i_3] [i_2] [i_0] [i_0] &= (-(((/* implicit */int) arr_3 [i_2 - 1])));
                        }
                        for (unsigned long long int i_5 = 0; i_5 < 21; i_5 += 2) 
                        {
                            var_14 -= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)30769))) % (3221734875782298786ULL)));
                            arr_21 [i_0] [i_0] [i_2] [i_3] [i_5] [i_5] [(short)18] = ((/* implicit */unsigned short) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [5U] [i_3] [i_0] [i_0] [i_0] [i_0])))))));
                        }
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned char i_6 = 1; i_6 < 18; i_6 += 2) 
        {
            for (unsigned int i_7 = 1; i_7 < 17; i_7 += 2) 
            {
                {
                    arr_28 [i_0] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)57649))) ^ (arr_18 [5U] [i_0] [i_0])));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_8 = 3; i_8 < 20; i_8 += 2) 
                    {
                        var_15 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) (unsigned short)57649)) ? (11902410353198729046ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_31 [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_20 [i_6] [i_6] [i_7] [i_8] [i_0])) : (((/* implicit */int) arr_2 [i_0])))))));
                        /* LoopSeq 2 */
                        for (unsigned short i_9 = 1; i_9 < 19; i_9 += 2) /* same iter space */
                        {
                            var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_13 [i_0] [i_6] [i_7] [i_8 - 2] [(unsigned short)7])) - (((/* implicit */int) arr_23 [i_9 + 1] [i_9]))));
                            var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_26 [20ULL] [i_8] [i_0] [i_0])) ? (((/* implicit */int) arr_30 [i_0])) : (((/* implicit */int) arr_4 [i_9] [i_8 - 1] [i_0]))))) ? (((((/* implicit */_Bool) (unsigned short)7881)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)7881))) : (var_10))) : (((/* implicit */long long int) ((/* implicit */int) ((var_6) >= (((/* implicit */unsigned long long int) var_2)))))))))));
                            var_18 -= ((/* implicit */unsigned long long int) ((long long int) arr_24 [i_7] [i_7] [i_9]));
                            var_19 ^= ((/* implicit */long long int) (+(arr_19 [i_0] [i_6 - 1] [i_7 + 1] [i_8 - 2] [i_8 - 2] [i_0])));
                        }
                        for (unsigned short i_10 = 1; i_10 < 19; i_10 += 2) /* same iter space */
                        {
                            var_20 = ((short) ((short) -5195866855949268257LL));
                            arr_38 [i_0] [i_6] = var_6;
                        }
                    }
                    /* LoopNest 2 */
                    for (long long int i_11 = 2; i_11 < 20; i_11 += 4) 
                    {
                        for (unsigned long long int i_12 = 0; i_12 < 21; i_12 += 1) 
                        {
                            {
                                var_21 = 1264095277;
                                var_22 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_14 [i_12] [i_6 + 1] [i_7] [i_7 + 1] [i_6 + 1] [i_0])) ? (18446744073709551605ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_7] [i_6 + 1] [i_7] [i_11 - 1] [i_11 - 1] [i_11 - 1])))));
                                arr_45 [i_12] [i_11] [i_11] [i_7] [i_6 - 1] [i_0] = ((/* implicit */long long int) (signed char)21);
                                var_23 = ((/* implicit */long long int) max((var_23), ((((!(((/* implicit */_Bool) (unsigned char)7)))) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : ((~(arr_29 [i_0] [i_0] [i_7] [i_12])))))));
                                var_24 -= ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) var_5))))) ? (((((/* implicit */_Bool) (unsigned char)174)) ? (((/* implicit */long long int) ((/* implicit */int) arr_32 [i_0] [i_6] [i_11] [i_11] [i_12] [i_12]))) : (arr_25 [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)117)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (signed char i_13 = 1; i_13 < 23; i_13 += 3) 
    {
        /* LoopSeq 3 */
        for (long long int i_14 = 4; i_14 < 24; i_14 += 1) /* same iter space */
        {
            arr_51 [i_13] [i_13] = ((/* implicit */short) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_46 [i_13])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)57649)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_49 [i_13] [i_14] [i_13]))))))))));
            var_25 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)37254)) ? (((((/* implicit */_Bool) arr_48 [i_13] [i_13])) ? (((/* implicit */int) arr_46 [i_14 - 3])) : (((/* implicit */int) arr_48 [i_13] [i_13])))) : (((/* implicit */int) arr_47 [i_14]))))) ? (max((((/* implicit */unsigned int) arr_50 [i_13])), (((var_7) % (((/* implicit */unsigned int) ((/* implicit */int) arr_49 [i_14] [i_13] [i_13]))))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) ((unsigned short) (signed char)-6)))))));
            var_26 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_48 [i_14 - 4] [i_14 - 2]), (var_5)))) ? (((((/* implicit */_Bool) arr_47 [(unsigned short)15])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_48 [i_13 - 1] [(_Bool)1])) ? (((/* implicit */int) (unsigned short)58617)) : (((/* implicit */int) arr_49 [i_14 - 3] [i_13] [i_13]))))) : (max((((/* implicit */long long int) arr_49 [i_13 + 1] [i_13 + 1] [i_14])), (var_10))))) : (((/* implicit */long long int) ((/* implicit */int) max((arr_50 [i_13 + 2]), (arr_50 [i_13 + 1])))))));
            arr_52 [i_13] [i_13] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_47 [i_14 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (min((((/* implicit */long long int) ((-5131175254650371890LL) != (((/* implicit */long long int) ((/* implicit */int) arr_49 [6U] [i_14] [i_13])))))), (var_8)))));
        }
        for (long long int i_15 = 4; i_15 < 24; i_15 += 1) /* same iter space */
        {
            var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) arr_50 [i_15 - 3]))) ? (((((/* implicit */_Bool) arr_50 [i_15])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (unsigned short)14900)))) : (((((/* implicit */_Bool) arr_48 [(signed char)6] [i_15 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)7881))) : (2562832697681211109ULL))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_49 [i_13] [(unsigned char)20] [i_13])) ^ (((/* implicit */int) arr_48 [i_13] [i_15]))))) ? (((((/* implicit */_Bool) arr_53 [i_15] [i_13])) ? (var_2) : (((/* implicit */int) arr_47 [i_13])))) : (min((65535), (((/* implicit */int) arr_49 [i_13 + 2] [i_13] [i_13])))))))));
            var_28 ^= ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) min((((/* implicit */long long int) var_7)), (-8325696355616630347LL)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_47 [i_13])) : (((/* implicit */int) arr_53 [i_13] [i_15 - 4]))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_48 [i_13] [(unsigned short)0])))) : (((/* implicit */int) ((unsigned short) (+(((/* implicit */int) arr_54 [i_13] [i_13]))))))));
            var_29 ^= ((/* implicit */_Bool) ((((/* implicit */int) ((unsigned short) arr_54 [i_15 - 2] [i_15]))) << ((((((_Bool)0) ? (((/* implicit */int) (unsigned short)46998)) : (65535))) - (65509)))));
        }
        for (long long int i_16 = 4; i_16 < 24; i_16 += 1) /* same iter space */
        {
            var_30 &= ((/* implicit */unsigned long long int) max((((((/* implicit */int) arr_48 [i_13 + 1] [i_16 - 2])) % (((/* implicit */int) (signed char)-90)))), (max((((/* implicit */int) arr_46 [i_13])), ((~(arr_56 [i_13])))))));
            var_31 -= ((unsigned int) ((((/* implicit */_Bool) (((_Bool)1) ? (11685662104502918383ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_59 [i_13])))))) ? (((((/* implicit */_Bool) arr_47 [i_13])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_4)))) : (((/* implicit */int) arr_58 [i_13] [i_16]))));
            arr_60 [i_16] [(unsigned short)10] [(signed char)22] = ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_47 [i_13])) ? (var_0) : (((/* implicit */int) arr_58 [i_13] [i_16]))))) ? (((((/* implicit */_Bool) -5277332494771989314LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_57 [i_13]))) : (var_10))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)223))))));
        }
        var_32 = ((/* implicit */unsigned char) min((var_32), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_55 [i_13 + 1] [i_13 + 1]))))) ? (((/* implicit */int) (short)23621)) : (((int) (~(((/* implicit */int) arr_55 [i_13] [i_13]))))))))));
    }
    var_33 = ((/* implicit */unsigned short) min((var_33), (((/* implicit */unsigned short) min((((/* implicit */long long int) ((((var_6) - (((/* implicit */unsigned long long int) 1778660554)))) <= (((/* implicit */unsigned long long int) ((((/* implicit */int) var_3)) >> (((((/* implicit */int) (short)(-32767 - 1))) + (32787))))))))), (((((/* implicit */_Bool) min(((unsigned short)0), (((/* implicit */unsigned short) var_4))))) ? (var_8) : ((-(var_10))))))))));
}
