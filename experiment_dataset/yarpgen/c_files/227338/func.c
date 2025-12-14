/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227338
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227338 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227338
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
    var_13 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1)))) : (var_7))) : (max((((/* implicit */unsigned long long int) 29360128U)), (18062059545231200752ULL)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (max((((((/* implicit */_Bool) var_7)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))), (((/* implicit */unsigned long long int) ((var_2) == (((/* implicit */unsigned int) ((/* implicit */int) var_9))))))))));
    /* LoopSeq 4 */
    for (long long int i_0 = 2; i_0 < 6; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((int) min((((/* implicit */unsigned int) arr_1 [i_0])), (arr_2 [i_0]))))) ? (((/* implicit */unsigned int) (((+(((/* implicit */int) var_1)))) << (((var_2) - (1792633790U)))))) : (arr_2 [i_0 - 1])));
        var_14 |= ((/* implicit */unsigned char) min((var_7), (((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */int) var_12)) > (((/* implicit */int) var_5))))))));
        var_15 = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 839206320)) ? (((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) (_Bool)0)) : (100663296))) : (((/* implicit */int) arr_1 [i_0]))))), (6718771766714959065ULL)));
    }
    for (unsigned int i_1 = 1; i_1 < 20; i_1 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_2 = 1; i_2 < 22; i_2 += 4) 
        {
            for (signed char i_3 = 0; i_3 < 23; i_3 += 4) 
            {
                for (unsigned char i_4 = 0; i_4 < 23; i_4 += 3) 
                {
                    {
                        arr_18 [i_1 - 1] [i_2 + 1] [i_3] [i_2 + 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((var_10), (var_9)))) && (((/* implicit */_Bool) arr_6 [i_1 + 3]))));
                        var_16 ^= ((/* implicit */short) ((((/* implicit */unsigned int) var_0)) / (arr_12 [i_1 + 3] [i_2])));
                        var_17 += ((/* implicit */unsigned short) arr_8 [i_2]);
                    }
                } 
            } 
        } 
        var_18 = ((/* implicit */unsigned long long int) max((var_18), (((((/* implicit */_Bool) 16935122724221712645ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)6271))) : (6718771766714959037ULL)))));
    }
    for (long long int i_5 = 0; i_5 < 11; i_5 += 1) 
    {
        var_19 = ((/* implicit */unsigned short) ((int) (((!(((/* implicit */_Bool) arr_4 [i_5] [i_5])))) ? (var_11) : (((/* implicit */int) arr_7 [i_5])))));
        var_20 *= ((/* implicit */unsigned long long int) min((((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [i_5] [i_5] [i_5]))))), (max((max((((/* implicit */int) arr_10 [i_5] [i_5] [i_5])), (var_11))), ((+(((/* implicit */int) arr_5 [i_5]))))))));
    }
    for (short i_6 = 1; i_6 < 8; i_6 += 2) 
    {
        var_21 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(arr_21 [i_6 + 2] [i_6])))) ? (min((arr_21 [i_6 + 3] [i_6 + 1]), (arr_21 [i_6 + 3] [i_6 + 4]))) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))));
        /* LoopSeq 4 */
        for (signed char i_7 = 0; i_7 < 12; i_7 += 4) 
        {
            var_22 = ((/* implicit */long long int) ((unsigned int) (signed char)113));
            /* LoopSeq 3 */
            /* vectorizable */
            for (unsigned char i_8 = 2; i_8 < 10; i_8 += 1) 
            {
                var_23 = ((/* implicit */unsigned long long int) arr_26 [i_6] [i_7] [i_8] [(unsigned char)6]);
                var_24 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) arr_12 [i_8 - 1] [i_6 + 2])) + (arr_24 [(short)3] [i_6 + 1] [i_6])));
                var_25 = ((/* implicit */unsigned char) ((_Bool) arr_5 [i_8 - 1]));
                arr_28 [i_8] = ((/* implicit */unsigned short) ((arr_17 [i_6 + 2] [21ULL] [1ULL] [i_6 + 3]) < (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_8 - 2] [i_8] [i_8])))));
            }
            for (unsigned int i_9 = 0; i_9 < 12; i_9 += 3) 
            {
                var_26 = ((/* implicit */unsigned int) ((_Bool) ((10463170514919571424ULL) * (6718771766714959040ULL))));
                arr_33 [i_9] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((arr_6 [i_7]) * (arr_6 [i_6])))), (((((/* implicit */unsigned long long int) arr_6 [i_6])) % (arr_24 [i_9] [i_7] [i_6 - 1])))));
                var_27 = ((/* implicit */int) max((var_27), (((/* implicit */int) arr_9 [i_6]))));
            }
            for (unsigned int i_10 = 1; i_10 < 11; i_10 += 2) 
            {
                arr_38 [i_10] [(signed char)9] [i_7] [i_10] = arr_9 [i_7];
                var_28 &= ((/* implicit */int) 417441657U);
                var_29 = ((/* implicit */short) arr_36 [i_10]);
            }
            var_30 += ((/* implicit */unsigned long long int) var_4);
        }
        for (int i_11 = 0; i_11 < 12; i_11 += 1) 
        {
            var_31 = arr_12 [i_11] [i_11];
            var_32 = ((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) arr_25 [i_11] [i_11])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (arr_31 [i_11] [i_11] [i_6 - 1]))));
            arr_42 [i_6] [i_6] [i_11] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_11] [i_11])) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_29 [i_6] [i_11] [i_6 + 1] [i_6])) >> ((((~(11727972306994592550ULL))) - (6718771766714959048ULL)))))) : (((((/* implicit */_Bool) arr_12 [i_11] [i_6])) ? (max((((/* implicit */unsigned int) var_12)), (arr_26 [(short)8] [(short)5] [i_6] [i_6]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_23 [i_6] [i_6 + 1])) || (((/* implicit */_Bool) arr_17 [18U] [18U] [i_6] [i_6 + 2]))))))))));
        }
        for (unsigned int i_12 = 4; i_12 < 11; i_12 += 3) /* same iter space */
        {
            arr_45 [i_6] [i_12] [i_6] = ((/* implicit */unsigned int) var_6);
            var_33 += ((/* implicit */unsigned int) (~(min((((/* implicit */long long int) min((arr_26 [i_6] [i_12] [3U] [i_12 - 1]), (((/* implicit */unsigned int) var_0))))), (((long long int) arr_12 [i_12] [i_6]))))));
            var_34 = ((/* implicit */long long int) max((var_34), (((/* implicit */long long int) ((arr_16 [i_6] [i_6] [i_6]) & (((/* implicit */unsigned long long int) (-(arr_6 [i_6 - 1])))))))));
            var_35 ^= arr_25 [(signed char)8] [i_12];
        }
        /* vectorizable */
        for (unsigned int i_13 = 4; i_13 < 11; i_13 += 3) /* same iter space */
        {
            arr_48 [i_6 + 4] [11ULL] = ((/* implicit */unsigned char) (~(((/* implicit */int) var_10))));
            /* LoopNest 2 */
            for (int i_14 = 0; i_14 < 12; i_14 += 4) 
            {
                for (int i_15 = 0; i_15 < 12; i_15 += 2) 
                {
                    {
                        var_36 = ((/* implicit */unsigned char) arr_21 [i_6] [i_14]);
                        var_37 = arr_4 [i_6] [(signed char)15];
                        arr_53 [i_6] [i_6] [i_14] [i_6] [i_15] = ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [i_13] [(signed char)8] [i_13] [i_13 - 4]))) : (arr_41 [i_15] [i_15]));
                    }
                } 
            } 
            arr_54 [i_6] [i_13] [i_13] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_6] [i_6] [i_13 - 4])) ? (arr_25 [(short)10] [i_13]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_46 [i_6] [(signed char)4] [i_6 - 1])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (((((/* implicit */_Bool) var_10)) ? (2020695006901265664ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))));
            var_38 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_15 [i_6 - 1] [i_13 + 1])) != (((int) 6718771766714959034ULL))));
            /* LoopNest 3 */
            for (short i_16 = 1; i_16 < 9; i_16 += 1) 
            {
                for (signed char i_17 = 0; i_17 < 12; i_17 += 1) 
                {
                    for (unsigned long long int i_18 = 2; i_18 < 11; i_18 += 4) 
                    {
                        {
                            var_39 = ((/* implicit */int) ((2020695006901265648ULL) + (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)0)))))));
                            var_40 = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) 742657839U)))) && (((/* implicit */_Bool) ((long long int) arr_50 [i_6 + 2] [i_13])))));
                            arr_65 [i_6] [i_13] [i_16] [i_6] [i_18 - 2] |= ((/* implicit */unsigned char) arr_57 [i_16 + 2] [i_16 + 2] [i_16 + 2]);
                            arr_66 [i_18 - 2] [(signed char)7] [2U] [i_13] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) (short)-4219))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_44 [i_6 + 3]))) : ((~(arr_37 [i_6] [i_18] [i_17])))));
                            var_41 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)32756)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)12991))) : (752649656U)));
                        }
                    } 
                } 
            } 
        }
        arr_67 [i_6] = ((/* implicit */unsigned int) ((((((((/* implicit */_Bool) arr_52 [i_6] [i_6] [i_6] [i_6])) ? (arr_24 [i_6] [i_6] [i_6]) : (((/* implicit */unsigned long long int) arr_23 [i_6] [i_6])))) + (((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (arr_36 [(signed char)6]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_46 [i_6] [i_6 + 3] [i_6]))))))) + (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((signed char) arr_64 [i_6 + 4] [i_6 - 1] [i_6] [i_6] [4ULL]))))))));
        arr_68 [i_6] = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_64 [i_6 - 1] [i_6] [i_6] [i_6 + 3] [i_6 + 3]))) : (arr_35 [i_6 + 1] [i_6 + 4] [10ULL]))) >> (((min((((/* implicit */unsigned int) arr_64 [i_6 + 1] [3ULL] [i_6] [(unsigned short)6] [i_6])), (var_3))) - (34664U)))));
    }
}
