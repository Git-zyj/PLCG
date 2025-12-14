/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3542
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3542 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3542
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
    var_12 = ((/* implicit */short) max((var_12), (((/* implicit */short) ((long long int) ((((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (-7880396974902549569LL))) < (((/* implicit */long long int) ((/* implicit */int) var_10)))))))));
    var_13 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_2))));
    /* LoopNest 2 */
    for (long long int i_0 = 3; i_0 < 10; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned short i_2 = 0; i_2 < 12; i_2 += 2) 
                {
                    var_14 = ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (2711667739841521201ULL) : (((unsigned long long int) arr_3 [i_2]))));
                    var_15 = ((/* implicit */long long int) arr_3 [i_0 - 1]);
                    arr_6 [i_0] [i_2] [(signed char)6] = ((/* implicit */unsigned long long int) (+(arr_4 [i_2] [i_1] [i_0])));
                }
                for (unsigned char i_3 = 1; i_3 < 11; i_3 += 2) 
                {
                    arr_10 [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(arr_9 [i_3 - 1] [i_3 + 1] [i_3] [i_0 - 2])))) ? (((long long int) ((_Bool) -7880396974902549570LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_3 + 1])))));
                    arr_11 [11] [11] [i_1] [i_1] = ((/* implicit */_Bool) arr_9 [i_0 - 3] [i_1] [i_1] [i_3]);
                    arr_12 [i_0 - 1] [i_0 - 1] [i_1] [i_3] = ((/* implicit */long long int) ((signed char) (short)9837));
                }
                /* LoopSeq 2 */
                for (unsigned short i_4 = 1; i_4 < 11; i_4 += 2) 
                {
                    arr_15 [i_0 - 1] = ((/* implicit */unsigned char) ((int) ((3978946812311114406ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0 - 3] [i_4] [i_4 - 1]))))));
                    var_16 = ((/* implicit */short) ((((((((/* implicit */_Bool) 14467797261398437209ULL)) && (((/* implicit */_Bool) arr_2 [i_1] [i_0])))) ? (((/* implicit */unsigned long long int) arr_9 [i_4] [i_1] [i_4 + 1] [i_0])) : (((unsigned long long int) arr_13 [(short)3] [i_1] [i_4])))) >> (((/* implicit */int) ((((((/* implicit */_Bool) 10555968662257750578ULL)) ? (1649267441664ULL) : (3978946812311114406ULL))) < (((/* implicit */unsigned long long int) ((long long int) -7880396974902549588LL))))))));
                }
                /* vectorizable */
                for (long long int i_5 = 0; i_5 < 12; i_5 += 2) 
                {
                    arr_19 [i_0] = ((/* implicit */unsigned int) -7880396974902549569LL);
                    arr_20 [i_0] [i_5] = ((/* implicit */unsigned char) (((-(-7880396974902549585LL))) <= (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_0] [i_0] [i_5] [i_5])))));
                    arr_21 [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) (short)16609);
                    var_17 = ((/* implicit */short) ((((((/* implicit */_Bool) (short)-16607)) ? (((/* implicit */long long int) ((/* implicit */int) (short)16609))) : (-7880396974902549590LL))) >> ((((~(arr_9 [10LL] [i_1] [i_0 + 2] [i_1]))) + (1714342736)))));
                    arr_22 [i_5] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0 + 1] [i_1]))) >= (7880396974902549587LL)));
                }
                var_18 = (~(((((((/* implicit */int) (short)-4066)) + (((/* implicit */int) arr_5 [i_0] [i_0] [6ULL])))) + (((/* implicit */int) arr_18 [i_0] [i_0] [i_0] [i_0])))));
                arr_23 [i_1] = ((/* implicit */unsigned int) (+(((((arr_16 [i_0] [3LL] [i_1] [i_1]) != (((/* implicit */long long int) ((/* implicit */int) (short)16609))))) ? (((/* implicit */int) ((9223372036854775807LL) <= (((/* implicit */long long int) arr_9 [i_0] [7U] [i_0] [i_1]))))) : (((((/* implicit */int) (unsigned short)11161)) - (((/* implicit */int) (short)-16610))))))));
                var_19 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) arr_7 [i_0 + 1] [i_0 - 3])) >= (((/* implicit */int) arr_7 [i_0 - 3] [i_0 + 1]))))) > (((/* implicit */int) ((((((/* implicit */_Bool) arr_2 [i_1] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_1]))) : (10773574637845225016ULL))) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [(unsigned char)4] [i_1]))))))));
            }
        } 
    } 
    var_20 = ((/* implicit */short) ((long long int) ((((/* implicit */_Bool) ((var_6) ? (14467797261398437196ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)61557)))))) ? ((~(var_7))) : (((/* implicit */long long int) ((/* implicit */int) ((short) var_11)))))));
    /* LoopSeq 2 */
    for (long long int i_6 = 0; i_6 < 20; i_6 += 2) /* same iter space */
    {
        /* LoopSeq 1 */
        for (int i_7 = 0; i_7 < 20; i_7 += 2) 
        {
            arr_28 [i_7] = ((/* implicit */_Bool) (-(((/* implicit */int) (short)32763))));
            arr_29 [i_6] [i_7] = ((/* implicit */signed char) 14467797261398437203ULL);
            arr_30 [i_7] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_25 [i_6] [i_7]) << (((arr_27 [i_6] [i_7]) - (2258998658U)))))) ? (arr_27 [i_6] [i_7]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535)))));
            arr_31 [i_7] = ((/* implicit */signed char) (((~(arr_26 [i_6] [i_6] [i_7]))) % (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)47736))) - (((arr_26 [i_6] [i_6] [i_7]) / (((/* implicit */long long int) ((/* implicit */int) (short)-16610)))))))));
            arr_32 [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 7880396974902549588LL)) ? (10348021341747096652ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
        }
        arr_33 [0U] &= ((/* implicit */int) arr_26 [(short)18] [(short)18] [1]);
        arr_34 [i_6] = ((/* implicit */_Bool) (((~(8098722731962454944ULL))) / (((/* implicit */unsigned long long int) arr_24 [i_6] [i_6]))));
        var_21 = ((/* implicit */unsigned long long int) (unsigned short)63988);
        var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (~(arr_24 [i_6] [i_6])))) >= ((-(10348021341747096664ULL))))))));
    }
    for (long long int i_8 = 0; i_8 < 20; i_8 += 2) /* same iter space */
    {
        arr_39 [i_8] [i_8] = ((/* implicit */signed char) 169191979U);
        var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) (_Bool)1))));
        arr_40 [i_8] = ((/* implicit */unsigned short) (short)-16601);
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned int i_9 = 0; i_9 < 20; i_9 += 2) 
        {
            var_24 = ((/* implicit */_Bool) (-(10348021341747096665ULL)));
            /* LoopSeq 1 */
            for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
            {
                var_25 = ((/* implicit */long long int) min((var_25), (((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) < (arr_24 [i_10 - 1] [i_10 - 1]))))));
                arr_46 [(_Bool)1] [i_9] [i_9] [8LL] = ((/* implicit */unsigned long long int) 3221225472U);
            }
            var_26 = ((/* implicit */unsigned short) ((unsigned int) 2628672601U));
        }
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_12 = 1; i_12 < 19; i_12 += 2) 
            {
                for (unsigned long long int i_13 = 0; i_13 < 20; i_13 += 2) 
                {
                    {
                        arr_55 [i_8] [i_8] [i_12] [i_13] [i_11] = ((/* implicit */unsigned short) (~(((/* implicit */int) (short)27097))));
                        var_27 &= ((/* implicit */long long int) ((signed char) ((((/* implicit */long long int) arr_51 [i_11] [10U] [i_11])) - (((-7880396974902549605LL) % (-7880396974902549605LL))))));
                        var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) 7880396974902549596LL))) && (((arr_25 [i_8] [i_12]) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_53 [i_11])))))));
                    }
                } 
            } 
            var_29 = ((/* implicit */long long int) max((var_29), (((((/* implicit */long long int) ((/* implicit */int) ((16691822597511900362ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_37 [i_11]))))))) / (((((/* implicit */_Bool) ((short) (unsigned short)61541))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_50 [i_8] [i_8] [i_11] [i_11])) ? (2628672619U) : (arr_43 [i_8] [i_11] [i_11])))) : (arr_41 [i_8] [i_8] [i_11])))))));
            var_30 *= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)3961))) >= (arr_52 [i_8] [i_11])))))))));
            var_31 = ((/* implicit */unsigned short) ((_Bool) (-(((((/* implicit */_Bool) 16691822597511900343ULL)) ? (arr_48 [i_11] [i_11]) : (10348021341747096672ULL))))));
        }
        for (short i_14 = 0; i_14 < 20; i_14 += 2) 
        {
            arr_58 [i_8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)2)) ? (((unsigned int) ((((/* implicit */unsigned long long int) arr_24 [i_8] [5ULL])) * (arr_48 [i_14] [i_8])))) : (((/* implicit */unsigned int) ((/* implicit */int) ((2628672619U) < (((((/* implicit */_Bool) arr_52 [i_8] [i_8])) ? (arr_43 [i_8] [i_14] [i_14]) : (2628672612U)))))))));
            arr_59 [i_8] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 1696658433)) ? ((~(((/* implicit */int) ((((/* implicit */_Bool) 9223372036854775808ULL)) && (((/* implicit */_Bool) 1754921476197651253ULL))))))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_36 [i_14]))) < (arr_43 [6] [i_8] [i_14]))))) < ((+(arr_41 [i_8] [i_14] [i_14]))))))));
        }
    }
}
