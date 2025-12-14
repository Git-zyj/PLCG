/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248634
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248634 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248634
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
    var_14 = ((/* implicit */short) ((long long int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) -1435289244)) + (0ULL)))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                arr_5 [i_1] = (((~(((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) | (18446744073709551612ULL))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))));
                arr_6 [i_1] = ((/* implicit */_Bool) ((unsigned long long int) arr_1 [i_0]));
                var_15 = ((/* implicit */signed char) ((short) ((((/* implicit */_Bool) arr_3 [i_1] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)2047))) : (21ULL))));
                var_16 = ((/* implicit */unsigned short) var_9);
                var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-30)) & (((/* implicit */int) arr_0 [i_0]))))) ? ((-(((/* implicit */int) arr_1 [i_0])))) : (((/* implicit */int) arr_4 [i_0] [i_1]))))) ? (((((((/* implicit */_Bool) arr_2 [i_1])) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)2045))))) / (((/* implicit */unsigned int) ((/* implicit */int) min((arr_0 [i_0]), (((/* implicit */unsigned short) (short)31936)))))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_0]))))))));
            }
        } 
    } 
    var_18 &= ((/* implicit */unsigned int) ((max((((/* implicit */long long int) ((((((/* implicit */int) var_11)) + (2147483647))) >> (0LL)))), (var_3))) & (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (short)2047))))));
    /* LoopNest 3 */
    for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 3) 
    {
        for (signed char i_3 = 0; i_3 < 12; i_3 += 4) 
        {
            for (short i_4 = 3; i_4 < 11; i_4 += 3) 
            {
                {
                    arr_16 [i_2] [i_3] [i_4] [i_3] &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)0))))) ? (max((((/* implicit */long long int) arr_2 [i_4])), (var_3))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_14 [i_2] [i_3])) ? (((/* implicit */int) (short)17978)) : (((/* implicit */int) var_9)))))))) ? (min((((/* implicit */long long int) (~(arr_3 [i_3] [i_3])))), (((long long int) (unsigned char)255)))) : (((/* implicit */long long int) max((((((/* implicit */_Bool) var_7)) ? (-241820657) : (((/* implicit */int) var_6)))), (((/* implicit */int) ((-2117230199088081068LL) <= (((/* implicit */long long int) 2147483647))))))))));
                    arr_17 [i_2] = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_4 [i_2] [i_2])) && (((/* implicit */_Bool) 14265897274614586504ULL)))), (((((/* implicit */_Bool) -7288509994535906753LL)) || (((/* implicit */_Bool) arr_11 [i_4 + 1] [(_Bool)0]))))));
                    /* LoopNest 2 */
                    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                    {
                        for (signed char i_6 = 1; i_6 < 10; i_6 += 4) 
                        {
                            {
                                arr_22 [i_2] [i_2] [i_4 - 3] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((-8493285727720509089LL), (arr_18 [i_3] [i_4] [i_4] [i_4 + 1] [i_5] [i_5])))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_2] [i_2] [i_2] [i_4 - 3] [i_6 + 2]))) >= (var_8)))) : (((/* implicit */int) min((((/* implicit */unsigned char) (signed char)-126)), (arr_21 [i_3] [i_4 - 2] [i_4] [i_4 - 2] [i_6] [i_6]))))));
                                var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) 18446744073709551612ULL))));
                                var_20 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_9 [i_6] [i_3])) ^ (arr_3 [i_2] [i_2]))))));
                                var_21 ^= ((/* implicit */unsigned char) max((max((((/* implicit */long long int) arr_21 [i_4 - 2] [i_4] [i_4 - 2] [i_4] [i_5 - 1] [i_6 + 1])), (arr_18 [i_2] [i_3] [(unsigned short)5] [i_5] [i_6] [i_2]))), (((/* implicit */long long int) arr_8 [i_2] [i_2]))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
