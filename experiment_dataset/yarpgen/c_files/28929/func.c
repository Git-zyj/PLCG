/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28929
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28929 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28929
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
    var_20 &= ((/* implicit */signed char) 8001253861803217729ULL);
    /* LoopSeq 4 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_21 = ((/* implicit */signed char) var_16);
        arr_2 [2ULL] [i_0] = ((/* implicit */signed char) ((unsigned short) (signed char)127));
        var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) (+(230890462558584164LL)))) : (((((/* implicit */_Bool) (signed char)-122)) ? (((/* implicit */unsigned long long int) -230890462558584164LL)) : (arr_0 [i_0])))));
    }
    for (unsigned int i_1 = 3; i_1 < 19; i_1 += 1) 
    {
        arr_5 [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-110))) : (2616562575575406122LL)))) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) ((unsigned short) (signed char)123)))));
        var_23 = ((/* implicit */_Bool) var_6);
        arr_6 [(short)8] &= ((/* implicit */signed char) ((((((int) (~(arr_0 [i_1])))) + (2147483647))) << (((((/* implicit */int) ((short) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)115))) ^ (1U))))) - (114)))));
        arr_7 [i_1] = ((/* implicit */long long int) ((((_Bool) arr_0 [i_1 + 1])) ? (((/* implicit */unsigned long long int) ((long long int) arr_0 [i_1 - 3]))) : ((-(arr_0 [i_1 - 3])))));
    }
    /* vectorizable */
    for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 1) 
    {
        arr_11 [i_2] = ((/* implicit */unsigned long long int) (~(-1944118247129020172LL)));
        /* LoopNest 2 */
        for (short i_3 = 0; i_3 < 25; i_3 += 2) 
        {
            for (unsigned short i_4 = 0; i_4 < 25; i_4 += 2) 
            {
                {
                    var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) (~(arr_13 [i_3] [i_3] [i_4]))))));
                    var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-120)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)64304))) : (arr_10 [i_2] [i_3])));
                }
            } 
        } 
        /* LoopNest 3 */
        for (int i_5 = 1; i_5 < 24; i_5 += 1) 
        {
            for (int i_6 = 0; i_6 < 25; i_6 += 1) 
            {
                for (unsigned int i_7 = 0; i_7 < 25; i_7 += 1) 
                {
                    {
                        arr_25 [5ULL] [i_5] [i_6] [i_7] [i_2] [i_5] = ((305831791331549617ULL) * (((/* implicit */unsigned long long int) arr_10 [i_5 + 1] [i_5 - 1])));
                        var_26 = ((/* implicit */long long int) arr_22 [i_2] [i_5]);
                        var_27 ^= ((/* implicit */unsigned char) (-(arr_12 [i_5 + 1] [i_5 + 1] [i_6])));
                        var_28 *= ((/* implicit */unsigned int) (~(arr_15 [i_2] [i_2] [i_5 + 1])));
                    }
                } 
            } 
        } 
        arr_26 [(unsigned char)2] = ((/* implicit */int) ((signed char) ((unsigned long long int) arr_23 [i_2] [(short)12] [18U] [(short)12] [(signed char)18])));
        /* LoopSeq 3 */
        for (unsigned long long int i_8 = 0; i_8 < 25; i_8 += 4) 
        {
            var_29 = ((/* implicit */_Bool) (signed char)119);
            var_30 -= ((/* implicit */short) (~(((/* implicit */int) ((short) arr_13 [(unsigned short)10] [i_8] [(short)17])))));
        }
        for (long long int i_9 = 2; i_9 < 23; i_9 += 1) 
        {
            arr_34 [i_9] = ((_Bool) arr_10 [i_2] [i_9]);
            arr_35 [i_2] [i_9] = ((/* implicit */unsigned int) ((int) arr_14 [i_9 + 2] [i_9 + 1] [i_9 - 1]));
            /* LoopNest 2 */
            for (unsigned long long int i_10 = 0; i_10 < 25; i_10 += 4) 
            {
                for (short i_11 = 0; i_11 < 25; i_11 += 4) 
                {
                    {
                        var_31 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(7567263282688005768ULL)))) ? (((/* implicit */int) arr_38 [i_2] [i_11])) : (((int) (signed char)-96))));
                        var_32 = ((/* implicit */long long int) (~(((/* implicit */int) arr_39 [i_9 - 2] [i_9 - 1] [i_9 - 1] [i_9] [i_9 + 1]))));
                    }
                } 
            } 
        }
        for (unsigned long long int i_12 = 0; i_12 < 25; i_12 += 1) 
        {
            var_33 = ((/* implicit */signed char) ((arr_12 [i_2] [i_12] [i_12]) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_2])))));
            var_34 *= ((/* implicit */unsigned long long int) arr_18 [i_2] [i_2] [0U]);
            arr_43 [i_2] [i_12] = ((/* implicit */unsigned long long int) arr_17 [i_12] [i_12]);
            var_35 = ((/* implicit */short) var_5);
            arr_44 [i_12] = ((/* implicit */unsigned int) var_5);
        }
    }
    /* vectorizable */
    for (short i_13 = 0; i_13 < 21; i_13 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_14 = 0; i_14 < 21; i_14 += 3) /* same iter space */
        {
            arr_52 [i_14] = ((/* implicit */long long int) (signed char)-110);
            arr_53 [i_13] [i_14] = (+(((/* implicit */int) var_16)));
            /* LoopSeq 2 */
            for (unsigned short i_15 = 0; i_15 < 21; i_15 += 3) 
            {
                arr_57 [i_14] [i_14] [i_14] [i_15] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((signed char) (_Bool)0)))));
                var_36 = ((/* implicit */unsigned int) (~(var_18)));
                var_37 = ((/* implicit */short) ((unsigned char) 10879480791021545848ULL));
                var_38 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((short) (unsigned short)43527)))) / (8647519995744049201LL)));
            }
            for (signed char i_16 = 0; i_16 < 21; i_16 += 3) 
            {
                /* LoopNest 2 */
                for (long long int i_17 = 0; i_17 < 21; i_17 += 1) 
                {
                    for (long long int i_18 = 0; i_18 < 21; i_18 += 3) 
                    {
                        {
                            arr_66 [i_13] [i_14] = ((/* implicit */unsigned int) ((unsigned long long int) ((short) 4294967295U)));
                            arr_67 [i_14] = ((/* implicit */long long int) (~((-(((/* implicit */int) (signed char)24))))));
                            arr_68 [i_13] [i_14] [i_13] [i_14] [i_17] [i_18] [i_18] = ((/* implicit */unsigned char) ((var_19) ? (var_12) : (((/* implicit */unsigned long long int) (-(1073479680LL))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (short i_19 = 2; i_19 < 19; i_19 += 3) 
                {
                    for (long long int i_20 = 2; i_20 < 19; i_20 += 4) 
                    {
                        {
                            arr_73 [i_19] [i_14] [i_16] [i_19] [i_20] = ((/* implicit */_Bool) (unsigned char)30);
                            var_39 = ((/* implicit */long long int) max((var_39), (((/* implicit */long long int) ((((((/* implicit */_Bool) arr_23 [0] [i_20] [i_16] [i_20] [0])) ? (((/* implicit */long long int) 3787252149U)) : (arr_30 [0LL]))) <= (((/* implicit */long long int) ((/* implicit */int) arr_8 [24LL]))))))));
                        }
                    } 
                } 
                var_40 = ((/* implicit */long long int) min((var_40), (((/* implicit */long long int) ((unsigned int) ((short) 3485125107184202375LL))))));
                var_41 = ((/* implicit */unsigned long long int) arr_14 [i_16] [i_14] [i_16]);
                var_42 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)48)) ? ((~(((/* implicit */int) arr_65 [i_13] [8ULL] [i_14] [5LL] [(unsigned char)12] [i_16])))) : ((+(((/* implicit */int) (unsigned short)21113))))));
            }
            var_43 = ((/* implicit */signed char) ((short) arr_19 [i_14] [i_13]));
            var_44 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((short) arr_70 [i_13] [i_14] [i_14] [i_13] [i_14] [i_14]))) ? (arr_17 [(_Bool)0] [i_14]) : (((/* implicit */int) (_Bool)1))));
        }
        for (unsigned char i_21 = 0; i_21 < 21; i_21 += 3) /* same iter space */
        {
            var_45 = ((arr_19 [(signed char)14] [i_21]) * (arr_70 [i_13] [i_13] [i_21] [i_13] [i_21] [i_13]));
            /* LoopNest 2 */
            for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
            {
                for (int i_23 = 0; i_23 < 21; i_23 += 4) 
                {
                    {
                        var_46 = ((/* implicit */short) (~(arr_74 [i_21])));
                        arr_83 [i_13] [i_23] [16LL] [16LL] [i_23] = ((((/* implicit */_Bool) (short)-5106)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))));
                        var_47 = (-(-4914295518420178854LL));
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
            {
                var_48 = ((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_24])) ? (((/* implicit */int) arr_1 [i_13])) : (((/* implicit */int) arr_1 [i_13]))));
                var_49 = ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65425))));
                arr_87 [i_13] [i_21] [i_24] = ((/* implicit */_Bool) (unsigned char)121);
            }
        }
        var_50 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */long long int) ((/* implicit */int) arr_79 [i_13] [i_13] [i_13]))) : (arr_30 [i_13])));
        var_51 *= ((/* implicit */int) (!(((/* implicit */_Bool) arr_84 [i_13] [i_13] [i_13]))));
        /* LoopNest 2 */
        for (unsigned long long int i_25 = 2; i_25 < 20; i_25 += 2) 
        {
            for (unsigned long long int i_26 = 2; i_26 < 20; i_26 += 1) 
            {
                {
                    arr_92 [i_13] [i_26] = ((/* implicit */signed char) ((((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)-1))))) % ((+(1248751696U)))));
                    arr_93 [i_13] [i_26] [(_Bool)1] [i_26] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_20 [i_13] [i_25] [i_26]))))) ? (((((/* implicit */_Bool) arr_74 [i_13])) ? (((/* implicit */long long int) 1737604194)) : (338996834155349109LL))) : (((/* implicit */long long int) (+(((/* implicit */int) var_15)))))));
                    var_52 = ((/* implicit */long long int) -1170217307);
                    var_53 = ((/* implicit */unsigned int) ((long long int) (-(((/* implicit */int) (unsigned char)117)))));
                    var_54 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)25389)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (unsigned char)2))))) ? (1801807524491861863ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_1))))));
                }
            } 
        } 
        arr_94 [i_13] = ((/* implicit */unsigned int) arr_80 [19]);
    }
    var_55 = ((unsigned long long int) var_14);
    var_56 = ((((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_4)), (var_17)))) && (((_Bool) var_14)))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)224)) ? (((/* implicit */int) var_16)) : (2147483647)))) ? (1801807524491861853ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))));
}
