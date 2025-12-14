/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27915
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27915 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27915
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
    var_20 = ((/* implicit */signed char) var_5);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 1; i_0 < 12; i_0 += 4) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned int) var_17);
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) 3220027951U);
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 1; i_1 < 12; i_1 += 4) /* same iter space */
    {
        var_22 += ((/* implicit */_Bool) ((var_16) % (1217725935U)));
        /* LoopSeq 1 */
        for (signed char i_2 = 2; i_2 < 13; i_2 += 1) 
        {
            /* LoopSeq 2 */
            for (signed char i_3 = 0; i_3 < 14; i_3 += 3) 
            {
                arr_11 [i_1] [i_2] [i_1] = ((/* implicit */signed char) ((var_2) << (((2814516244167225600LL) - (2814516244167225600LL)))));
                arr_12 [i_2] = ((/* implicit */short) ((long long int) var_19));
                arr_13 [i_3] [i_3] [i_2] [i_1] = ((/* implicit */unsigned int) ((unsigned short) (unsigned short)46371));
                /* LoopSeq 2 */
                for (signed char i_4 = 0; i_4 < 14; i_4 += 4) 
                {
                    var_23 ^= ((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1))));
                    arr_16 [i_1] [i_2] [i_3] [i_4] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_13))));
                    var_24 = ((/* implicit */unsigned int) (-(((/* implicit */int) var_4))));
                    /* LoopSeq 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        var_25 = ((/* implicit */int) ((unsigned int) var_7));
                        arr_21 [i_1] [8LL] [i_3] [i_4] [i_4] [i_5] = ((/* implicit */long long int) var_3);
                        arr_22 [i_1] = ((/* implicit */int) (!(((/* implicit */_Bool) var_18))));
                        var_26 *= ((/* implicit */int) (!(((/* implicit */_Bool) var_15))));
                        arr_23 [i_1 - 1] [i_2] [i_1 - 1] [i_2] [i_3] [i_3] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) 4288616196U)) || (((/* implicit */_Bool) var_4))));
                    }
                    for (long long int i_6 = 0; i_6 < 14; i_6 += 2) 
                    {
                        arr_26 [i_1] [i_2 - 1] [i_1] [i_4] [i_4] = ((/* implicit */unsigned int) ((long long int) var_19));
                        var_27 = ((/* implicit */unsigned long long int) ((long long int) (unsigned short)24273));
                        arr_27 [i_3] [i_4] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_4))));
                    }
                }
                for (unsigned int i_7 = 0; i_7 < 14; i_7 += 2) 
                {
                    /* LoopSeq 3 */
                    for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                    {
                        var_28 = (-(((/* implicit */int) var_14)));
                        arr_34 [i_3] [i_2] [i_3] [i_7] [i_3] = ((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)41807))));
                        var_29 = ((/* implicit */signed char) ((((/* implicit */int) var_4)) & (((/* implicit */int) (_Bool)1))));
                        var_30 &= (signed char)8;
                    }
                    for (unsigned char i_9 = 2; i_9 < 10; i_9 += 2) 
                    {
                        arr_39 [i_7] [i_3] [(_Bool)1] [i_7] [i_9 - 1] [i_9] [i_1 + 1] = ((/* implicit */unsigned short) ((long long int) (signed char)116));
                        var_31 = ((/* implicit */long long int) var_12);
                    }
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        var_32 = (-(var_16));
                        var_33 = ((/* implicit */unsigned char) ((short) var_9));
                        arr_42 [i_10] [i_7] [i_3] [i_2] [i_1 + 2] = ((/* implicit */short) ((unsigned char) (unsigned short)12718));
                        var_34 = ((unsigned int) -2117825171392711512LL);
                    }
                    var_35 *= ((/* implicit */short) ((((/* implicit */int) (_Bool)0)) - (((((/* implicit */int) (short)22878)) + (((/* implicit */int) (_Bool)1))))));
                }
                var_36 |= ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)3065)) >= (((/* implicit */int) (_Bool)1))));
            }
            for (signed char i_11 = 1; i_11 < 13; i_11 += 1) 
            {
                /* LoopSeq 2 */
                for (unsigned int i_12 = 0; i_12 < 14; i_12 += 3) /* same iter space */
                {
                    arr_50 [i_1] [i_1] = ((/* implicit */signed char) ((unsigned short) 1074939325U));
                    var_37 += ((/* implicit */signed char) var_18);
                    arr_51 [i_12] [i_11] [i_2] [i_1] = ((int) ((unsigned long long int) (_Bool)0));
                    var_38 = ((long long int) (unsigned char)186);
                }
                for (unsigned int i_13 = 0; i_13 < 14; i_13 += 3) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_14 = 3; i_14 < 10; i_14 += 4) /* same iter space */
                    {
                        var_39 += ((/* implicit */_Bool) ((long long int) ((((/* implicit */int) (_Bool)0)) > (((/* implicit */int) (unsigned char)21)))));
                        var_40 = ((/* implicit */unsigned short) (+(((/* implicit */int) (_Bool)1))));
                        var_41 = ((/* implicit */signed char) max((var_41), (((/* implicit */signed char) (~(var_15))))));
                        arr_56 [i_1 + 1] [i_2] [i_14] = ((/* implicit */signed char) (+(var_16)));
                        var_42 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_10))));
                    }
                    for (unsigned short i_15 = 3; i_15 < 10; i_15 += 4) /* same iter space */
                    {
                        arr_59 [i_1] [i_2 + 1] [i_11] [i_11] [i_15] = ((/* implicit */short) ((unsigned int) var_6));
                        var_43 |= ((/* implicit */unsigned char) ((unsigned short) var_6));
                        arr_60 [i_15] [i_13] [i_11] [i_2 + 1] [i_2 + 1] [i_1] = ((/* implicit */unsigned char) (-(((/* implicit */int) (_Bool)1))));
                    }
                    arr_61 [(unsigned char)1] [(unsigned char)1] [(unsigned char)1] [i_13] [i_1 + 1] = ((/* implicit */unsigned long long int) ((unsigned short) (_Bool)1));
                    arr_62 [i_1] [i_13] [i_1] [i_13] [i_13] [i_2] = ((/* implicit */unsigned short) (signed char)16);
                }
                /* LoopSeq 4 */
                for (int i_16 = 2; i_16 < 12; i_16 += 2) 
                {
                    var_44 = ((/* implicit */int) ((signed char) var_17));
                    var_45 = ((/* implicit */int) ((unsigned short) 17389653327528094506ULL));
                    arr_65 [i_1] [i_2] [i_11] [i_16] [i_16] = ((/* implicit */short) (-(((/* implicit */int) (unsigned char)143))));
                }
                for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                {
                    var_46 = ((/* implicit */unsigned char) ((signed char) 3847589241784958727LL));
                    /* LoopSeq 2 */
                    for (long long int i_18 = 2; i_18 < 11; i_18 += 4) 
                    {
                        arr_70 [i_1] [(unsigned char)5] [i_11 - 1] [0] [i_18] = ((/* implicit */short) var_6);
                        var_47 -= ((/* implicit */unsigned char) ((unsigned long long int) 3696459278U));
                        var_48 = ((/* implicit */unsigned int) ((unsigned short) var_15));
                    }
                    for (signed char i_19 = 2; i_19 < 12; i_19 += 4) 
                    {
                        var_49 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 16521681154234419578ULL))));
                        arr_74 [i_19] [i_17] [i_11] [i_1] [i_1] = ((/* implicit */unsigned short) ((short) var_7));
                        arr_75 [i_1 + 2] [i_2] [i_2 + 1] [i_17] [i_19] = ((/* implicit */unsigned char) ((((long long int) (unsigned short)28059)) & (var_6)));
                    }
                    var_50 = ((/* implicit */long long int) ((int) (_Bool)1));
                }
                for (short i_20 = 2; i_20 < 11; i_20 += 2) 
                {
                    /* LoopSeq 3 */
                    for (signed char i_21 = 0; i_21 < 14; i_21 += 2) 
                    {
                        arr_82 [i_1] [i_2] [i_11 + 1] [i_20] [i_21] = ((((/* implicit */int) (unsigned char)96)) % (((/* implicit */int) (unsigned char)71)));
                        arr_83 [i_21] [i_20] = ((/* implicit */int) ((_Bool) (_Bool)1));
                        var_51 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)52824))) % (8415682024139143996LL)));
                    }
                    for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
                    {
                        arr_87 [i_1] [i_2] [i_1] [i_20] [i_20 - 1] [i_22] [i_22] = ((/* implicit */unsigned int) (+(((/* implicit */int) var_3))));
                        arr_88 [i_1] = ((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)-8))));
                        var_52 = ((/* implicit */unsigned short) ((unsigned char) (_Bool)1));
                    }
                    for (unsigned char i_23 = 1; i_23 < 10; i_23 += 3) 
                    {
                        arr_91 [i_1] [i_20] [i_23] [i_20 + 1] [i_23] = ((/* implicit */unsigned long long int) (!((_Bool)1)));
                        arr_92 [i_1 - 1] [i_1 - 1] [i_23] [i_20 - 1] [i_23] = ((/* implicit */signed char) (-(((/* implicit */int) (_Bool)1))));
                    }
                    var_53 = ((/* implicit */short) (!((_Bool)1)));
                    arr_93 [i_20] [i_11] [i_1] [i_1] [i_1] = ((/* implicit */short) ((var_6) % (((/* implicit */long long int) 1890435131))));
                    arr_94 [i_1] [i_1] [i_1 + 1] [i_2] [7U] [i_20] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_10))));
                }
                for (signed char i_24 = 4; i_24 < 12; i_24 += 3) 
                {
                    var_54 = ((/* implicit */_Bool) (~(1457481303)));
                    arr_97 [i_24] [i_24] [i_24] [i_1] = ((/* implicit */short) (unsigned short)52814);
                    var_55 = ((/* implicit */long long int) ((signed char) 436820179264746347LL));
                    var_56 = ((/* implicit */long long int) min((var_56), (((/* implicit */long long int) ((signed char) (unsigned short)34829)))));
                    arr_98 [i_24] [i_24] [i_24] [i_1] = ((/* implicit */unsigned short) ((_Bool) var_4));
                }
            }
            var_57 = ((/* implicit */unsigned short) ((unsigned char) var_4));
            var_58 *= ((/* implicit */short) ((_Bool) (signed char)2));
        }
    }
}
