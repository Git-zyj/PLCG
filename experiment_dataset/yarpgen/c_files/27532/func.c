/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27532
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27532 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27532
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
    /* LoopSeq 1 */
    for (unsigned short i_0 = 2; i_0 < 18; i_0 += 3) 
    {
        /* LoopSeq 2 */
        for (short i_1 = 1; i_1 < 18; i_1 += 2) 
        {
            arr_5 [i_1] = ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) arr_2 [i_1 + 1] [i_1] [i_0 - 2]))))));
            var_15 = ((/* implicit */long long int) var_7);
        }
        /* vectorizable */
        for (short i_2 = 0; i_2 < 20; i_2 += 3) 
        {
            var_16 = ((/* implicit */int) var_4);
            var_17 = ((/* implicit */_Bool) arr_7 [i_2]);
        }
        var_18 = ((/* implicit */short) arr_2 [i_0] [(short)1] [(short)1]);
        arr_8 [i_0] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)49))))));
    }
    /* LoopSeq 3 */
    for (unsigned short i_3 = 0; i_3 < 16; i_3 += 2) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
        {
            var_19 = ((/* implicit */int) (unsigned short)20371);
            var_20 ^= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_10 [i_3])))))));
            var_21 -= ((/* implicit */unsigned short) (+(arr_1 [i_4])));
        }
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
        {
            var_22 ^= ((/* implicit */unsigned int) var_9);
            var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_3] [i_3] [i_5])) && (((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) arr_0 [i_3] [i_5])) : (((((/* implicit */int) (_Bool)1)) << (((-2708823690245209580LL) + (2708823690245209580LL))))))))));
            var_24 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) (unsigned char)51)), (max((-4280386219661001926LL), (((/* implicit */long long int) (_Bool)1))))));
            var_25 -= ((/* implicit */signed char) 2708823690245209580LL);
        }
        for (unsigned char i_6 = 3; i_6 < 12; i_6 += 1) 
        {
            var_26 *= ((/* implicit */_Bool) (+(((((/* implicit */_Bool) ((unsigned short) arr_11 [(unsigned char)4]))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (!(arr_17 [i_6 - 2]))))))));
            var_27 = ((/* implicit */short) ((((/* implicit */long long int) ((((((/* implicit */int) (unsigned short)45165)) >> (((((/* implicit */int) (unsigned short)45160)) - (45129))))) << (((((/* implicit */int) ((signed char) (unsigned short)20371))) + (140)))))) ^ (max((((((-4365553807934255267LL) + (9223372036854775807LL))) << (((((((/* implicit */int) (signed char)-122)) + (142))) - (20))))), (((((/* implicit */_Bool) -4431807881353325344LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)33850))) : (-2708823690245209562LL)))))));
            arr_19 [i_6] [(unsigned short)14] = ((/* implicit */signed char) (!(((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_15 [i_3] [i_3] [i_3])) ? (arr_9 [3LL]) : (((/* implicit */unsigned int) ((/* implicit */int) var_13)))))), (var_1))))));
        }
        arr_20 [i_3] = ((((((((/* implicit */_Bool) (unsigned char)159)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-122))))) > (var_1))) ? (max((arr_1 [i_3]), (((/* implicit */unsigned int) arr_3 [i_3])))) : (((/* implicit */unsigned int) max((((/* implicit */int) ((arr_1 [i_3]) > (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)49)))))), (((((/* implicit */int) (unsigned short)45161)) >> (((2708823690245209585LL) - (2708823690245209555LL)))))))));
        /* LoopSeq 3 */
        for (signed char i_7 = 2; i_7 < 12; i_7 += 2) 
        {
            var_28 = ((/* implicit */long long int) max((((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) < (((((/* implicit */_Bool) var_8)) ? (6420622390720886152ULL) : (((/* implicit */unsigned long long int) 5972552720697889699LL))))))), (((((/* implicit */unsigned int) (~(((/* implicit */int) arr_22 [(signed char)10]))))) ^ (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_3] [i_7]))) : (arr_9 [12LL])))))));
            var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_16 [i_7 + 2] [i_7 + 2])), (3524655404U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-112))) : (((4294967290U) | (((/* implicit */unsigned int) ((/* implicit */int) (short)-1)))))));
            arr_23 [i_3] = var_14;
        }
        /* vectorizable */
        for (unsigned short i_8 = 0; i_8 < 16; i_8 += 2) 
        {
            var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)45168)) ? (arr_24 [i_3]) : (arr_24 [i_3])));
            var_31 += ((/* implicit */unsigned long long int) (_Bool)1);
        }
        for (unsigned short i_9 = 0; i_9 < 16; i_9 += 3) 
        {
            var_32 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) -2708823690245209576LL))))), (min((((/* implicit */long long int) arr_10 [i_3])), (var_9)))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)82))) ^ (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) ^ (var_2))))) : (min((((/* implicit */unsigned int) arr_30 [i_3] [i_3])), (var_4)))));
            arr_31 [i_3] [i_9] [i_3] = ((/* implicit */signed char) min(((((-(var_1))) - (((/* implicit */long long int) ((((/* implicit */_Bool) arr_29 [i_9] [i_3])) ? (1065473678U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0)))))))), (((/* implicit */long long int) ((((/* implicit */int) var_0)) & (((/* implicit */int) (_Bool)1)))))));
            var_33 = ((/* implicit */signed char) arr_12 [i_3]);
        }
    }
    for (unsigned short i_10 = 0; i_10 < 11; i_10 += 2) /* same iter space */
    {
        var_34 ^= ((/* implicit */signed char) ((unsigned short) ((arr_32 [i_10]) ? (((/* implicit */int) arr_32 [i_10])) : (((/* implicit */int) (unsigned char)197)))));
        arr_34 [i_10] = ((/* implicit */unsigned short) ((-732678396638272277LL) & (((/* implicit */long long int) ((var_4) >> (((arr_25 [i_10] [i_10] [i_10]) - (14668334674302999808ULL))))))));
        var_35 = ((/* implicit */long long int) ((int) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_10] [i_10]))) & (arr_25 [i_10] [i_10] [i_10]))) : ((~(arr_14 [i_10]))))));
        arr_35 [i_10] = ((/* implicit */unsigned short) max((((/* implicit */long long int) ((arr_3 [i_10]) ? (((/* implicit */int) (unsigned short)17567)) : (((/* implicit */int) arr_3 [i_10]))))), (((long long int) ((((/* implicit */_Bool) arr_27 [i_10])) ? (4118526479U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
    }
    /* vectorizable */
    for (unsigned short i_11 = 0; i_11 < 11; i_11 += 2) /* same iter space */
    {
        arr_38 [i_11] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_11))));
        /* LoopNest 2 */
        for (unsigned int i_12 = 2; i_12 < 10; i_12 += 1) 
        {
            for (long long int i_13 = 0; i_13 < 11; i_13 += 2) 
            {
                {
                    var_36 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 2846831680604052068LL)) ? (((/* implicit */int) (short)-15650)) : (((/* implicit */int) (signed char)44))));
                    var_37 = ((/* implicit */unsigned char) ((unsigned int) arr_25 [i_11] [i_11] [i_11]));
                    /* LoopNest 2 */
                    for (long long int i_14 = 0; i_14 < 11; i_14 += 3) 
                    {
                        for (unsigned short i_15 = 0; i_15 < 11; i_15 += 1) 
                        {
                            {
                                arr_48 [(unsigned char)9] [i_12] [i_14] [i_14] = ((/* implicit */short) arr_36 [i_14]);
                                var_38 = ((/* implicit */unsigned char) ((((/* implicit */int) var_8)) > (((/* implicit */int) arr_12 [i_12 - 2]))));
                                var_39 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) arr_37 [i_12 + 1]))) ^ (-6305480054107686841LL)));
                            }
                        } 
                    } 
                    var_40 -= ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_33 [i_12 + 1])) & (((/* implicit */int) arr_33 [i_12 - 1]))));
                }
            } 
        } 
        var_41 = ((/* implicit */short) ((arr_24 [i_11]) != (((/* implicit */long long int) ((((/* implicit */int) arr_12 [i_11])) >> (((((/* implicit */int) var_8)) - (171))))))));
        arr_49 [i_11] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_45 [i_11] [i_11] [i_11]))) | (var_4)));
    }
    var_42 = ((/* implicit */short) ((((min((min((((/* implicit */long long int) var_4)), (var_9))), (((/* implicit */long long int) ((unsigned int) var_7))))) + (9223372036854775807LL))) << (((((7117135917528635052LL) << (((/* implicit */int) (_Bool)0)))) - (7117135917528635052LL)))));
    var_43 = ((/* implicit */unsigned char) var_11);
}
