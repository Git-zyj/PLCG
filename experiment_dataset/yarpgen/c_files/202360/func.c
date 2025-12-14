/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202360
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202360 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202360
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
    var_10 = ((/* implicit */signed char) (~((-(((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        arr_4 [i_0] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_1 [i_0]))))) ? ((((_Bool)1) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (_Bool)1)))) : (((985851059) >> (((arr_3 [i_0]) + (2088742134))))));
        /* LoopSeq 2 */
        for (short i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            var_11 ^= (+((~(((/* implicit */int) var_8)))));
            /* LoopNest 2 */
            for (unsigned long long int i_2 = 1; i_2 < 16; i_2 += 1) 
            {
                for (long long int i_3 = 0; i_3 < 17; i_3 += 4) 
                {
                    {
                        arr_14 [i_2] [i_2] = ((/* implicit */int) arr_12 [i_1] [5] [i_1] [i_0]);
                        arr_15 [i_3] [i_2] [i_2] [i_1] [i_0] = ((/* implicit */signed char) (-(((/* implicit */int) arr_11 [i_2] [i_2] [i_2 - 1]))));
                        arr_16 [i_0] [i_2] [i_1] [i_1] [i_1] [i_3] = ((/* implicit */int) (~(((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_1] [i_1] [(short)11]))) : (arr_6 [i_0] [i_0])))));
                        var_12 = ((/* implicit */_Bool) arr_6 [i_0] [4U]);
                    }
                } 
            } 
            arr_17 [i_0] [i_0] = ((((/* implicit */_Bool) (~(((/* implicit */int) var_3))))) ? (var_7) : (((/* implicit */unsigned int) ((int) (_Bool)1))));
            var_13 = ((/* implicit */unsigned char) ((long long int) ((((/* implicit */_Bool) 1816199187)) ? (var_1) : (((/* implicit */int) (_Bool)1)))));
        }
        for (unsigned char i_4 = 2; i_4 < 15; i_4 += 4) 
        {
            arr_20 [0] = (-(arr_10 [i_0] [i_4 - 1] [(unsigned short)11] [8LL]));
            /* LoopSeq 1 */
            for (unsigned char i_5 = 3; i_5 < 15; i_5 += 3) 
            {
                var_14 = ((/* implicit */short) (((!(((/* implicit */_Bool) arr_0 [(unsigned short)1] [(unsigned short)1])))) ? ((((_Bool)1) ? (2305843009209499648ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)31663))))) : ((((_Bool)1) ? (6346222114083660994ULL) : (((/* implicit */unsigned long long int) arr_3 [i_0]))))));
                arr_25 [i_5] = arr_22 [i_5] [i_0];
                var_15 = ((/* implicit */unsigned int) arr_11 [i_0] [i_4] [i_5]);
            }
            arr_26 [i_4] [i_0] [i_0] = ((/* implicit */_Bool) ((int) arr_0 [i_4 - 2] [i_4 + 2]));
        }
        var_16 = ((/* implicit */long long int) (~((~(arr_9 [(short)0] [(short)0] [(short)0] [(short)0])))));
    }
}
