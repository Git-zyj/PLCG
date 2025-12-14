/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235004
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235004 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235004
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
    var_16 = ((/* implicit */short) min((((/* implicit */int) var_9)), (var_15)));
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 3 */
        for (signed char i_1 = 1; i_1 < 14; i_1 += 4) /* same iter space */
        {
            var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) (-(((/* implicit */int) ((short) var_11))))))));
            var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) var_5))));
            var_19 = ((/* implicit */_Bool) max((var_19), (var_2)));
        }
        for (signed char i_2 = 1; i_2 < 14; i_2 += 4) /* same iter space */
        {
            var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 0)) ? (((/* implicit */long long int) (~(((/* implicit */int) var_14))))) : (((((/* implicit */_Bool) -1)) ? (-9175319251344093419LL) : (((/* implicit */long long int) ((/* implicit */int) var_2)))))))), (max((((/* implicit */unsigned long long int) (unsigned short)511)), (14685832585316254911ULL))))))));
            /* LoopNest 2 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                for (short i_4 = 0; i_4 < 16; i_4 += 3) 
                {
                    {
                        var_21 -= ((/* implicit */signed char) min((max((((/* implicit */int) min(((unsigned short)11475), (((/* implicit */unsigned short) arr_6 [i_0] [(unsigned char)6] [i_0]))))), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (_Bool)1)) : (0))))), (((/* implicit */int) arr_11 [(unsigned short)9] [i_0] [i_0] [i_0]))));
                        var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) ((unsigned char) 1)))));
                    }
                } 
            } 
            var_23 ^= ((/* implicit */long long int) ((((/* implicit */int) ((unsigned short) -4982555604215102780LL))) > (((/* implicit */int) (_Bool)1))));
            var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_7 [i_0]))))) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (max((-4982555604215102780LL), (((/* implicit */long long int) (unsigned short)756))))));
        }
        /* vectorizable */
        for (signed char i_5 = 1; i_5 < 14; i_5 += 4) /* same iter space */
        {
            arr_18 [i_5] = ((/* implicit */int) ((9964199481780245690ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1))))));
            var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) 4982555604215102767LL))));
            var_26 += ((/* implicit */_Bool) (unsigned short)33780);
            var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)80)) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
        }
        var_28 = ((/* implicit */short) ((((-2021637377) + (2147483647))) >> (((((/* implicit */_Bool) min((((/* implicit */unsigned char) (signed char)-86)), ((unsigned char)176)))) ? ((+(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) max((((/* implicit */unsigned short) arr_0 [i_0])), (arr_7 [i_0]))))))));
        var_29 *= ((/* implicit */unsigned short) (+(732419799)));
        var_30 ^= ((/* implicit */unsigned short) ((max((-6911513056678057202LL), (((/* implicit */long long int) arr_3 [i_0] [i_0])))) < (((/* implicit */long long int) ((/* implicit */int) var_12)))));
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 11; i_6 += 4) /* same iter space */
    {
        /* LoopSeq 3 */
        for (unsigned short i_7 = 4; i_7 < 7; i_7 += 3) 
        {
            arr_26 [i_6] [i_6] [i_6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_6] [i_6]))) : (15832777731641907011ULL)))) ? (((/* implicit */int) arr_19 [i_6] [i_7 - 2])) : (((/* implicit */int) (!(((/* implicit */_Bool) var_14)))))));
            /* LoopSeq 3 */
            for (int i_8 = 0; i_8 < 11; i_8 += 4) 
            {
                var_31 = ((/* implicit */unsigned short) max((var_31), (((/* implicit */unsigned short) ((((/* implicit */_Bool) -2147483643)) ? (((/* implicit */int) (unsigned short)31697)) : (((/* implicit */int) (_Bool)1)))))));
                arr_29 [i_7] [i_8] = ((((/* implicit */_Bool) ((var_13) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0)))))) ? (((int) (unsigned short)65520)) : (((((/* implicit */int) (signed char)-84)) / (((/* implicit */int) (short)-32758)))));
                var_32 += ((/* implicit */_Bool) arr_19 [i_7 + 2] [i_7 - 3]);
                var_33 = ((/* implicit */signed char) min((var_33), (((/* implicit */signed char) var_0))));
            }
            for (unsigned short i_9 = 0; i_9 < 11; i_9 += 3) 
            {
                var_34 = ((/* implicit */long long int) max((var_34), (((/* implicit */long long int) ((unsigned short) var_9)))));
                var_35 *= ((/* implicit */short) 67108863ULL);
            }
            for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
            {
                var_36 = ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) arr_30 [i_7 + 2] [i_10 - 1] [i_7 + 2])) : (((/* implicit */int) var_11))));
                var_37 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned short) (unsigned char)137))) ? (((/* implicit */int) arr_7 [i_10 - 1])) : ((+(((/* implicit */int) arr_30 [i_7] [9] [9]))))));
                var_38 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 0)) ? (((/* implicit */long long int) -1759618577)) : (4982555604215102798LL)));
                /* LoopSeq 1 */
                for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
                {
                    var_39 ^= ((/* implicit */short) -893218169);
                    var_40 = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) 2147483642)) && ((_Bool)0)))) > (((/* implicit */int) arr_12 [i_11 - 1] [i_10 - 1] [i_7] [i_6]))));
                    var_41 = ((/* implicit */int) max((var_41), (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)756)) >> (((((/* implicit */int) (unsigned short)48318)) - (48295)))))) ? (((/* implicit */int) (_Bool)1)) : ((+(((/* implicit */int) arr_4 [i_6]))))))));
                    var_42 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)32044))) : (4982555604215102779LL)))) ? (0) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) == (16769375806595317589ULL))))));
                }
            }
            /* LoopSeq 1 */
            for (int i_12 = 3; i_12 < 10; i_12 += 4) 
            {
                var_43 = ((/* implicit */int) min((var_43), ((-(((/* implicit */int) arr_0 [i_7 + 3]))))));
                arr_41 [i_12] = ((/* implicit */unsigned short) ((long long int) arr_25 [i_6]));
            }
            arr_42 [i_6] [i_6] [i_7] = ((/* implicit */signed char) 17293822569102704640ULL);
        }
        for (short i_13 = 1; i_13 < 9; i_13 += 4) 
        {
            arr_45 [i_13 - 1] [9] [i_6] = ((/* implicit */unsigned short) ((unsigned char) var_14));
            var_44 = ((/* implicit */signed char) min((var_44), (((/* implicit */signed char) (((_Bool)1) || (((/* implicit */_Bool) (unsigned short)0)))))));
            var_45 = ((/* implicit */unsigned long long int) (-2147483647 - 1));
            arr_46 [i_6] [0ULL] [i_13] = ((/* implicit */_Bool) 180929608U);
        }
        for (long long int i_14 = 3; i_14 < 10; i_14 += 2) 
        {
            var_46 |= ((/* implicit */_Bool) ((((/* implicit */int) var_2)) ^ (((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_0))))));
            var_47 = ((/* implicit */_Bool) (signed char)64);
        }
        var_48 = ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)22131))));
    }
    /* vectorizable */
    for (int i_15 = 0; i_15 < 11; i_15 += 4) /* same iter space */
    {
        arr_52 [i_15] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned short)48308))));
        var_49 = ((/* implicit */signed char) max((var_49), (((/* implicit */signed char) (short)-32414))));
        var_50 *= ((/* implicit */unsigned int) var_4);
        var_51 = ((/* implicit */_Bool) var_13);
    }
    for (int i_16 = 0; i_16 < 11; i_16 += 4) /* same iter space */
    {
        var_52 |= ((min((((/* implicit */unsigned int) (signed char)1)), ((~(var_1))))) != (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_16]))));
        var_53 ^= ((/* implicit */unsigned int) var_4);
    }
    var_54 = ((/* implicit */int) ((unsigned int) ((((/* implicit */int) var_14)) < (((/* implicit */int) (_Bool)0)))));
    var_55 = ((/* implicit */short) min((var_55), (((/* implicit */short) var_10))));
}
