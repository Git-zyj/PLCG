/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208252
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208252 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208252
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
    var_16 = ((/* implicit */int) max((var_16), (min(((+(((/* implicit */int) (!(((/* implicit */_Bool) (short)-24093))))))), (((/* implicit */int) var_13))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) arr_4 [i_0] [i_1] [i_1]);
                var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1] [i_0])) ? (((/* implicit */int) arr_3 [i_1] [i_0])) : (((/* implicit */int) arr_3 [i_1] [i_0]))))) ? (((/* implicit */int) (short)-27782)) : (max((((/* implicit */int) arr_4 [i_1] [i_1] [i_0])), (((int) arr_2 [i_0]))))));
                arr_6 [i_1] [i_0] = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [13U])) ? (var_4) : (((/* implicit */int) var_3))))) ? (((/* implicit */int) arr_1 [i_0])) : ((-(((/* implicit */int) (signed char)0))))))), (max((((/* implicit */unsigned long long int) arr_3 [i_1] [i_0])), (arr_2 [i_0])))));
                var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) ((((/* implicit */int) min((((var_14) || (((/* implicit */_Bool) var_5)))), (arr_4 [i_0] [i_0] [i_1])))) * (((/* implicit */int) arr_4 [i_0] [i_0] [i_1])))))));
            }
        } 
    } 
    /* LoopSeq 4 */
    for (unsigned int i_2 = 0; i_2 < 21; i_2 += 2) 
    {
        var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) (unsigned short)22351))));
        arr_9 [i_2] = ((((((/* implicit */int) arr_1 [i_2])) == (((/* implicit */int) arr_1 [i_2])))) && (((/* implicit */_Bool) max((arr_2 [i_2]), (((/* implicit */unsigned long long int) arr_1 [i_2]))))));
        arr_10 [i_2] = ((/* implicit */unsigned short) ((arr_8 [i_2] [i_2]) << (((unsigned long long int) (+(((/* implicit */int) var_7)))))));
    }
    for (unsigned int i_3 = 0; i_3 < 23; i_3 += 3) 
    {
        var_20 = arr_3 [i_3] [i_3];
        /* LoopNest 2 */
        for (short i_4 = 0; i_4 < 23; i_4 += 2) 
        {
            for (long long int i_5 = 1; i_5 < 20; i_5 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_6 = 0; i_6 < 23; i_6 += 1) 
                    {
                        for (unsigned long long int i_7 = 1; i_7 < 22; i_7 += 3) 
                        {
                            {
                                arr_26 [(short)9] [i_4] [1LL] [i_5] [i_6] [i_6] [i_3] = ((/* implicit */signed char) ((arr_13 [(_Bool)1]) ? (((((/* implicit */int) max(((short)-27782), (arr_25 [i_3] [i_4] [i_5 - 1] [i_5 - 1] [(short)2] [(signed char)8] [i_5])))) - (arr_11 [i_3] [i_3]))) : (((/* implicit */int) var_14))));
                                var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)62)) ? (((/* implicit */int) (signed char)-63)) : (((/* implicit */int) (unsigned char)0))));
                                var_22 = ((/* implicit */short) var_10);
                                arr_27 [i_3] [i_4] [i_4] |= ((/* implicit */unsigned long long int) max((((((/* implicit */int) max(((_Bool)1), (arr_4 [i_6] [(_Bool)1] [12])))) - (((/* implicit */int) ((_Bool) (_Bool)1))))), (((((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) arr_24 [i_3] [i_3] [14U] [i_5 + 2] [i_3] [i_7 - 1]))))) | (((((/* implicit */_Bool) arr_23 [i_3] [i_5] [i_6] [i_7])) ? (-1616824625) : (((/* implicit */int) arr_3 [i_6] [i_7]))))))));
                                var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) arr_17 [i_4] [i_4] [i_5 + 3]))));
                            }
                        } 
                    } 
                    var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) min((((((/* implicit */int) (unsigned char)242)) >> ((((~(0LL))) + (9LL))))), (((/* implicit */int) arr_17 [i_5] [i_4] [10ULL])))))));
                    /* LoopNest 2 */
                    for (unsigned int i_8 = 1; i_8 < 22; i_8 += 1) 
                    {
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            {
                                arr_33 [i_9] [i_9] [i_3] [i_3] [i_4] [i_3] = ((/* implicit */short) ((((unsigned long long int) (!(((/* implicit */_Bool) arr_2 [i_3]))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned char) var_15)), (max((((/* implicit */unsigned char) var_15)), (arr_23 [i_9] [i_8 - 1] [i_5 + 3] [15ULL])))))))));
                                arr_34 [i_3] [(signed char)3] [i_3] [i_3] [i_3] = ((/* implicit */signed char) arr_25 [i_3] [i_4] [i_4] [i_4] [i_4] [i_4] [i_4]);
                                arr_35 [i_9] [i_3] [i_4] [i_4] [i_3] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_22 [3U] [i_4] [i_5 + 1] [i_9])) != (arr_16 [i_3] [i_9])));
                                arr_36 [i_9] [i_9] [i_8 + 1] [i_3] [i_5 - 1] [i_4] [i_3] = ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_3] [i_5 - 1] [i_5] [i_5 - 1] [i_5 - 1] [i_3]))) > (((6235486707188537281ULL) - (((/* implicit */unsigned long long int) arr_18 [i_9] [i_4] [i_3])))));
                            }
                        } 
                    } 
                    arr_37 [i_3] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) max((((/* implicit */unsigned short) (short)-23796)), (arr_15 [i_3] [i_5])))) : (((((/* implicit */_Bool) 2082076308)) ? (((/* implicit */int) arr_25 [i_3] [i_5 - 1] [i_4] [i_3] [i_3] [i_3] [i_3])) : (((/* implicit */int) (short)14697))))))));
                }
            } 
        } 
        var_25 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) -8253755637751726787LL)) || (arr_13 [i_3])));
        arr_38 [i_3] [i_3] = ((/* implicit */unsigned short) arr_20 [14U] [i_3]);
    }
    /* vectorizable */
    for (unsigned short i_10 = 0; i_10 < 10; i_10 += 1) 
    {
        var_26 = ((/* implicit */short) ((((var_6) >= (((/* implicit */int) var_11)))) ? (((/* implicit */int) arr_32 [9ULL] [i_10] [i_10] [i_10] [(short)3])) : (((/* implicit */int) ((var_5) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))))));
        arr_41 [i_10] = ((/* implicit */unsigned short) arr_25 [(short)6] [(short)6] [i_10] [i_10] [i_10] [i_10] [i_10]);
    }
    for (unsigned short i_11 = 0; i_11 < 16; i_11 += 3) 
    {
        arr_46 [i_11] &= ((/* implicit */long long int) ((((/* implicit */_Bool) ((short) arr_11 [(signed char)10] [20U]))) ? (((/* implicit */int) (unsigned short)52964)) : (max((((/* implicit */int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) arr_7 [i_11]))))), (((((/* implicit */_Bool) (unsigned char)118)) ? (((/* implicit */int) (unsigned short)54596)) : (((/* implicit */int) arr_32 [10U] [15U] [i_11] [i_11] [i_11]))))))));
        /* LoopNest 3 */
        for (long long int i_12 = 4; i_12 < 14; i_12 += 3) 
        {
            for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
            {
                for (unsigned char i_14 = 3; i_14 < 14; i_14 += 2) 
                {
                    {
                        arr_57 [i_14] [(unsigned short)9] = ((/* implicit */unsigned int) max((((((/* implicit */int) arr_3 [i_13 - 1] [i_14 - 3])) - (((/* implicit */int) arr_3 [i_13 - 1] [i_14 - 1])))), (arr_11 [i_14] [12ULL])));
                        var_27 &= ((/* implicit */int) (short)-27771);
                        var_28 = (i_14 % 2 == zero) ? (((((/* implicit */int) ((((((/* implicit */_Bool) arr_29 [i_14 - 2] [i_13 - 1] [i_12] [i_11])) ? (((/* implicit */unsigned long long int) arr_50 [i_13 - 1] [(_Bool)1] [(_Bool)1])) : (arr_30 [i_14] [i_14] [i_14] [(unsigned short)12]))) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_3)) < (((/* implicit */int) var_13))))))))) >> (((max((((/* implicit */unsigned int) ((int) arr_16 [i_14] [i_14]))), (((((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_11] [i_14 + 1]))) / (arr_53 [i_13] [i_12] [i_11]))))) - (3670726133U))))) : (((((/* implicit */int) ((((((/* implicit */_Bool) arr_29 [i_14 - 2] [i_13 - 1] [i_12] [i_11])) ? (((/* implicit */unsigned long long int) arr_50 [i_13 - 1] [(_Bool)1] [(_Bool)1])) : (arr_30 [i_14] [i_14] [i_14] [(unsigned short)12]))) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_3)) < (((/* implicit */int) var_13))))))))) >> (((((max((((/* implicit */unsigned int) ((int) arr_16 [i_14] [i_14]))), (((((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_11] [i_14 + 1]))) / (arr_53 [i_13] [i_12] [i_11]))))) - (3670726133U))) - (959809269U)))));
                    }
                } 
            } 
        } 
    }
    var_29 = ((/* implicit */unsigned short) var_0);
}
