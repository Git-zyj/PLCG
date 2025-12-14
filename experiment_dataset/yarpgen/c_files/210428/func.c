/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210428
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210428 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210428
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
    var_11 = ((/* implicit */unsigned int) max((var_11), (1038756296U)));
    var_12 += (-(((/* implicit */int) (!(((/* implicit */_Bool) min(((short)32767), ((short)-32765))))))));
    /* LoopSeq 1 */
    for (short i_0 = 3; i_0 < 22; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            var_13 -= ((/* implicit */_Bool) (~((((!(((/* implicit */_Bool) var_3)))) ? (arr_4 [i_0] [i_0] [i_0 + 2]) : (((/* implicit */unsigned int) (-(((/* implicit */int) (short)-1)))))))));
            var_14 = ((/* implicit */int) min((var_14), (((/* implicit */int) max((((arr_3 [i_0 + 1] [i_0 + 2] [i_0 + 1]) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)30))))), (((arr_3 [i_0 - 3] [i_0 - 3] [i_0 + 2]) >> (((var_6) - (567740696U))))))))));
            /* LoopSeq 3 */
            /* vectorizable */
            for (unsigned long long int i_2 = 1; i_2 < 23; i_2 += 1) /* same iter space */
            {
                arr_9 [i_0] = ((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_0 + 2])) << (((((/* implicit */int) arr_0 [i_2 + 1])) - (4837)))));
                /* LoopNest 2 */
                for (unsigned int i_3 = 0; i_3 < 24; i_3 += 3) 
                {
                    for (unsigned int i_4 = 0; i_4 < 24; i_4 += 3) 
                    {
                        {
                            var_15 = (i_0 % 2 == 0) ? (((/* implicit */unsigned short) ((((((/* implicit */int) (short)-32765)) + (2147483647))) >> (((((/* implicit */int) arr_16 [i_0] [i_0 - 1] [i_0 + 2] [i_2 + 1] [i_2 + 1])) - (53459)))))) : (((/* implicit */unsigned short) ((((((/* implicit */int) (short)-32765)) + (2147483647))) >> (((((((/* implicit */int) arr_16 [i_0] [i_0 - 1] [i_0 + 2] [i_2 + 1] [i_2 + 1])) - (53459))) + (22249))))));
                            var_16 = ((/* implicit */int) (short)30224);
                            var_17 = ((/* implicit */unsigned int) ((((/* implicit */int) ((_Bool) arr_4 [i_2] [i_2 - 1] [i_2 + 1]))) ^ (((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0])) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) arr_0 [i_2]))))));
                            arr_17 [i_4] [i_0] = ((/* implicit */int) (((((+(var_5))) + (9223372036854775807LL))) << (((var_6) / (var_9)))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_5 = 1; i_5 < 22; i_5 += 3) 
                {
                    for (unsigned int i_6 = 3; i_6 < 23; i_6 += 4) 
                    {
                        {
                            var_18 = ((/* implicit */short) ((unsigned short) arr_12 [i_2] [i_5] [i_6]));
                            var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) var_5))));
                        }
                    } 
                } 
                var_20 = ((/* implicit */int) var_9);
            }
            for (unsigned long long int i_7 = 1; i_7 < 23; i_7 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_8 = 1; i_8 < 22; i_8 += 3) 
                {
                    for (int i_9 = 0; i_9 < 24; i_9 += 4) 
                    {
                        {
                            var_21 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_27 [i_7 + 1] [i_1] [i_7] [i_0 - 3] [i_0]))) & (4294967295U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_27 [i_7 - 1] [i_9] [i_7] [i_0 + 1] [i_9])) > (((/* implicit */int) arr_27 [i_7 + 1] [1U] [i_7 - 1] [i_0 + 1] [(short)5])))))) : ((-(var_2)))));
                            arr_29 [i_8 - 1] [i_8 - 1] [i_8 - 1] [i_8 - 1] [i_0] [i_8 - 1] [(signed char)10] = ((/* implicit */short) ((((/* implicit */unsigned int) (+(((arr_13 [i_0] [i_8] [i_1] [i_0]) - (((/* implicit */int) var_4))))))) < (((((/* implicit */unsigned int) ((/* implicit */int) arr_10 [19ULL] [i_1] [(unsigned short)6] [i_0] [i_0] [i_9]))) + (max((((/* implicit */unsigned int) var_4)), (3405849118U)))))));
                        }
                    } 
                } 
                arr_30 [i_0 + 2] [i_1] [i_0] [6U] = (i_0 % 2 == zero) ? (((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_7] [i_1] [i_0]))))) << (((arr_6 [i_0] [i_1] [i_1]) - (1436324819U)))))) : (((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_7] [i_1] [i_0]))))) << (((((arr_6 [i_0] [i_1] [i_1]) - (1436324819U))) - (3827490883U))))));
                /* LoopSeq 3 */
                for (unsigned long long int i_10 = 4; i_10 < 22; i_10 += 1) 
                {
                    var_22 *= ((/* implicit */_Bool) var_8);
                    arr_33 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(((/* implicit */int) max((var_0), (var_8)))))))));
                    var_23 -= ((/* implicit */signed char) max((var_9), (((/* implicit */unsigned int) min((((unsigned short) (short)30224)), (((/* implicit */unsigned short) (short)-32765)))))));
                }
                for (int i_11 = 0; i_11 < 24; i_11 += 3) /* same iter space */
                {
                    var_24 ^= ((((/* implicit */_Bool) (signed char)99)) ? (((/* implicit */unsigned int) ((((/* implicit */int) max((((/* implicit */unsigned short) var_3)), (var_8)))) ^ (min((var_1), (((/* implicit */int) (unsigned short)10727))))))) : ((~(min((((/* implicit */unsigned int) var_7)), (193069673U))))));
                    /* LoopSeq 1 */
                    for (unsigned short i_12 = 1; i_12 < 23; i_12 += 3) 
                    {
                        var_25 = ((/* implicit */int) (_Bool)0);
                        var_26 = (~(((int) arr_40 [i_0] [i_0] [i_7 + 1] [i_11] [i_12 - 1])));
                    }
                }
                for (int i_13 = 0; i_13 < 24; i_13 += 3) /* same iter space */
                {
                    arr_43 [i_0] [i_1] [i_7] [i_13] = ((/* implicit */unsigned int) ((signed char) (((~(arr_1 [i_0]))) >> (((int) (unsigned char)30)))));
                    var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) ((int) var_5)))));
                    arr_44 [i_0] [i_7] [i_1] [i_1] [i_0] = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) (signed char)58)))) ? (((/* implicit */int) (short)-1)) : ((-(((((/* implicit */_Bool) arr_31 [6LL])) ? (arr_40 [i_0] [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */int) var_7))))))));
                }
                var_28 = ((/* implicit */int) var_3);
            }
            for (unsigned long long int i_14 = 1; i_14 < 23; i_14 += 1) /* same iter space */
            {
                var_29 = ((/* implicit */signed char) (-((~(((/* implicit */int) ((signed char) arr_12 [i_14] [i_14] [i_14])))))));
                var_30 = ((/* implicit */long long int) max((var_30), (((/* implicit */long long int) max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */int) (short)10569)) % (((/* implicit */int) arr_25 [i_0] [i_0] [i_0] [i_0 + 2]))))), (3405849118U)))), (1298132764532232918ULL))))));
                /* LoopSeq 1 */
                for (int i_15 = 0; i_15 < 24; i_15 += 1) 
                {
                    arr_50 [i_0 - 1] [i_0] [i_0] [i_0 - 3] [i_0] [i_0 - 2] = ((/* implicit */short) (signed char)57);
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned long long int i_16 = 0; i_16 < 24; i_16 += 1) 
                    {
                        var_31 = ((/* implicit */int) (!(((/* implicit */_Bool) ((int) arr_51 [i_0] [i_1] [17U] [i_14] [i_15] [i_15] [6LL])))));
                        arr_54 [i_0] [i_1] [i_0] [(unsigned char)9] [i_16] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_10 [i_1] [i_0 + 2] [i_14 - 1] [1LL] [i_0] [i_0 - 1])) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))));
                    }
                    for (int i_17 = 0; i_17 < 24; i_17 += 1) 
                    {
                        var_32 = ((/* implicit */unsigned int) max((var_32), (((/* implicit */unsigned int) min(((+(((((/* implicit */_Bool) var_1)) ? (arr_41 [i_0] [i_0]) : (((/* implicit */unsigned long long int) 3405849126U)))))), (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (arr_39 [i_17] [i_0 + 1] [i_14 - 1] [i_0 + 1] [i_0 + 1]))), (((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) > (3405849125U))))))))))));
                        arr_58 [i_0] [i_0] [i_15] [i_17] = (((((~(((/* implicit */int) arr_52 [i_0 + 2] [i_0 - 3] [i_0 - 2] [i_14 + 1] [i_0 - 3])))) + (2147483647))) >> (((((((((/* implicit */_Bool) arr_12 [i_1] [i_14] [i_17])) ? (((/* implicit */int) arr_8 [i_0 + 2] [i_1] [i_14 + 1])) : (arr_49 [i_0] [i_1] [i_14] [i_15] [i_17]))) - (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)12288)) || (((/* implicit */_Bool) var_9))))))) + (13156))));
                        arr_59 [i_0] [i_1] [i_14 + 1] [i_0] [i_0] [i_14 + 1] = ((/* implicit */unsigned char) var_7);
                    }
                }
                /* LoopSeq 2 */
                for (unsigned short i_18 = 2; i_18 < 20; i_18 += 1) /* same iter space */
                {
                    arr_62 [i_18 + 3] [i_0] [i_0] [i_0] = arr_34 [i_0] [i_0] [i_1] [i_14 + 1] [i_0];
                    /* LoopSeq 1 */
                    for (short i_19 = 0; i_19 < 24; i_19 += 3) 
                    {
                        var_33 = ((/* implicit */unsigned int) (signed char)-100);
                        var_34 = ((/* implicit */short) max((var_34), (((/* implicit */short) arr_6 [(_Bool)1] [i_18 - 1] [(_Bool)1]))));
                        var_35 = ((/* implicit */int) min((var_35), (((/* implicit */int) ((_Bool) ((((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)-100))))) ^ (max((((/* implicit */unsigned int) var_0)), (var_10)))))))));
                    }
                    arr_65 [i_0] [i_0] [i_0] [i_18] = ((/* implicit */unsigned short) (short)-7);
                }
                for (unsigned short i_20 = 2; i_20 < 20; i_20 += 1) /* same iter space */
                {
                    var_36 = ((/* implicit */short) max((var_36), (((/* implicit */short) arr_11 [i_20]))));
                    var_37 = ((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((int) arr_35 [i_0 - 3] [14ULL] [i_14] [i_20 + 2] [14ULL]))) ? (-1855538145) : (((/* implicit */int) (unsigned short)26381))))) ^ (min((((/* implicit */unsigned int) var_7)), (max((((/* implicit */unsigned int) arr_27 [i_0] [i_0 + 1] [(signed char)0] [i_0 + 1] [i_20])), (var_6)))))));
                    /* LoopSeq 2 */
                    for (unsigned int i_21 = 0; i_21 < 24; i_21 += 1) 
                    {
                        var_38 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) 7748285486526169401LL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-51))) : (var_5))))) && (((/* implicit */_Bool) max((((((/* implicit */_Bool) var_3)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) var_3))))), (((/* implicit */long long int) (~(((/* implicit */int) arr_12 [i_0 + 1] [i_1] [22U]))))))))));
                        var_39 = ((/* implicit */short) (~((~(((/* implicit */int) arr_15 [1] [i_1] [i_1] [i_1]))))));
                    }
                    /* vectorizable */
                    for (unsigned short i_22 = 0; i_22 < 24; i_22 += 1) 
                    {
                        arr_74 [i_0] [i_0] = ((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */_Bool) arr_26 [i_0])) && (((/* implicit */_Bool) arr_34 [i_20] [i_0] [15LL] [15LL] [0])))))));
                        arr_75 [i_0] [i_0] [i_14] [i_14] [i_0] [2U] = ((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_3)))))));
                        var_40 = ((((/* implicit */_Bool) arr_51 [9ULL] [9ULL] [i_14 - 1] [i_22] [i_22] [i_22] [i_22])) ? (((/* implicit */int) arr_51 [i_1] [i_1] [i_14 + 1] [i_1] [(signed char)4] [i_22] [i_22])) : (((/* implicit */int) arr_51 [i_0] [i_0] [i_14 - 1] [i_0] [i_14 - 1] [i_0] [i_0])));
                        var_41 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_28 [i_0 - 1] [i_14 - 1] [i_20 + 2] [i_20 - 2] [i_20 + 4])) - (((arr_56 [i_1]) ^ (((/* implicit */int) (signed char)58))))));
                        arr_76 [(unsigned char)9] [i_0] [i_1] [0] [i_1] = (((-(((/* implicit */int) (signed char)99)))) & (((/* implicit */int) ((signed char) var_3))));
                    }
                }
            }
            arr_77 [i_0] = (~(((int) 0)));
            var_42 = ((int) min((((/* implicit */int) max(((unsigned char)48), (((/* implicit */unsigned char) var_7))))), (arr_53 [9U] [i_0] [i_0 + 1] [i_0 - 1] [i_0] [i_0])));
        }
        /* LoopSeq 2 */
        /* vectorizable */
        for (signed char i_23 = 3; i_23 < 23; i_23 += 1) 
        {
            /* LoopNest 2 */
            for (int i_24 = 2; i_24 < 23; i_24 += 1) 
            {
                for (unsigned int i_25 = 0; i_25 < 24; i_25 += 1) 
                {
                    {
                        var_43 = ((signed char) ((var_10) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_70 [i_0] [i_0] [i_23] [i_24] [i_24] [i_25])))));
                        var_44 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))) - ((~(arr_67 [i_0] [i_23 - 2] [i_24 - 1] [i_0])))));
                    }
                } 
            } 
            var_45 = ((/* implicit */unsigned long long int) min((var_45), (((((/* implicit */_Bool) ((((((/* implicit */int) (short)-1)) + (2147483647))) << (((((/* implicit */int) arr_31 [i_0 + 2])) - (32280)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (signed char)0)))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-20))) : (arr_78 [18U] [i_0] [18U])))))));
        }
        /* vectorizable */
        for (unsigned char i_26 = 2; i_26 < 22; i_26 += 1) 
        {
            arr_90 [i_0] [i_0] [i_26] = ((/* implicit */signed char) ((var_5) != (((/* implicit */long long int) ((/* implicit */int) arr_69 [i_0 + 2] [i_0] [i_0 + 2] [i_26 - 2] [i_0 + 2] [i_0] [i_0])))));
            arr_91 [i_0] [i_0] = ((/* implicit */unsigned short) (((~(((/* implicit */int) (unsigned char)113)))) > (1353898846)));
            var_46 += ((/* implicit */unsigned int) ((((int) arr_73 [(unsigned short)5] [i_26] [i_26] [(unsigned short)5] [i_26 + 1] [i_26 - 2] [i_26])) == (((int) arr_87 [(unsigned short)2] [i_26]))));
        }
        var_47 ^= ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */unsigned int) ((((/* implicit */int) var_4)) - (((/* implicit */int) var_0))))) + (((((/* implicit */unsigned int) ((/* implicit */int) (short)32764))) % (var_10))))));
    }
}
