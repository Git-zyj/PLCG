/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193791
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193791 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193791
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
    var_18 = ((((((/* implicit */_Bool) ((((((/* implicit */int) (signed char)-86)) + (2147483647))) << (((((/* implicit */int) var_11)) - (39990)))))) ? (((((/* implicit */_Bool) 6485174877457364429ULL)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) (signed char)29)), ((short)27777))))))) / (((/* implicit */unsigned long long int) ((((/* implicit */int) var_2)) & (((/* implicit */int) var_14))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 2; i_0 < 9; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            for (long long int i_2 = 2; i_2 < 11; i_2 += 3) 
            {
                {
                    /* LoopSeq 4 */
                    for (long long int i_3 = 0; i_3 < 13; i_3 += 2) 
                    {
                        var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) arr_2 [i_0 - 2] [i_0 - 2]))));
                        arr_10 [i_0] [i_0] [(_Bool)1] [i_1] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_1])) && (((/* implicit */_Bool) arr_9 [i_1] [i_1] [5] [i_0 - 2]))));
                    }
                    for (signed char i_4 = 4; i_4 < 11; i_4 += 2) 
                    {
                        var_20 = -2148095983698270405LL;
                        arr_14 [i_1] [i_1] [i_1] [0LL] [i_0] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) var_8))) ? (((/* implicit */int) ((signed char) var_11))) : (((/* implicit */int) arr_6 [i_0] [i_2 - 1] [i_2]))));
                        arr_15 [i_0] [i_1] [1LL] [i_1] = ((/* implicit */int) ((((((/* implicit */_Bool) 6485174877457364444ULL)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1])))));
                    }
                    for (int i_5 = 0; i_5 < 13; i_5 += 3) 
                    {
                        arr_20 [i_1] [i_1] = arr_0 [i_2];
                        arr_21 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [i_0] [i_0] [i_0 - 2] [i_1] [(unsigned short)6] [i_5]))));
                    }
                    for (unsigned short i_6 = 3; i_6 < 12; i_6 += 1) 
                    {
                        var_21 = ((/* implicit */signed char) ((((/* implicit */int) var_14)) * (((/* implicit */int) arr_8 [4ULL] [i_6 - 2] [4ULL] [i_0 + 1] [i_1]))));
                        var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_5 [i_1])) ? (arr_5 [i_1]) : (arr_5 [i_1])));
                    }
                    var_23 += ((/* implicit */short) var_9);
                }
            } 
        } 
        var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 6485174877457364440ULL)) ? (((/* implicit */int) ((_Bool) arr_23 [i_0] [10ULL] [i_0]))) : (((/* implicit */int) arr_3 [(signed char)2]))));
        var_25 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) -2)))) ? (((/* implicit */unsigned long long int) arr_19 [i_0 + 2] [i_0] [i_0] [i_0])) : (5ULL)));
        var_26 -= ((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) <= (2)));
        var_27 = ((/* implicit */_Bool) ((((/* implicit */int) arr_8 [i_0] [i_0] [(unsigned short)12] [i_0] [(signed char)2])) << (((((/* implicit */int) var_2)) - (6660)))));
    }
}
