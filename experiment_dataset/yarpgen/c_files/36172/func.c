/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36172
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36172 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36172
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
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 22; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                {
                    arr_9 [(signed char)3] [(signed char)8] [(_Bool)1] &= (+(((/* implicit */int) ((short) max((var_7), (((/* implicit */unsigned short) var_3)))))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 1; i_3 < 20; i_3 += 2) 
                    {
                        for (short i_4 = 3; i_4 < 21; i_4 += 2) 
                        {
                            {
                                var_15 *= ((/* implicit */short) ((unsigned short) (unsigned short)43989));
                                var_16 = var_13;
                                var_17 -= ((/* implicit */int) (!(((/* implicit */_Bool) var_2))));
                            }
                        } 
                    } 
                    var_18 &= ((/* implicit */unsigned short) (-(((/* implicit */int) var_8))));
                }
            } 
        } 
        var_19 ^= ((/* implicit */signed char) min(((unsigned short)65535), (((/* implicit */unsigned short) ((((unsigned int) arr_7 [i_0] [i_0] [i_0] [i_0])) != (((/* implicit */unsigned int) ((/* implicit */int) var_3))))))));
    }
    for (short i_5 = 0; i_5 < 13; i_5 += 4) 
    {
        /* LoopSeq 2 */
        for (short i_6 = 2; i_6 < 12; i_6 += 3) /* same iter space */
        {
            var_20 *= arr_14 [i_5];
            arr_18 [i_6 - 1] [i_5] &= ((/* implicit */unsigned short) (~(((/* implicit */int) ((signed char) arr_3 [i_6] [(unsigned char)20] [i_5])))));
            /* LoopSeq 3 */
            for (unsigned char i_7 = 1; i_7 < 12; i_7 += 3) 
            {
                var_21 = -7628210965185767999LL;
                var_22 &= ((/* implicit */_Bool) (unsigned short)65535);
            }
            for (signed char i_8 = 1; i_8 < 10; i_8 += 4) 
            {
                var_23 |= ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_6)))))))) <= (((/* implicit */int) (_Bool)1))));
                /* LoopNest 2 */
                for (int i_9 = 2; i_9 < 10; i_9 += 4) 
                {
                    for (short i_10 = 0; i_10 < 13; i_10 += 4) 
                    {
                        {
                            var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned short)0)))))));
                            arr_29 [2LL] [2LL] [i_8] [2LL] [i_10] |= ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) arr_27 [i_8 + 3] [i_8] [i_6 - 1] [i_6 + 1] [2U])) ? (((/* implicit */int) (_Bool)1)) : (791865559))));
                            var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) ((max((arr_7 [i_5] [(_Bool)1] [i_9 - 2] [(short)18]), (((/* implicit */int) var_8)))) % (((/* implicit */int) var_4)))))));
                        }
                    } 
                } 
                arr_30 [i_5] |= ((/* implicit */short) (~(((/* implicit */int) (unsigned short)26185))));
            }
            for (long long int i_11 = 1; i_11 < 11; i_11 += 4) 
            {
                var_26 *= ((/* implicit */signed char) var_9);
                arr_35 [i_5] [i_5] |= ((/* implicit */int) (!(((_Bool) (short)-7958))));
                /* LoopSeq 1 */
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    arr_39 [i_12] [i_6] [i_5] [i_5] |= ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */int) ((unsigned short) var_7))), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (_Bool)0)))))))));
                    var_27 = ((/* implicit */int) min((var_27), (((/* implicit */int) var_6))));
                }
                var_28 ^= ((/* implicit */short) arr_25 [i_6] [i_11]);
                var_29 = ((/* implicit */unsigned short) min((var_29), (((/* implicit */unsigned short) ((0) % (((/* implicit */int) (unsigned short)12119)))))));
            }
        }
        for (short i_13 = 2; i_13 < 12; i_13 += 3) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned short i_14 = 0; i_14 < 13; i_14 += 4) 
            {
                for (signed char i_15 = 0; i_15 < 13; i_15 += 3) 
                {
                    {
                        arr_48 [i_5] [i_14] [i_13] [i_5] &= var_13;
                        arr_49 [i_5] [i_5] [12LL] [12LL] [(signed char)12] [i_5] |= ((/* implicit */long long int) (unsigned short)26185);
                        var_30 += max(((unsigned short)1984), ((unsigned short)65535));
                    }
                } 
            } 
            var_31 -= ((/* implicit */short) (signed char)73);
        }
        var_32 ^= ((/* implicit */unsigned char) ((((/* implicit */int) arr_42 [i_5] [i_5] [i_5])) >= (((/* implicit */int) (unsigned char)20))));
        /* LoopSeq 4 */
        for (short i_16 = 0; i_16 < 13; i_16 += 2) 
        {
            var_33 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) min((arr_41 [i_16]), (((/* implicit */int) (_Bool)0))))) ? ((+(arr_41 [i_16]))) : (((/* implicit */int) max(((unsigned short)65535), (((/* implicit */unsigned short) (_Bool)1)))))));
            arr_53 [i_16] [i_16] |= ((/* implicit */unsigned int) var_5);
        }
        for (unsigned char i_17 = 0; i_17 < 13; i_17 += 2) 
        {
            var_34 ^= ((/* implicit */long long int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned short) var_11)), (min(((unsigned short)26185), (((/* implicit */unsigned short) (short)5794)))))))));
            var_35 -= ((/* implicit */short) min(((+(((/* implicit */int) arr_47 [i_17] [i_17] [i_17] [i_5])))), (((/* implicit */int) arr_47 [i_5] [i_5] [i_5] [i_17]))));
        }
        for (int i_18 = 3; i_18 < 12; i_18 += 2) 
        {
            var_36 *= (short)10168;
            var_37 *= ((/* implicit */short) ((_Bool) (unsigned short)255));
        }
        for (int i_19 = 1; i_19 < 12; i_19 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned short i_20 = 0; i_20 < 13; i_20 += 4) 
            {
                for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                {
                    {
                        arr_67 [(short)8] [i_19 - 1] [i_20] [(short)8] [i_21] &= ((/* implicit */short) (+(var_0)));
                        var_38 |= ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */int) (_Bool)0)), ((~(((/* implicit */int) var_4))))))) ? (((13539302676382678106ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-86))))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_25 [i_5] [i_5])))))));
                        var_39 ^= ((/* implicit */short) ((signed char) ((arr_24 [i_19] [i_19 - 1] [i_5]) ? (((/* implicit */int) arr_24 [(unsigned short)2] [i_19 + 1] [i_20])) : (((/* implicit */int) var_13)))));
                    }
                } 
            } 
            var_40 |= ((/* implicit */unsigned short) ((short) (_Bool)1));
        }
        /* LoopNest 2 */
        for (signed char i_22 = 0; i_22 < 13; i_22 += 2) 
        {
            for (unsigned short i_23 = 2; i_23 < 11; i_23 += 1) 
            {
                {
                    var_41 ^= var_8;
                    /* LoopNest 2 */
                    for (unsigned short i_24 = 0; i_24 < 13; i_24 += 2) 
                    {
                        for (unsigned short i_25 = 0; i_25 < 13; i_25 += 1) 
                        {
                            {
                                arr_77 [i_23 + 1] [(signed char)1] [i_24] [i_23 + 1] [0] [0] &= var_11;
                                arr_78 [i_25] [i_24] [i_23 + 1] [i_22] [i_22] [i_5] [i_5] &= ((/* implicit */signed char) min((min((max((((/* implicit */unsigned int) arr_40 [i_5] [i_24] [i_24])), (arr_17 [i_5] [i_5] [i_5]))), (((/* implicit */unsigned int) ((short) arr_11 [i_5] [i_22] [(_Bool)1] [i_22]))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_28 [i_24] [i_24] [i_23 + 1] [i_23] [i_23 + 2])) ? (((/* implicit */int) arr_8 [(short)17] [i_23 + 2] [i_23 + 2] [(_Bool)1])) : (((/* implicit */int) arr_46 [i_23 + 1] [i_23] [i_23 - 1] [i_24])))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    var_42 |= ((/* implicit */long long int) (unsigned char)240);
    var_43 &= ((/* implicit */signed char) var_13);
    var_44 &= ((/* implicit */_Bool) 1715235237);
}
