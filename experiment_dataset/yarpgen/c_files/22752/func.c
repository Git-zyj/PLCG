/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22752
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22752 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22752
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
    var_12 = ((/* implicit */unsigned short) var_1);
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */long long int) (((_Bool)1) ? (-1916404446) : (min((max((1916404438), (1916404447))), (max((((/* implicit */int) var_9)), (608665814)))))));
        arr_4 [i_0] [i_0 + 1] = ((/* implicit */short) arr_1 [i_0]);
        var_13 = ((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) ((((/* implicit */_Bool) 1916404432)) || (arr_0 [i_0 + 1]))))))) / (((long long int) ((unsigned long long int) arr_1 [i_0])))));
        arr_5 [(_Bool)1] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) var_9))) ? (((/* implicit */int) (signed char)-94)) : (((/* implicit */int) ((((/* implicit */int) arr_0 [i_0 + 1])) > (((/* implicit */int) (signed char)-94)))))));
        var_14 = ((/* implicit */long long int) (~(((/* implicit */int) (short)-32745))));
    }
    for (short i_1 = 1; i_1 < 17; i_1 += 1) 
    {
        /* LoopSeq 4 */
        for (short i_2 = 0; i_2 < 18; i_2 += 4) 
        {
            arr_10 [i_1] = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) ((arr_7 [i_1]) + (((/* implicit */int) arr_0 [(signed char)13]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -918405884)) ? (var_4) : (((/* implicit */int) (short)(-32767 - 1)))))) : (((unsigned long long int) (signed char)94)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_1 - 1] [i_1 + 1])) ? (max((arr_7 [i_1]), (-1916404448))) : (16777215))))));
            var_15 &= ((/* implicit */signed char) (-((+((+(((/* implicit */int) arr_0 [i_1]))))))));
            /* LoopSeq 3 */
            for (unsigned long long int i_3 = 3; i_3 < 16; i_3 += 1) 
            {
                var_16 = ((/* implicit */unsigned short) ((signed char) max(((~(721062484))), (((/* implicit */int) arr_0 [i_2])))));
                var_17 = ((/* implicit */signed char) arr_8 [i_3 + 1] [i_2]);
                arr_14 [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) arr_12 [i_2] [i_3 + 2]))) && (((/* implicit */_Bool) max(((-(((/* implicit */int) arr_2 [i_2] [i_2])))), (((/* implicit */int) ((signed char) -1916404448))))))));
                var_18 = ((/* implicit */_Bool) var_4);
            }
            /* vectorizable */
            for (int i_4 = 1; i_4 < 17; i_4 += 2) 
            {
                arr_18 [i_4 - 1] [i_4] [i_4 - 1] = ((/* implicit */short) arr_17 [i_1] [i_2] [i_4 + 1] [i_2]);
                /* LoopSeq 1 */
                for (int i_5 = 0; i_5 < 18; i_5 += 2) 
                {
                    /* LoopSeq 3 */
                    for (int i_6 = 0; i_6 < 18; i_6 += 4) 
                    {
                        var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -608665795)) ? (((/* implicit */long long int) -1916404453)) : (84933793101151285LL))))));
                        arr_25 [i_6] [i_4] [i_4] [(short)1] = (_Bool)1;
                    }
                    for (int i_7 = 3; i_7 < 14; i_7 += 4) 
                    {
                        var_20 -= ((/* implicit */short) (-(((/* implicit */int) (signed char)94))));
                        arr_28 [i_1] [i_1 + 1] [i_1] [i_1] [i_4] = (((~(((/* implicit */int) var_11)))) | (((/* implicit */int) arr_2 [i_4] [i_2])));
                        arr_29 [i_5] [i_2] [i_2] [i_5] [i_7] [i_5] &= ((/* implicit */int) ((unsigned char) ((((/* implicit */int) var_0)) != (((/* implicit */int) (short)-27419)))));
                        var_21 *= ((/* implicit */short) ((((unsigned long long int) -1300336280)) < (((/* implicit */unsigned long long int) ((arr_1 [i_2]) << (((((((/* implicit */int) arr_22 [i_2] [i_7 - 1])) + (24012))) - (46))))))));
                        var_22 ^= ((/* implicit */unsigned long long int) (!(arr_8 [i_4 - 1] [i_1 + 1])));
                    }
                    for (signed char i_8 = 2; i_8 < 16; i_8 += 2) 
                    {
                        var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) (short)-27439)) ? (7166704985032933914ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))));
                        arr_32 [i_4] [i_2] [i_2] [i_2] [i_2] = (short)1023;
                        var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) ((608665814) / (((int) arr_22 [i_5] [i_5])))))));
                        var_25 ^= ((/* implicit */unsigned char) (-(((/* implicit */int) (short)27432))));
                    }
                    arr_33 [8ULL] [13ULL] [i_4] [(short)4] [(short)9] = ((/* implicit */unsigned int) ((long long int) -5715388783371348735LL));
                    var_26 = ((/* implicit */long long int) 918405878);
                    var_27 = ((/* implicit */signed char) ((((/* implicit */int) arr_27 [i_4] [i_5] [i_5] [i_5] [i_5] [i_5])) | (((/* implicit */int) arr_19 [i_1 - 1] [(unsigned char)17] [(unsigned char)17] [i_1 + 1]))));
                }
                /* LoopSeq 2 */
                for (int i_9 = 0; i_9 < 18; i_9 += 3) 
                {
                    arr_36 [i_1] [i_1] [i_4] [i_4] [i_4] [7] = ((/* implicit */int) ((((/* implicit */unsigned long long int) (-2147483647 - 1))) + (4166563830992047314ULL)));
                    arr_37 [i_4] [i_4] [i_4 - 1] [i_4] [i_4 - 1] [0] = ((/* implicit */long long int) (short)(-32767 - 1));
                }
                for (unsigned long long int i_10 = 0; i_10 < 18; i_10 += 1) 
                {
                    var_28 ^= ((/* implicit */short) ((-1954186844) + (((((/* implicit */_Bool) arr_27 [i_2] [i_2] [i_4 + 1] [i_2] [i_4 + 1] [i_4 + 1])) ? (((/* implicit */int) arr_22 [i_2] [i_2])) : (((/* implicit */int) arr_40 [i_1] [i_2] [i_1 + 1] [i_1 - 1] [i_1]))))));
                    var_29 *= ((/* implicit */unsigned int) ((short) -4929966638458542846LL));
                }
            }
            for (int i_11 = 0; i_11 < 18; i_11 += 4) 
            {
                var_30 -= ((/* implicit */signed char) ((((/* implicit */_Bool) (~(1031010068U)))) ? ((+(((((/* implicit */_Bool) (unsigned short)31)) ? (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_1] [i_2] [i_11] [i_2]))) : (arr_1 [i_2]))))) : (((/* implicit */long long int) var_3))));
                var_31 = ((/* implicit */signed char) (((((!((_Bool)0))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_38 [i_1] [i_1] [i_1] [i_11])) < (((/* implicit */int) arr_21 [i_1] [i_1] [i_1] [(short)10] [i_1])))))) : (((((/* implicit */_Bool) 7237991204337261726ULL)) ? (arr_11 [i_1] [i_1 - 1] [i_1 - 1] [i_1 - 1]) : (((/* implicit */unsigned long long int) arr_13 [i_11] [i_2] [4ULL])))))) & (((/* implicit */unsigned long long int) arr_17 [i_11] [i_2] [i_1] [i_1]))));
            }
            var_32 ^= ((/* implicit */short) max(((+((-(3263957227U))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-32752)) ? (((/* implicit */int) (_Bool)0)) : (((((/* implicit */int) arr_23 [(_Bool)1] [i_1] [(_Bool)1] [i_2] [i_2])) << (((((/* implicit */int) (signed char)-96)) + (105))))))))));
            var_33 ^= ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)105)) > (((/* implicit */int) (_Bool)1))));
        }
        for (long long int i_12 = 0; i_12 < 18; i_12 += 4) /* same iter space */
        {
            /* LoopSeq 2 */
            for (int i_13 = 2; i_13 < 15; i_13 += 4) 
            {
                var_34 -= (short)(-32767 - 1);
                arr_50 [i_1 - 1] [i_1 + 1] [i_1] [i_1] &= ((/* implicit */unsigned short) (signed char)-88);
                /* LoopSeq 1 */
                for (int i_14 = 0; i_14 < 18; i_14 += 1) 
                {
                    arr_54 [i_14] [i_13] [i_14] = ((int) arr_38 [i_1] [i_12] [i_13 + 2] [14U]);
                    var_35 = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */signed char) arr_23 [i_13 + 1] [i_13 - 1] [i_13 + 1] [i_13 - 2] [i_13 + 1])), (arr_21 [i_13] [i_13 - 1] [i_13 + 1] [i_13 - 2] [i_13 + 1])))) ? (8290542846212386394LL) : (((/* implicit */long long int) ((/* implicit */int) arr_27 [i_14] [i_1 + 1] [i_12] [i_13] [i_12] [i_12])))));
                }
                var_36 = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */int) ((unsigned char) 967689648))), (((((/* implicit */int) (signed char)96)) % (((/* implicit */int) arr_23 [i_1] [i_12] [i_12] [i_13] [i_13 - 1]))))))) || (((/* implicit */_Bool) min((((((/* implicit */unsigned int) ((/* implicit */int) arr_34 [i_13] [i_13] [i_1 - 1] [i_12] [i_1 - 1] [i_1 - 1]))) * (arr_17 [(short)0] [i_12] [i_13] [i_1]))), (((/* implicit */unsigned int) arr_39 [i_1 - 1] [i_13 + 2])))))));
                arr_55 [i_1] = ((/* implicit */short) max(((-(((((/* implicit */int) var_2)) | (((/* implicit */int) arr_2 [i_12] [i_12])))))), ((+(((((/* implicit */_Bool) arr_26 [i_1 - 1] [i_1 - 1] [i_1] [i_1] [i_1])) ? (((/* implicit */int) (short)24195)) : (((/* implicit */int) arr_39 [i_13] [i_12]))))))));
            }
            for (signed char i_15 = 0; i_15 < 18; i_15 += 4) 
            {
                var_37 ^= ((/* implicit */unsigned int) arr_48 [i_1] [i_12] [(_Bool)1]);
                var_38 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_57 [(short)14])) ? (((/* implicit */int) (short)-24195)) : (((/* implicit */int) (unsigned short)4832))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (unsigned short)5826)))) : ((~(arr_17 [i_1] [i_12] [i_12] [i_15]))))) <= (((/* implicit */unsigned int) ((/* implicit */int) ((arr_57 [(short)6]) > (((/* implicit */long long int) ((((/* implicit */int) arr_8 [i_1] [i_1])) << (((arr_12 [i_12] [i_15]) - (2940011241U))))))))))));
            }
            arr_58 [i_12] = ((/* implicit */unsigned long long int) ((var_1) && (((((/* implicit */unsigned long long int) (-(arr_24 [i_12] [i_12] [i_12])))) == (((((/* implicit */_Bool) -1954186862)) ? (((/* implicit */unsigned long long int) arr_35 [i_1] [i_1 - 1] [(signed char)11] [i_1])) : (arr_44 [i_1] [i_1])))))));
        }
        for (long long int i_16 = 0; i_16 < 18; i_16 += 4) /* same iter space */
        {
            var_39 = ((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) (signed char)97)) || (((/* implicit */_Bool) ((unsigned short) (signed char)96))))));
            var_40 = (+(((((/* implicit */_Bool) ((((/* implicit */int) arr_43 [i_1 + 1])) ^ (var_4)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (unsigned short)59710)))) : (((unsigned long long int) 1932759810)))));
        }
        for (long long int i_17 = 0; i_17 < 18; i_17 += 4) /* same iter space */
        {
            arr_65 [12ULL] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */int) arr_51 [i_17])) ^ (((/* implicit */int) var_0))))), (3478956765U)))) ? ((+(3248016381957067037ULL))) : (((/* implicit */unsigned long long int) min((134217727U), (((/* implicit */unsigned int) (unsigned short)60689)))))));
            var_41 = ((/* implicit */unsigned int) min((var_41), (arr_13 [i_1] [(short)1] [i_1])));
            var_42 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (-(arr_60 [i_17])))))))) / ((+(min((arr_6 [i_17] [i_1]), (((/* implicit */unsigned long long int) (short)-24208))))))));
        }
        var_43 -= ((/* implicit */short) (~(max((max((((/* implicit */unsigned long long int) arr_60 [i_1])), (arr_62 [i_1] [i_1 - 1]))), (((/* implicit */unsigned long long int) min((-1954186844), (((/* implicit */int) (unsigned short)60717)))))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_18 = 2; i_18 < 17; i_18 += 3) 
        {
            var_44 = ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_2 [(unsigned char)18] [i_18]))))) && (((((/* implicit */_Bool) var_3)) || (arr_0 [i_1])))))) < (((((((/* implicit */int) (unsigned short)4844)) * (((/* implicit */int) arr_41 [i_1 - 1] [2ULL] [i_18] [i_1 - 1])))) & (((/* implicit */int) ((((/* implicit */int) (short)20444)) == (((/* implicit */int) (_Bool)1)))))))));
            var_45 = ((/* implicit */signed char) min((var_45), (((/* implicit */signed char) arr_66 [13]))));
            arr_68 [i_1] [13] = ((min((max((arr_6 [i_1 - 1] [i_18]), (((/* implicit */unsigned long long int) arr_38 [i_1] [i_1] [i_1 + 1] [i_18])))), (((/* implicit */unsigned long long int) ((unsigned int) arr_21 [i_1 - 1] [i_18] [i_1] [i_1 + 1] [i_1 + 1]))))) * (arr_59 [i_1 + 1]));
        }
    }
    for (unsigned long long int i_19 = 0; i_19 < 12; i_19 += 1) 
    {
        arr_73 [i_19] = ((/* implicit */int) arr_51 [i_19]);
        arr_74 [i_19] = ((/* implicit */int) (unsigned short)60672);
        var_46 *= ((/* implicit */unsigned int) ((unsigned char) ((short) ((short) (signed char)35))));
    }
    for (short i_20 = 1; i_20 < 8; i_20 += 2) 
    {
        var_47 = ((/* implicit */unsigned long long int) min((var_47), (((/* implicit */unsigned long long int) arr_60 [i_20 + 2]))));
        var_48 = ((/* implicit */int) max((var_48), (((((/* implicit */int) max((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_70 [i_20]))) != (arr_11 [i_20 + 1] [i_20 + 2] [i_20 + 1] [i_20 - 1]))), (arr_38 [i_20 - 1] [i_20 + 1] [i_20 + 2] [i_20 - 1])))) / (((/* implicit */int) arr_15 [(_Bool)1] [(_Bool)1]))))));
    }
    var_49 = ((/* implicit */int) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) 214858339)) && (((/* implicit */_Bool) var_6)))))))) >= (((((/* implicit */_Bool) 8100495255330088807LL)) ? (8089654349838628606ULL) : (((/* implicit */unsigned long long int) 255U))))));
    var_50 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (max((((/* implicit */long long int) 3505163834U)), (-1110952934997442968LL))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_10)) < (((/* implicit */int) var_5))))))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)63))) ^ (1ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) ((unsigned char) 18446744073709551614ULL))))))));
}
