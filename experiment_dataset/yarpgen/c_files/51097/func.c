/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51097
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51097 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51097
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
    var_20 = ((/* implicit */signed char) min((((/* implicit */short) ((((/* implicit */int) min((((/* implicit */unsigned char) var_6)), (var_15)))) >= ((+(((/* implicit */int) var_7))))))), (((short) ((long long int) var_4)))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        arr_4 [i_0] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0] [i_0])) + (((/* implicit */int) var_2))))) ? (((/* implicit */int) ((arr_0 [i_0]) && (((/* implicit */_Bool) var_8))))) : (((/* implicit */int) ((short) var_13)))));
        arr_5 [i_0] = ((/* implicit */short) ((max((((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) arr_2 [i_0] [i_0])))), (((/* implicit */int) ((unsigned char) arr_2 [(unsigned char)16] [i_0]))))) + (((((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [i_0] [i_0]))))) ? (((((/* implicit */int) var_6)) + (((/* implicit */int) var_16)))) : (((/* implicit */int) min((((/* implicit */unsigned char) var_14)), (arr_1 [i_0] [i_0]))))))));
    }
    for (long long int i_1 = 1; i_1 < 19; i_1 += 2) 
    {
        var_21 -= (~(3620355227640202211ULL));
        arr_8 [i_1 - 1] [i_1] &= ((/* implicit */short) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned int) var_12))))))));
        var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) var_9)))))))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 4) 
        {
            arr_13 [i_1 - 1] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) (signed char)-95))) ? (arr_6 [i_1 + 1]) : (((/* implicit */long long int) ((((/* implicit */int) arr_9 [i_2] [20ULL])) << (((((/* implicit */int) var_14)) + (134))))))));
            arr_14 [i_1] [i_2] = ((/* implicit */_Bool) ((((/* implicit */int) arr_10 [i_1])) % (((((/* implicit */_Bool) var_9)) ? (var_17) : (((/* implicit */int) var_7))))));
            /* LoopSeq 1 */
            for (long long int i_3 = 0; i_3 < 21; i_3 += 1) 
            {
                arr_19 [0ULL] [i_3] [i_1] = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) var_12)))) ? (arr_7 [i_1 + 1] [i_1]) : (((/* implicit */int) var_16))));
                /* LoopNest 2 */
                for (unsigned int i_4 = 0; i_4 < 21; i_4 += 2) 
                {
                    for (unsigned int i_5 = 0; i_5 < 21; i_5 += 1) 
                    {
                        {
                            var_23 *= ((/* implicit */unsigned char) ((((/* implicit */int) var_6)) * (((/* implicit */int) var_1))));
                            var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_23 [i_1 + 2] [i_1 + 1] [i_1 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (arr_23 [i_1 + 1] [i_1 + 1] [i_1 - 1]))))));
                            var_25 = ((/* implicit */long long int) ((((arr_17 [i_1 + 1] [i_1 + 2] [i_1]) ^ (arr_20 [i_1] [i_2] [(signed char)11] [i_1] [i_5]))) << (((var_17) - (679289450)))));
                            var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) (~((~(((/* implicit */int) (_Bool)1)))))))));
                        }
                    } 
                } 
                arr_24 [i_3] [i_3] = ((unsigned long long int) ((unsigned long long int) var_6));
                arr_25 [(unsigned char)4] [i_3] [i_3] [i_2] = ((/* implicit */int) ((long long int) arr_23 [i_3] [i_2] [i_1 - 1]));
            }
            var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) arr_17 [i_2] [i_2] [i_1 + 2]))));
        }
    }
}
