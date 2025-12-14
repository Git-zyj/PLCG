/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215460
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215460 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215460
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
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            var_15 ^= ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) var_3))))) | (((((/* implicit */int) arr_3 [i_0] [(unsigned short)0])) % (((/* implicit */int) (unsigned short)768))))));
            var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) ((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)768))) != (var_9))) ? (arr_5 [(unsigned short)2]) : (2503727545U))))));
            var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) - (var_8)))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_11)))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_1]))) >= (var_14)))))))));
            var_18 = (i_0 % 2 == zero) ? (((/* implicit */int) ((arr_5 [i_0]) << (((arr_5 [i_0]) - (3638769353U)))))) : (((/* implicit */int) ((arr_5 [i_0]) << (((((arr_5 [i_0]) - (3638769353U))) - (4063078675U))))));
        }
        /* LoopNest 3 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (short i_3 = 1; i_3 < 6; i_3 += 3) 
            {
                for (short i_4 = 0; i_4 < 10; i_4 += 2) 
                {
                    {
                        arr_14 [i_0] [i_0] [i_3] [i_4] = ((/* implicit */signed char) ((_Bool) ((((/* implicit */_Bool) 9320619112642954146ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)768))) : (arr_12 [i_0] [i_3 - 1] [(short)3] [i_0]))));
                        arr_15 [i_0] = ((/* implicit */_Bool) var_14);
                    }
                } 
            } 
        } 
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        var_19 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_19 [i_5])) ? (((/* implicit */unsigned long long int) ((int) var_0))) : (((((/* implicit */_Bool) 6828140951963620589ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)8))) : (9126124961066597470ULL)))));
        arr_20 [i_5] |= (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)64758)) ? (((/* implicit */int) arr_18 [i_5] [(signed char)12])) : (((/* implicit */int) arr_17 [i_5]))))));
        /* LoopNest 3 */
        for (short i_6 = 0; i_6 < 17; i_6 += 3) 
        {
            for (short i_7 = 0; i_7 < 17; i_7 += 2) 
            {
                for (short i_8 = 1; i_8 < 16; i_8 += 2) 
                {
                    {
                        /* LoopSeq 1 */
                        for (long long int i_9 = 2; i_9 < 16; i_9 += 2) 
                        {
                            var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_24 [i_5]))))) + (((/* implicit */int) (unsigned short)23193))));
                            var_21 = ((/* implicit */short) arr_25 [i_6] [i_7] [(short)15]);
                            arr_35 [i_5] [i_8] [i_5] [(_Bool)1] = ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) arr_32 [i_5] [i_6] [i_7] [i_8 - 1] [i_9 - 2])) ? (((/* implicit */int) (unsigned short)64767)) : (((/* implicit */int) arr_16 [i_5])))));
                            arr_36 [i_5] [i_6] [i_7] [i_8 + 1] [i_6] [i_8] = ((/* implicit */signed char) ((unsigned short) ((((/* implicit */_Bool) arr_16 [i_7])) ? (arr_26 [(signed char)3] [14U] [i_7] [i_9 - 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))));
                        }
                        var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) ((arr_32 [i_6] [i_8 - 1] [i_8 + 1] [i_8 - 1] [i_8 + 1]) & (arr_32 [i_8 - 1] [i_8] [i_8 - 1] [i_8 - 1] [i_8 + 1]))))));
                        arr_37 [i_5] [i_8] [i_8] [i_8] = ((/* implicit */short) arr_30 [i_7]);
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (long long int i_10 = 0; i_10 < 10; i_10 += 2) 
    {
        var_23 = ((/* implicit */short) ((((/* implicit */_Bool) arr_39 [i_10])) ? (((/* implicit */int) arr_4 [7LL] [7LL] [i_10])) : (((/* implicit */int) var_10))));
        var_24 = ((((/* implicit */_Bool) arr_1 [i_10])) ? (0ULL) : (((/* implicit */unsigned long long int) ((var_10) ? (((/* implicit */int) (_Bool)1)) : (arr_25 [i_10] [16] [i_10])))));
        arr_41 [i_10] |= ((/* implicit */long long int) ((((/* implicit */int) arr_3 [i_10] [i_10])) >> (((/* implicit */int) var_10))));
    }
    var_25 += ((/* implicit */unsigned short) var_14);
}
