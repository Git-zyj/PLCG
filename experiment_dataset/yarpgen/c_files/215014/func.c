/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215014
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215014 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215014
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
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 3; i_0 < 21; i_0 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned int i_2 = 3; i_2 < 21; i_2 += 3) 
            {
                for (long long int i_3 = 0; i_3 < 23; i_3 += 2) 
                {
                    {
                        arr_9 [i_0] [i_1] [i_2] [i_3] = arr_0 [5ULL];
                        arr_10 [i_3] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_4 [i_3] [i_2 - 3] [i_0 - 2])) ? (((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_3])) ? (arr_7 [i_0 - 3] [i_1] [i_1] [i_2] [i_3]) : (var_12))) : (((/* implicit */long long int) arr_6 [i_0 + 2] [i_0 - 3] [i_0 - 3] [i_2 - 3] [i_2 + 2])))), (((((/* implicit */_Bool) ((var_1) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))) ? (max((((/* implicit */long long int) arr_3 [i_0 + 2] [i_0 + 2] [i_2])), (arr_0 [i_0 + 1]))) : (((/* implicit */long long int) (+(((/* implicit */int) (short)-21362)))))))));
                        var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_6 [i_2 - 3] [i_2 - 1] [i_2 - 1] [i_2 - 3] [i_2 - 3])), (((((/* implicit */unsigned long long int) 0)) + (arr_1 [i_0 - 1] [i_0 - 2])))))))))));
                        var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) arr_2 [i_0 - 2])))))))));
                    }
                } 
            } 
            arr_11 [i_0] = ((/* implicit */int) max((((/* implicit */long long int) ((arr_5 [i_0 + 2] [i_1] [i_1]) == (-7182881521275532267LL)))), (min((arr_4 [i_0 - 1] [i_0 + 1] [i_0 - 3]), (arr_4 [i_0 - 2] [i_0 - 3] [i_0 - 2])))));
            var_15 = ((/* implicit */unsigned char) ((((var_3) ? (((/* implicit */unsigned long long int) ((0LL) * (var_6)))) : (max((((/* implicit */unsigned long long int) var_2)), (4503599627369472ULL))))) % ((-(arr_1 [i_0] [i_0])))));
        }
        for (long long int i_4 = 0; i_4 < 23; i_4 += 3) 
        {
            var_16 ^= ((/* implicit */signed char) min((((/* implicit */long long int) ((short) ((((/* implicit */_Bool) arr_4 [i_0 + 1] [i_4] [i_0 + 1])) ? (arr_14 [i_0 - 2] [i_0] [i_4]) : (arr_4 [(unsigned char)10] [i_0 - 1] [i_4]))))), (7182881521275532267LL)));
            arr_15 [i_4] [(unsigned short)19] [i_4] = ((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_12 [i_0 - 1] [i_0 - 3] [i_0 - 1])))))));
            arr_16 [(unsigned short)16] [(unsigned short)16] |= arr_6 [i_0] [i_0] [1LL] [i_4] [i_4];
            var_17 *= ((/* implicit */unsigned char) 0);
            arr_17 [i_0 - 3] [i_4] [i_4] = ((/* implicit */_Bool) min((arr_7 [(unsigned char)14] [i_4] [i_0 - 2] [i_0 - 1] [(unsigned short)18]), (((long long int) arr_7 [i_0] [i_0] [i_0] [i_0 - 1] [i_4]))));
        }
        var_18 *= ((/* implicit */signed char) var_5);
    }
    for (unsigned long long int i_5 = 1; i_5 < 22; i_5 += 3) 
    {
        var_19 = ((/* implicit */long long int) (unsigned short)65535);
        var_20 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_5 + 2])) ? (((/* implicit */int) arr_20 [i_5 + 2])) : (((/* implicit */int) arr_20 [i_5 + 1]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_5 + 1]))) : (((unsigned int) ((((/* implicit */_Bool) arr_18 [(unsigned short)1])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_19 [i_5 + 2])))))));
    }
    var_21 = ((/* implicit */unsigned short) var_8);
    var_22 = ((/* implicit */signed char) ((unsigned short) min((((/* implicit */long long int) var_5)), (7182881521275532267LL))));
}
