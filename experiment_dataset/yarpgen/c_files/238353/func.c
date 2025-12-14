/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238353
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238353 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238353
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
    var_12 = ((/* implicit */signed char) var_4);
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        var_13 = ((/* implicit */unsigned char) (short)15551);
        var_14 = max((((arr_0 [i_0]) >> (((((/* implicit */int) max((((/* implicit */unsigned short) var_9)), ((unsigned short)58651)))) - (65401))))), (((((((/* implicit */_Bool) (unsigned short)58651)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (arr_0 [i_0]))) + (min((arr_0 [i_0]), (((/* implicit */unsigned long long int) (_Bool)1)))))));
    }
    for (int i_1 = 0; i_1 < 24; i_1 += 3) /* same iter space */
    {
        var_15 = (-(arr_3 [i_1]));
        var_16 = ((/* implicit */long long int) max((((/* implicit */int) arr_2 [(unsigned char)16] [10U])), (((((/* implicit */_Bool) arr_2 [i_1] [i_1])) ? (((/* implicit */int) arr_2 [i_1] [i_1])) : (((/* implicit */int) arr_2 [i_1] [i_1]))))));
        var_17 = ((/* implicit */unsigned char) (-((~(((/* implicit */int) (short)-1))))));
    }
    for (int i_2 = 0; i_2 < 24; i_2 += 3) /* same iter space */
    {
        arr_7 [i_2] = ((/* implicit */_Bool) ((arr_5 [i_2] [i_2]) ? (((arr_3 [(_Bool)1]) << (((var_4) + (5577326062215019270LL))))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
        arr_8 [20ULL] = ((/* implicit */short) (~(((/* implicit */int) var_9))));
    }
    /* LoopSeq 3 */
    for (unsigned char i_3 = 3; i_3 < 23; i_3 += 3) /* same iter space */
    {
        var_18 = ((/* implicit */unsigned int) max((((long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)58662))) - (var_1)))), (((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_3]))) >= (var_2))))));
        var_19 = ((/* implicit */int) ((((var_1) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (var_2) : (var_10)))))) | (((var_5) << (((/* implicit */int) (_Bool)1))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_4 = 0; i_4 < 24; i_4 += 2) 
        {
            arr_15 [i_3] [i_4] [i_3] = ((/* implicit */long long int) ((unsigned long long int) ((var_11) % (((/* implicit */unsigned long long int) arr_9 [i_3] [i_4])))));
            var_20 = ((/* implicit */unsigned char) ((arr_9 [i_3] [i_3 - 3]) <= (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_3 - 3])))));
            arr_16 [i_3] = (unsigned short)18300;
            var_21 -= ((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))));
            arr_17 [i_4] [3LL] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_12 [(signed char)21] [(signed char)21])) ? (((/* implicit */int) (unsigned char)217)) : (((/* implicit */int) arr_2 [i_3 - 1] [(signed char)15]))));
        }
    }
    for (unsigned char i_5 = 3; i_5 < 23; i_5 += 3) /* same iter space */
    {
        var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_18 [i_5 - 2] [i_5])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_18 [i_5 - 1] [i_5])) ? (arr_18 [i_5 + 1] [i_5]) : (arr_18 [i_5 - 3] [i_5])))) : ((+(var_2)))));
        arr_21 [i_5] [i_5] = ((/* implicit */signed char) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((unsigned short) -1945034060))), ((~(var_0))))))));
        var_23 = ((/* implicit */int) ((((((/* implicit */_Bool) (-(var_2)))) ? (var_3) : (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)39))) - (var_2))))) & (((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1)))))));
        /* LoopSeq 4 */
        for (unsigned char i_6 = 0; i_6 < 24; i_6 += 4) /* same iter space */
        {
            var_24 -= ((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((((/* implicit */int) var_9)) + (2147483647))) << (((((/* implicit */int) arr_19 [i_6] [i_6])) - (39318)))))), (((((/* implicit */_Bool) ((long long int) (_Bool)0))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) arr_23 [i_6]))) : (var_10))) : (((/* implicit */long long int) ((((/* implicit */int) arr_11 [5ULL])) ^ (((/* implicit */int) arr_22 [i_6])))))))));
            var_25 -= ((((/* implicit */unsigned long long int) arr_18 [i_5] [i_6])) <= (max((((arr_20 [i_5 - 3]) >> (((((/* implicit */int) var_7)) + (147))))), (min((var_1), (((/* implicit */unsigned long long int) var_6)))))));
        }
        /* vectorizable */
        for (unsigned char i_7 = 0; i_7 < 24; i_7 += 4) /* same iter space */
        {
            var_26 = ((/* implicit */signed char) (~(var_10)));
            var_27 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (((_Bool)1) ? (12515991516706421967ULL) : (((/* implicit */unsigned long long int) var_10)))))));
        }
        for (unsigned char i_8 = 0; i_8 < 24; i_8 += 4) /* same iter space */
        {
            var_28 = ((/* implicit */_Bool) var_11);
            var_29 -= ((/* implicit */signed char) (+(((/* implicit */int) min(((unsigned short)61608), (((/* implicit */unsigned short) ((((/* implicit */int) var_6)) != (((/* implicit */int) (_Bool)1))))))))));
        }
        /* vectorizable */
        for (unsigned char i_9 = 0; i_9 < 24; i_9 += 4) /* same iter space */
        {
            var_30 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) var_2))) ? (((((/* implicit */_Bool) arr_3 [i_9])) ? (var_4) : (((/* implicit */long long int) arr_3 [i_9])))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)6))))))));
            arr_32 [i_5] [0U] = ((/* implicit */short) ((((/* implicit */int) arr_22 [i_5])) - (((/* implicit */int) arr_22 [i_5]))));
            /* LoopNest 2 */
            for (short i_10 = 2; i_10 < 23; i_10 += 2) 
            {
                for (unsigned short i_11 = 1; i_11 < 20; i_11 += 3) 
                {
                    {
                        arr_38 [i_5] [i_5] [i_5] [i_10] [i_11] = ((/* implicit */signed char) ((((/* implicit */int) ((var_3) <= (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_5 - 2] [i_5] [i_10 - 1])))))) | (((/* implicit */int) var_9))));
                        var_31 = ((/* implicit */_Bool) arr_37 [(_Bool)1] [4ULL] [i_10]);
                        var_32 = ((/* implicit */unsigned char) var_2);
                        arr_39 [i_11] [(short)12] [i_5] [i_11] [(unsigned char)3] = ((arr_36 [i_5] [i_10 + 1] [i_10 + 1]) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_9] [i_9] [(unsigned short)2]))));
                    }
                } 
            } 
            arr_40 [i_5] = ((/* implicit */signed char) (-(var_2)));
        }
        /* LoopSeq 4 */
        for (long long int i_12 = 0; i_12 < 24; i_12 += 2) /* same iter space */
        {
            var_33 = ((/* implicit */unsigned short) (-(((/* implicit */int) (!(((((/* implicit */_Bool) arr_11 [i_5])) || (((/* implicit */_Bool) arr_42 [i_5])))))))));
            arr_43 [i_5] = ((/* implicit */unsigned int) var_8);
            arr_44 [i_5] [4ULL] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (~(var_2)))) ? (((/* implicit */int) arr_14 [(signed char)7] [i_12] [(signed char)7])) : (-1945034086))) & (((/* implicit */int) arr_27 [(unsigned char)23] [i_5] [(unsigned char)23]))));
            var_34 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (~((~(var_2)))))) % (min((((((/* implicit */_Bool) (short)6)) ? (var_1) : (((/* implicit */unsigned long long int) 17592186044415LL)))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)107)))))))));
        }
        for (long long int i_13 = 0; i_13 < 24; i_13 += 2) /* same iter space */
        {
            var_35 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) - (min((max((1792897102899920960ULL), (((/* implicit */unsigned long long int) (unsigned short)65514)))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)107)) << (((3424866549U) - (3424866546U))))))))));
            var_36 = ((/* implicit */signed char) max((var_36), (((/* implicit */signed char) -5986466091172905986LL))));
            arr_47 [i_5] [5LL] [i_5] = ((/* implicit */_Bool) var_0);
            var_37 = ((/* implicit */short) ((((/* implicit */_Bool) arr_26 [(short)20] [i_13])) ? (((((/* implicit */int) arr_26 [i_5 - 1] [(_Bool)1])) | (((/* implicit */int) arr_26 [i_5 - 2] [11ULL])))) : (((((/* implicit */_Bool) arr_6 [i_5 - 3])) ? (((/* implicit */int) arr_35 [i_5] [i_5] [i_5] [(_Bool)1])) : (((/* implicit */int) max(((unsigned short)7), (arr_6 [i_5]))))))));
        }
        for (long long int i_14 = 0; i_14 < 24; i_14 += 2) /* same iter space */
        {
            arr_50 [i_14] [i_5] [i_14] = ((/* implicit */unsigned int) min((((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_5] [i_14]))) * (max((((/* implicit */long long int) arr_46 [i_5])), (var_3))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) 1355799101)))))));
            var_38 -= ((/* implicit */signed char) (unsigned char)235);
        }
        /* vectorizable */
        for (unsigned long long int i_15 = 3; i_15 < 20; i_15 += 1) 
        {
            arr_53 [i_5 + 1] [i_5] = ((/* implicit */unsigned long long int) ((unsigned int) arr_36 [i_5] [(signed char)20] [i_15]));
            arr_54 [i_5] = ((((/* implicit */int) (signed char)1)) & (((/* implicit */int) arr_37 [i_5 - 2] [i_15 - 2] [4U])));
            /* LoopSeq 1 */
            for (unsigned short i_16 = 0; i_16 < 24; i_16 += 4) 
            {
                var_39 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_4))));
                arr_58 [i_5] [i_5] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (signed char)-107)) && (((/* implicit */_Bool) var_10)))))) - (var_0)));
                /* LoopNest 2 */
                for (long long int i_17 = 0; i_17 < 24; i_17 += 3) 
                {
                    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                    {
                        {
                            var_40 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) (unsigned short)34194)) ? (((/* implicit */long long int) 2053041682)) : (var_2)))));
                            arr_67 [i_5] [i_5] [i_5] [i_17] [i_5] [i_18] = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_14 [i_5 - 2] [i_15 - 3] [i_16]))));
                            arr_68 [(signed char)9] [17LL] [i_16] [17LL] [i_5] [i_16] [17LL] = ((/* implicit */unsigned short) ((long long int) ((((/* implicit */_Bool) 4696748134489332185ULL)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-53))))));
                            var_41 = ((/* implicit */unsigned long long int) (+(-1115886321)));
                        }
                    } 
                } 
            }
            var_42 -= ((/* implicit */long long int) (((_Bool)0) ? (((/* implicit */int) arr_23 [(short)0])) : (((/* implicit */int) arr_46 [(signed char)12]))));
        }
    }
    for (unsigned char i_19 = 3; i_19 < 23; i_19 += 3) /* same iter space */
    {
        var_43 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) (+(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_19] [3U] [i_19]))) % (arr_25 [i_19]))))))));
        arr_71 [i_19] = (-(((((/* implicit */_Bool) var_9)) ? (13548125964274417994ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_19]))))));
    }
    var_44 = ((/* implicit */long long int) ((((5930752557003129648ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_2)))))) >> (((((((/* implicit */_Bool) var_5)) ? (max((var_4), (var_3))) : (((/* implicit */long long int) ((/* implicit */int) var_6))))) + (252344944608816940LL)))));
    var_45 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) var_3)), (max((((/* implicit */unsigned long long int) min((((/* implicit */short) (_Bool)1)), ((short)-16383)))), (var_11)))));
}
