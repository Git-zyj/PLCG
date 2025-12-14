/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236713
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236713 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236713
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 24; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 1; i_3 < 24; i_3 += 2) 
                    {
                        {
                            var_17 ^= (!(((/* implicit */_Bool) (unsigned short)4391)));
                            arr_10 [i_1] [i_1] [i_3] [i_3] = ((/* implicit */int) (-(min((14461277951660196249ULL), (5824611860970624318ULL)))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_4 = 0; i_4 < 25; i_4 += 3) 
                {
                    for (long long int i_5 = 1; i_5 < 24; i_5 += 1) 
                    {
                        {
                            arr_16 [i_0] [i_1 - 2] [i_5] [i_1] = ((/* implicit */short) (-(((max((arr_13 [11] [i_1 - 1] [i_4] [i_5]), (((/* implicit */unsigned long long int) arr_12 [i_0] [i_1] [i_4] [i_5 + 1])))) / (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)63)))))))));
                            var_18 = ((/* implicit */_Bool) 1149808831);
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    for (unsigned long long int i_7 = 1; i_7 < 22; i_7 += 2) 
                    {
                        for (long long int i_8 = 0; i_8 < 25; i_8 += 2) 
                        {
                            {
                                arr_24 [i_6] [i_1] [i_6] = arr_9 [i_0];
                                arr_25 [i_0] [i_6] [i_1] [i_7] [i_7] [i_7] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? ((~(((/* implicit */int) arr_17 [i_0] [i_6] [i_6] [i_7 + 3])))) : (((/* implicit */int) arr_12 [i_1 - 2] [i_6] [i_7 + 1] [i_8])))) | (((((1149808847) | (((/* implicit */int) arr_18 [i_8])))) << (((((/* implicit */int) (signed char)110)) >> (((-3369708019381648005LL) + (3369708019381648034LL)))))))));
                                arr_26 [i_6] [i_7] = ((((/* implicit */int) (unsigned char)24)) | (((/* implicit */int) (_Bool)1)));
                                arr_27 [i_0] [i_0] [i_1] [i_6] [i_6] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_0] [i_6] [i_7] [i_8])) ? (((/* implicit */int) arr_3 [i_8] [i_6])) : (((/* implicit */int) (short)-29863))))), (((((/* implicit */_Bool) 7LL)) ? (6614577408166780427ULL) : (((/* implicit */unsigned long long int) arr_11 [i_0] [i_1] [i_1] [i_7 + 1]))))))) ? ((+((+(((/* implicit */int) arr_3 [i_1] [i_7])))))) : (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) arr_18 [i_0])) : (((/* implicit */int) (short)31479))))) ? (((/* implicit */int) ((arr_9 [11LL]) && (((/* implicit */_Bool) arr_2 [i_0] [i_1 - 1] [i_6]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)53)))))))));
                                var_19 *= ((/* implicit */signed char) (((-(arr_2 [i_1 + 1] [i_7 + 3] [i_7 + 1]))) <= (((/* implicit */int) (!(((/* implicit */_Bool) -1489306239)))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    for (unsigned char i_10 = 0; i_10 < 25; i_10 += 3) 
                    {
                        {
                            arr_33 [i_9] [i_1 + 1] [i_9] [i_10] [(_Bool)1] = ((/* implicit */unsigned char) (((-((-(((/* implicit */int) (short)-32758)))))) | ((+(((/* implicit */int) (unsigned short)17302))))));
                            var_20 = ((/* implicit */signed char) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)24)) ? (((/* implicit */unsigned long long int) 1LL)) : (16852979484594459829ULL)))) ? (((-3666752399560742903LL) & (((/* implicit */long long int) ((/* implicit */int) (short)14545))))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)21))))), (((/* implicit */long long int) (((!(((/* implicit */_Bool) 2941278877U)))) || (((/* implicit */_Bool) ((((/* implicit */int) (short)18013)) - (((/* implicit */int) (_Bool)1))))))))));
                            var_21 = ((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_28 [i_0] [(short)23])))) == (max((arr_13 [i_1] [(short)13] [17LL] [i_0]), (((/* implicit */unsigned long long int) arr_18 [i_0])))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_22 [i_0] [i_1] [i_1 - 2] [i_9] [i_10])) ? ((-(((/* implicit */int) (unsigned short)65308)))) : (((/* implicit */int) (!((_Bool)1))))))) : (1593764589115091787ULL)));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_11 = 0; i_11 < 16; i_11 += 1) 
    {
        for (unsigned short i_12 = 1; i_12 < 13; i_12 += 4) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                {
                    for (int i_14 = 2; i_14 < 14; i_14 += 2) 
                    {
                        {
                            arr_46 [i_11] [0U] [i_11] [i_11] = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)4017))))) ? (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) 4198230282701932219LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (3511137206U)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)81)) ? (5) : (1149808831)))) ? (5662703485597045273ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)7936)) ? (((/* implicit */int) (signed char)-116)) : (((/* implicit */int) arr_3 [i_14 - 1] [i_11])))))))));
                            var_22 *= ((/* implicit */unsigned short) (!(((((((/* implicit */int) arr_0 [i_13])) != (((/* implicit */int) arr_3 [i_11] [i_12 + 2])))) || (((/* implicit */_Bool) arr_15 [i_11] [i_12 - 1] [i_14 + 1]))))));
                            arr_47 [i_11] [i_13] = ((/* implicit */long long int) ((((/* implicit */_Bool) (((-(0U))) * (((/* implicit */unsigned int) ((((/* implicit */int) (short)-31793)) * (((/* implicit */int) (signed char)0)))))))) ? (((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-96))) < (3446152315U))) || (((/* implicit */_Bool) (~(((/* implicit */int) (signed char)24)))))))) : ((+(((/* implicit */int) ((1714282698) < (((/* implicit */int) arr_0 [i_11])))))))));
                            arr_48 [i_11] [i_12 + 3] [i_13] [i_13] [i_14 - 2] = ((/* implicit */signed char) ((unsigned short) ((((/* implicit */long long int) 2144471830)) % (((-1318561017669939957LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)94))))))));
                            var_23 *= ((/* implicit */unsigned int) ((signed char) max(((-(((/* implicit */int) (short)13863)))), (((/* implicit */int) (_Bool)1)))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_15 = 0; i_15 < 16; i_15 += 1) 
                {
                    for (unsigned int i_16 = 1; i_16 < 13; i_16 += 2) 
                    {
                        {
                            var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)0))))) ? (min((((/* implicit */long long int) (_Bool)1)), (-1318561017669939980LL))) : (80480497652514073LL)))) ? (-80480497652514044LL) : (((/* implicit */long long int) ((/* implicit */int) arr_55 [i_16 + 1] [i_15] [i_12 - 1] [i_11])))));
                            var_25 = ((/* implicit */_Bool) arr_50 [i_11] [i_12] [i_11] [i_16]);
                            var_26 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 5002673004770511780ULL)) ? (0LL) : (((/* implicit */long long int) (-(((/* implicit */int) (signed char)2))))))))));
                            arr_56 [i_11] [i_12] [i_15] [i_11] = ((((((/* implicit */_Bool) (unsigned char)66)) && ((_Bool)1))) && (((/* implicit */_Bool) 1973056701824480475ULL)));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_17 = 1; i_17 < 14; i_17 += 2) 
                {
                    for (unsigned long long int i_18 = 0; i_18 < 16; i_18 += 4) 
                    {
                        {
                            var_27 = ((/* implicit */_Bool) (-((-((-(((/* implicit */int) (_Bool)1))))))));
                            var_28 = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((arr_30 [i_18] [i_17 - 1] [i_12] [i_11]) - (((/* implicit */long long int) arr_53 [i_12 - 1] [i_17 + 1] [i_18]))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) -42888698)) ? (((/* implicit */int) (short)0)) : (2089158675)))) : (arr_7 [i_17] [i_12] [i_11]))) >> (((min((3235968688026315601ULL), (((((/* implicit */_Bool) (unsigned short)15081)) ? (14947348386731483920ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))) - (3235968688026315600ULL)))));
                        }
                    } 
                } 
            }
        } 
    } 
}
