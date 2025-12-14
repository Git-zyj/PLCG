/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243952
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243952 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243952
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
    var_14 *= ((/* implicit */unsigned int) max((((/* implicit */long long int) ((((/* implicit */int) var_2)) & ((~(((/* implicit */int) (short)19381))))))), (max((((var_0) + (((/* implicit */long long int) var_3)))), (var_9)))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (unsigned short i_1 = 3; i_1 < 14; i_1 += 3) 
        {
            {
                var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) ((long long int) (signed char)127)))) ? (((((/* implicit */_Bool) 742131026)) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) var_3)) <= (14833675554631582530ULL)))) : (((/* implicit */int) ((signed char) var_3))))) : (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) arr_3 [i_0] [i_0] [i_0])) : ((-(((/* implicit */int) arr_0 [(signed char)2]))))))));
                arr_4 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_2 [i_0] [i_1 + 1] [i_1])) == (((/* implicit */int) arr_2 [i_0] [i_0] [i_1])))) ? (((/* implicit */long long int) max((((/* implicit */int) var_7)), (var_3)))) : (arr_1 [i_0] [i_1 - 2])))) : (3613068519077969093ULL)));
                var_16 = ((/* implicit */signed char) -1235998339235719072LL);
                arr_5 [i_0] [i_1] = ((/* implicit */short) ((((((/* implicit */_Bool) -1235998339235719072LL)) ? (14833675554631582530ULL) : (3221225472ULL))) * (((/* implicit */unsigned long long int) ((((/* implicit */long long int) 3U)) / (-8136168059402908644LL))))));
                arr_6 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 14833675554631582530ULL)) ? (max((-8136168059402908644LL), (((var_5) / (((/* implicit */long long int) var_11)))))) : ((+((-(arr_1 [i_0] [i_0])))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        for (unsigned long long int i_3 = 1; i_3 < 16; i_3 += 2) 
        {
            for (unsigned int i_4 = 3; i_4 < 15; i_4 += 3) 
            {
                {
                    var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) ((((/* implicit */int) (((+((-9223372036854775807LL - 1LL)))) >= (-1235998339235719072LL)))) == ((~(((/* implicit */int) arr_11 [i_3 + 1] [i_3] [i_3 - 1] [i_3 - 1])))))))));
                    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) 3613068519077969086ULL)) ? (44798913344304508LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 0; i_5 < 17; i_5 += 2) 
                    {
                        for (unsigned short i_6 = 0; i_6 < 17; i_6 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned char) ((((((long long int) 9223372036854775792LL)) >= (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_3 + 1]))))) ? (((/* implicit */int) ((((((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))) / (3613068519077969084ULL))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)-68)) >= (((/* implicit */int) arr_9 [i_2] [i_2]))))))))) : (((/* implicit */int) arr_12 [i_2]))));
                                arr_19 [i_2] [i_3] [i_3] [i_4] [i_5] [i_6] = (i_3 % 2 == 0) ? (((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_13 [i_4 - 2] [i_4 - 2] [i_3])) >> (((/* implicit */int) arr_11 [i_4 - 3] [i_4 + 1] [i_4 - 2] [15LL]))))), (((((/* implicit */unsigned long long int) 44798913344304508LL)) + (3613068519077969086ULL)))))) : (((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_13 [i_4 - 2] [i_4 - 2] [i_3])) + (2147483647))) >> (((/* implicit */int) arr_11 [i_4 - 3] [i_4 + 1] [i_4 - 2] [15LL]))))), (((((/* implicit */unsigned long long int) 44798913344304508LL)) + (3613068519077969086ULL))))));
                                arr_20 [i_3] [i_5] [i_4] [i_3] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-86)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)57698))) : (3613068519077969084ULL)))) ? (((/* implicit */int) min((arr_18 [i_4 - 3] [(signed char)3] [i_4 - 1] [i_3 + 1]), (((/* implicit */unsigned short) (short)19368))))) : (((((/* implicit */_Bool) arr_17 [i_3] [(_Bool)1] [i_4 - 3] [i_3])) ? (((/* implicit */int) arr_17 [i_3] [i_4] [i_4 - 2] [i_3])) : (((/* implicit */int) arr_17 [i_3] [i_4] [i_4 - 3] [i_3]))))));
                                arr_21 [i_3] [i_3] [i_4] [i_3] = ((/* implicit */unsigned short) max((max((((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [12LL] [i_3]))) : (3613068519077969081ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)53320)) ? (((/* implicit */int) (signed char)-12)) : (((/* implicit */int) var_2))))))), (((/* implicit */unsigned long long int) arr_17 [i_6] [i_6] [i_6] [i_3]))));
                                var_20 = ((/* implicit */unsigned int) 2097152);
                            }
                        } 
                    } 
                    arr_22 [i_2] [i_2] [i_3] [i_3] = ((/* implicit */_Bool) ((min((((unsigned int) 2147483647U)), (((/* implicit */unsigned int) arr_15 [i_3])))) + (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_2] [i_2] [i_2] [i_2] [(short)8]))) >= (((((/* implicit */_Bool) (unsigned short)52056)) ? (3613068519077969085ULL) : (((/* implicit */unsigned long long int) 8136168059402908643LL))))))))));
                    arr_23 [i_3] [15LL] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_8 [i_4 + 1]))) >= (8136168059402908642LL)))), (max((3613068519077969081ULL), (((/* implicit */unsigned long long int) arr_12 [i_3 - 1]))))));
                }
            } 
        } 
    } 
}
