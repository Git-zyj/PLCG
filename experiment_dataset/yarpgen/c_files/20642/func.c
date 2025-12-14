/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20642
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20642 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20642
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
    var_17 = ((/* implicit */short) var_6);
    var_18 = ((/* implicit */short) ((unsigned short) var_9));
    /* LoopSeq 4 */
    for (unsigned short i_0 = 3; i_0 < 19; i_0 += 2) 
    {
        var_19 ^= ((/* implicit */unsigned int) ((min((arr_0 [(unsigned char)12] [i_0 - 1]), (arr_0 [i_0] [i_0 - 2]))) == ((-(arr_0 [i_0] [i_0 + 1])))));
        var_20 = ((/* implicit */short) (signed char)127);
        var_21 = ((/* implicit */unsigned char) (unsigned short)14);
    }
    for (short i_1 = 3; i_1 < 22; i_1 += 4) 
    {
        var_22 = ((/* implicit */_Bool) min((var_22), (((((unsigned int) (~(7157034455245801578LL)))) < (((/* implicit */unsigned int) ((((-477304351856681284LL) < (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1] [i_1 + 1]))))) ? (((/* implicit */int) max(((unsigned short)65521), (arr_5 [i_1] [i_1])))) : (((/* implicit */int) ((short) arr_5 [i_1] [i_1 - 3]))))))))));
        arr_6 [i_1] = ((/* implicit */signed char) ((_Bool) min((((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_1])) && (((/* implicit */_Bool) arr_4 [i_1]))))), (((268434432) - (((/* implicit */int) arr_5 [(_Bool)1] [(_Bool)1])))))));
        var_23 = ((/* implicit */signed char) min((((/* implicit */long long int) ((short) arr_4 [i_1]))), (-823032790565287066LL)));
    }
    for (long long int i_2 = 0; i_2 < 22; i_2 += 2) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_3 = 0; i_3 < 22; i_3 += 2) 
        {
            var_24 = (short)-22007;
            var_25 |= (-(((/* implicit */int) arr_10 [i_3] [i_2])));
            var_26 ^= ((/* implicit */long long int) ((-1670541203) < (((((/* implicit */int) ((((/* implicit */int) (unsigned short)14)) <= (((/* implicit */int) arr_10 [i_2] [i_2]))))) - (((/* implicit */int) (unsigned short)10))))));
            /* LoopSeq 4 */
            for (unsigned int i_4 = 0; i_4 < 22; i_4 += 2) 
            {
                arr_13 [(_Bool)1] [(signed char)0] [i_4] [(_Bool)1] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) min((arr_3 [i_3]), (((/* implicit */signed char) arr_10 [i_2] [i_3])))))) % (((long long int) arr_10 [i_2] [i_3]))));
                var_27 = ((/* implicit */unsigned int) (signed char)58);
                var_28 = ((/* implicit */_Bool) max((((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_5 [(signed char)1] [i_3]))) != (-1773912023301230814LL)))) << (((((((/* implicit */_Bool) arr_4 [10ULL])) ? (((/* implicit */int) arr_8 [i_2] [i_2])) : (((/* implicit */int) (short)(-32767 - 1))))) - (24872))))), (((/* implicit */int) ((((/* implicit */int) (signed char)127)) != (((/* implicit */int) (short)32767)))))));
                var_29 -= ((/* implicit */long long int) ((((((((/* implicit */int) arr_2 [i_3])) + (2147483647))) << (((((((/* implicit */int) arr_2 [i_3])) + (20783))) - (7))))) & (((((/* implicit */_Bool) (unsigned short)22)) ? (((/* implicit */int) arr_2 [i_2])) : (((/* implicit */int) arr_2 [i_3]))))));
            }
            for (short i_5 = 0; i_5 < 22; i_5 += 1) 
            {
                arr_17 [i_5] [i_5] [i_5] [i_2] = ((/* implicit */unsigned char) (((!((!(((/* implicit */_Bool) (unsigned short)6)))))) ? (((((/* implicit */int) arr_2 [i_2])) ^ (-1569006981))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_5] [8LL] [(short)8] [i_2])) ? (((/* implicit */int) arr_11 [i_2] [i_2] [i_5])) : (((/* implicit */int) arr_7 [i_2] [i_5]))))) ? (((/* implicit */int) arr_2 [i_2])) : (max((((/* implicit */int) arr_15 [i_2])), (-1670541203)))))));
                var_30 = ((/* implicit */signed char) min((var_30), (((/* implicit */signed char) ((short) min((((arr_9 [i_2] [i_3] [i_5]) && (arr_9 [i_2] [i_3] [6]))), (((arr_10 [i_2] [i_2]) && (((/* implicit */_Bool) arr_4 [i_3]))))))))));
            }
            for (long long int i_6 = 0; i_6 < 22; i_6 += 2) 
            {
                /* LoopSeq 2 */
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    var_31 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_6])) ? (((/* implicit */int) arr_2 [i_3])) : (((/* implicit */int) arr_15 [i_3]))))));
                    arr_22 [i_7] [i_7] = ((/* implicit */long long int) (+(((/* implicit */int) ((unsigned char) ((int) arr_11 [i_2] [i_2] [i_2]))))));
                }
                for (unsigned short i_8 = 0; i_8 < 22; i_8 += 2) 
                {
                    arr_26 [i_2] [i_2] = ((/* implicit */unsigned long long int) ((((-823032790565287066LL) + (9223372036854775807LL))) >> (((/* implicit */int) ((signed char) max(((short)-328), (((/* implicit */short) arr_7 [i_2] [i_2]))))))));
                    arr_27 [(short)19] [(short)19] [i_3] [(short)18] = ((/* implicit */signed char) (!(((/* implicit */_Bool) max((arr_23 [i_8] [(short)11] [i_6] [1] [i_2] [i_2]), (((/* implicit */long long int) ((arr_19 [i_2] [i_3] [i_3]) || (arr_19 [i_2] [i_6] [i_8])))))))));
                    var_32 = ((/* implicit */unsigned char) max((var_32), (((/* implicit */unsigned char) max((max((arr_24 [i_2] [i_3] [i_6] [i_8]), (arr_24 [(short)13] [i_3] [i_3] [i_2]))), (((/* implicit */long long int) ((arr_24 [i_2] [i_2] [i_2] [i_2]) == (arr_24 [i_2] [i_2] [i_6] [i_8])))))))));
                }
                arr_28 [i_2] [(signed char)17] [i_2] [i_6] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned short)65525))));
                arr_29 [(short)18] [i_3] = max((((((/* implicit */_Bool) ((long long int) (_Bool)1))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) 8728628752344038294LL)))) : (((long long int) arr_12 [i_2] [i_2] [i_3] [i_6])))), (((/* implicit */long long int) (+(max((((/* implicit */int) (unsigned char)95)), (268434437)))))));
            }
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                /* LoopSeq 1 */
                for (long long int i_10 = 0; i_10 < 22; i_10 += 2) 
                {
                    var_33 = arr_20 [i_2] [i_2] [i_3] [i_3] [i_9] [(unsigned char)11];
                    var_34 ^= ((((((((/* implicit */_Bool) (unsigned short)65521)) ? (16777216) : (((/* implicit */int) (_Bool)1)))) << ((((((~(((/* implicit */int) (_Bool)1)))) + (24))) - (22))))) | (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_25 [i_3] [i_9] [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_10] [i_10] [i_10]))) : (-477304351856681284LL))))));
                    arr_35 [i_10] = ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_32 [(unsigned char)3]))))) / (((/* implicit */int) ((((/* implicit */_Bool) -20)) || (((/* implicit */_Bool) arr_5 [i_2] [i_9])))))));
                    var_35 = ((/* implicit */int) max((var_35), ((~(((/* implicit */int) (signed char)85))))));
                    var_36 &= ((/* implicit */short) ((((/* implicit */_Bool) (+(arr_14 [i_2] [i_3] [i_9] [(short)8])))) ? (min((((/* implicit */int) max((arr_2 [i_3]), (((/* implicit */short) arr_11 [i_2] [i_2] [i_2]))))), (arr_18 [i_2] [i_2] [i_9] [i_10]))) : (((((/* implicit */_Bool) (~(arr_30 [i_2])))) ? (((((/* implicit */int) arr_9 [i_3] [(unsigned char)5] [(unsigned char)7])) >> (((/* implicit */int) arr_19 [i_10] [i_10] [(short)7])))) : ((~(((/* implicit */int) (_Bool)0))))))));
                }
                var_37 ^= ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) ((short) (_Bool)0)))))) ? ((~(((((/* implicit */_Bool) (short)-328)) ? (2161367439U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-346))))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */int) (signed char)-70)), (268434432)))) ? (((/* implicit */int) arr_3 [i_3])) : (((/* implicit */int) ((short) -487894310))))))));
                arr_36 [i_2] [i_2] [15LL] [i_9] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((signed char) (!((_Bool)1))))) ? (((((/* implicit */int) arr_11 [(unsigned short)9] [i_3] [i_2])) | (((/* implicit */int) arr_8 [i_3] [(_Bool)1])))) : ((+(((/* implicit */int) ((short) (signed char)-123)))))));
            }
        }
        /* vectorizable */
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
        {
            var_38 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_14 [0U] [i_11] [i_2] [i_2]))));
            arr_39 [16LL] [i_2] = (~(((/* implicit */int) (_Bool)0)));
            arr_40 [i_11] [i_2] [i_2] = ((int) arr_38 [i_11] [i_2] [i_2]);
        }
        var_39 *= ((/* implicit */short) ((_Bool) (signed char)60));
        var_40 = ((/* implicit */unsigned short) ((arr_20 [i_2] [i_2] [i_2] [i_2] [1U] [i_2]) >= ((~(((((/* implicit */long long int) ((/* implicit */int) arr_11 [i_2] [i_2] [i_2]))) & (4112819010014334538LL)))))));
    }
    for (signed char i_12 = 1; i_12 < 21; i_12 += 3) 
    {
        arr_44 [(unsigned short)14] [i_12] = ((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))));
        /* LoopSeq 1 */
        for (short i_13 = 0; i_13 < 24; i_13 += 3) 
        {
            var_41 -= ((/* implicit */long long int) (((-(((/* implicit */int) arr_5 [i_13] [i_13])))) > ((~(((/* implicit */int) ((((/* implicit */_Bool) 2666366647340048053LL)) && (((/* implicit */_Bool) (signed char)0)))))))));
            arr_47 [16] |= ((/* implicit */int) ((-1769087408) < ((~(((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_13])))))))));
        }
        var_42 = ((/* implicit */int) arr_2 [(signed char)0]);
    }
}
