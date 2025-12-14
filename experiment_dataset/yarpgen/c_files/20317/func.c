/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20317
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20317 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20317
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
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        var_16 = ((/* implicit */int) max((((unsigned long long int) ((long long int) arr_0 [8] [i_0]))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [8] [i_0]))) == (1437105486U))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (signed char i_1 = 0; i_1 < 11; i_1 += 1) /* same iter space */
        {
            var_17 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 9492686310833002027ULL))));
            /* LoopSeq 2 */
            for (short i_2 = 1; i_2 < 10; i_2 += 4) 
            {
                arr_9 [i_0] [i_1] [i_2] = ((/* implicit */long long int) (-(((/* implicit */int) arr_7 [i_0] [i_1] [i_2]))));
                var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)36))))) ? ((+(((/* implicit */int) arr_3 [i_2])))) : (((((/* implicit */_Bool) (signed char)-47)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_10))))));
            }
            for (int i_3 = 1; i_3 < 9; i_3 += 1) 
            {
                /* LoopSeq 1 */
                for (int i_4 = 0; i_4 < 11; i_4 += 1) 
                {
                    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((_Bool)0) ? (arr_6 [i_0] [i_0]) : (((/* implicit */unsigned long long int) var_5))))) ? (((/* implicit */int) arr_13 [i_3 + 1] [i_3 - 1] [i_3 - 1])) : ((~((-2147483647 - 1))))));
                    arr_14 [(short)4] |= ((/* implicit */int) var_9);
                }
                var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)147)) ? (((/* implicit */int) (unsigned char)165)) : (((/* implicit */int) (unsigned short)3865)))))));
                arr_15 [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) (short)32759)) & (((/* implicit */int) (signed char)-60))));
            }
            arr_16 [i_0] = ((/* implicit */int) (-(((arr_6 [i_0] [i_0]) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_1])))))));
        }
        for (signed char i_5 = 0; i_5 < 11; i_5 += 1) /* same iter space */
        {
            /* LoopSeq 1 */
            for (short i_6 = 0; i_6 < 11; i_6 += 4) 
            {
                arr_24 [i_5] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) min((arr_11 [i_0]), (arr_11 [i_0]))))));
                arr_25 [i_6] [i_5] [i_0] = ((/* implicit */signed char) min(((-(11371536292668698292ULL))), (((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_10 [i_6] [i_0] [i_6] [i_5])) ^ (((/* implicit */int) arr_23 [4U])))) - (((((/* implicit */int) arr_1 [i_0] [i_5])) & (1899765356))))))));
                var_21 = ((/* implicit */_Bool) (-(((unsigned long long int) ((((/* implicit */int) (unsigned char)165)) * (((/* implicit */int) arr_7 [i_6] [i_5] [i_0])))))));
                var_22 = var_15;
            }
            arr_26 [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */int) var_3)) >= (2147483647))))) ? (((/* implicit */long long int) ((((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [i_0] [i_0])) % (((/* implicit */int) arr_18 [i_5]))))) & (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) -2147483633)) : (891926137U)))))) : (((long long int) ((((/* implicit */_Bool) 14704463709217794651ULL)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned char)0)))))));
            var_23 = ((/* implicit */unsigned int) ((min((((/* implicit */unsigned long long int) arr_2 [i_5])), (((((/* implicit */_Bool) -4202943242494424424LL)) ? (((/* implicit */unsigned long long int) 6034342824455428618LL)) : (7075207781040853323ULL))))) * (((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-39))) : (18446744073709551615ULL)))));
            var_24 -= ((/* implicit */short) (((+((+(((/* implicit */int) (signed char)-24)))))) <= (((/* implicit */int) ((signed char) min((31U), (((/* implicit */unsigned int) var_11))))))));
            var_25 = ((/* implicit */_Bool) ((11371536292668698292ULL) % (((((/* implicit */_Bool) min((((/* implicit */long long int) 7)), (3847806551038380269LL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)27883)) ^ (((/* implicit */int) (_Bool)1))))) : ((+(var_9)))))));
        }
        var_26 *= ((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_21 [i_0] [i_0] [i_0] [i_0])) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_0] [(signed char)2] [i_0] [i_0]))))), (((/* implicit */long long int) ((unsigned short) arr_21 [(short)2] [i_0] [i_0] [i_0])))));
        var_27 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_10 [i_0] [3] [i_0] [i_0])) % ((+(-12)))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((-2120966603) - (((/* implicit */int) arr_11 [i_0]))))), (arr_22 [(signed char)4] [i_0] [(signed char)4])))) : (min((((unsigned long long int) arr_17 [i_0])), (max((arr_6 [i_0] [i_0]), (arr_6 [i_0] [i_0])))))));
    }
    for (signed char i_7 = 0; i_7 < 14; i_7 += 4) 
    {
        var_28 -= (~((~(((/* implicit */int) max((((/* implicit */signed char) arr_28 [i_7])), (var_1)))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_8 = 0; i_8 < 14; i_8 += 3) 
        {
            var_29 = ((/* implicit */unsigned long long int) arr_29 [i_7]);
            /* LoopNest 2 */
            for (signed char i_9 = 2; i_9 < 10; i_9 += 4) 
            {
                for (unsigned long long int i_10 = 1; i_10 < 13; i_10 += 4) 
                {
                    {
                        arr_36 [i_7] [i_8] [i_7] [i_9] = ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_34 [(signed char)4])))) - (max((((/* implicit */unsigned long long int) arr_32 [i_7] [i_8] [i_9])), (5082804137186978308ULL))));
                        arr_37 [i_10] [i_8] = ((/* implicit */_Bool) max((-4), (((/* implicit */int) ((_Bool) arr_29 [i_9 - 2])))));
                        var_30 = ((/* implicit */_Bool) (~(-5101498783104303140LL)));
                    }
                } 
            } 
            arr_38 [i_7] |= ((/* implicit */long long int) (~(((/* implicit */int) arr_29 [i_7]))));
        }
        /* LoopSeq 2 */
        for (unsigned short i_11 = 0; i_11 < 14; i_11 += 4) 
        {
            var_31 = ((/* implicit */short) (!(((/* implicit */_Bool) min((((/* implicit */long long int) ((-296019495) & (((/* implicit */int) var_11))))), (arr_33 [i_7]))))));
            var_32 = ((/* implicit */unsigned long long int) (~((((!(((/* implicit */_Bool) 252985951300464881ULL)))) ? ((((_Bool)1) ? (-1490468481) : (((/* implicit */int) (signed char)-33)))) : (((/* implicit */int) arr_41 [i_7]))))));
        }
        for (short i_12 = 0; i_12 < 14; i_12 += 3) 
        {
            var_33 *= ((/* implicit */signed char) ((_Bool) ((((((((/* implicit */_Bool) arr_41 [i_7])) ? (((/* implicit */int) arr_41 [3ULL])) : (((/* implicit */int) var_10)))) + (2147483647))) >> (((((((/* implicit */_Bool) arr_40 [11LL] [i_12])) ? (2601739185255968017ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))) - (2601739185255967988ULL))))));
            var_34 -= ((/* implicit */short) (+(((((arr_28 [i_7]) ? (var_15) : (((/* implicit */int) (short)32758)))) % ((-2147483647 - 1))))));
            var_35 |= ((/* implicit */unsigned int) max(((((_Bool)1) ? (((/* implicit */int) (signed char)-91)) : (-1654025587))), (((/* implicit */int) var_4))));
        }
        var_36 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */int) var_10)), (arr_40 [i_7] [i_7])))) ? (((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) arr_29 [i_7])) : (((/* implicit */int) arr_28 [i_7])))) : (min((-296019495), (((/* implicit */int) arr_39 [i_7]))))))), (min((((((/* implicit */unsigned long long int) 1834026353U)) - (10325596040137109357ULL))), (((/* implicit */unsigned long long int) ((var_9) != (((/* implicit */unsigned long long int) 4982455543427694243LL)))))))));
    }
    /* vectorizable */
    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
    {
        var_37 = ((/* implicit */unsigned long long int) var_12);
        /* LoopNest 2 */
        for (signed char i_14 = 2; i_14 < 14; i_14 += 1) 
        {
            for (unsigned int i_15 = 0; i_15 < 15; i_15 += 1) 
            {
                {
                    var_38 = ((/* implicit */long long int) min((var_38), (((/* implicit */long long int) (-(((/* implicit */int) (signed char)3)))))));
                    arr_54 [i_13] [i_14] [i_15] [i_13] = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_52 [i_15] [i_14] [i_14] [i_13]))) <= (var_9)))) << (((/* implicit */int) ((((/* implicit */int) arr_50 [i_14] [i_14])) > (((/* implicit */int) arr_53 [i_13] [(short)1] [i_15] [i_14])))))));
                    arr_55 [i_13] [i_13] [i_14] [i_13] = ((/* implicit */signed char) ((((/* implicit */int) arr_46 [i_14 - 1])) & (((/* implicit */int) arr_46 [i_14 + 1]))));
                    arr_56 [i_14] [i_13] [i_14] [i_15] = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)-22551)) ? (((/* implicit */unsigned long long int) 2662613852U)) : (12902665371463886811ULL)));
                }
            } 
        } 
    }
    var_39 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) 296019494)) ? (((/* implicit */unsigned long long int) -296019501)) : (13974079679459368459ULL)))))) ? (((long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (var_14)))) : (((/* implicit */long long int) ((/* implicit */int) var_11)))));
    var_40 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_5))));
}
