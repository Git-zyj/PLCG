/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223310
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223310 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223310
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
    for (long long int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) (((((+(var_10))) <= (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_16))))))) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-20))) <= (min((((/* implicit */unsigned long long int) (signed char)39)), (var_10))))))));
        /* LoopSeq 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_19 &= ((/* implicit */unsigned int) ((min(((-(var_10))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_0)) >> (((1214249679U) - (1214249651U)))))))) / (5832979817709164957ULL)));
            /* LoopSeq 3 */
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                var_20 += ((/* implicit */signed char) arr_1 [i_2 - 1]);
                var_21 -= ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)103)))))) | (((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_2 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (arr_7 [i_0] [i_2] [i_2 - 1])))));
                var_22 ^= ((/* implicit */unsigned char) var_5);
                arr_10 [i_2] [i_2] [i_2] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 17575120494523069073ULL)) ? (18446744073709551614ULL) : (arr_7 [i_0] [i_2 - 1] [i_1])))) ? (min((((/* implicit */unsigned long long int) (signed char)124)), (6114975950059828383ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_2 - 1])) || (((((/* implicit */_Bool) var_15)) || (((/* implicit */_Bool) arr_4 [i_0] [i_2]))))))))));
                var_23 = ((((/* implicit */_Bool) min((6114975950059828407ULL), (((/* implicit */unsigned long long int) var_2))))) && ((_Bool)1));
            }
            for (unsigned char i_3 = 0; i_3 < 20; i_3 += 4) 
            {
                var_24 = ((/* implicit */short) var_11);
                var_25 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0])) ? (-15LL) : (((/* implicit */long long int) var_13))))) ? ((~(var_6))) : (((unsigned int) var_1)));
                var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) (~(((/* implicit */int) arr_1 [i_1])))))));
            }
            for (unsigned char i_4 = 0; i_4 < 20; i_4 += 4) 
            {
                arr_17 [i_0] [i_1] [i_4] [i_4] = ((/* implicit */long long int) ((((/* implicit */int) ((signed char) ((((/* implicit */int) var_0)) / (((/* implicit */int) var_14)))))) + ((((-(((/* implicit */int) (_Bool)1)))) - (((/* implicit */int) ((unsigned char) 21751560)))))));
                /* LoopSeq 3 */
                for (unsigned int i_5 = 0; i_5 < 20; i_5 += 4) 
                {
                    var_27 &= ((/* implicit */unsigned int) var_1);
                    arr_22 [i_0] [i_1] [5] [i_5] = ((/* implicit */short) (!(((/* implicit */_Bool) -594090869))));
                }
                for (unsigned long long int i_6 = 1; i_6 < 19; i_6 += 1) 
                {
                    var_28 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_2) | (((/* implicit */long long int) var_18))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 2147483647)), (2266712786567589428ULL)))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (_Bool)1)))) : ((~(var_2)))))) : (((((/* implicit */_Bool) (~(6220884387536328598ULL)))) ? ((((_Bool)1) ? (6220884387536328593ULL) : (17580327807539318752ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)128)))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 20; i_7 += 1) 
                    {
                        var_29 ^= ((/* implicit */short) (+(arr_8 [i_6 - 1])));
                        arr_28 [i_0] [i_1] [i_1] [i_4] [i_6] [i_7] = ((/* implicit */int) 6114975950059828410ULL);
                    }
                    /* vectorizable */
                    for (signed char i_8 = 0; i_8 < 20; i_8 += 2) 
                    {
                        var_30 = ((/* implicit */short) max((var_30), (((/* implicit */short) ((536862720) > (((/* implicit */int) arr_18 [i_6 - 1] [i_6 - 1] [i_6 - 1] [i_6 - 1] [i_6 - 1])))))));
                        arr_31 [i_0] [i_1] [(_Bool)1] [14ULL] [i_4] [i_6] [i_8] = ((/* implicit */signed char) ((((((/* implicit */int) arr_16 [(short)12] [i_4] [i_8])) >> (((/* implicit */int) (_Bool)1)))) << (((/* implicit */int) (_Bool)1))));
                        var_31 *= ((/* implicit */signed char) ((12088850431699979437ULL) == (var_15)));
                    }
                    arr_32 [i_1] &= ((/* implicit */unsigned char) arr_15 [i_1]);
                }
                for (long long int i_9 = 0; i_9 < 20; i_9 += 1) 
                {
                    arr_36 [i_0] [i_1] [1ULL] [4] [16LL] = ((/* implicit */short) (_Bool)1);
                    var_32 = ((/* implicit */unsigned char) max((var_32), (((/* implicit */unsigned char) ((long long int) ((((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) arr_33 [i_9] [i_9] [5U] [(unsigned char)6] [i_0])))) ? (((/* implicit */unsigned long long int) min((var_8), (((/* implicit */unsigned int) var_7))))) : (var_4)))))));
                    arr_37 [i_0] [i_1] [i_4] [i_9] = ((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) min((var_2), (((/* implicit */long long int) var_11))))) / (max((((/* implicit */unsigned long long int) var_1)), (16579079125870911138ULL))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 12425468439511792952ULL)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))))))));
                }
            }
            var_33 += ((/* implicit */signed char) min((((/* implicit */long long int) (!(((/* implicit */_Bool) 7897642523035102978LL))))), ((((_Bool)1) ? (4640101392918641137LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
        }
        for (unsigned long long int i_10 = 0; i_10 < 20; i_10 += 2) 
        {
            var_34 ^= ((/* implicit */short) ((((((/* implicit */_Bool) arr_29 [i_0] [i_0] [i_10] [i_10])) ? (3820984243268580130LL) : (2727545883123471383LL))) <= (((/* implicit */long long int) (+(((/* implicit */int) var_14)))))));
            arr_40 [i_0] [i_10] = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_7) : (arr_12 [i_0] [i_0] [i_0])))) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */long long int) (+(arr_12 [i_0] [i_10] [(short)8]))))));
        }
        /* vectorizable */
        for (long long int i_11 = 4; i_11 < 18; i_11 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_12 = 0; i_12 < 20; i_12 += 1) 
            {
                /* LoopSeq 4 */
                for (short i_13 = 3; i_13 < 19; i_13 += 4) /* same iter space */
                {
                    var_35 = ((/* implicit */unsigned short) max((var_35), (((/* implicit */unsigned short) arr_49 [(short)4] [i_11 - 1] [i_11 - 2] [i_11]))));
                    arr_50 [i_0] [i_0] [i_11] [i_12] [(unsigned char)9] [i_13 - 1] = ((/* implicit */int) ((((/* implicit */_Bool) arr_38 [i_11 + 2] [i_13 - 3])) ? (arr_26 [i_11 - 3] [i_11] [i_11 - 1] [i_13 + 1] [i_13 + 1] [i_13 + 1] [i_13]) : (((/* implicit */long long int) ((/* implicit */int) arr_43 [i_11 - 2] [i_11 - 1] [i_11 - 1])))));
                    /* LoopSeq 1 */
                    for (signed char i_14 = 0; i_14 < 20; i_14 += 1) 
                    {
                        arr_53 [(_Bool)1] [i_11] [i_13 - 2] [(signed char)17] = ((/* implicit */short) ((signed char) 16));
                        var_36 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) (short)-11542)) : (((/* implicit */int) var_17))));
                        var_37 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_19 [6LL] [i_13] [i_14]))))) ? (((/* implicit */int) (short)7344)) : (((/* implicit */int) ((signed char) var_12)))));
                        var_38 *= ((/* implicit */unsigned long long int) ((int) arr_20 [i_11 + 1] [19LL] [i_13 - 2] [i_13 + 1]));
                    }
                }
                for (short i_15 = 3; i_15 < 19; i_15 += 4) /* same iter space */
                {
                    var_39 -= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) % (12225859686173223018ULL)));
                    var_40 = ((/* implicit */long long int) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */unsigned long long int) 845344335753075206LL)) : (11364891685418950595ULL)));
                    var_41 = ((/* implicit */unsigned char) max((var_41), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) 7646405508745637224ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_0] [i_11] [i_15]))) : (var_5))) > ((-(var_5))))))));
                    arr_56 [i_11] [i_15] = ((/* implicit */long long int) (((-(3176231219U))) != (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_16)) < (((/* implicit */int) arr_5 [i_0] [i_11 - 2] [i_15]))))))));
                }
                for (short i_16 = 3; i_16 < 19; i_16 += 4) /* same iter space */
                {
                    var_42 = ((/* implicit */unsigned long long int) var_6);
                    arr_61 [i_11] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) var_9)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)11)))))));
                    var_43 = ((/* implicit */unsigned long long int) arr_1 [i_16]);
                }
                for (unsigned char i_17 = 1; i_17 < 19; i_17 += 3) 
                {
                    var_44 = ((/* implicit */unsigned long long int) min((var_44), (((/* implicit */unsigned long long int) var_12))));
                    arr_66 [i_0] [i_0] [i_11] [i_17 + 1] = ((/* implicit */signed char) ((arr_46 [6] [i_11] [i_11 - 2]) <= (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                }
                var_45 = ((/* implicit */unsigned long long int) arr_11 [i_11 + 1] [i_11 - 3] [i_11 + 2]);
            }
            var_46 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) ? (1118736095U) : (((/* implicit */unsigned int) arr_12 [i_11 - 2] [i_11] [i_0]))));
        }
        arr_67 [i_0] = ((/* implicit */signed char) ((5415537200294587141ULL) | (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [(_Bool)1] [i_0] [i_0])) ? (((/* implicit */int) (_Bool)1)) : (968417662)))) | (arr_34 [i_0] [i_0] [1LL] [i_0] [i_0] [i_0]))))));
        /* LoopSeq 2 */
        for (unsigned long long int i_18 = 0; i_18 < 20; i_18 += 3) 
        {
            arr_72 [10LL] = ((/* implicit */_Bool) ((max((var_15), (((/* implicit */unsigned long long int) 1863483731U)))) << (((((var_8) % (((/* implicit */unsigned int) 674456740)))) - (47589280U)))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned long long int i_19 = 0; i_19 < 20; i_19 += 4) 
            {
                var_47 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) var_7)) : (var_6)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_13) <= (((/* implicit */int) (short)7356)))))) : (arr_39 [i_18] [i_0])));
                var_48 = (+(((/* implicit */int) (unsigned char)37)));
                arr_76 [i_0] [i_18] [10] = ((((/* implicit */int) arr_5 [19LL] [i_0] [i_0])) ^ (-2147483635));
            }
            var_49 = ((/* implicit */long long int) max((var_49), (((/* implicit */long long int) min((((int) ((unsigned long long int) arr_41 [4LL] [4LL]))), (max((-1316738088), (((/* implicit */int) (_Bool)1)))))))));
            arr_77 [i_18] = ((/* implicit */short) var_11);
        }
        /* vectorizable */
        for (unsigned int i_20 = 1; i_20 < 18; i_20 += 1) 
        {
            var_50 -= ((/* implicit */signed char) (-(var_8)));
            var_51 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_20 - 1])) ? (4) : (((/* implicit */int) var_14))));
            var_52 = ((/* implicit */signed char) ((long long int) (unsigned short)45526));
        }
        var_53 = ((/* implicit */unsigned short) (_Bool)1);
    }
    for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
    {
        arr_82 [i_21] = ((/* implicit */_Bool) (+(((/* implicit */int) ((_Bool) arr_80 [i_21])))));
        var_54 &= ((/* implicit */int) var_4);
    }
    for (signed char i_22 = 0; i_22 < 19; i_22 += 2) 
    {
        var_55 = ((/* implicit */signed char) max((var_55), (((/* implicit */signed char) ((unsigned short) max(((short)32690), (((/* implicit */short) (_Bool)1))))))));
        var_56 *= (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned short)6)) : (var_13)))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)27))))) : ((~(var_5)))))));
    }
    var_57 = ((/* implicit */unsigned int) ((int) (-(((int) var_4)))));
    /* LoopNest 3 */
    for (int i_23 = 1; i_23 < 23; i_23 += 1) 
    {
        for (int i_24 = 0; i_24 < 24; i_24 += 1) 
        {
            for (int i_25 = 1; i_25 < 22; i_25 += 1) 
            {
                {
                    arr_93 [i_24] [i_24] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_86 [i_23 + 1] [i_25 - 1]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) (short)11513)))))) : (((18446603336221196288ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0)))))));
                    arr_94 [i_23 - 1] [i_24] [i_24] [i_25] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned char)22))))), (((signed char) var_12)))))));
                }
            } 
        } 
    } 
    var_58 |= ((/* implicit */short) min((1286075234), (var_7)));
    var_59 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 2047)) && (((((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (signed char)24)) : (((/* implicit */int) var_11))))) == (((((/* implicit */_Bool) (unsigned short)1)) ? (17854385786835317506ULL) : (140737488355325ULL)))))));
}
