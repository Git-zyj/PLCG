/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35662
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35662 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35662
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
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 1; i_2 < 6; i_2 += 2) 
                {
                    for (unsigned short i_3 = 0; i_3 < 10; i_3 += 3) 
                    {
                        {
                            arr_11 [0LL] = ((((/* implicit */_Bool) -9137060009129539314LL)) ? (((/* implicit */int) arr_5 [i_0] [(unsigned short)6])) : (((/* implicit */int) arr_6 [i_0])));
                            arr_12 [9] [9] [i_2] [i_1] [9] = ((/* implicit */unsigned long long int) ((short) ((((/* implicit */_Bool) arr_3 [8])) ? ((~(((/* implicit */int) arr_5 [(unsigned char)1] [i_2])))) : ((-2147483647 - 1)))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_4 = 0; i_4 < 10; i_4 += 3) 
                {
                    for (unsigned int i_5 = 0; i_5 < 10; i_5 += 4) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned short) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)78))) : (((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */unsigned long long int) -5042550915247399886LL)) : (((((/* implicit */_Bool) var_16)) ? (17214983176521217998ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [1LL])))))))));
                            var_18 -= arr_5 [i_1] [5];
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        for (long long int i_7 = 0; i_7 < 19; i_7 += 2) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_8 = 1; i_8 < 18; i_8 += 3) 
                {
                    for (unsigned long long int i_9 = 1; i_9 < 16; i_9 += 3) 
                    {
                        for (unsigned long long int i_10 = 0; i_10 < 19; i_10 += 2) 
                        {
                            {
                                var_19 = ((/* implicit */int) ((((((/* implicit */_Bool) 0)) || (((/* implicit */_Bool) ((unsigned short) (_Bool)1))))) ? (((/* implicit */unsigned int) (((~(((/* implicit */int) (unsigned short)1609)))) - (((/* implicit */int) var_5))))) : (((((/* implicit */_Bool) (unsigned short)47982)) ? (((/* implicit */unsigned int) 794571949)) : (3535478689U)))));
                                var_20 = ((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_4)))))));
                                var_21 = ((/* implicit */long long int) arr_27 [11LL] [i_7] [(unsigned short)17] [i_9 + 1] [i_9 + 1]);
                                var_22 += ((((/* implicit */_Bool) arr_20 [i_6] [(short)16] [i_8 + 1])) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) arr_25 [i_6] [(_Bool)1] [i_8 + 1] [i_9 + 1])) < (arr_20 [i_10] [i_7] [i_8 - 1])))) : (((int) (short)28374)));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_11 = 4; i_11 < 18; i_11 += 3) 
                {
                    for (long long int i_12 = 0; i_12 < 19; i_12 += 3) 
                    {
                        {
                            arr_34 [i_6] [1ULL] [i_11] [i_12] = ((/* implicit */short) (+(min((arr_27 [3LL] [i_7] [i_11] [i_12] [18LL]), (((/* implicit */unsigned int) max((((/* implicit */unsigned short) (signed char)-28)), ((unsigned short)65535))))))));
                            arr_35 [i_6] [8ULL] [8ULL] [i_12] = ((/* implicit */unsigned short) arr_30 [i_11 - 3] [i_12]);
                            var_23 += ((/* implicit */signed char) (unsigned char)255);
                            var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) arr_25 [i_11] [i_11 + 1] [i_11 - 4] [i_11 - 4])))) ? (((((/* implicit */_Bool) arr_25 [i_11] [i_11 + 1] [i_11 + 1] [i_11 - 1])) ? (arr_25 [i_11] [i_11 - 4] [i_11 - 1] [i_11 - 4]) : (arr_25 [i_11] [i_11 + 1] [i_11 - 3] [i_11 - 4]))) : (((((/* implicit */_Bool) (unsigned char)20)) ? (arr_25 [8] [i_11 + 1] [i_11 - 4] [i_11 - 4]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)34219))))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_13 = 0; i_13 < 23; i_13 += 4) 
    {
        for (unsigned int i_14 = 0; i_14 < 23; i_14 += 4) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_15 = 0; i_15 < 23; i_15 += 2) 
                {
                    for (signed char i_16 = 3; i_16 < 20; i_16 += 1) 
                    {
                        {
                            var_25 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_36 [i_14])) ? (((/* implicit */int) arr_43 [i_13] [i_14] [i_15])) : (((/* implicit */int) arr_36 [(unsigned char)16])))), (((/* implicit */int) arr_40 [i_13]))))) ? (((int) arr_37 [i_15] [i_16 - 3])) : (((((/* implicit */_Bool) 3816406994U)) ? (0) : (((/* implicit */int) (signed char)-36))))));
                            var_26 = ((((/* implicit */_Bool) ((int) (+(((/* implicit */int) arr_36 [i_16 - 2])))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_44 [i_16]) ? (((/* implicit */long long int) 9)) : (arr_45 [i_13] [i_13] [i_13] [i_13])))) ? (((long long int) var_6)) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_37 [i_13] [i_14])) ? (((/* implicit */int) (unsigned short)24877)) : (var_8))))))) : (((unsigned long long int) ((((/* implicit */int) arr_36 [i_16])) >= (0)))));
                            arr_48 [i_14] [i_14] = ((/* implicit */int) ((((/* implicit */long long int) max((arr_37 [i_13] [i_14]), (((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)127)))))))) <= ((~((-(var_10)))))));
                            arr_49 [i_14] [i_15] [6U] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_0) % (912314314261859697LL)))) ? (arr_45 [i_13] [(_Bool)1] [i_15] [i_16 - 3]) : (((/* implicit */long long int) ((((/* implicit */int) arr_47 [i_13])) / (var_15))))))) ? (((/* implicit */long long int) min((((((/* implicit */_Bool) arr_47 [i_14])) ? (((/* implicit */int) arr_47 [(unsigned short)9])) : (((/* implicit */int) (unsigned short)53961)))), (((/* implicit */int) var_16))))) : (max((arr_45 [i_16] [i_16] [i_16 + 3] [i_16]), ((-(var_0)))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (long long int i_17 = 0; i_17 < 23; i_17 += 2) 
                {
                    for (signed char i_18 = 0; i_18 < 23; i_18 += 3) 
                    {
                        for (int i_19 = 0; i_19 < 23; i_19 += 3) 
                        {
                            {
                                var_27 = ((/* implicit */unsigned short) (((_Bool)1) ? (-794571955) : (((/* implicit */int) (unsigned char)147))));
                                arr_57 [i_14] [i_14] [i_18] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_43 [i_13] [i_14] [i_18]), (arr_43 [i_13] [i_13] [i_13])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) (unsigned short)17554)) ? (arr_52 [i_13] [21LL] [(unsigned short)12] [i_19]) : (-1104547101002805741LL)))))) : (max((((/* implicit */unsigned int) (signed char)-34)), (arr_37 [i_13] [i_13])))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_20 = 3; i_20 < 21; i_20 += 2) 
                {
                    for (long long int i_21 = 1; i_21 < 22; i_21 += 2) 
                    {
                        {
                            var_28 = ((/* implicit */signed char) ((long long int) -1LL));
                            var_29 ^= ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */int) arr_58 [i_13] [i_14] [(unsigned char)4])) : (-776345364)))))) ? (((/* implicit */int) (unsigned char)20)) : (((((/* implicit */_Bool) arr_62 [i_13] [5])) ? (((/* implicit */int) (signed char)5)) : (((/* implicit */int) arr_40 [(unsigned short)5])))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_22 = 0; i_22 < 15; i_22 += 4) 
    {
        for (unsigned long long int i_23 = 3; i_23 < 13; i_23 += 1) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_24 = 1; i_24 < 11; i_24 += 2) 
                {
                    for (unsigned int i_25 = 0; i_25 < 15; i_25 += 2) 
                    {
                        {
                            var_30 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (+(6177193717670538814LL)))), (arr_20 [i_24 + 4] [i_23] [i_23 - 1])))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)31601))) : (((long long int) (unsigned short)47982))));
                            var_31 = ((/* implicit */signed char) max((var_31), (((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)57676))) - (-9222483142109436049LL))))));
                            var_32 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) 5699653167704541304ULL))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (((((/* implicit */_Bool) (~(((/* implicit */int) var_2))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) arr_73 [i_24]))))) : (((((/* implicit */_Bool) var_10)) ? (arr_71 [i_22] [i_23] [i_24]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)17554)))))))));
                            var_33 += ((/* implicit */signed char) arr_67 [i_25] [i_25] [i_24]);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_26 = 0; i_26 < 15; i_26 += 2) 
                {
                    for (long long int i_27 = 0; i_27 < 15; i_27 += 3) 
                    {
                        {
                            arr_82 [i_23] = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) 29853651U)) ? (arr_50 [i_22] [(short)10] [i_26] [i_27]) : (((/* implicit */int) var_2))))) ? (((((/* implicit */int) (short)30453)) % (((/* implicit */int) arr_73 [i_22])))) : (((/* implicit */int) (unsigned short)25481))))));
                            arr_83 [i_23] [(unsigned short)8] [i_26] [i_23] [i_22] [i_22] = ((signed char) 6ULL);
                            arr_84 [i_22] &= (unsigned short)31601;
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_28 = 1; i_28 < 14; i_28 += 4) 
                {
                    for (unsigned short i_29 = 0; i_29 < 15; i_29 += 1) 
                    {
                        {
                            arr_89 [i_23] [i_23 - 2] [i_28] [i_29] [10] = ((/* implicit */signed char) ((int) ((((/* implicit */_Bool) (unsigned short)40065)) ? (var_15) : (arr_51 [i_28 + 1] [i_28 + 1] [i_28 - 1] [i_28 - 1]))));
                            var_34 = ((/* implicit */unsigned long long int) min((var_34), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */int) (short)-30464)), (1403697352)))) ? (arr_38 [i_22] [i_23 + 1]) : (((/* implicit */long long int) ((/* implicit */int) var_14))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
