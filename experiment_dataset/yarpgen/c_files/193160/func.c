/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193160
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193160 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193160
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
    var_16 |= ((/* implicit */_Bool) (+((~(-15015646928718095LL)))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */signed char) (+(var_4)));
        var_17 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)252)) && (((/* implicit */_Bool) 1957434567))));
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 2; i_3 < 15; i_3 += 2) 
                    {
                        for (signed char i_4 = 3; i_4 < 14; i_4 += 1) 
                        {
                            {
                                arr_12 [i_0] [(unsigned char)8] [i_3 + 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_11 [i_3 + 1] [i_3 - 2] [i_3 - 2] [i_3 + 1] [i_3 - 2] [i_4 - 2])) ? (((/* implicit */int) arr_11 [i_3 + 1] [i_3 - 2] [(_Bool)1] [i_3 - 1] [i_3] [i_4 + 1])) : (((/* implicit */int) arr_11 [i_3 - 1] [i_3 + 1] [i_3] [i_3 + 1] [8LL] [i_4 - 1]))));
                                var_18 = ((/* implicit */long long int) min((var_18), (var_3)));
                                arr_13 [i_2] [i_1] [i_2] [i_3 - 2] [i_3] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32767)) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_1] [i_1] [i_3] [i_4 + 1])))))) ? (arr_1 [i_3 - 1]) : (((var_15) ? (15015646928718097LL) : (((/* implicit */long long int) ((/* implicit */int) var_12))))));
                                arr_14 [i_0] [i_1] [i_2] [i_3] [i_3] [i_4] = ((/* implicit */signed char) ((((/* implicit */int) var_1)) <= (arr_0 [i_3 - 1])));
                                arr_15 [i_0] [i_1] [i_2] [i_2] [i_3] [i_3 - 2] [i_3 - 2] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 12445355352430101247ULL)) ? (((/* implicit */int) (signed char)-68)) : (((/* implicit */int) (_Bool)1))));
                            }
                        } 
                    } 
                    arr_16 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_7 [i_0] [i_1] [i_2])) : (((/* implicit */int) arr_7 [i_0] [i_1] [i_2]))));
                    /* LoopSeq 1 */
                    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                    {
                        var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) 15015646928718110LL)) ? (15015646928718094LL) : (14LL)));
                        arr_19 [i_0] [i_1] [i_5] [i_0] = ((/* implicit */_Bool) -1351508010);
                        arr_20 [i_5] [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(8343528411837791777LL)))) ? (((/* implicit */int) arr_11 [i_5] [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_5] [i_5 - 1])) : (((/* implicit */int) arr_7 [i_5 - 1] [i_5 - 1] [i_5 - 1]))));
                    }
                    var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) ((((/* implicit */_Bool) (-(15015646928718092LL)))) ? (arr_1 [i_2]) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_17 [i_0] [i_1] [i_1] [i_1] [i_2])) : (((/* implicit */int) var_13))))))))));
                }
            } 
        } 
        arr_21 [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_9))));
        arr_22 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (var_6) : (((/* implicit */int) arr_9 [i_0] [i_0] [i_0]))))) ? (arr_18 [i_0]) : (var_0)));
    }
}
