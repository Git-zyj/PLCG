/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50326
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50326 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50326
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
    var_11 = ((/* implicit */unsigned short) var_5);
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        /* LoopSeq 4 */
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            var_12 += ((/* implicit */unsigned char) (-(max((((/* implicit */unsigned int) (unsigned short)32714)), (arr_3 [i_1])))));
            arr_4 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_1]))))) ? (((/* implicit */int) max(((unsigned char)79), ((unsigned char)86)))) : (((((/* implicit */_Bool) min((arr_3 [i_0]), (((/* implicit */unsigned int) (unsigned char)79))))) ? (((/* implicit */int) max((arr_0 [i_0]), ((unsigned char)107)))) : (((/* implicit */int) (signed char)(-127 - 1)))))));
            arr_5 [i_0] = ((/* implicit */short) (-((-(max((((/* implicit */int) arr_0 [(_Bool)1])), (2147483628)))))));
            var_13 ^= (-(max((((/* implicit */int) arr_1 [i_1])), (((((/* implicit */_Bool) 0LL)) ? (((/* implicit */int) (short)-3232)) : (((/* implicit */int) (short)-3229)))))));
            var_14 = ((/* implicit */long long int) (unsigned char)234);
        }
        /* vectorizable */
        for (long long int i_2 = 1; i_2 < 23; i_2 += 2) 
        {
            var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_2 - 1])) ? (((/* implicit */long long int) (~(-1093829029)))) : (0LL)));
            arr_9 [i_0] [i_0] [i_0] |= ((/* implicit */signed char) (-(((/* implicit */int) arr_6 [i_2 - 1] [i_2 - 1]))));
        }
        /* vectorizable */
        for (unsigned char i_3 = 1; i_3 < 23; i_3 += 3) 
        {
            arr_12 [i_0] [i_3] = ((/* implicit */unsigned short) arr_11 [(short)17] [i_3] [i_3 + 1]);
            /* LoopNest 2 */
            for (long long int i_4 = 0; i_4 < 25; i_4 += 2) 
            {
                for (short i_5 = 1; i_5 < 21; i_5 += 1) 
                {
                    {
                        arr_17 [i_3] = ((/* implicit */short) 665431001);
                        arr_18 [i_3] [i_4] = ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)22327))) - (arr_15 [i_3] [i_5 + 4] [i_5 + 3] [i_5 + 1]));
                        arr_19 [i_3] [i_4] [i_4] [i_0] [i_3] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)184)) ? (2313284488120820960LL) : (((/* implicit */long long int) arr_3 [i_0]))));
                    }
                } 
            } 
            arr_20 [i_3] [i_3] [i_3] = ((/* implicit */short) 0LL);
        }
        for (short i_6 = 1; i_6 < 22; i_6 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned int i_7 = 0; i_7 < 25; i_7 += 3) 
            {
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    {
                        var_16 = ((/* implicit */short) min(((-(arr_25 [i_8] [i_8] [i_7] [i_6 + 2]))), (((((/* implicit */_Bool) min(((unsigned char)127), (((/* implicit */unsigned char) (signed char)-89))))) ? (-8043199158732994255LL) : ((-(-8043199158732994239LL)))))));
                        var_17 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-3226)) ? (((/* implicit */int) arr_26 [i_0] [i_0] [i_0] [i_0])) : ((-(((/* implicit */int) arr_24 [i_0] [i_0] [i_0] [i_0]))))))) ? (min((869247397U), (((/* implicit */unsigned int) (short)8191)))) : (min((arr_14 [i_6 + 1]), (((/* implicit */unsigned int) (signed char)-76))))));
                    }
                } 
            } 
            var_18 = ((/* implicit */int) 8043199158732994255LL);
        }
        var_19 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) max(((short)-15060), (((/* implicit */short) ((((/* implicit */_Bool) (short)-31100)) || (((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_0]))))))))) % (max((((/* implicit */unsigned long long int) 0LL)), ((-(arr_7 [i_0] [i_0] [24LL])))))));
    }
    /* vectorizable */
    for (unsigned int i_9 = 0; i_9 < 15; i_9 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_10 = 0; i_10 < 15; i_10 += 1) 
        {
            /* LoopSeq 2 */
            for (unsigned int i_11 = 2; i_11 < 14; i_11 += 3) 
            {
                arr_37 [i_9] [i_10] [i_11] = ((/* implicit */long long int) (-(((((/* implicit */_Bool) (short)5436)) ? (arr_14 [i_9]) : (869247397U)))));
                var_20 -= ((/* implicit */unsigned char) arr_33 [i_9] [i_11 - 2] [i_11 - 2]);
                var_21 *= arr_30 [i_9];
            }
            for (unsigned short i_12 = 2; i_12 < 14; i_12 += 1) 
            {
                arr_40 [i_9] = ((/* implicit */short) (-((-(((/* implicit */int) (signed char)44))))));
                arr_41 [i_12] = ((/* implicit */unsigned short) (unsigned char)79);
            }
            arr_42 [7] [i_10] [i_9] = ((/* implicit */unsigned short) (-(((/* implicit */int) (short)(-32767 - 1)))));
            arr_43 [i_10] [i_9] [i_9] = ((/* implicit */short) ((((/* implicit */_Bool) 5187417069612475176ULL)) ? (arr_39 [i_9]) : (((/* implicit */long long int) arr_36 [i_9] [i_9]))));
            arr_44 [i_10] [i_9] = ((/* implicit */unsigned long long int) ((arr_16 [i_9] [i_9]) / (((arr_10 [i_10]) ? (arr_25 [i_10] [i_10] [i_10] [i_10]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)192)))))));
        }
        var_22 = ((/* implicit */signed char) 17400585718526178033ULL);
        /* LoopSeq 2 */
        for (short i_13 = 0; i_13 < 15; i_13 += 2) /* same iter space */
        {
            var_23 |= ((/* implicit */unsigned long long int) ((arr_10 [i_9]) ? ((-(((/* implicit */int) (unsigned char)80)))) : ((-(((/* implicit */int) (short)-31060))))));
            var_24 ^= ((/* implicit */short) (-(((/* implicit */int) (signed char)127))));
        }
        for (short i_14 = 0; i_14 < 15; i_14 += 2) /* same iter space */
        {
            arr_50 [i_14] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) (short)3228)) != (((/* implicit */int) (signed char)16))))) * (((((/* implicit */int) (signed char)127)) / (-244384927)))));
            /* LoopSeq 1 */
            for (unsigned long long int i_15 = 0; i_15 < 15; i_15 += 1) 
            {
                var_25 = ((/* implicit */unsigned short) arr_51 [i_9] [i_9] [i_9]);
                /* LoopNest 2 */
                for (signed char i_16 = 1; i_16 < 13; i_16 += 2) 
                {
                    for (short i_17 = 0; i_17 < 15; i_17 += 2) 
                    {
                        {
                            arr_60 [i_9] [i_9] [(unsigned short)0] [i_9] [i_9] = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)255))))) ? ((~(((/* implicit */int) (short)-3220)))) : (((/* implicit */int) arr_6 [i_17] [(unsigned short)22]))));
                            var_26 = ((/* implicit */short) ((((/* implicit */_Bool) (+(629737917U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)3220))) : (3665229364U)));
                            var_27 = ((/* implicit */short) ((((/* implicit */_Bool) -12)) ? (11128430004073056591ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)54712)))));
                            var_28 = ((/* implicit */short) min((var_28), (((/* implicit */short) (signed char)66))));
                        }
                    } 
                } 
                var_29 = ((/* implicit */unsigned short) 2048860968U);
                /* LoopSeq 1 */
                for (int i_18 = 3; i_18 < 12; i_18 += 3) 
                {
                    arr_64 [i_18] [i_18] [i_18] [i_9] = ((/* implicit */unsigned char) 2048860968U);
                    var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)1167)) ? (((/* implicit */int) arr_57 [i_18 + 3] [i_18 + 3] [i_18 + 1] [i_18 - 3] [i_18] [i_18 + 2])) : (((/* implicit */int) arr_57 [i_18 - 2] [i_18 - 1] [i_18 - 3] [i_18 + 3] [i_18 + 3] [i_18 - 2]))));
                    var_31 = ((/* implicit */short) ((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) (unsigned short)64848))));
                    var_32 = ((/* implicit */short) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) arr_6 [i_9] [i_15])) : (((/* implicit */int) (short)5433))));
                }
            }
            /* LoopNest 2 */
            for (short i_19 = 0; i_19 < 15; i_19 += 3) 
            {
                for (unsigned short i_20 = 0; i_20 < 15; i_20 += 4) 
                {
                    {
                        arr_71 [(short)12] [i_19] [i_14] [i_9] = ((/* implicit */int) -8043199158732994239LL);
                        arr_72 [i_20] [i_19] [i_9] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)24)) ? (((/* implicit */int) arr_65 [i_20] [i_19] [i_14])) : (((/* implicit */int) arr_65 [i_19] [i_19] [i_19]))));
                        arr_73 [i_9] [i_14] [i_9] [i_14] = (-(((((/* implicit */long long int) ((/* implicit */int) (signed char)7))) & (44529331853436951LL))));
                        /* LoopSeq 1 */
                        for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                        {
                            var_33 = ((((/* implicit */_Bool) arr_34 [i_9] [i_9] [i_9])) ? (((/* implicit */long long int) ((/* implicit */int) arr_34 [i_9] [i_19] [i_20]))) : (arr_29 [i_9]));
                            var_34 = ((137438953471ULL) / (((/* implicit */unsigned long long int) 7180558177445416590LL)));
                        }
                    }
                } 
            } 
            var_35 = ((/* implicit */long long int) (-(arr_62 [i_14] [3U] [i_9] [i_9])));
            arr_76 [i_9] = ((/* implicit */signed char) arr_34 [i_9] [i_9] [i_9]);
        }
        var_36 = (short)26857;
        var_37 |= ((((/* implicit */int) (short)(-32767 - 1))) % (((/* implicit */int) arr_2 [i_9] [i_9] [i_9])));
    }
}
