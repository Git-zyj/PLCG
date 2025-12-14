/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204422
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204422 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204422
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
    var_18 = (-(((((/* implicit */_Bool) var_17)) ? (4262097493123843951ULL) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_0))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        /* LoopSeq 2 */
        for (short i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            var_19 -= ((/* implicit */int) var_8);
            var_20 = ((/* implicit */unsigned long long int) var_7);
        }
        for (unsigned long long int i_2 = 3; i_2 < 19; i_2 += 1) 
        {
            var_21 -= ((/* implicit */unsigned short) var_17);
            var_22 = ((/* implicit */unsigned char) (short)-1821);
            /* LoopSeq 3 */
            for (short i_3 = 0; i_3 < 21; i_3 += 4) 
            {
                var_23 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0])) ? (((/* implicit */unsigned long long int) arr_3 [(unsigned char)7])) : (arr_9 [i_0])))));
                /* LoopSeq 2 */
                for (unsigned int i_4 = 1; i_4 < 20; i_4 += 2) 
                {
                    var_24 = ((((/* implicit */_Bool) 4262097493123843932ULL)) ? (arr_5 [i_2 + 2] [i_4 - 1]) : (((/* implicit */unsigned int) 2147483647)));
                    var_25 = ((/* implicit */short) arr_3 [i_4]);
                }
                for (signed char i_5 = 2; i_5 < 20; i_5 += 1) 
                {
                    /* LoopSeq 1 */
                    for (signed char i_6 = 2; i_6 < 17; i_6 += 1) 
                    {
                        arr_21 [(short)2] [i_6] [1] [(signed char)18] [i_6] [(signed char)18] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32762)) ? (((/* implicit */int) arr_4 [(_Bool)1])) : (((/* implicit */int) (short)8960))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_3]))) : (arr_5 [i_5 - 1] [i_6 + 3])));
                        var_26 = ((/* implicit */unsigned short) var_5);
                        var_27 &= ((/* implicit */unsigned int) ((((/* implicit */int) arr_12 [i_2 - 3])) ^ (((/* implicit */int) arr_12 [i_0]))));
                    }
                    /* LoopSeq 2 */
                    for (short i_7 = 0; i_7 < 21; i_7 += 2) 
                    {
                        arr_25 [i_0] [(unsigned short)9] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_15 [i_2 - 2] [i_2 - 1] [i_2 + 1] [i_2 + 2] [i_2 - 3] [i_2 - 1]))));
                        arr_26 [i_0] [17] [i_0] [(unsigned char)20] [i_7] [(short)4] = (-(((((/* implicit */_Bool) -1548390168)) ? (((/* implicit */int) (_Bool)1)) : (-2147483641))));
                        var_28 *= ((/* implicit */_Bool) arr_1 [(unsigned short)13] [i_2 - 3]);
                        var_29 = ((/* implicit */signed char) (+(((/* implicit */int) (_Bool)1))));
                    }
                    for (signed char i_8 = 2; i_8 < 19; i_8 += 1) 
                    {
                        var_30 = ((/* implicit */signed char) (((+(((/* implicit */int) (_Bool)1)))) ^ ((-(((/* implicit */int) arr_15 [i_0] [i_3] [i_3] [(short)9] [(signed char)10] [i_2]))))));
                        arr_31 [i_0] [(signed char)14] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) arr_11 [i_0]);
                        var_31 = ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (arr_18 [i_2 - 1] [i_2 - 1])))) ? (((((/* implicit */_Bool) arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (184939981U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)121))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_27 [i_0])) : (((/* implicit */int) arr_13 [i_0]))))));
                        var_32 = ((/* implicit */_Bool) arr_18 [i_0] [i_0]);
                    }
                }
            }
            for (short i_9 = 4; i_9 < 20; i_9 += 1) 
            {
                arr_35 [i_0] [i_9] [i_9] [(signed char)3] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_27 [i_0])))))) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */_Bool) arr_1 [(unsigned char)19] [i_9])) ? (2035220539) : (((/* implicit */int) arr_13 [i_9]))))));
                /* LoopSeq 1 */
                for (signed char i_10 = 4; i_10 < 20; i_10 += 1) 
                {
                    arr_40 [i_0] [i_0] [i_0] [10ULL] &= ((/* implicit */unsigned char) (unsigned short)46981);
                    var_33 = ((/* implicit */short) (+(((((/* implicit */_Bool) arr_30 [i_0] [i_2 + 1] [(unsigned short)0] [i_10] [i_9 + 1])) ? (((/* implicit */int) var_0)) : (arr_3 [i_0])))));
                }
            }
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
            {
                arr_45 [i_11] [i_11] [i_11] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_32 [i_0] [i_0] [i_11] [i_2 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_34 [i_0]))) : (arr_32 [i_0] [i_2 - 3] [i_2 - 3] [i_11])));
                var_34 += ((/* implicit */unsigned long long int) arr_7 [i_0] [(unsigned char)7] [i_11]);
                arr_46 [10ULL] [i_11] [i_11] [i_0] = ((/* implicit */short) ((((/* implicit */int) (signed char)104)) % (2147483647)));
                arr_47 [i_11] [20ULL] [i_11] [20ULL] = ((/* implicit */unsigned int) (_Bool)1);
            }
            /* LoopSeq 1 */
            for (signed char i_12 = 0; i_12 < 21; i_12 += 4) 
            {
                var_35 = ((/* implicit */int) 4262097493123843965ULL);
                var_36 = ((/* implicit */long long int) (unsigned char)163);
                arr_52 [i_0] [5LL] [i_2 - 1] [i_0] = var_11;
                /* LoopSeq 3 */
                for (long long int i_13 = 0; i_13 < 21; i_13 += 2) 
                {
                    var_37 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_10 [(short)1] [i_2 - 2] [i_13] [i_13])) * (((/* implicit */int) arr_44 [i_0]))))) || (((/* implicit */_Bool) arr_41 [(unsigned char)15] [2U] [(unsigned char)15]))));
                    var_38 = ((/* implicit */int) ((((/* implicit */_Bool) arr_54 [(signed char)18] [i_2 + 1] [i_0] [i_0])) ? (arr_54 [i_12] [i_2 + 2] [i_2] [i_2]) : (arr_54 [i_2] [i_2 + 1] [i_2 + 1] [13U])));
                    var_39 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_0]))));
                    var_40 = ((((/* implicit */_Bool) arr_15 [i_2 - 3] [(short)5] [i_2] [i_2] [i_2 - 1] [(short)12])) ? (((/* implicit */long long int) ((/* implicit */int) arr_15 [(short)15] [(signed char)10] [(signed char)10] [i_2] [i_2 + 1] [(signed char)10]))) : (arr_23 [i_2] [i_2] [i_2] [i_2] [i_2 + 2] [i_2] [i_13]));
                }
                for (unsigned int i_14 = 3; i_14 < 20; i_14 += 4) /* same iter space */
                {
                    arr_59 [i_0] [i_12] [i_0] [i_14] [20U] [i_2 - 1] &= ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)5))))) ? (arr_5 [i_14 - 3] [i_14 - 3]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_0])))));
                    var_41 ^= ((/* implicit */signed char) (+(arr_32 [1] [2LL] [i_14 - 3] [(unsigned short)15])));
                }
                for (unsigned int i_15 = 3; i_15 < 20; i_15 += 4) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (long long int i_16 = 1; i_16 < 19; i_16 += 3) 
                    {
                        var_42 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)-32763))));
                        arr_66 [i_0] [i_0] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_1 [i_2 + 2] [i_15 - 1])) ? (((/* implicit */int) arr_0 [i_16])) : (((/* implicit */int) arr_13 [(unsigned char)18])))) ^ (((/* implicit */int) arr_19 [(short)1] [(short)1] [i_12] [i_15 + 1] [i_16 + 2] [i_12]))));
                        arr_67 [i_0] [i_0] [i_0] [(unsigned char)10] [i_0] = ((/* implicit */unsigned short) ((5321614595236462914LL) % (((/* implicit */long long int) arr_2 [i_2 + 2]))));
                        arr_68 [i_0] [i_2 + 2] [(short)15] [(_Bool)1] [i_16] = ((/* implicit */_Bool) arr_61 [(short)6] [i_2] [i_2 - 1] [0LL] [i_15 - 3] [i_16 + 1]);
                    }
                    for (unsigned int i_17 = 0; i_17 < 21; i_17 += 2) 
                    {
                        var_43 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-32763)) ? (((/* implicit */int) (short)2141)) : (((/* implicit */int) var_15))))) ? ((~(arr_57 [14] [i_2] [i_12] [i_15 - 3] [i_15]))) : (((/* implicit */int) arr_20 [i_12] [i_17] [i_17] [i_15 - 1] [i_15 - 2] [i_17]))));
                        arr_73 [(short)14] [13U] [i_12] [i_15] [i_17] [13U] = (+(((((/* implicit */long long int) ((/* implicit */int) var_7))) / (576460752303423488LL))));
                        arr_74 [i_0] [(short)10] [i_12] [i_15] [i_17] = ((/* implicit */short) ((-6124611196214445957LL) % (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1)))))));
                    }
                    arr_75 [13LL] [(unsigned char)18] [i_12] [(_Bool)1] [i_12] [i_12] = ((/* implicit */signed char) arr_54 [i_2 + 2] [i_15 + 1] [11] [i_15 - 2]);
                }
            }
        }
        var_44 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_8 [i_0]))));
        arr_76 [i_0] = ((/* implicit */int) var_2);
    }
    var_45 = (short)-2141;
    var_46 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_7))) / (5321614595236462892LL)));
}
