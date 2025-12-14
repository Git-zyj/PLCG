/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31946
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31946 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31946
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
    var_16 = ((/* implicit */int) ((((/* implicit */_Bool) (+((-(((/* implicit */int) (unsigned short)61440))))))) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) var_15)))));
    var_17 = ((/* implicit */unsigned long long int) ((signed char) var_0));
    var_18 *= ((/* implicit */unsigned int) var_5);
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 3) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned int i_1 = 4; i_1 < 23; i_1 += 4) 
        {
            var_19 = ((/* implicit */long long int) min((var_19), ((-(2684877635931934454LL)))));
            var_20 = ((((/* implicit */_Bool) (unsigned short)4095)) ? (((long long int) (unsigned char)191)) : (((/* implicit */long long int) 4294967280U)));
        }
        for (unsigned char i_2 = 0; i_2 < 25; i_2 += 1) 
        {
            var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)61440)) ? (((/* implicit */int) (signed char)48)) : (((/* implicit */int) (unsigned short)2133))));
            var_22 = ((/* implicit */long long int) (((-(5292655098612269206LL))) != (((((/* implicit */_Bool) var_10)) ? (var_10) : (-166863020622980555LL)))));
            /* LoopSeq 2 */
            for (signed char i_3 = 0; i_3 < 25; i_3 += 4) 
            {
                var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -5980482852537923450LL)) ? (547047142U) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))));
                var_24 -= ((/* implicit */short) ((((/* implicit */int) (unsigned char)164)) ^ (((/* implicit */int) (signed char)40))));
                var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) (unsigned short)61441))));
                var_26 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned char)57))));
            }
            for (long long int i_4 = 0; i_4 < 25; i_4 += 3) 
            {
                var_27 ^= ((/* implicit */short) (!(((/* implicit */_Bool) (unsigned short)63403))));
                var_28 = ((/* implicit */long long int) max((var_28), (((/* implicit */long long int) var_0))));
            }
            var_29 = ((/* implicit */short) var_1);
        }
        var_30 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)11183)))));
        arr_13 [(short)6] &= var_10;
        var_31 += ((/* implicit */long long int) ((unsigned short) (signed char)8));
        arr_14 [i_0] [i_0] = ((long long int) (~(((/* implicit */int) (signed char)-10))));
    }
    for (unsigned char i_5 = 0; i_5 < 25; i_5 += 3) /* same iter space */
    {
        arr_17 [i_5] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) var_2)))))));
        var_32 ^= ((/* implicit */unsigned long long int) 238972734U);
    }
    /* vectorizable */
    for (unsigned char i_6 = 0; i_6 < 25; i_6 += 3) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned long long int i_7 = 0; i_7 < 25; i_7 += 4) 
        {
            for (unsigned long long int i_8 = 1; i_8 < 22; i_8 += 3) 
            {
                for (unsigned long long int i_9 = 0; i_9 < 25; i_9 += 4) 
                {
                    {
                        var_33 ^= ((((/* implicit */long long int) ((/* implicit */int) var_8))) / (-3525202930177649732LL));
                        var_34 = ((/* implicit */signed char) min((var_34), (((/* implicit */signed char) (-(((/* implicit */int) (short)32349)))))));
                    }
                } 
            } 
        } 
        var_35 = ((/* implicit */signed char) min((var_35), (((/* implicit */signed char) ((((/* implicit */int) var_8)) <= (((/* implicit */int) (!(((/* implicit */_Bool) 3055794677U))))))))));
        var_36 = ((/* implicit */long long int) ((((((/* implicit */_Bool) (signed char)-34)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (arr_25 [i_6] [i_6] [i_6] [i_6]))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_14)))))));
        /* LoopSeq 2 */
        for (short i_10 = 1; i_10 < 24; i_10 += 3) /* same iter space */
        {
            var_37 = ((/* implicit */unsigned short) max((var_37), (((/* implicit */unsigned short) var_1))));
            /* LoopSeq 2 */
            for (unsigned int i_11 = 0; i_11 < 25; i_11 += 1) 
            {
                arr_37 [i_6] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) var_14))))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_13))));
                /* LoopNest 2 */
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    for (unsigned char i_13 = 0; i_13 < 25; i_13 += 4) 
                    {
                        {
                            var_38 = ((/* implicit */unsigned short) (-(547047170U)));
                            var_39 = ((/* implicit */unsigned short) max((var_39), (var_7)));
                        }
                    } 
                } 
                var_40 = ((/* implicit */unsigned short) max((var_40), (((/* implicit */unsigned short) ((unsigned char) var_13)))));
                arr_44 [i_6] [i_11] [i_11] = 3738104194U;
                /* LoopSeq 2 */
                for (unsigned char i_14 = 0; i_14 < 25; i_14 += 3) 
                {
                    var_41 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_23 [8ULL] [i_10 + 1])) && (((4436566698999039052LL) > (((/* implicit */long long int) ((/* implicit */int) (signed char)-43)))))));
                    /* LoopSeq 2 */
                    for (unsigned char i_15 = 0; i_15 < 25; i_15 += 4) /* same iter space */
                    {
                        var_42 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) 2040LL)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_5))));
                        arr_52 [i_15] [i_10 + 1] [10U] [i_11] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_30 [(unsigned short)17] [i_6] [i_10 - 1] [i_14] [(unsigned char)0] [2LL])) ? (arr_42 [i_6] [(_Bool)1] [i_10 + 1] [i_14] [i_15]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))));
                        var_43 *= ((/* implicit */short) (!(((/* implicit */_Bool) (unsigned short)43907))));
                    }
                    for (unsigned char i_16 = 0; i_16 < 25; i_16 += 4) /* same iter space */
                    {
                        arr_56 [i_6] [i_6] [i_11] [i_14] [i_16] = ((/* implicit */int) var_12);
                        arr_57 [i_6] [i_10] [i_10] [i_10] [i_16] = ((/* implicit */unsigned long long int) arr_49 [i_16] [i_6]);
                    }
                }
                for (long long int i_17 = 0; i_17 < 25; i_17 += 1) 
                {
                    arr_62 [i_6] [(short)7] [i_11] [i_17] [i_6] [(unsigned char)17] = ((/* implicit */long long int) (-((((_Bool)1) ? (556863102U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)168)))))));
                    arr_63 [i_17] [i_10 + 1] [i_11] [i_11] = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) 11810725931699989946ULL)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) var_3)))))));
                    var_44 = ((/* implicit */unsigned long long int) max((var_44), (((/* implicit */unsigned long long int) (((-(var_9))) ^ (var_9))))));
                }
            }
            for (unsigned int i_18 = 0; i_18 < 25; i_18 += 2) 
            {
                var_45 *= ((/* implicit */short) ((signed char) ((unsigned char) (short)28202)));
                var_46 ^= ((/* implicit */signed char) ((((/* implicit */int) arr_47 [i_6] [i_10 + 1] [i_10 + 1] [i_10 - 1] [i_6])) ^ (((/* implicit */int) var_1))));
                var_47 -= ((/* implicit */unsigned long long int) ((long long int) (unsigned short)61440));
                arr_68 [(unsigned char)21] = ((/* implicit */signed char) (unsigned char)159);
            }
            arr_69 [i_6] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned int) var_14)))));
            var_48 = ((/* implicit */signed char) max((var_48), (((/* implicit */signed char) var_5))));
            var_49 = ((/* implicit */unsigned char) ((short) ((2132352376U) % (547047142U))));
        }
        for (short i_19 = 1; i_19 < 24; i_19 += 3) /* same iter space */
        {
            arr_74 [i_19] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_1))) <= (5292655098612269199LL)));
            /* LoopSeq 2 */
            for (unsigned char i_20 = 1; i_20 < 24; i_20 += 3) 
            {
                var_50 = ((/* implicit */signed char) ((((/* implicit */_Bool) 5160634090538512937LL)) ? (((/* implicit */int) arr_70 [i_19] [i_19 - 1] [i_19])) : (((/* implicit */int) (unsigned char)0))));
                arr_77 [4LL] [i_19] [i_20 - 1] [i_19] &= ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)112)) <= (((/* implicit */int) (signed char)56))));
                var_51 = ((/* implicit */signed char) ((unsigned long long int) arr_49 [i_19 - 1] [i_20 + 1]));
            }
            for (short i_21 = 2; i_21 < 24; i_21 += 4) 
            {
                arr_82 [i_19] [i_19] [i_19] = ((/* implicit */unsigned short) 4674139251225896712ULL);
                arr_83 [i_19] [i_21 + 1] [9LL] [i_19] = ((/* implicit */short) (-(((/* implicit */int) var_13))));
                arr_84 [i_19] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((4811300626691037643ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)9)))))) ? (((/* implicit */long long int) var_2)) : (((((/* implicit */_Bool) (unsigned char)231)) ? (-2213141726068384912LL) : (2305843009213693952LL)))));
                var_52 = ((/* implicit */unsigned char) var_9);
                var_53 = ((/* implicit */short) max((var_53), (((/* implicit */short) ((0ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))))));
            }
            arr_85 [i_19] = ((((/* implicit */_Bool) (short)-21929)) ? (262140LL) : (((/* implicit */long long int) ((/* implicit */int) var_7))));
        }
    }
}
