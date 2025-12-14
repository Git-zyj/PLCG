/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227741
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227741 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227741
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (signed char i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            /* LoopSeq 3 */
            for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                var_11 = ((((/* implicit */_Bool) arr_9 [i_2] [i_1] [i_2] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [i_1] [i_1] [i_0]))) : (405014608170593372ULL));
                arr_12 [(unsigned short)22] [i_1] [i_2] [i_0] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_6 [i_0])) : (((/* implicit */int) arr_6 [i_0]))))));
            }
            for (long long int i_3 = 0; i_3 < 24; i_3 += 2) 
            {
                var_12 += ((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_3] [i_1])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_11 [i_0] [i_0] [i_0]))));
                var_13 = ((/* implicit */unsigned short) arr_10 [i_0] [i_0] [i_0]);
            }
            for (int i_4 = 0; i_4 < 24; i_4 += 3) 
            {
                arr_17 [i_0] [5ULL] [i_0] [i_0] = ((/* implicit */_Bool) 18041729465538958243ULL);
                arr_18 [i_0] [5] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */long long int) 114755201)) == (arr_1 [i_0])));
                var_14 = ((/* implicit */short) var_6);
                /* LoopNest 2 */
                for (unsigned int i_5 = 1; i_5 < 23; i_5 += 4) 
                {
                    for (long long int i_6 = 0; i_6 < 24; i_6 += 3) 
                    {
                        {
                            arr_23 [i_0] [i_0] [i_0] [i_4] = ((/* implicit */unsigned int) ((_Bool) arr_16 [i_0] [i_0] [i_5 - 1] [i_5 + 1]));
                            var_15 = ((/* implicit */unsigned char) (-(((((/* implicit */int) arr_11 [i_6] [16ULL] [17U])) - (((/* implicit */int) (unsigned short)42076))))));
                            arr_24 [(short)1] [i_1] [i_4] [i_0] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned long long int) var_5))) ? (((long long int) arr_10 [i_0] [i_1] [i_1])) : (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_1] [i_0] [1LL] [i_0])))));
                        }
                    } 
                } 
                /* LoopSeq 4 */
                for (short i_7 = 0; i_7 < 24; i_7 += 3) /* same iter space */
                {
                    var_16 += ((/* implicit */long long int) arr_10 [i_7] [i_0] [i_0]);
                    var_17 += ((/* implicit */unsigned long long int) (~(-114755206)));
                    arr_27 [i_7] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (-(arr_7 [i_0])));
                    arr_28 [i_0] [i_0] = ((/* implicit */int) var_5);
                    var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 405014608170593359ULL)) ? (arr_4 [i_0] [i_0]) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-1LL)))));
                }
                for (short i_8 = 0; i_8 < 24; i_8 += 3) /* same iter space */
                {
                    arr_32 [i_0] = ((/* implicit */unsigned long long int) var_6);
                    arr_33 [i_0] [i_4] = ((/* implicit */long long int) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_30 [i_8] [i_1] [i_8] [i_8]))) ^ (18041729465538958233ULL)))));
                    /* LoopSeq 2 */
                    for (short i_9 = 1; i_9 < 20; i_9 += 1) 
                    {
                        var_19 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((_Bool) var_4)))));
                        var_20 = ((((/* implicit */int) ((_Bool) 8508868671486144516LL))) ^ ((+(arr_16 [i_0] [i_0] [i_1] [i_8]))));
                        var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) var_1))));
                    }
                    for (unsigned short i_10 = 0; i_10 < 24; i_10 += 2) 
                    {
                        var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -6698167104029397534LL)) ? (((/* implicit */int) arr_10 [i_8] [i_1] [i_4])) : (((/* implicit */int) arr_10 [i_4] [i_1] [i_0]))));
                        arr_39 [i_0] [i_0] [i_1] [20LL] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_1] [i_1] [i_1])) ? (((/* implicit */int) arr_11 [i_0] [i_0] [i_0])) : (((/* implicit */int) var_2))));
                    }
                }
                for (int i_11 = 0; i_11 < 24; i_11 += 4) 
                {
                    var_23 += ((/* implicit */short) (-(-3895494207427110221LL)));
                    arr_43 [i_0] [i_0] [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) 2006957712U)) ? (6698167104029397539LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)237)))));
                    var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_8) + (((/* implicit */long long int) 114755201))))) ? ((+(18041729465538958249ULL))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_21 [i_0] [17LL] [i_0])))))));
                    var_25 = (unsigned short)3062;
                }
                for (short i_12 = 1; i_12 < 22; i_12 += 4) 
                {
                    arr_47 [i_0] [i_12 + 1] = ((/* implicit */signed char) ((((/* implicit */unsigned int) var_9)) + (var_6)));
                    arr_48 [i_0] [i_0] [i_4] [i_12] = ((/* implicit */_Bool) var_0);
                    arr_49 [i_0] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)0))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_38 [i_12] [i_1] [i_4] [i_1] [16] [21ULL]))) : (((((/* implicit */_Bool) var_9)) ? (18041729465538958257ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))));
                }
            }
            var_26 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_29 [i_0] [i_0])) - (((/* implicit */int) arr_29 [i_0] [i_0]))));
            var_27 = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (var_6))) ^ (((/* implicit */unsigned int) ((/* implicit */int) (signed char)96)))));
            /* LoopSeq 3 */
            for (int i_13 = 1; i_13 < 21; i_13 += 4) 
            {
                /* LoopNest 2 */
                for (signed char i_14 = 4; i_14 < 23; i_14 += 2) 
                {
                    for (unsigned char i_15 = 0; i_15 < 24; i_15 += 1) 
                    {
                        {
                            arr_58 [i_0] = ((((/* implicit */_Bool) (+(arr_26 [i_0] [i_1] [(unsigned char)22])))) ? (((/* implicit */int) arr_55 [i_15] [i_0] [i_13] [i_0] [i_0])) : (((/* implicit */int) arr_21 [i_0] [i_14 - 1] [i_0])));
                            var_28 = ((/* implicit */unsigned short) min((var_28), (((/* implicit */unsigned short) arr_46 [i_14] [i_1] [i_1] [i_1] [i_1] [(unsigned char)2]))));
                            arr_59 [i_15] [i_0] [i_13 - 1] [i_0] [i_0] = ((/* implicit */unsigned int) 17856156687355511859ULL);
                        }
                    } 
                } 
                var_29 += ((/* implicit */long long int) (-(var_1)));
                var_30 = ((((/* implicit */_Bool) (+(var_6)))) ? ((-(((/* implicit */int) arr_29 [i_0] [i_0])))) : ((-(((/* implicit */int) var_10)))));
            }
            for (short i_16 = 1; i_16 < 23; i_16 += 1) 
            {
                arr_62 [i_0] [i_1] [i_0] [i_16] = ((/* implicit */unsigned long long int) var_1);
                var_31 = ((/* implicit */_Bool) arr_56 [10ULL] [i_0] [(signed char)8]);
            }
            for (int i_17 = 0; i_17 < 24; i_17 += 3) 
            {
                var_32 = ((/* implicit */long long int) arr_31 [12] [i_1] [i_1] [i_1] [i_0]);
                arr_65 [i_0] [i_0] [i_0] [i_0] = (unsigned char)109;
                var_33 = ((/* implicit */unsigned long long int) 1890342835);
            }
            /* LoopNest 2 */
            for (long long int i_18 = 1; i_18 < 23; i_18 += 2) 
            {
                for (int i_19 = 3; i_19 < 22; i_19 += 4) 
                {
                    {
                        arr_72 [i_0] [i_1] [i_0] [i_18] [i_1] [i_19] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_29 [i_0] [i_0])))) || (((_Bool) arr_13 [i_1] [22U]))));
                        var_34 = ((/* implicit */long long int) (-(((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) - (16656147543063407696ULL)))));
                        arr_73 [i_0] [i_1] [5U] [i_19] = ((/* implicit */unsigned long long int) arr_19 [i_19 + 2] [i_0] [i_0] [i_18 - 1]);
                    }
                } 
            } 
        }
        for (unsigned char i_20 = 0; i_20 < 24; i_20 += 2) 
        {
            arr_76 [i_0] [i_0] [7] = ((/* implicit */unsigned char) arr_38 [i_0] [i_20] [i_0] [i_20] [i_20] [i_0]);
            var_35 += ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) var_9)) ? (arr_67 [i_20]) : (((/* implicit */int) arr_63 [i_0] [i_20] [i_0]))))));
        }
        var_36 += ((/* implicit */int) ((((/* implicit */int) arr_54 [i_0] [i_0])) < ((-(((/* implicit */int) arr_30 [i_0] [i_0] [i_0] [i_0]))))));
        /* LoopNest 3 */
        for (_Bool i_21 = 1; i_21 < 1; i_21 += 1) 
        {
            for (short i_22 = 0; i_22 < 24; i_22 += 3) 
            {
                for (long long int i_23 = 2; i_23 < 21; i_23 += 3) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_24 = 0; i_24 < 24; i_24 += 1) 
                        {
                            arr_88 [i_0] [i_21] [i_0] [i_0] = ((/* implicit */signed char) arr_64 [i_0] [i_22] [20ULL] [i_0]);
                            var_37 = ((/* implicit */unsigned short) arr_46 [i_0] [i_21 - 1] [(unsigned char)23] [i_23 + 1] [i_23 + 2] [i_21 - 1]);
                            var_38 = ((/* implicit */_Bool) ((long long int) ((var_0) / (((/* implicit */unsigned int) arr_67 [i_0])))));
                            var_39 += ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)13)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_75 [i_21 - 1] [i_23 + 1] [i_23]))) : (((((/* implicit */unsigned int) arr_86 [i_24] [20ULL] [20ULL] [(unsigned char)13] [(_Bool)1])) + (var_0)))));
                        }
                        var_40 = ((/* implicit */unsigned char) arr_40 [i_0] [i_21 - 1]);
                        var_41 = ((/* implicit */unsigned char) var_4);
                        var_42 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_11 [i_21 - 1] [i_21 - 1] [i_21 - 1])) ? (((((/* implicit */_Bool) arr_86 [i_0] [i_21] [(short)6] [i_23 + 2] [6U])) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (arr_68 [i_0] [i_21 - 1] [i_22]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_87 [i_0] [i_0])) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_0]))))))));
                        var_43 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_56 [i_0] [i_0] [i_21 - 1])) ? (((/* implicit */int) var_7)) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_31 [(_Bool)1] [(_Bool)1] [i_22] [i_22] [i_0])) : (((/* implicit */int) (unsigned char)19))))));
                    }
                } 
            } 
        } 
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_25 = 2; i_25 < 7; i_25 += 4) 
    {
        arr_91 [i_25] [i_25] = ((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_25])) || (((/* implicit */_Bool) (unsigned char)216)))))));
        /* LoopSeq 1 */
        for (unsigned char i_26 = 0; i_26 < 10; i_26 += 3) 
        {
            arr_94 [(signed char)4] [i_25] = ((/* implicit */long long int) 17856156687355511859ULL);
            var_44 += ((/* implicit */unsigned short) ((arr_40 [i_25] [i_25 + 1]) ? (((/* implicit */int) (unsigned char)182)) : (((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) arr_75 [i_25] [6LL] [7LL])))))));
        }
        var_45 = ((/* implicit */unsigned int) ((((((/* implicit */long long int) 2102951038U)) - (-13LL))) + (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
    }
}
