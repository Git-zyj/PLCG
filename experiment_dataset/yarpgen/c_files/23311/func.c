/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23311
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23311 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23311
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
    for (signed char i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        var_11 += ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */int) min((arr_2 [i_0] [i_0]), (arr_0 [i_0])))) & (((((/* implicit */int) (unsigned char)6)) / (((/* implicit */int) (signed char)109))))))) == (var_2)));
        var_12 = ((/* implicit */signed char) ((max((((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)-92))))), (10434081956282737053ULL))) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)172)))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (signed char i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) ((long long int) ((((/* implicit */int) (unsigned short)31198)) < (((/* implicit */int) (unsigned char)7))))))));
            arr_5 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) var_0))))) ? (((/* implicit */int) arr_2 [i_0] [i_1])) : (((/* implicit */int) ((short) (unsigned short)32160)))));
        }
        for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 1) /* same iter space */
        {
            arr_8 [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)61431))) >= (6480671033249556225ULL)))) : (arr_7 [i_2] [i_0])))) ? (((/* implicit */int) ((unsigned short) 662843005554251209ULL))) : (max((((((/* implicit */_Bool) (signed char)63)) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) var_4)))), (((((/* implicit */_Bool) (unsigned char)163)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_0 [i_0]))))))));
            arr_9 [(signed char)14] &= ((/* implicit */short) var_10);
            var_14 = ((/* implicit */int) ((signed char) ((int) (-(arr_3 [i_2])))));
        }
        for (unsigned long long int i_3 = 0; i_3 < 21; i_3 += 1) /* same iter space */
        {
            arr_12 [i_3] [i_0] [i_0] = ((/* implicit */unsigned short) 16039952135580309935ULL);
            /* LoopSeq 4 */
            for (unsigned long long int i_4 = 0; i_4 < 21; i_4 += 2) 
            {
                var_15 = ((/* implicit */unsigned short) (+(((int) ((((/* implicit */_Bool) var_4)) ? (-494795721) : (((/* implicit */int) arr_14 [i_4] [i_3] [i_4] [i_4])))))));
                var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) max((((/* implicit */int) ((signed char) max(((unsigned char)116), ((unsigned char)221))))), (min((((((/* implicit */_Bool) arr_13 [i_4] [i_3] [i_0])) ? (((/* implicit */int) arr_6 [i_0] [i_3] [i_4])) : (((/* implicit */int) var_5)))), (((/* implicit */int) max((((/* implicit */unsigned short) var_4)), (var_3)))))))))));
                var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) 937701098U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-15))) : (1842279278U)))))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_0))));
                var_18 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) min((((/* implicit */short) (unsigned char)205)), (max((((/* implicit */short) arr_0 [i_3])), ((short)-5149))))))));
            }
            for (short i_5 = 0; i_5 < 21; i_5 += 1) /* same iter space */
            {
                /* LoopSeq 2 */
                for (unsigned long long int i_6 = 0; i_6 < 21; i_6 += 1) 
                {
                    var_19 = ((/* implicit */signed char) arr_16 [i_0]);
                    /* LoopSeq 2 */
                    for (short i_7 = 0; i_7 < 21; i_7 += 4) 
                    {
                        arr_26 [i_5] [i_3] [i_5] [i_6] [i_7] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) ((var_2) / (var_2))))) || (((/* implicit */_Bool) max((((/* implicit */int) max((arr_11 [i_0] [i_3] [i_0]), (((/* implicit */signed char) var_1))))), (arr_7 [i_0] [i_3]))))));
                        var_20 *= (~(((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned long long int) (signed char)93)))))));
                    }
                    for (short i_8 = 0; i_8 < 21; i_8 += 3) 
                    {
                        var_21 ^= ((/* implicit */signed char) (~(((/* implicit */int) (unsigned short)59235))));
                        arr_31 [i_5] [i_3] [i_5] [i_3] [i_3] = ((/* implicit */short) min((((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) (signed char)86)))), (arr_6 [i_6] [i_5] [i_0])));
                        var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) ((unsigned long long int) ((unsigned short) var_2))))));
                    }
                    /* LoopSeq 3 */
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        arr_34 [i_0] [i_5] [i_5] [i_6] [i_9] = ((/* implicit */long long int) max(((short)18), (((/* implicit */short) (signed char)83))));
                        var_23 = ((/* implicit */_Bool) ((int) (!(((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_0] [i_0])))));
                        arr_35 [i_0] [i_5] = ((/* implicit */unsigned int) min(((!(((/* implicit */_Bool) min(((unsigned short)63725), ((unsigned short)6287)))))), (((((/* implicit */_Bool) ((9914943877437790913ULL) >> (((((/* implicit */int) (unsigned short)17761)) - (17713)))))) || (((/* implicit */_Bool) ((unsigned long long int) -729640139)))))));
                        var_24 -= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((unsigned int) var_3)) | (((/* implicit */unsigned int) (-(((/* implicit */int) var_1)))))))) - (((unsigned long long int) (signed char)-104))));
                    }
                    for (unsigned long long int i_10 = 4; i_10 < 19; i_10 += 1) /* same iter space */
                    {
                        arr_38 [i_0] [i_5] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((unsigned short) arr_22 [i_0] [i_5] [i_0] [i_0]));
                        var_25 &= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) 1729247714)) == (2725670162110241904ULL)));
                        arr_39 [i_3] [i_3] [i_3] [i_3] [i_5] = min((((/* implicit */unsigned long long int) -4335032247578983532LL)), (max((((/* implicit */unsigned long long int) min((((/* implicit */long long int) (_Bool)1)), (var_9)))), (max((var_10), (((/* implicit */unsigned long long int) (unsigned short)59222)))))));
                        var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) ((int) (unsigned char)66)))));
                    }
                    for (unsigned long long int i_11 = 4; i_11 < 19; i_11 += 1) /* same iter space */
                    {
                        arr_42 [i_0] [i_0] [i_5] [i_0] [i_0] = ((/* implicit */short) ((unsigned short) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_10 [i_11 - 4])) : (((/* implicit */int) arr_10 [i_11 - 2])))));
                        var_27 = ((/* implicit */long long int) min((((/* implicit */int) var_8)), (((((/* implicit */_Bool) 16353582661019408233ULL)) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)252)) > (((/* implicit */int) (signed char)122))))) : (((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)212)), ((unsigned short)24156))))))));
                        var_28 = ((/* implicit */signed char) (!(((_Bool) var_3))));
                    }
                }
                for (signed char i_12 = 0; i_12 < 21; i_12 += 2) 
                {
                    arr_45 [i_12] [i_3] [i_12] [i_12] [i_5] = ((unsigned short) var_7);
                    var_29 = ((/* implicit */unsigned char) min((var_29), (((/* implicit */unsigned char) min((((/* implicit */long long int) (unsigned short)2882)), (-6874566098929310173LL))))));
                }
                var_30 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) arr_25 [i_5] [i_3] [i_5]))) ? (arr_4 [i_0] [i_3] [i_5]) : (((/* implicit */long long int) ((/* implicit */int) var_3)))));
                var_31 = ((/* implicit */long long int) (~((-(((/* implicit */int) arr_11 [i_5] [i_3] [i_0]))))));
                arr_46 [i_0] [i_0] [i_3] [i_5] = ((/* implicit */signed char) (((+(((((/* implicit */long long int) ((/* implicit */int) var_8))) / (3418889201386631499LL))))) * (((/* implicit */long long int) ((((/* implicit */_Bool) min(((unsigned char)72), (((/* implicit */unsigned char) arr_11 [i_3] [i_3] [i_5]))))) ? ((+(((/* implicit */int) (short)13955)))) : (((/* implicit */int) arr_0 [i_0])))))));
                arr_47 [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 258262894U)) ? (-7421115207770504978LL) : (((/* implicit */long long int) ((/* implicit */int) (short)3540)))));
            }
            for (short i_13 = 0; i_13 < 21; i_13 += 1) /* same iter space */
            {
                var_32 &= ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)59)) ? (arr_22 [i_0] [(short)6] [i_13] [i_0]) : (((/* implicit */long long int) 228772914U))))) ? (((((/* implicit */int) (unsigned char)239)) & (((/* implicit */int) arr_19 [i_0] [i_3] [(signed char)12])))) : (((/* implicit */int) arr_33 [i_0] [i_0] [i_0] [i_0])))) % (((((/* implicit */_Bool) 1482284515)) ? (((/* implicit */int) (unsigned short)17592)) : (((/* implicit */int) (signed char)120)))));
                arr_50 [i_0] [i_0] = ((/* implicit */short) arr_16 [i_13]);
            }
            for (short i_14 = 0; i_14 < 21; i_14 += 1) /* same iter space */
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned int i_15 = 0; i_15 < 21; i_15 += 3) 
                {
                    arr_56 [i_3] [i_14] = ((/* implicit */signed char) ((((/* implicit */long long int) var_6)) + (arr_4 [i_3] [i_3] [i_14])));
                    var_33 &= ((/* implicit */_Bool) ((signed char) arr_29 [i_0] [i_0] [i_0] [i_0]));
                }
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned short i_16 = 0; i_16 < 21; i_16 += 4) 
                {
                    arr_59 [i_14] [i_14] = ((/* implicit */unsigned char) (~(arr_55 [i_0] [i_0] [i_0] [i_0] [i_0])));
                    arr_60 [i_14] [i_14] = ((/* implicit */unsigned int) ((var_9) <= (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_3] [i_14])))));
                    arr_61 [i_14] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_44 [i_16] [i_14])) >= (((/* implicit */int) arr_6 [i_0] [i_0] [i_0]))));
                }
                for (unsigned long long int i_17 = 2; i_17 < 19; i_17 += 3) 
                {
                    var_34 = ((/* implicit */signed char) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_62 [i_0] [i_0] [i_14] [i_17])) && (((/* implicit */_Bool) (signed char)-84)))))));
                    arr_65 [i_0] [i_0] [i_14] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((((/* implicit */int) var_5)) ^ (((/* implicit */int) var_8)))) | (((((/* implicit */int) var_3)) & (((/* implicit */int) var_7))))))) - (((arr_29 [i_17] [i_17] [i_17] [i_17 + 2]) ? (((/* implicit */long long int) (~(((/* implicit */int) var_8))))) : (var_9)))));
                }
                for (long long int i_18 = 0; i_18 < 21; i_18 += 2) 
                {
                    arr_69 [i_14] [i_0] [i_0] [i_14] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) ((arr_27 [i_0] [i_14] [i_14] [i_14] [i_14]) == (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ^ (((/* implicit */int) (unsigned char)215))))) ? (((unsigned int) (~(var_9)))) : (arr_32 [i_0] [i_3])));
                    var_35 -= ((/* implicit */signed char) ((((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) - (arr_52 [i_18]))) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_44 [i_14] [i_18])))))) * (((/* implicit */int) arr_16 [i_0]))));
                    var_36 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) (unsigned short)24202)) ? (((/* implicit */int) (signed char)-17)) : (((/* implicit */int) (signed char)61)))))) ? (((((/* implicit */int) ((_Bool) 8735490782701571690ULL))) | (((((/* implicit */_Bool) 1858463211U)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (short)-12385)))))) : (((((/* implicit */int) arr_67 [i_0])) * (((/* implicit */int) arr_15 [i_18] [i_3] [i_14]))))));
                    arr_70 [i_18] [i_14] [i_18] [i_3] [i_0] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_7 [i_14] [i_0]), ((-(((/* implicit */int) (unsigned char)239))))))) ? ((-(((7789027209838577399ULL) - (((/* implicit */unsigned long long int) 258262895U)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) ((1543519116U) + (((/* implicit */unsigned int) ((/* implicit */int) arr_41 [i_14] [i_0] [i_3] [i_18] [i_14] [i_3]))))))))));
                }
            }
        }
        arr_71 [i_0] = ((/* implicit */int) var_2);
    }
    var_37 = ((/* implicit */int) var_3);
}
