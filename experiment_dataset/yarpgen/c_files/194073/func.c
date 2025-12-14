/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194073
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194073 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194073
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
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        /* LoopSeq 4 */
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            var_19 = ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [(short)0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [(signed char)20]))) : (9223372036854775807LL)))));
            /* LoopNest 2 */
            for (int i_2 = 2; i_2 < 23; i_2 += 2) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_20 = ((/* implicit */_Bool) ((unsigned short) 1124743793));
                        var_21 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_0 [i_0])) < (((/* implicit */int) arr_8 [i_2] [i_2] [i_2] [i_2])))))) & (var_4)));
                    }
                } 
            } 
            /* LoopSeq 3 */
            for (long long int i_4 = 2; i_4 < 23; i_4 += 3) 
            {
                var_22 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (unsigned short)18759)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0]))) : (var_5))) << (((((/* implicit */int) ((unsigned short) arr_6 [i_0] [i_4]))) - (45720)))));
                arr_14 [i_4] [i_4] [i_4] [i_4] = ((/* implicit */_Bool) (+(((/* implicit */int) ((4294967295U) > (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))))))));
                arr_15 [i_0] [i_4] [i_0] = ((/* implicit */_Bool) ((int) var_16));
                arr_16 [6U] [i_4] [i_4 - 1] = arr_10 [i_0] [i_0] [i_4];
            }
            for (unsigned int i_5 = 4; i_5 < 22; i_5 += 3) 
            {
                arr_19 [(_Bool)0] [i_5 - 1] [i_5] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_8 [i_0] [i_1] [i_5 - 4] [i_5]))));
                var_23 = ((/* implicit */long long int) arr_6 [i_0] [i_5 - 3]);
                var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_17)) ? (1320557406U) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))));
            }
            for (signed char i_6 = 0; i_6 < 24; i_6 += 2) 
            {
                var_25 = ((/* implicit */long long int) arr_17 [i_0]);
                /* LoopNest 2 */
                for (unsigned int i_7 = 2; i_7 < 20; i_7 += 4) 
                {
                    for (long long int i_8 = 0; i_8 < 24; i_8 += 4) 
                    {
                        {
                            arr_30 [i_1] [i_1] [i_6] [(signed char)5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2974409890U)) ? (((/* implicit */int) (signed char)-30)) : (24576)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1)))) : (0U)));
                            arr_31 [i_0] [i_1] [i_7] [i_7] = ((unsigned char) arr_29 [21ULL] [i_0] [i_6] [i_6] [i_1] [i_1] [i_0]);
                            var_26 = ((/* implicit */unsigned short) ((2974409913U) > (((/* implicit */unsigned int) (-(-1124743793))))));
                            var_27 = ((/* implicit */unsigned long long int) arr_0 [i_8]);
                        }
                    } 
                } 
                var_28 ^= ((/* implicit */unsigned long long int) 2974409889U);
                var_29 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3852373415807025196ULL)) ? (((/* implicit */int) (short)32744)) : (((/* implicit */int) (unsigned short)1920))));
                /* LoopNest 2 */
                for (unsigned int i_9 = 0; i_9 < 24; i_9 += 1) 
                {
                    for (unsigned int i_10 = 0; i_10 < 24; i_10 += 2) 
                    {
                        {
                            var_30 = ((/* implicit */long long int) ((arr_10 [i_10] [i_1] [i_9]) * (((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_0] [(_Bool)1] [0] [i_9])))));
                            arr_37 [i_9] [i_1] [i_6] [0U] [i_10] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_20 [i_0] [i_1] [i_6] [i_1])) || (((/* implicit */_Bool) arr_9 [i_1] [i_1] [i_1] [i_1]))));
                            arr_38 [i_9] [i_10] = arr_18 [i_6] [i_9];
                            var_31 = ((/* implicit */unsigned int) max((var_31), (((/* implicit */unsigned int) (((!(((/* implicit */_Bool) var_6)))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (signed char)-1)))) : (arr_7 [i_9] [i_1]))))));
                            var_32 = ((/* implicit */int) arr_29 [i_0] [i_0] [i_0] [i_9] [(_Bool)1] [i_10] [(_Bool)1]);
                        }
                    } 
                } 
            }
            var_33 *= ((((/* implicit */_Bool) var_12)) && (arr_1 [i_0]));
        }
        for (unsigned char i_11 = 4; i_11 < 21; i_11 += 4) 
        {
            var_34 -= ((/* implicit */unsigned char) (short)-32752);
            arr_42 [i_0] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) (short)-32762)))) ? (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)82)) >> (((arr_7 [i_0] [i_0]) + (5141066999567362844LL)))))) : (((long long int) arr_23 [i_0]))));
            arr_43 [i_11] = ((/* implicit */unsigned int) 0LL);
            var_35 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) arr_41 [(unsigned short)2] [i_11])) ? (arr_33 [0] [i_11 + 2] [i_0] [i_0] [i_0] [i_0]) : (arr_7 [i_11 - 1] [(signed char)2])))));
        }
        for (int i_12 = 3; i_12 < 20; i_12 += 1) /* same iter space */
        {
            arr_46 [0] [i_12 + 1] [i_12] = ((/* implicit */long long int) -1340382169);
            var_36 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_1 [22U])) : (((/* implicit */int) var_13)))) >> (((((/* implicit */int) (short)(-32767 - 1))) + (32780)))));
        }
        for (int i_13 = 3; i_13 < 20; i_13 += 1) /* same iter space */
        {
            arr_49 [i_0] [i_0] = ((/* implicit */unsigned int) (unsigned char)254);
            var_37 = ((/* implicit */_Bool) ((((/* implicit */int) var_1)) & (((/* implicit */int) arr_48 [i_13 + 4] [i_13] [i_13 - 2]))));
            /* LoopNest 3 */
            for (unsigned short i_14 = 0; i_14 < 24; i_14 += 2) 
            {
                for (unsigned short i_15 = 0; i_15 < 24; i_15 += 3) 
                {
                    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                    {
                        {
                            var_38 -= ((/* implicit */short) -1124743784);
                            var_39 -= ((/* implicit */unsigned short) ((unsigned int) ((unsigned long long int) 1124743784)));
                            arr_59 [i_0] [i_13] [i_13] [i_0] [i_13] &= ((/* implicit */unsigned short) (~(572274426319546378ULL)));
                            var_40 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_54 [i_13 - 3])) ? (arr_40 [i_15] [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (short)32512)))));
                        }
                    } 
                } 
            } 
        }
        arr_60 [i_0] = ((/* implicit */short) ((((/* implicit */unsigned long long int) 399677709079705809LL)) ^ (15720561258719299200ULL)));
    }
    var_41 = ((/* implicit */long long int) var_7);
}
