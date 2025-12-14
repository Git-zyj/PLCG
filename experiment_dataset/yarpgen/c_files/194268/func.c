/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194268
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194268 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194268
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
    var_10 = ((/* implicit */signed char) ((unsigned long long int) (_Bool)0));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) max((max((((/* implicit */unsigned long long int) min((arr_0 [10U]), ((unsigned short)5278)))), (((unsigned long long int) arr_1 [i_0])))), (((/* implicit */unsigned long long int) (signed char)101))));
        var_11 = ((/* implicit */unsigned int) min((var_11), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (signed char)-25)) : (((/* implicit */int) (signed char)-101))))) ? (min((((/* implicit */int) min((((/* implicit */short) (signed char)-102)), ((short)32757)))), (((((/* implicit */_Bool) 2305840810190438400ULL)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0])))))) : (((/* implicit */int) (signed char)-12)))))));
        arr_3 [i_0] = ((/* implicit */_Bool) max((((2305840810190438400ULL) << ((((+(((/* implicit */int) var_5)))) + (159))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (1799030169137615336LL) : (((/* implicit */long long int) ((/* implicit */int) (!((_Bool)1))))))))));
    }
    var_12 = min((((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)101))) & (var_7))))), (((((/* implicit */_Bool) ((((/* implicit */int) (short)-21072)) | (((/* implicit */int) (signed char)-25))))) ? (8832869465853497386ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) & (((/* implicit */int) var_5))))))));
    /* LoopNest 2 */
    for (short i_1 = 1; i_1 < 17; i_1 += 3) 
    {
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 2) 
                {
                    var_13 ^= ((/* implicit */int) max(((-(7250900652849946902ULL))), (((((/* implicit */_Bool) max((arr_6 [(short)9] [(unsigned short)6]), (((/* implicit */unsigned long long int) (short)24032))))) ? (((((/* implicit */_Bool) arr_7 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)115))) : (3ULL))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))) : (9457374656639369644ULL)))))));
                    var_14 = ((/* implicit */signed char) ((((((/* implicit */_Bool) (signed char)100)) ? (((/* implicit */int) (short)-9048)) : (((/* implicit */int) var_9)))) & (((/* implicit */int) (unsigned short)14575))));
                    var_15 = ((/* implicit */unsigned char) arr_10 [(_Bool)1] [i_2] [i_3]);
                }
                for (unsigned char i_4 = 0; i_4 < 18; i_4 += 2) /* same iter space */
                {
                    arr_13 [10ULL] |= ((/* implicit */unsigned long long int) max((((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_8 [(_Bool)1] [i_2])) : (((/* implicit */int) (signed char)-109)))) * ((~(((/* implicit */int) var_5)))))), (((/* implicit */int) ((unsigned char) max((14140366201655413736ULL), (((/* implicit */unsigned long long int) (_Bool)1))))))));
                    var_16 = ((/* implicit */short) max((((((/* implicit */_Bool) max((arr_4 [i_4] [(short)9]), (((/* implicit */unsigned long long int) arr_8 [i_1 + 1] [i_2]))))) ? (((/* implicit */unsigned long long int) var_8)) : (arr_4 [i_1] [i_2]))), (((/* implicit */unsigned long long int) ((((_Bool) var_4)) ? (((/* implicit */int) min(((unsigned short)41819), (((/* implicit */unsigned short) var_9))))) : (((/* implicit */int) var_4)))))));
                    arr_14 [i_1] [i_2] [i_4] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_7 [i_1 + 1]), (arr_7 [i_1 + 1])))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_1 + 1]))) / (arr_4 [i_1 + 1] [i_1 + 1]))) : ((-(9457374656639369646ULL)))));
                    var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) (!((((!(((/* implicit */_Bool) (signed char)124)))) && (((/* implicit */_Bool) 1799030169137615322LL)))))))));
                }
                for (unsigned char i_5 = 0; i_5 < 18; i_5 += 2) /* same iter space */
                {
                    arr_17 [i_1] [i_5] [(short)4] [(unsigned short)2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) min(((short)16256), (((/* implicit */short) (signed char)-101)))))) ? (arr_15 [i_1] [i_2] [i_2] [i_5]) : (((((/* implicit */int) arr_9 [i_1 + 1] [i_2] [i_5])) ^ (((/* implicit */int) ((unsigned short) var_0)))))));
                    /* LoopNest 2 */
                    for (unsigned char i_6 = 2; i_6 < 15; i_6 += 2) 
                    {
                        for (long long int i_7 = 0; i_7 < 18; i_7 += 1) 
                        {
                            {
                                var_18 *= ((/* implicit */unsigned char) (~(9159392620371895169ULL)));
                                var_19 = ((/* implicit */unsigned char) ((signed char) max((var_6), (((/* implicit */unsigned long long int) arr_9 [i_6 - 2] [i_1 - 1] [i_1 - 1])))));
                                arr_23 [i_7] [i_2] [i_5] [i_6] [(short)17] [17U] = ((/* implicit */unsigned long long int) max((((long long int) (_Bool)1)), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) 12)) : (8591043155676864239LL)))));
                            }
                        } 
                    } 
                }
                arr_24 [i_1 + 1] [(signed char)15] = ((((((((/* implicit */int) (signed char)-114)) ^ (-1514719175))) <= (((/* implicit */int) ((((/* implicit */_Bool) 20ULL)) && (arr_9 [i_1] [i_2] [i_1])))))) ? (((((/* implicit */_Bool) max((288230376149614592LL), (9223372036854775807LL)))) ? (arr_11 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_1 + 1] [i_1 - 1]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_16 [i_1] [13ULL])))));
                /* LoopSeq 1 */
                for (unsigned short i_8 = 0; i_8 < 18; i_8 += 1) 
                {
                    arr_28 [(_Bool)1] [i_8] [i_8] [(signed char)14] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) (short)-4433)) ? (((/* implicit */int) var_0)) : (arr_15 [i_1 + 1] [3U] [i_1 - 1] [1]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */short) (signed char)-1)), (arr_22 [i_1 + 1] [12ULL] [(_Bool)1] [i_1 - 1] [i_8]))))) : (var_7)));
                    var_20 = ((unsigned short) min((((/* implicit */int) arr_26 [i_1 + 1] [i_1 - 1] [i_1 - 1])), (((((/* implicit */_Bool) 8194160522930416131ULL)) ? (((/* implicit */int) arr_22 [i_1 + 1] [i_2] [(_Bool)1] [i_1 - 1] [i_1])) : (((/* implicit */int) arr_7 [i_2]))))));
                }
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned long long int) max((var_21), (((unsigned long long int) ((((/* implicit */_Bool) (+((-9223372036854775807LL - 1LL))))) ? (var_6) : (((/* implicit */unsigned long long int) ((288230376149614604LL) % (8203161818283197028LL)))))))));
}
