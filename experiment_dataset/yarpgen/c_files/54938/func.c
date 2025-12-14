/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54938
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54938 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54938
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
    for (short i_0 = 1; i_0 < 13; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */short) (-(((/* implicit */int) min((arr_0 [i_0 - 1] [i_0 + 1]), (arr_0 [i_0 + 1] [i_0 - 1]))))));
        var_11 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((short) max((arr_1 [i_0] [i_0]), (((/* implicit */int) (unsigned short)54672))))))));
    }
    for (unsigned char i_1 = 0; i_1 < 13; i_1 += 2) 
    {
        /* LoopSeq 3 */
        for (signed char i_2 = 0; i_2 < 13; i_2 += 4) /* same iter space */
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned short i_3 = 1; i_3 < 12; i_3 += 1) 
            {
                var_12 = ((/* implicit */long long int) arr_8 [i_3 - 1] [i_3 - 1] [i_3 - 1]);
                arr_11 [i_3 + 1] [i_2] [i_2] [9LL] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)25)) ? (((/* implicit */int) arr_10 [i_3] [i_3 + 1] [(unsigned char)6] [(unsigned char)6])) : (((/* implicit */int) arr_8 [i_3 + 1] [i_3 - 1] [i_1]))));
            }
            var_13 = ((/* implicit */unsigned long long int) 8656504751660954346LL);
            var_14 = ((/* implicit */unsigned char) (+(((/* implicit */int) max((arr_10 [i_1] [i_1] [i_2] [i_2]), (((/* implicit */short) (unsigned char)121)))))));
            /* LoopSeq 2 */
            for (unsigned long long int i_4 = 0; i_4 < 13; i_4 += 3) 
            {
                arr_15 [i_1] [i_4] [i_1] = ((/* implicit */unsigned char) min((min((arr_6 [i_4]), (((/* implicit */unsigned long long int) 1)))), (((/* implicit */unsigned long long int) ((unsigned int) (unsigned char)248)))));
                var_15 ^= ((/* implicit */unsigned long long int) 980748266U);
                var_16 = ((/* implicit */signed char) (!(((/* implicit */_Bool) 15533415863167442569ULL))));
            }
            /* vectorizable */
            for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
            {
                /* LoopSeq 2 */
                for (signed char i_6 = 2; i_6 < 12; i_6 += 3) 
                {
                    arr_23 [i_1] = ((/* implicit */_Bool) 5770319104027695985LL);
                    var_17 ^= ((/* implicit */unsigned short) (short)-3356);
                    var_18 = ((((/* implicit */_Bool) (unsigned char)236)) ? (((/* implicit */int) arr_4 [i_5 - 1])) : (((/* implicit */int) arr_5 [i_5 - 1] [i_5 - 1])));
                    arr_24 [(_Bool)1] [i_5] [i_6] = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_10 [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_6 + 1]))));
                    arr_25 [i_1] [i_1] [i_5 - 1] [i_6 - 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_6] [i_5 - 1] [i_6] [i_5 - 1])) ? (((/* implicit */int) arr_12 [i_2] [i_5 - 1])) : (((/* implicit */int) (unsigned short)60504))));
                }
                for (short i_7 = 0; i_7 < 13; i_7 += 3) 
                {
                    var_19 += ((/* implicit */unsigned short) ((unsigned long long int) arr_20 [i_1] [i_1] [i_5 - 1] [i_7] [i_1]));
                    arr_29 [i_7] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_9 [i_2]))));
                    var_20 = ((/* implicit */unsigned char) (~(arr_22 [i_5] [i_5 - 1] [i_5] [i_5] [8ULL] [i_5 - 1])));
                    var_21 = ((/* implicit */short) (((_Bool)1) ? (((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)20142))))) : (arr_27 [i_1] [i_1] [i_1] [i_7] [(unsigned short)2])));
                }
                arr_30 [i_1] = ((/* implicit */signed char) (-(18446744073709551615ULL)));
                var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) (+(((/* implicit */int) ((signed char) 1961002921))))))));
            }
        }
        for (signed char i_8 = 0; i_8 < 13; i_8 += 4) /* same iter space */
        {
            var_23 = ((/* implicit */unsigned int) max((((/* implicit */long long int) max(((unsigned char)197), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)102)))))))), (min((((/* implicit */long long int) arr_14 [i_1] [i_1] [i_8] [i_8])), ((+(-7423484408514254651LL)))))));
            var_24 ^= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) arr_19 [i_1] [i_8] [i_8]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1)))) : (min((14332455033019992307ULL), (((/* implicit */unsigned long long int) -774342340002614789LL)))))))));
        }
        for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
        {
            arr_38 [(short)11] [i_9 - 1] = ((/* implicit */unsigned short) max((((/* implicit */long long int) max((arr_22 [i_9 - 1] [i_9 - 1] [i_9 - 1] [i_9 - 1] [i_9 - 1] [i_9 - 1]), (((/* implicit */unsigned int) (unsigned char)158))))), (-5206983124208979411LL)));
            /* LoopSeq 3 */
            /* vectorizable */
            for (signed char i_10 = 4; i_10 < 10; i_10 += 3) 
            {
                arr_41 [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) (-(((/* implicit */int) ((unsigned short) 18446744073709551610ULL)))));
                /* LoopSeq 1 */
                for (short i_11 = 0; i_11 < 13; i_11 += 1) 
                {
                    arr_45 [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-121)) ? ((+(arr_6 [i_11]))) : (((((/* implicit */_Bool) (signed char)-99)) ? (18446744073709551607ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-88)))))));
                    arr_46 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */short) (+(((/* implicit */int) ((_Bool) -2091674553)))));
                    var_25 = ((/* implicit */long long int) (+(((/* implicit */int) (short)20213))));
                    /* LoopSeq 3 */
                    for (unsigned int i_12 = 2; i_12 < 12; i_12 += 2) 
                    {
                        var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) (short)27208))));
                        var_27 ^= ((((/* implicit */_Bool) ((int) arr_4 [i_1]))) ? (((/* implicit */int) arr_49 [i_9 - 1] [i_9 - 1] [i_9 - 1] [i_9 - 1] [i_9 - 1] [i_9 - 1] [i_9 - 1])) : (((/* implicit */int) (unsigned short)35357)));
                    }
                    for (unsigned int i_13 = 0; i_13 < 13; i_13 += 3) 
                    {
                        arr_54 [i_1] [i_1] [i_10] [i_10] [i_1] |= ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)238))));
                        var_28 = ((/* implicit */short) (-(0LL)));
                        arr_55 [i_13] [i_9] [i_9] [i_9] [i_9] [i_9] = ((/* implicit */signed char) arr_6 [i_10 - 1]);
                        var_29 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_22 [i_9] [i_9 - 1] [i_9] [i_9] [(short)2] [i_9]))));
                    }
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                    {
                        var_30 = ((/* implicit */unsigned char) arr_16 [i_10 - 2] [i_10 - 2] [i_10 - 1] [i_10]);
                        var_31 = ((/* implicit */signed char) (-9223372036854775807LL - 1LL));
                        var_32 = ((/* implicit */short) (unsigned char)255);
                    }
                }
                var_33 &= ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-125))));
            }
            for (unsigned char i_15 = 4; i_15 < 11; i_15 += 2) 
            {
                arr_60 [2] [i_9 - 1] = ((/* implicit */signed char) -1578770145);
                arr_61 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */short) max((-700547739), (((/* implicit */int) (unsigned char)47))));
            }
            for (_Bool i_16 = 1; i_16 < 1; i_16 += 1) 
            {
                arr_64 [i_1] [1] [i_16] [i_16] = ((/* implicit */_Bool) max((((/* implicit */long long int) min((((/* implicit */unsigned short) (short)16881)), ((unsigned short)65535)))), (arr_2 [i_1])));
                var_34 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (+(max((((/* implicit */unsigned int) arr_39 [(unsigned short)4] [i_9] [i_9 - 1] [i_9])), (arr_22 [i_1] [11LL] [(short)9] [i_1] [i_1] [i_1]))))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned long long int i_17 = 0; i_17 < 13; i_17 += 3) 
                {
                    arr_68 [i_1] [(short)1] [i_17] [i_17] [i_17] = ((/* implicit */short) (-(0ULL)));
                    var_35 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_63 [i_9 - 1] [i_9 - 1] [i_16 - 1] [i_16 - 1]))));
                }
                for (signed char i_18 = 0; i_18 < 13; i_18 += 3) 
                {
                    var_36 *= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(arr_27 [i_9 - 1] [10LL] [i_9 - 1] [i_1] [i_16 - 1]))))));
                    var_37 *= ((/* implicit */int) min((min((((/* implicit */unsigned short) max((((/* implicit */short) (unsigned char)255)), (arr_56 [i_1] [i_9] [i_16 - 1] [i_16] [i_18])))), (arr_71 [i_1] [i_1] [i_1] [i_1] [i_1]))), (min((max((((/* implicit */unsigned short) (signed char)-70)), ((unsigned short)33504))), (((/* implicit */unsigned short) arr_12 [i_9 - 1] [i_9 - 1]))))));
                }
                var_38 *= (!((_Bool)0));
                arr_73 [i_1] [i_1] [i_1] [4] = max((((/* implicit */int) arr_13 [i_1] [i_9] [i_9])), (16777184));
            }
            var_39 &= ((/* implicit */unsigned char) -137608348);
            var_40 *= ((/* implicit */short) min(((-(3113813977977111252ULL))), (((/* implicit */unsigned long long int) (+(min((((/* implicit */int) (_Bool)0)), (-1573211893))))))));
            arr_74 [i_9] = min(((unsigned short)7959), (((/* implicit */unsigned short) (unsigned char)155)));
        }
        var_41 = ((/* implicit */short) (+(2337574763U)));
        arr_75 [i_1] = ((/* implicit */unsigned char) 16777216);
    }
    for (unsigned char i_19 = 0; i_19 < 16; i_19 += 3) 
    {
        var_42 = ((/* implicit */unsigned int) max((((/* implicit */int) ((unsigned short) (-(((/* implicit */int) (short)-26206)))))), (max((((/* implicit */int) (unsigned short)65535)), ((~(((/* implicit */int) (_Bool)1))))))));
        /* LoopSeq 1 */
        for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
        {
            arr_81 [i_19] [i_20] = ((/* implicit */unsigned int) (~((~(((/* implicit */int) (_Bool)1))))));
            var_43 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min(((~(((/* implicit */int) (unsigned char)230)))), (-1986994021)))) ? (((/* implicit */int) ((signed char) 5522258U))) : (((/* implicit */int) (!((!(((/* implicit */_Bool) 700503089)))))))));
            arr_82 [i_19] [i_19] [i_19] = ((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)32640))));
        }
        arr_83 [i_19] [i_19] = ((/* implicit */unsigned char) (~(max((-834668671), (((/* implicit */int) (signed char)-16))))));
    }
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_21 = 2; i_21 < 20; i_21 += 2) 
    {
        arr_86 [(signed char)20] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_85 [i_21 + 3]))));
        arr_87 [i_21] [i_21] = ((/* implicit */unsigned char) (short)32767);
        var_44 -= ((/* implicit */_Bool) (-(4274354609U)));
    }
    for (short i_22 = 0; i_22 < 19; i_22 += 3) 
    {
        arr_91 [i_22] = ((/* implicit */int) max((((/* implicit */long long int) ((int) 4507370335392375172LL))), (8331212218446695534LL)));
        arr_92 [i_22] = ((/* implicit */unsigned short) (~(((/* implicit */int) (!(((/* implicit */_Bool) -8190704272636136455LL)))))));
        var_45 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)45))))), (6162995828852067233ULL)));
    }
    for (signed char i_23 = 0; i_23 < 14; i_23 += 2) 
    {
        var_46 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_93 [(short)1])))))))), (arr_77 [i_23])));
        arr_97 [i_23] = ((/* implicit */unsigned int) (+(min((max((-5909391389380404595LL), (((/* implicit */long long int) (_Bool)0)))), (((/* implicit */long long int) (unsigned char)82))))));
        var_47 = max((((/* implicit */unsigned int) min(((unsigned char)227), (((/* implicit */unsigned char) (_Bool)1))))), (((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)120))) : (483115373U))));
        var_48 = ((/* implicit */unsigned char) (+(-234096972)));
    }
}
