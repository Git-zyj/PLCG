/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221760
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221760 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221760
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
    var_18 = ((/* implicit */signed char) var_14);
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            for (long long int i_2 = 1; i_2 < 11; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (signed char i_3 = 2; i_3 < 12; i_3 += 2) 
                    {
                        var_19 = ((/* implicit */short) ((((/* implicit */_Bool) var_0)) ? (-1593372431) : (((/* implicit */int) (signed char)0))));
                        arr_16 [i_0] [i_1] [i_1] [i_2] [i_3] &= ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4438051125474046919ULL)) ? (((/* implicit */unsigned int) -1593372437)) : (arr_6 [i_0] [i_3])))) > (11504719684327353479ULL)));
                        var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (_Bool)0))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_1] [(unsigned char)13])) ? (((/* implicit */long long int) arr_6 [i_1] [5LL])) : (268435455LL))))));
                    }
                    arr_17 [i_0] [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 256280198)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_2))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) (short)0)) - (((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_2]))))) ? (((((/* implicit */_Bool) arr_10 [(signed char)8] [(signed char)8] [i_0])) ? (((/* implicit */int) arr_15 [i_0] [i_1] [i_1] [i_2])) : (((/* implicit */int) var_3)))) : (arr_4 [i_0] [i_1] [i_1]))) : (((((((/* implicit */int) var_15)) & (((/* implicit */int) (signed char)124)))) | (((/* implicit */int) (signed char)124))))));
                }
            } 
        } 
        arr_18 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((-205261438) ^ (((/* implicit */int) var_13)))) | (-1593372431)))) ? (((593182030) + (((/* implicit */int) var_7)))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_15 [i_0] [i_0] [i_0] [(short)2]))))) ? (((arr_0 [i_0] [i_0]) ^ (((/* implicit */int) (unsigned short)61822)))) : (arr_4 [i_0] [i_0] [i_0])))));
        var_21 = (i_0 % 2 == 0) ? (((/* implicit */unsigned char) (((((_Bool)0) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_15 [i_0] [i_0] [i_0] [i_0])))) >> (((((((/* implicit */int) (signed char)11)) | (arr_4 [i_0] [i_0] [i_0]))) + (782420080)))))) : (((/* implicit */unsigned char) (((((_Bool)0) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_15 [i_0] [i_0] [i_0] [i_0])))) >> (((((((((/* implicit */int) (signed char)11)) | (arr_4 [i_0] [i_0] [i_0]))) + (782420080))) - (1343919526))))));
    }
    for (unsigned int i_4 = 3; i_4 < 8; i_4 += 2) 
    {
        var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */int) (signed char)3)) / (arr_21 [i_4] [(unsigned char)6]))) != (((/* implicit */int) (_Bool)0)))))) ^ (((((/* implicit */_Bool) (unsigned short)5497)) ? (1818618496U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_4 + 1] [i_4 + 1] [i_4 - 3]))))))))));
        var_23 = ((/* implicit */short) ((((((/* implicit */_Bool) -400506772)) ? (((/* implicit */int) arr_12 [i_4 + 2] [i_4 - 3] [i_4 + 2] [i_4 + 1])) : (((/* implicit */int) arr_15 [i_4 + 2] [i_4 - 3] [i_4 + 2] [i_4 + 1])))) % (((((((var_16) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (_Bool)1)))) + (2147483647))) >> (((((/* implicit */_Bool) arr_20 [(short)4])) ? (((/* implicit */int) var_16)) : (((/* implicit */int) arr_11 [i_4] [i_4] [i_4] [i_4]))))))));
        var_24 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_4] [i_4 - 2])) ? (13510798882111488ULL) : (((/* implicit */unsigned long long int) arr_0 [i_4 - 1] [i_4 - 3]))))) ? (((((/* implicit */_Bool) (signed char)5)) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) var_9))))) : (((/* implicit */long long int) ((((((/* implicit */int) (signed char)-16)) + (2147483647))) << (((((/* implicit */int) (unsigned short)20)) - (20))))))));
    }
}
