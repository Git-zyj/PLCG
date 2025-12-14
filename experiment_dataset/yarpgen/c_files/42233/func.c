/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42233
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42233 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42233
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned long long int i_0 = 3; i_0 < 21; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 3; i_1 < 19; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 20; i_2 += 1) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 4) 
                {
                    {
                        var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) var_12))));
                        var_18 = ((/* implicit */unsigned short) ((((unsigned int) var_0)) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)53)))));
                    }
                } 
            } 
        } 
        var_19 = ((/* implicit */unsigned int) ((16599037804470790408ULL) / (((unsigned long long int) (unsigned short)41555))));
        var_20 -= ((/* implicit */unsigned short) var_0);
    }
    for (unsigned int i_4 = 0; i_4 < 25; i_4 += 1) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) ((((unsigned int) ((((/* implicit */unsigned long long int) -5357591453503517233LL)) / (12171697027486615547ULL)))) + (min((arr_12 [i_4]), (3584262634U))))))));
        arr_13 [i_4] = min((var_4), (((/* implicit */unsigned char) ((max((5850487733256314522ULL), (((/* implicit */unsigned long long int) 1776951191U)))) <= (((18446744073709551614ULL) << (((arr_11 [i_4]) - (3028850491848274775ULL)))))))));
    }
    for (unsigned int i_5 = 0; i_5 < 25; i_5 += 1) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_6 = 1; i_6 < 24; i_6 += 4) 
        {
            var_22 &= ((/* implicit */unsigned short) (unsigned char)6);
            var_23 = ((/* implicit */unsigned char) 3365487742U);
        }
        for (unsigned long long int i_7 = 0; i_7 < 25; i_7 += 4) 
        {
            /* LoopSeq 2 */
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                /* LoopSeq 4 */
                /* vectorizable */
                for (unsigned long long int i_9 = 1; i_9 < 24; i_9 += 4) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_10 = 0; i_10 < 25; i_10 += 4) 
                    {
                        var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) arr_19 [i_10] [i_5]))));
                        var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) : (((/* implicit */int) var_16))));
                        var_26 -= ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)96)) ^ (((/* implicit */int) arr_28 [i_10] [i_7] [i_9] [i_9] [i_9 - 1] [i_9]))));
                        arr_31 [i_5] [i_5] [i_5] [i_9] [i_10] = ((arr_19 [i_5] [i_5]) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) 3ULL)))));
                        arr_32 [i_5] [i_9] [i_8] [18ULL] [i_5] = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) (unsigned short)59130)))) ? (((/* implicit */int) (unsigned short)65524)) : (((((/* implicit */int) var_4)) - (((/* implicit */int) (_Bool)1))))));
                    }
                    var_27 = (unsigned char)76;
                }
                for (unsigned long long int i_11 = 1; i_11 < 24; i_11 += 4) /* same iter space */
                {
                    var_28 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)1))))) / (max((((/* implicit */unsigned long long int) ((long long int) (unsigned char)169))), (((((/* implicit */_Bool) 4294967295U)) ? (arr_16 [i_5] [i_5]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)5)))))))));
                    var_29 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((((/* implicit */int) var_6)) / (((/* implicit */int) var_14)))) * (((/* implicit */int) (unsigned char)189))))) ? (max((var_0), (((/* implicit */unsigned long long int) var_6)))) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */int) (unsigned short)13097)) * (((/* implicit */int) (_Bool)1))))), (arr_34 [i_11] [1ULL] [i_8] [i_11 + 1] [i_8]))))));
                }
                for (unsigned long long int i_12 = 1; i_12 < 24; i_12 += 4) /* same iter space */
                {
                    arr_39 [i_5] [(unsigned char)23] [i_7] [(unsigned char)23] [i_8] [i_5] = ((/* implicit */unsigned long long int) (unsigned char)255);
                    var_30 = ((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) (unsigned char)64)) && (((/* implicit */_Bool) max((9318745353237885105ULL), (var_0)))))));
                }
                for (unsigned long long int i_13 = 1; i_13 < 24; i_13 += 4) /* same iter space */
                {
                    var_31 += ((long long int) ((((/* implicit */int) var_6)) > (((/* implicit */int) (unsigned short)13929))));
                    var_32 = ((/* implicit */unsigned long long int) min((var_32), (((/* implicit */unsigned long long int) ((unsigned char) ((long long int) var_11))))));
                    arr_43 [i_5] [i_5] [i_5] [i_5] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)88)), (arr_36 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5]))))));
                }
                arr_44 [i_5] = ((/* implicit */unsigned long long int) (unsigned char)7);
                var_33 = ((/* implicit */unsigned char) var_2);
            }
            /* vectorizable */
            for (unsigned int i_14 = 0; i_14 < 25; i_14 += 2) 
            {
                var_34 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) (unsigned short)58705))));
                var_35 = (-(arr_45 [i_7] [i_5] [18LL]));
                var_36 = ((/* implicit */unsigned short) var_3);
                var_37 -= ((/* implicit */unsigned long long int) arr_34 [i_5] [i_5] [i_5] [i_7] [i_14]);
            }
            var_38 = ((/* implicit */unsigned char) (~((-(12ULL)))));
            var_39 = ((/* implicit */unsigned long long int) ((unsigned short) ((((18120636706112970139ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))) ? (((/* implicit */int) (unsigned short)24852)) : (((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)61590)))))));
        }
        var_40 += ((/* implicit */unsigned int) ((unsigned long long int) 18161543220653030272ULL));
        /* LoopSeq 3 */
        /* vectorizable */
        for (_Bool i_15 = 1; i_15 < 1; i_15 += 1) 
        {
            var_41 = ((/* implicit */unsigned short) ((((unsigned long long int) 2305843009213693951LL)) < (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0)))));
            /* LoopNest 3 */
            for (unsigned long long int i_16 = 0; i_16 < 25; i_16 += 2) 
            {
                for (unsigned int i_17 = 3; i_17 < 22; i_17 += 4) 
                {
                    for (long long int i_18 = 0; i_18 < 25; i_18 += 1) 
                    {
                        {
                            var_42 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned short) var_11))) << (((((/* implicit */int) var_14)) - (50006)))));
                            var_43 = ((/* implicit */unsigned int) arr_28 [i_5] [i_5] [i_5] [i_5] [i_17] [i_17]);
                        }
                    } 
                } 
            } 
            var_44 = ((((/* implicit */_Bool) ((long long int) (unsigned short)25810))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)27))) : (var_0));
            var_45 = 422283773545007660ULL;
        }
        for (long long int i_19 = 0; i_19 < 25; i_19 += 2) 
        {
            var_46 = ((/* implicit */unsigned int) (!(((((/* implicit */unsigned int) ((/* implicit */int) var_4))) == (min((((/* implicit */unsigned int) (unsigned short)32768)), (251269033U)))))));
            var_47 = ((/* implicit */unsigned char) (!(((((((/* implicit */_Bool) -8479602217182744988LL)) || (((/* implicit */_Bool) (unsigned short)0)))) && (((/* implicit */_Bool) var_10))))));
            var_48 -= ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((unsigned short) 7758278814952929258ULL)))));
            var_49 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) (unsigned char)80)) ? (10261210621092733896ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (unsigned short)65516)))) != (var_9)))) : (((/* implicit */int) (unsigned short)10406))));
        }
        for (long long int i_20 = 0; i_20 < 25; i_20 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned short i_21 = 0; i_21 < 25; i_21 += 2) 
            {
                for (unsigned long long int i_22 = 0; i_22 < 25; i_22 += 2) 
                {
                    {
                        var_50 ^= ((/* implicit */_Bool) max((arr_15 [i_22]), (((/* implicit */unsigned int) (unsigned short)65535))));
                        var_51 &= ((/* implicit */unsigned short) ((unsigned long long int) 18446744073709551608ULL));
                    }
                } 
            } 
            var_52 = ((/* implicit */long long int) min((((unsigned long long int) (unsigned char)27)), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned short) (unsigned char)255))) > (((/* implicit */int) var_3)))))));
        }
        arr_72 [i_5] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)30680))) | (-5978922010837540911LL)));
        arr_73 [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((unsigned int) 4U)), (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)48453)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_47 [i_5] [i_5] [i_5]))) : (arr_70 [i_5] [12ULL] [(unsigned char)15] [i_5])));
    }
    for (unsigned int i_23 = 0; i_23 < 25; i_23 += 1) /* same iter space */
    {
        arr_76 [i_23] = ((/* implicit */unsigned int) ((unsigned short) min((((/* implicit */unsigned long long int) var_2)), (((((/* implicit */_Bool) 11458300866067373952ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (6ULL))))));
        var_53 = ((/* implicit */unsigned char) var_14);
    }
    var_54 = ((/* implicit */unsigned short) var_16);
    var_55 = ((/* implicit */unsigned long long int) var_12);
}
