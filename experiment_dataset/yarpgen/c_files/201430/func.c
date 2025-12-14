/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201430
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201430 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201430
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
    var_15 = ((/* implicit */unsigned char) var_1);
    var_16 = ((/* implicit */unsigned short) (~((+(((/* implicit */int) var_3))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (short i_0 = 1; i_0 < 21; i_0 += 3) 
    {
        var_17 = ((unsigned short) var_2);
        arr_2 [i_0] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)0))));
        var_18 -= ((/* implicit */unsigned long long int) (!(((var_12) <= (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))));
    }
    for (unsigned char i_1 = 1; i_1 < 22; i_1 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        for (signed char i_2 = 1; i_2 < 21; i_2 += 3) 
        {
            var_19 -= ((/* implicit */unsigned int) (unsigned char)136);
            /* LoopSeq 1 */
            for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 3) 
            {
                var_20 -= ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned short)16256))));
                /* LoopNest 2 */
                for (unsigned short i_4 = 0; i_4 < 24; i_4 += 3) 
                {
                    for (unsigned short i_5 = 1; i_5 < 22; i_5 += 1) 
                    {
                        {
                            var_21 = ((/* implicit */signed char) max((((/* implicit */unsigned char) (signed char)72)), ((unsigned char)120)));
                            var_22 &= ((/* implicit */unsigned short) min((((/* implicit */unsigned char) arr_15 [i_1] [i_1])), ((unsigned char)136)));
                        }
                    } 
                } 
            }
        }
        var_23 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)57)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_1]))) | ((-(var_7)))))));
    }
    for (unsigned char i_6 = 1; i_6 < 22; i_6 += 4) /* same iter space */
    {
        arr_19 [i_6 + 2] = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_0 [(unsigned short)1] [(unsigned char)0]))));
        var_24 = ((/* implicit */signed char) ((((/* implicit */unsigned int) (-((-(((/* implicit */int) (short)23579))))))) == ((((~(3383220126U))) + (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)199)) ? (((/* implicit */int) (unsigned char)136)) : (((/* implicit */int) (unsigned char)135)))))))));
        var_25 *= ((/* implicit */signed char) (unsigned char)135);
        var_26 = ((/* implicit */unsigned int) ((max(((!(((/* implicit */_Bool) 1403321475549809698ULL)))), ((!(((/* implicit */_Bool) 3112528758U)))))) && (min(((!(((/* implicit */_Bool) 911747161U)))), (((((/* implicit */_Bool) (unsigned char)136)) || (((/* implicit */_Bool) (unsigned short)6278))))))));
    }
    /* LoopNest 2 */
    for (long long int i_7 = 4; i_7 < 16; i_7 += 3) 
    {
        for (signed char i_8 = 0; i_8 < 19; i_8 += 1) 
        {
            {
                var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(1075046355U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (max((((/* implicit */unsigned int) ((((/* implicit */int) arr_15 [i_7] [i_8])) <= (((/* implicit */int) var_8))))), (min((((/* implicit */unsigned int) arr_5 [i_7])), (var_0)))))));
                arr_25 [i_7] = ((/* implicit */unsigned short) (~(var_5)));
                /* LoopSeq 4 */
                for (signed char i_9 = 1; i_9 < 17; i_9 += 3) 
                {
                    /* LoopNest 2 */
                    for (signed char i_10 = 1; i_10 < 18; i_10 += 1) 
                    {
                        for (unsigned char i_11 = 3; i_11 < 17; i_11 += 1) 
                        {
                            {
                                var_28 = ((/* implicit */unsigned short) max(((unsigned char)199), (((/* implicit */unsigned char) (signed char)126))));
                                arr_33 [i_7] [i_7] [i_7] [i_8] [i_8] [i_10 + 1] [i_11 - 2] = ((/* implicit */unsigned int) var_3);
                                arr_34 [i_7] = ((/* implicit */unsigned char) (+(((/* implicit */int) var_9))));
                                arr_35 [i_7] [i_7] [i_9 - 1] [i_10 + 1] [i_11 - 1] = ((/* implicit */unsigned short) var_11);
                            }
                        } 
                    } 
                    var_29 += ((/* implicit */signed char) (!(((((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)-34))))) >= (911747170U)))));
                    arr_36 [i_7] [i_8] [i_7] [i_7] = ((/* implicit */unsigned short) (unsigned char)130);
                }
                for (unsigned short i_12 = 0; i_12 < 19; i_12 += 2) 
                {
                    var_30 = ((/* implicit */signed char) (short)-14064);
                    var_31 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */int) ((unsigned short) 4398046511104ULL))) >> (((((/* implicit */int) max((arr_16 [i_7] [i_8] [i_8] [i_12] [i_12]), ((unsigned char)56)))) - (86))))))));
                    var_32 = ((/* implicit */signed char) -1LL);
                }
                for (unsigned int i_13 = 0; i_13 < 19; i_13 += 4) 
                {
                    var_33 = ((/* implicit */long long int) min((((((((((/* implicit */_Bool) (unsigned char)4)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_0 [i_7] [i_13])))) + (2147483647))) << (((((/* implicit */int) (unsigned char)173)) - (173))))), (((/* implicit */int) var_6))));
                    /* LoopSeq 1 */
                    for (short i_14 = 0; i_14 < 19; i_14 += 3) 
                    {
                        arr_45 [i_7] [i_8] [i_7] [i_13] &= ((/* implicit */unsigned short) (+((-((~(((/* implicit */int) (unsigned short)65530))))))));
                        var_34 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((signed char) (short)-1)))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (short i_15 = 0; i_15 < 19; i_15 += 3) /* same iter space */
                        {
                            var_35 = ((/* implicit */unsigned long long int) min((var_35), (((/* implicit */unsigned long long int) var_3))));
                            arr_49 [i_7 - 1] [i_7] [i_7 + 2] [i_7] [i_7] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned char)83))));
                            var_36 = ((/* implicit */unsigned short) max((var_36), (((/* implicit */unsigned short) (signed char)105))));
                        }
                        /* vectorizable */
                        for (short i_16 = 0; i_16 < 19; i_16 += 3) /* same iter space */
                        {
                            var_37 = ((/* implicit */long long int) var_4);
                            var_38 += ((/* implicit */signed char) ((unsigned int) (unsigned char)165));
                            var_39 = ((/* implicit */signed char) var_3);
                        }
                        arr_52 [i_7] [i_8] [i_13] [i_14] [i_14] = ((/* implicit */unsigned int) (unsigned char)78);
                    }
                }
                for (unsigned long long int i_17 = 1; i_17 < 15; i_17 += 3) 
                {
                    arr_55 [i_7] [i_7] [i_7] = ((/* implicit */signed char) min((911747173U), (((/* implicit */unsigned int) var_9))));
                    var_40 = ((/* implicit */unsigned long long int) var_12);
                    var_41 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_48 [i_7] [i_7] [i_7] [i_8] [i_8])) ? (((/* implicit */long long int) ((/* implicit */int) arr_37 [i_7 + 1] [i_8] [i_8] [i_7]))) : (4375293790717319577LL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */short) (signed char)28)), ((short)13043))))) : (var_12)));
                }
                arr_56 [i_7] [i_8] = ((/* implicit */signed char) (+(max((312824778U), (((/* implicit */unsigned int) min(((unsigned char)255), ((unsigned char)141))))))));
            }
        } 
    } 
    var_42 = ((/* implicit */unsigned char) (~(((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)1))) ^ (var_12)))));
}
