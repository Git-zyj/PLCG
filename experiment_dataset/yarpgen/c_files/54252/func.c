/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54252
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54252 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54252
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
    /* vectorizable */
    for (int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            for (int i_2 = 2; i_2 < 17; i_2 += 4) 
            {
                {
                    var_18 = -707459100;
                    arr_8 [i_1] [i_0] [i_2] = ((/* implicit */unsigned long long int) arr_6 [i_0] [i_0]);
                    var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1073709056)) ? (arr_7 [i_0] [i_1] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)19864)))))) ? (1073709056) : (((/* implicit */int) arr_6 [i_2 + 2] [i_1]))));
                    var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) arr_6 [i_1] [i_2]))));
                    var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 16302825134411493167ULL)) ? (4221980823417473661ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_0])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [i_2 - 2]))) : (1771466545U)));
                }
            } 
        } 
        /* LoopSeq 4 */
        for (unsigned short i_3 = 0; i_3 < 19; i_3 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_4 = 3; i_4 < 18; i_4 += 4) 
            {
                for (unsigned long long int i_5 = 0; i_5 < 19; i_5 += 4) 
                {
                    {
                        var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_4 - 3])) ? (16720126180979609656ULL) : (4294967296ULL)));
                        var_23 = ((/* implicit */long long int) 2095906449);
                        var_24 = ((/* implicit */unsigned long long int) arr_13 [i_4 + 1] [i_4] [i_4] [i_4] [i_4 + 1]);
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (unsigned short i_6 = 1; i_6 < 17; i_6 += 4) 
            {
                arr_20 [i_0] [i_0] [i_6] [i_0] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */unsigned long long int) 25165824U)) : (18446744073709551615ULL)))) ? (((/* implicit */unsigned long long int) arr_12 [i_0] [i_6 - 1] [i_6 + 2] [i_3])) : (arr_3 [i_0])));
                /* LoopNest 2 */
                for (signed char i_7 = 2; i_7 < 18; i_7 += 4) 
                {
                    for (long long int i_8 = 3; i_8 < 16; i_8 += 4) 
                    {
                        {
                            var_25 -= ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */unsigned long long int) 707459112)) : (arr_22 [i_0] [i_7 - 2] [i_6 + 2] [i_7]));
                            arr_26 [i_8] [i_8] = arr_7 [i_8] [i_8 - 3] [i_6 + 2];
                            arr_27 [i_7 - 1] [i_7 - 1] [i_7 - 1] [i_7] [i_7 - 1] = ((/* implicit */unsigned int) arr_14 [i_0]);
                            arr_28 [i_6] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_14 [i_3])) ? (arr_18 [i_6 - 1] [i_6] [i_6]) : (32767ULL)));
                            arr_29 [i_7] [8LL] [i_3] [i_0] = arr_2 [6ULL] [9ULL];
                        }
                    } 
                } 
                var_26 -= ((/* implicit */_Bool) arr_15 [i_6] [i_6 + 1] [i_6 - 1] [i_6] [i_6]);
                var_27 = ((/* implicit */long long int) arr_1 [i_0]);
            }
            /* LoopSeq 2 */
            for (unsigned long long int i_9 = 0; i_9 < 19; i_9 += 4) 
            {
                var_28 = ((/* implicit */long long int) 1616921179);
                var_29 = ((/* implicit */int) ((((/* implicit */_Bool) arr_13 [i_0] [i_3] [15LL] [i_0] [i_9])) ? (arr_13 [i_0] [i_0] [i_3] [i_9] [i_9]) : (arr_13 [i_0] [i_0] [i_3] [i_9] [i_9])));
            }
            for (int i_10 = 0; i_10 < 19; i_10 += 4) 
            {
                /* LoopNest 2 */
                for (unsigned int i_11 = 0; i_11 < 19; i_11 += 4) 
                {
                    for (unsigned long long int i_12 = 0; i_12 < 19; i_12 += 4) 
                    {
                        {
                            var_30 = 707459116;
                            var_31 = ((/* implicit */long long int) arr_21 [i_12] [i_11] [i_10] [i_3] [i_0]);
                            arr_40 [i_0] [i_3] [i_11] [5ULL] = ((/* implicit */unsigned short) arr_11 [i_0]);
                        }
                    } 
                } 
                var_32 *= ((((/* implicit */_Bool) 2095906449)) ? (arr_33 [i_10] [i_3] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))));
            }
            var_33 = ((/* implicit */int) 9373096603919282411ULL);
        }
        for (unsigned char i_13 = 0; i_13 < 19; i_13 += 4) 
        {
            var_34 = ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [(short)17])) ? ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (1ULL))) : (14224763250292077954ULL)));
            arr_43 [(_Bool)1] [5LL] = ((/* implicit */unsigned short) (-2147483647 - 1));
            arr_44 [i_0] [i_13] = ((/* implicit */long long int) (unsigned short)15970);
            var_35 = ((/* implicit */int) arr_25 [i_0] [i_13] [i_0] [i_0] [i_13] [i_13]);
        }
        for (signed char i_14 = 2; i_14 < 17; i_14 += 4) 
        {
            arr_48 [i_0] = ((/* implicit */unsigned short) 1252734890);
            arr_49 [i_14] [i_0] = ((/* implicit */int) arr_25 [i_14] [8LL] [i_14 + 1] [i_14] [i_14] [i_14 + 1]);
            arr_50 [i_0] = ((/* implicit */int) ((arr_23 [i_0] [i_0] [i_0] [i_0] [i_0]) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_33 [i_0] [i_0] [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-1))))) : (arr_34 [i_14 + 2] [i_14] [i_0])));
        }
        for (unsigned char i_15 = 0; i_15 < 19; i_15 += 4) 
        {
            var_36 = ((((/* implicit */_Bool) arr_18 [i_0] [1LL] [1LL])) ? (arr_51 [i_0] [i_15] [i_15]) : (arr_45 [i_0] [i_0]));
            arr_54 [i_0] [i_15] [i_15] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483647)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) arr_52 [i_0])))));
        }
        var_37 = ((/* implicit */_Bool) ((((/* implicit */_Bool) -1811479532430604904LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_0] [i_0] [i_0] [i_0] [i_0]))) : (32761ULL)));
        var_38 = ((/* implicit */int) min((var_38), (((/* implicit */int) arr_7 [i_0] [i_0] [i_0]))));
    }
    for (long long int i_16 = 0; i_16 < 20; i_16 += 4) 
    {
        arr_57 [i_16] [i_16] = ((/* implicit */int) 18446744073709551615ULL);
        arr_58 [i_16] [i_16] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_55 [i_16])) ? (max((1312389994138907808ULL), (((/* implicit */unsigned long long int) max((arr_55 [i_16]), (((/* implicit */long long int) (unsigned short)49559))))))) : (15ULL)));
        arr_59 [i_16] = arr_56 [i_16];
    }
    for (unsigned long long int i_17 = 0; i_17 < 14; i_17 += 4) 
    {
        var_39 = ((/* implicit */signed char) max((var_39), (((/* implicit */signed char) 1099511627775LL))));
        /* LoopNest 2 */
        for (signed char i_18 = 0; i_18 < 14; i_18 += 4) 
        {
            for (unsigned short i_19 = 0; i_19 < 14; i_19 += 4) 
            {
                {
                    var_40 -= ((/* implicit */unsigned long long int) 63LL);
                    arr_66 [i_17] [i_18] = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */_Bool) (short)15044)) ? (arr_45 [i_18] [i_18]) : (arr_45 [i_18] [i_18])))), (((((/* implicit */_Bool) 35ULL)) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) arr_38 [i_17] [i_18] [i_18] [i_19] [i_17] [i_19])))))));
                    arr_67 [i_17] [i_18] [i_19] [i_18] = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_19 [i_17] [i_19] [i_17])) ? (arr_19 [i_17] [15] [i_18]) : (((/* implicit */long long int) arr_11 [i_17])))), (((((/* implicit */_Bool) arr_19 [i_19] [i_18] [i_17])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (2251662374731776LL)))));
                    var_41 = ((/* implicit */unsigned long long int) (unsigned short)49559);
                }
            } 
        } 
        var_42 = ((/* implicit */long long int) max((var_42), (((/* implicit */long long int) ((((/* implicit */_Bool) 17831642520455417116ULL)) ? (5573542520337915548ULL) : (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))))))));
        var_43 = ((/* implicit */unsigned short) 2147483647);
    }
    var_44 = ((/* implicit */signed char) max((var_44), (((/* implicit */signed char) var_3))));
    var_45 = ((/* implicit */unsigned long long int) var_17);
    var_46 = ((/* implicit */_Bool) var_15);
}
