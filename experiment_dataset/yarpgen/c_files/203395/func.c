/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203395
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203395 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203395
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
    var_12 |= ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_7))))), (min((((/* implicit */unsigned long long int) var_7)), (var_1)))))) ? ((+(((((/* implicit */_Bool) (signed char)-111)) ? (11415503610099302226ULL) : (11415503610099302230ULL))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (short)-22452)))) / (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (var_1))))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        /* LoopSeq 3 */
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((~(arr_2 [i_1]))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-2)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_0 [i_0])), (arr_2 [(unsigned short)7])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) 1479576545)))) : (((var_9) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))))) : (((((/* implicit */_Bool) min((((/* implicit */unsigned int) (_Bool)0)), (3386626844U)))) ? (arr_2 [i_1]) : (((/* implicit */unsigned long long int) ((arr_0 [i_1]) | (((/* implicit */int) (unsigned short)8821)))))))));
            var_14 = ((/* implicit */unsigned long long int) var_5);
            arr_4 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)61)) && (((/* implicit */_Bool) (short)19750))));
        }
        for (long long int i_2 = 0; i_2 < 18; i_2 += 4) /* same iter space */
        {
            arr_7 [i_2] [i_0] [i_0] = ((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned short)8821)), (-5848070456242690252LL)));
            var_15 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_0)) : (arr_0 [8LL]))), (((/* implicit */int) arr_1 [10ULL]))));
            var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (short)2644))))) / (((((/* implicit */_Bool) var_0)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))))))) : (((arr_2 [(_Bool)1]) << (((((/* implicit */int) (unsigned char)195)) - (135)))))));
            var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) ((unsigned long long int) (+(((/* implicit */int) arr_3 [i_2]))))))));
            var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) ((unsigned short) arr_0 [i_2])))));
        }
        for (long long int i_3 = 0; i_3 < 18; i_3 += 4) /* same iter space */
        {
            /* LoopNest 3 */
            for (short i_4 = 3; i_4 < 15; i_4 += 3) 
            {
                for (short i_5 = 0; i_5 < 18; i_5 += 4) 
                {
                    for (unsigned int i_6 = 1; i_6 < 17; i_6 += 2) 
                    {
                        {
                            var_19 = ((/* implicit */short) 5U);
                            var_20 = ((/* implicit */unsigned int) min((var_20), (((((/* implicit */_Bool) (+(((/* implicit */int) min((var_5), (((/* implicit */unsigned short) arr_18 [i_0])))))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))))) : (min((3386626844U), (4294967295U)))))));
                            var_21 = ((/* implicit */long long int) var_4);
                        }
                    } 
                } 
            } 
            arr_19 [i_0] |= ((_Bool) ((((/* implicit */int) (unsigned short)21144)) * (((/* implicit */int) (_Bool)0))));
            arr_20 [i_0] = ((/* implicit */unsigned long long int) arr_10 [i_3] [i_3] [i_0]);
        }
        var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) min((((/* implicit */long long int) (!(((/* implicit */_Bool) 18122518578819265994ULL))))), (9223372036854775807LL))))));
        var_23 = ((/* implicit */unsigned int) (~(min((((/* implicit */int) arr_18 [i_0])), (((((/* implicit */_Bool) arr_8 [i_0] [i_0] [(signed char)2])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_9 [i_0] [i_0]))))))));
    }
}
