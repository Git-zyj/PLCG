/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200814
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200814 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200814
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
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (signed char i_1 = 3; i_1 < 14; i_1 += 2) 
        {
            var_10 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_1])) - (((/* implicit */int) var_4))))) ? (arr_2 [(signed char)14] [i_1 + 1]) : ((~(12731745236600221703ULL)))));
            var_11 = ((/* implicit */short) max((var_11), (((/* implicit */short) var_5))));
            /* LoopSeq 1 */
            for (unsigned int i_2 = 0; i_2 < 16; i_2 += 3) 
            {
                arr_8 [(signed char)15] [i_0] [i_2] = (-(((/* implicit */int) arr_5 [i_0])));
                /* LoopSeq 1 */
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    /* LoopSeq 4 */
                    for (unsigned int i_4 = 0; i_4 < 16; i_4 += 3) 
                    {
                        var_12 = ((/* implicit */int) max((var_12), (((((/* implicit */int) (signed char)-125)) % ((-(1724447637)))))));
                        var_13 = ((/* implicit */signed char) (unsigned short)42398);
                    }
                    for (long long int i_5 = 0; i_5 < 16; i_5 += 4) 
                    {
                        arr_16 [i_0] [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (_Bool)0)))) + (((/* implicit */int) arr_14 [i_1 - 3]))));
                        var_14 = ((/* implicit */short) (((_Bool)0) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
                        arr_17 [i_0] [(unsigned char)12] [i_2] [i_3] [i_5] = ((/* implicit */unsigned short) ((((long long int) arr_10 [i_0] [i_1 - 3] [i_1 - 3] [i_1 - 3])) * (((/* implicit */long long int) (+(2484981937U))))));
                        var_15 = ((short) arr_13 [i_5] [i_0] [i_3] [i_2] [i_1] [i_0]);
                        arr_18 [i_0] [i_1] [i_1] [i_1] [i_1] [2LL] [i_5] = ((/* implicit */_Bool) (~((+(((/* implicit */int) var_5))))));
                    }
                    for (unsigned short i_6 = 0; i_6 < 16; i_6 += 3) /* same iter space */
                    {
                        var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(0U)))) ? (((((/* implicit */int) arr_14 [(unsigned short)4])) ^ (2147483626))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) 4294967283U)) < (arr_12 [i_0] [i_1] [i_2] [11LL] [i_2] [i_6]))))));
                        var_17 = ((/* implicit */unsigned long long int) (-(arr_7 [i_3] [i_2] [i_1] [i_0])));
                        arr_22 [(unsigned char)2] [i_1] [(_Bool)1] [i_3] [(signed char)0] &= ((/* implicit */long long int) ((((/* implicit */_Bool) (-(5061732621386828203ULL)))) ? (arr_0 [i_2] [i_2]) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-5668)) & (((/* implicit */int) (signed char)6)))))));
                        var_18 = ((/* implicit */unsigned short) 5574112043405735095LL);
                        var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) arr_12 [i_0] [i_1] [i_2] [i_3] [i_2] [(signed char)7]))));
                    }
                    for (unsigned short i_7 = 0; i_7 < 16; i_7 += 3) /* same iter space */
                    {
                        var_20 = ((/* implicit */_Bool) (~(1376903957U)));
                        arr_27 [i_7] [i_1] [(unsigned char)10] [i_2] [i_1] [i_0] = ((/* implicit */unsigned char) (((+(((/* implicit */int) (_Bool)0)))) <= (((/* implicit */int) ((((/* implicit */_Bool) 759386393594789000ULL)) && (((/* implicit */_Bool) arr_13 [i_0] [i_1] [i_2] [(unsigned short)2] [(short)0] [i_0])))))));
                        var_21 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_19 [i_0] [i_1] [i_1] [i_1 - 2] [(signed char)3]))));
                        var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) arr_24 [i_2]))));
                    }
                    var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [(unsigned short)13] [i_1 - 3] [i_1] [i_1] [(unsigned short)13])) ? (((/* implicit */unsigned long long int) 2918063336U)) : (var_6)))) ? (arr_24 [i_0]) : (((((/* implicit */_Bool) (unsigned char)0)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)167)))))));
                    var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_1 - 3])) ? (arr_25 [i_1] [i_1] [i_1 - 1] [i_3] [i_3] [i_3]) : (((/* implicit */int) arr_10 [i_1 + 1] [i_3] [i_1 + 1] [i_1 + 1])))))));
                    arr_28 [(_Bool)1] [(_Bool)1] [i_2] [i_2] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) arr_11 [15LL] [i_1] [i_1 - 1] [i_1] [i_1 - 1])) << (((-823901576) + (823901592)))));
                    /* LoopSeq 1 */
                    for (unsigned short i_8 = 1; i_8 < 13; i_8 += 2) 
                    {
                        var_25 = ((/* implicit */signed char) (-((+(((/* implicit */int) (_Bool)1))))));
                        var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) (+((-(2147483626))))))));
                        var_27 = ((/* implicit */_Bool) ((signed char) var_1));
                    }
                }
                var_28 = ((unsigned int) (((_Bool)1) ? (arr_12 [i_0] [i_0] [13U] [i_1] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_32 [i_2] [14LL] [i_2] [(unsigned short)15] [i_1] [i_0] [14LL])))));
                /* LoopSeq 1 */
                for (int i_9 = 0; i_9 < 16; i_9 += 1) 
                {
                    arr_36 [i_9] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (short)32767)) && (((/* implicit */_Bool) 2847650022839166497ULL)))) ? (-4434440126299611900LL) : (((long long int) var_1))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_10 = 0; i_10 < 16; i_10 += 4) 
                    {
                        var_29 = ((/* implicit */signed char) (-(arr_25 [i_0] [i_0] [i_10] [i_9] [i_10] [i_10])));
                        var_30 += ((/* implicit */int) ((unsigned char) 9042405748618027833ULL));
                        var_31 = ((/* implicit */unsigned int) ((((18446744073709551608ULL) != (14825084471086785936ULL))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)163))) : (arr_15 [i_1 - 1] [i_1] [i_2])));
                    }
                    var_32 += ((/* implicit */signed char) ((long long int) arr_38 [i_1 + 2] [i_1 + 1] [i_1 + 1]));
                }
            }
        }
        for (unsigned short i_11 = 2; i_11 < 14; i_11 += 2) 
        {
            /* LoopSeq 1 */
            for (signed char i_12 = 0; i_12 < 16; i_12 += 1) 
            {
                var_33 += ((/* implicit */unsigned char) (-(((((((/* implicit */unsigned long long int) 0U)) ^ (17687357680114762627ULL))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)(-127 - 1))))))));
                var_34 = ((/* implicit */_Bool) max((var_34), (((/* implicit */_Bool) ((unsigned long long int) (+(arr_7 [i_0] [(signed char)14] [i_0] [i_0])))))));
                arr_43 [i_0] [5U] [i_12] [(signed char)8] = ((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */_Bool) min(((unsigned short)35539), (((/* implicit */unsigned short) arr_34 [i_0] [i_11] [i_0] [i_0]))))) && (((/* implicit */_Bool) ((arr_21 [i_12]) * (0ULL)))))))));
                var_35 = ((/* implicit */long long int) min(((-(((/* implicit */int) ((unsigned char) (_Bool)1))))), ((~(((((/* implicit */_Bool) (short)23009)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned short)35539))))))));
            }
            /* LoopSeq 3 */
            for (unsigned short i_13 = 0; i_13 < 16; i_13 += 1) 
            {
                var_36 *= ((/* implicit */signed char) (-(((/* implicit */int) ((signed char) arr_21 [i_0])))));
                arr_46 [i_13] [i_11] [i_13] = ((/* implicit */signed char) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) arr_4 [i_0] [i_11 + 2] [i_13])) >= (arr_12 [10LL] [i_11] [i_13] [i_11 + 2] [11ULL] [i_11]))))));
                arr_47 [i_0] [i_13] [0ULL] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((signed char) ((unsigned char) 12ULL))))));
            }
            for (unsigned char i_14 = 0; i_14 < 16; i_14 += 4) 
            {
                var_37 = ((/* implicit */unsigned short) (~(min((arr_2 [i_11 + 2] [i_14]), (arr_2 [i_11 - 1] [i_14])))));
                var_38 |= ((/* implicit */short) (signed char)76);
                var_39 = ((/* implicit */signed char) (((((~(432930843990417891ULL))) ^ ((~(432930843990417891ULL))))) < (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) 5602759176277819236LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)63)))))))));
            }
            for (short i_15 = 0; i_15 < 16; i_15 += 4) 
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_16 = 0; i_16 < 16; i_16 += 4) 
                {
                    arr_56 [i_0] [i_0] [i_0] = (signed char)-116;
                    arr_57 [i_0] [6] [6] [i_16] [i_0] [i_16] |= ((((((/* implicit */_Bool) (~(((/* implicit */int) arr_14 [i_0]))))) ? (((((((/* implicit */int) var_4)) + (2147483647))) << (((((/* implicit */int) arr_48 [(signed char)10] [i_11] [i_11])) - (19358))))) : (((((/* implicit */int) (unsigned char)0)) | (((/* implicit */int) (signed char)-37)))))) ^ (((((/* implicit */int) var_5)) % (((/* implicit */int) ((((/* implicit */_Bool) 3756302435U)) || (((/* implicit */_Bool) arr_9 [i_16] [i_11] [i_15] [i_16] [i_11 - 1] [i_16]))))))));
                }
                /* LoopSeq 3 */
                /* vectorizable */
                for (short i_17 = 0; i_17 < 16; i_17 += 4) 
                {
                    arr_61 [i_0] = ((/* implicit */unsigned long long int) (-((~(((/* implicit */int) arr_14 [13LL]))))));
                    arr_62 [i_0] [i_11] [i_15] [i_17] |= ((/* implicit */unsigned char) ((long long int) ((int) 17558121805478041242ULL)));
                    arr_63 [i_0] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 733703381)) ? ((-2147483647 - 1)) : (((/* implicit */int) (short)-1))))) ? ((~(((/* implicit */int) (unsigned short)16017)))) : ((~(((/* implicit */int) (short)-9291))))));
                }
                for (unsigned short i_18 = 1; i_18 < 14; i_18 += 3) 
                {
                    var_40 = ((/* implicit */unsigned short) min((var_40), (((/* implicit */unsigned short) ((signed char) ((short) min((-4638368099265718308LL), (((/* implicit */long long int) -733703382)))))))));
                    arr_67 [i_0] [(signed char)2] [i_18] [(signed char)2] = ((/* implicit */int) min(((short)-25986), (((/* implicit */short) ((signed char) (short)-9290)))));
                }
                for (long long int i_19 = 3; i_19 < 12; i_19 += 3) 
                {
                    arr_71 [(unsigned short)10] [i_11 - 2] [(unsigned short)10] [i_19] [i_0] [i_19 - 2] &= ((/* implicit */unsigned short) (-((-((((_Bool)1) ? (((/* implicit */unsigned long long int) 3265446098U)) : (18446744073709551615ULL)))))));
                    /* LoopSeq 3 */
                    for (signed char i_20 = 0; i_20 < 16; i_20 += 4) 
                    {
                        var_41 = ((/* implicit */unsigned char) min((var_41), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(-733703389)))) ? (((((/* implicit */_Bool) arr_69 [i_0] [i_19 + 1] [i_15] [i_11 + 1] [i_20] [i_0])) ? (arr_69 [12ULL] [i_19 + 1] [i_0] [i_11 + 1] [12ULL] [13]) : (arr_69 [i_19] [i_19 + 1] [i_19] [i_11 + 1] [i_20] [i_19]))) : (((/* implicit */long long int) (~(((/* implicit */int) arr_19 [i_0] [(unsigned short)9] [i_15] [i_19 - 3] [i_20]))))))))));
                        arr_75 [i_19] [i_11] = ((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)65535))));
                        var_42 = ((/* implicit */short) arr_70 [i_0] [i_19] [i_15] [i_11 + 2]);
                        var_43 = ((((/* implicit */_Bool) (+(arr_29 [i_11 - 1] [i_19 - 2] [i_15] [i_11 - 1] [i_0])))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)222)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32754))) : (432930843990417892ULL)))));
                        arr_76 [i_0] [i_0] [i_0] [i_0] [6U] = ((/* implicit */unsigned short) (signed char)-120);
                    }
                    for (unsigned int i_21 = 0; i_21 < 16; i_21 += 4) 
                    {
                        var_44 = ((/* implicit */long long int) min((var_44), (((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_49 [i_11 - 1] [i_19 + 3] [i_11 - 1] [i_11 - 1]), (arr_49 [i_11 + 1] [i_19 - 2] [i_21] [i_19])))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) | (18013813229719133724ULL))) : ((-(arr_49 [i_11 + 1] [i_19 + 4] [i_15] [i_19]))))))));
                        var_45 = ((/* implicit */short) var_7);
                    }
                    /* vectorizable */
                    for (unsigned int i_22 = 0; i_22 < 16; i_22 += 1) 
                    {
                        arr_83 [i_0] [i_11] [i_11] [i_19] [i_22] |= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (short)9286))));
                        arr_84 [i_11] [i_19] [i_19] [i_0] [i_11] [i_0] |= ((/* implicit */_Bool) (+((-2147483647 - 1))));
                    }
                    arr_85 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (-(arr_24 [14ULL])));
                    var_46 = ((/* implicit */signed char) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_40 [6] [i_11 - 2] [i_19 - 3])) ? (-165754210) : (((/* implicit */int) arr_40 [i_11] [i_11 - 2] [i_19 - 3]))))), (min((-9223372036854775788LL), (((/* implicit */long long int) arr_40 [i_0] [i_11 - 2] [i_19 - 3]))))));
                }
            }
        }
        arr_86 [i_0] &= ((/* implicit */signed char) ((short) (-(min((((/* implicit */unsigned long long int) arr_74 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])), (131071ULL))))));
        arr_87 [i_0] [i_0] = ((/* implicit */unsigned int) (((~(((/* implicit */int) var_1)))) - ((-(arr_78 [i_0] [i_0] [i_0] [i_0] [(unsigned char)5])))));
        var_47 |= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) min((max((var_7), (((/* implicit */int) (unsigned char)252)))), ((+(-2049690874)))))) >= (((((/* implicit */_Bool) ((((/* implicit */int) var_2)) & (((/* implicit */int) arr_35 [i_0] [i_0] [i_0] [i_0]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : ((+(var_0)))))));
    }
    for (unsigned short i_23 = 3; i_23 < 8; i_23 += 3) 
    {
        var_48 += ((/* implicit */long long int) (-(((((((/* implicit */_Bool) (unsigned short)50271)) ? (((/* implicit */unsigned long long int) -165754210)) : (16322131176090217092ULL))) % (432930843990417891ULL)))));
        var_49 = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((((((/* implicit */int) var_4)) + (2147483647))) << (((((/* implicit */int) arr_44 [i_23] [i_23] [i_23] [i_23])) - (31))))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) 4527290159842869244LL)) < (15476171388664004480ULL))))))), (arr_64 [i_23])));
    }
    var_50 = ((/* implicit */unsigned short) ((((((/* implicit */int) (unsigned short)19542)) <= (((/* implicit */int) (unsigned char)59)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)19)) ? (((/* implicit */int) var_4)) : (var_8)))) || (((((/* implicit */_Bool) (unsigned short)0)) && (((/* implicit */_Bool) 432930843990417888ULL)))))))) : (((var_0) % (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-118))) ^ (var_0)))))));
}
