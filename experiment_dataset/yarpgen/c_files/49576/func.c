/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49576
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49576 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49576
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
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 1; i_1 < 14; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 16; i_2 += 3) 
            {
                {
                    arr_8 [i_0] [i_1] [14LL] |= ((((/* implicit */long long int) ((/* implicit */int) var_12))) - (arr_2 [i_0]));
                    /* LoopSeq 2 */
                    for (signed char i_3 = 0; i_3 < 16; i_3 += 2) 
                    {
                        var_19 = ((/* implicit */long long int) ((signed char) arr_10 [i_1 + 1] [i_1 + 2] [i_2] [i_2]));
                        var_20 = ((/* implicit */unsigned long long int) ((signed char) 4294967295LL));
                        var_21 ^= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) -4294967290LL))));
                        var_22 = ((((/* implicit */_Bool) ((unsigned char) arr_7 [(signed char)13] [i_1] [i_2]))) ? (((((/* implicit */_Bool) (signed char)-20)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (3823440668155686576ULL))) : (((/* implicit */unsigned long long int) arr_11 [i_1] [i_1 + 1] [i_1] [i_1 + 2])));
                    }
                    for (unsigned char i_4 = 0; i_4 < 16; i_4 += 1) 
                    {
                        arr_15 [i_1] [i_1] [i_2] [i_4] [i_2] = ((/* implicit */long long int) ((unsigned short) (signed char)79));
                        arr_16 [i_0] [i_1] [i_2] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) arr_13 [i_4] [i_1] [i_1] [i_4])) ? (((((/* implicit */_Bool) -4294967289LL)) ? (arr_7 [i_0] [i_0] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1] [i_2]))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 14623303405553865039ULL)) ? (((/* implicit */int) (signed char)0)) : (arr_10 [i_0] [i_0] [i_0] [i_4]))))));
                        arr_17 [i_0] [i_1] [i_2] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_11 [i_1 + 1] [i_1 - 1] [i_1 + 1] [i_1 + 1])) ? ((+(((/* implicit */int) (short)-31037)))) : (((/* implicit */int) ((unsigned short) var_11)))));
                    }
                    var_23 *= ((/* implicit */long long int) ((((/* implicit */int) (short)9299)) + (((/* implicit */int) (short)-9299))));
                }
            } 
        } 
        var_24 = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) -3557637984564448823LL)) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) (signed char)-79))))));
        /* LoopSeq 2 */
        for (short i_5 = 0; i_5 < 16; i_5 += 3) 
        {
            var_25 = ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) 16018489708646536396ULL)) ? (((/* implicit */int) var_10)) : (var_2))));
            var_26 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) (unsigned char)25))) ? (arr_13 [i_0] [2LL] [i_0] [(unsigned char)8]) : (((/* implicit */unsigned long long int) arr_2 [i_5]))));
        }
        for (int i_6 = 0; i_6 < 16; i_6 += 1) 
        {
            var_27 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned char) 4294967295LL))) ? (arr_10 [i_0] [i_6] [i_0] [i_6]) : (((/* implicit */int) var_17))));
            var_28 -= ((/* implicit */short) (-(arr_13 [i_0] [(unsigned short)2] [i_0] [i_0])));
            arr_23 [i_6] [i_6] = ((/* implicit */signed char) ((unsigned long long int) (short)9305));
            var_29 = ((/* implicit */long long int) min((var_29), (((/* implicit */long long int) var_3))));
            var_30 = ((/* implicit */unsigned char) max((var_30), (((/* implicit */unsigned char) (~(arr_9 [i_6]))))));
        }
    }
    var_31 = ((/* implicit */short) var_9);
}
