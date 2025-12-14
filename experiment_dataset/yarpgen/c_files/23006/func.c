/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23006
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23006 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23006
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
    var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) (-(var_3))))));
    var_14 = ((/* implicit */long long int) max((var_14), (var_11)));
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned char i_0 = 3; i_0 < 16; i_0 += 3) 
    {
        var_15 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (1321047060) : (((/* implicit */int) (unsigned char)37))))) ? (6704658996668385899LL) : (((/* implicit */long long int) -228135106)));
        arr_2 [i_0] [i_0] |= ((/* implicit */unsigned int) (unsigned char)39);
        var_16 = ((/* implicit */unsigned char) max((var_16), (((unsigned char) var_8))));
        var_17 |= ((/* implicit */long long int) ((((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) arr_1 [i_0])) : (2381875503U))) <= (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)225)) ? (((/* implicit */int) (unsigned char)8)) : (((/* implicit */int) var_2)))))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 12; i_1 += 1) 
    {
        var_18 = ((/* implicit */unsigned char) ((((((/* implicit */int) (unsigned char)218)) <= (((/* implicit */int) var_2)))) || (((/* implicit */_Bool) var_6))));
        var_19 -= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 6902648857508703092LL))));
    }
    for (int i_2 = 0; i_2 < 15; i_2 += 4) 
    {
        arr_8 [i_2] = ((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned char) ((long long int) (unsigned char)30)))) << (((((/* implicit */int) var_2)) - (110)))));
        /* LoopSeq 1 */
        for (long long int i_3 = 0; i_3 < 15; i_3 += 2) 
        {
            var_20 &= ((var_7) >> ((((-(((((/* implicit */_Bool) 7983523723125825293LL)) ? (2320091769627611623LL) : (arr_9 [(unsigned char)14] [i_3]))))) + (2320091769627611660LL))));
            /* LoopNest 3 */
            for (long long int i_4 = 2; i_4 < 12; i_4 += 1) 
            {
                for (long long int i_5 = 1; i_5 < 14; i_5 += 1) 
                {
                    for (int i_6 = 3; i_6 < 14; i_6 += 3) 
                    {
                        {
                            var_21 = ((/* implicit */int) var_8);
                            var_22 += ((/* implicit */int) max(((~(((((/* implicit */long long int) arr_11 [i_2])) / (var_0))))), (((/* implicit */long long int) ((unsigned char) ((((/* implicit */int) (unsigned char)38)) < (((/* implicit */int) (unsigned char)41))))))));
                            var_23 += ((/* implicit */long long int) var_5);
                        }
                    } 
                } 
            } 
            var_24 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1021510591U)) ? (arr_15 [i_2] [i_2] [i_2] [i_2] [(unsigned char)4] [i_3]) : (((/* implicit */unsigned int) var_3))))) ? (((((/* implicit */_Bool) ((((var_12) + (2147483647))) >> (((((/* implicit */int) (unsigned char)216)) - (197)))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_2] [i_2] [i_3])))))) : (arr_9 [i_2] [13]))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((unsigned int) var_1))) <= ((+(var_11)))))))));
        }
    }
    for (unsigned char i_7 = 0; i_7 < 20; i_7 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_8 = 0; i_8 < 20; i_8 += 2) 
        {
            arr_24 [i_7] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_20 [i_7] [i_8])) ? ((+(((/* implicit */int) (unsigned char)202)))) : (-1762310503)));
            var_25 ^= ((/* implicit */unsigned char) ((((/* implicit */int) var_1)) - (-228135083)));
            var_26 = ((/* implicit */long long int) max((var_26), (var_11)));
            /* LoopSeq 2 */
            for (unsigned char i_9 = 0; i_9 < 20; i_9 += 4) 
            {
                var_27 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((var_10) < (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_9] [i_8] [0LL]))))))) | (((((/* implicit */_Bool) (unsigned char)252)) ? (((/* implicit */long long int) var_5)) : (arr_19 [i_9])))))) ? (((/* implicit */long long int) ((/* implicit */int) ((1762310503) < (((/* implicit */int) arr_21 [i_7])))))) : ((~(((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) 2963916690U)) : (var_6)))))));
                var_28 &= max((((long long int) max((((/* implicit */long long int) 416500631)), (6291082941447198136LL)))), (((/* implicit */long long int) var_8)));
                /* LoopNest 2 */
                for (unsigned char i_10 = 0; i_10 < 20; i_10 += 4) 
                {
                    for (unsigned char i_11 = 3; i_11 < 19; i_11 += 1) 
                    {
                        {
                            var_29 |= min((((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)236))))) ? (((((/* implicit */long long int) 1655632103)) - (var_0))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned char)36)) : (((/* implicit */int) (unsigned char)183))))))), (((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)19)) > (((/* implicit */int) arr_18 [i_7] [i_7])))))) == (var_11)))));
                            var_30 |= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(arr_27 [(unsigned char)18] [i_8] [i_9] [17U] [i_11])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_0))))) : (((int) var_1))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_7]))) : (-1296891535793677293LL)));
                            var_31 &= ((/* implicit */int) (-((+(arr_27 [i_7] [i_10] [i_9] [i_11 - 2] [i_11 + 1])))));
                        }
                    } 
                } 
                var_32 = ((/* implicit */int) max((var_32), (((/* implicit */int) ((unsigned char) var_3)))));
                arr_32 [i_7] [i_8] [i_9] [12U] = ((/* implicit */unsigned char) ((((/* implicit */int) min((arr_18 [i_8] [i_9]), (var_2)))) / (var_3)));
            }
            for (unsigned int i_12 = 2; i_12 < 17; i_12 += 3) 
            {
                arr_35 [i_7] = ((/* implicit */unsigned int) ((long long int) (+(((-10436356372208081LL) / (((/* implicit */long long int) var_10)))))));
                var_33 -= ((/* implicit */unsigned char) ((((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)253))))) * (((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_29 [i_7] [i_8] [i_7] [i_7] [i_8])))) * (((((/* implicit */long long int) 2728472181U)) / (var_6)))))));
                arr_36 [i_7] [10U] [i_8] [i_8] = ((((((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (arr_25 [i_7] [i_8] [i_12 + 1]) : (((/* implicit */int) (unsigned char)0))))) <= (var_7))) ? (((((/* implicit */_Bool) ((long long int) var_3))) ? (((var_7) ^ (((/* implicit */long long int) var_12)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 9079191037155287116LL)) ? (var_5) : (var_5)))))) : (((((/* implicit */_Bool) max((4064649761U), (((/* implicit */unsigned int) -769558324))))) ? (((((/* implicit */_Bool) 1655632103)) ? (var_0) : (((/* implicit */long long int) 1009006457)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_21 [i_12 - 2])) ? (var_4) : (arr_29 [i_7] [i_7] [i_8] [(unsigned char)12] [i_7])))))));
            }
        }
        for (unsigned int i_13 = 3; i_13 < 19; i_13 += 4) 
        {
            var_34 = ((/* implicit */int) max((var_34), (((/* implicit */int) max((((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)15))) / (7957895839699028590LL)))) ? (((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)87))))) : (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)225))) ^ (var_0))))), (((((/* implicit */long long int) ((unsigned int) arr_23 [i_7] [i_13] [i_13]))) | (((((/* implicit */_Bool) (unsigned char)149)) ? (-8714263144273207724LL) : (((/* implicit */long long int) 4293087646U)))))))))));
            arr_39 [(unsigned char)6] |= ((/* implicit */long long int) -1655632103);
            arr_40 [2] [10U] &= ((/* implicit */unsigned int) ((long long int) 397499614));
        }
        /* LoopNest 2 */
        for (unsigned char i_14 = 0; i_14 < 20; i_14 += 1) 
        {
            for (long long int i_15 = 3; i_15 < 19; i_15 += 1) 
            {
                {
                    var_35 += ((/* implicit */int) var_8);
                    /* LoopNest 2 */
                    for (unsigned int i_16 = 0; i_16 < 20; i_16 += 4) 
                    {
                        for (unsigned char i_17 = 0; i_17 < 20; i_17 += 1) 
                        {
                            {
                                var_36 = ((/* implicit */unsigned char) max((var_36), (((/* implicit */unsigned char) (~(((3805020911U) ^ (((unsigned int) 383941347126355345LL)))))))));
                                var_37 += ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((-6828071445939283090LL), (((/* implicit */long long int) (unsigned char)135))))) ? (((((/* implicit */int) (unsigned char)160)) - (-285294230))) : (((/* implicit */int) ((((/* implicit */int) arr_45 [19])) < (-665874555)))))))));
                            }
                        } 
                    } 
                    var_38 = ((/* implicit */int) max((var_38), (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned char) (!(((/* implicit */_Bool) var_10)))))))))));
                }
            } 
        } 
    }
}
