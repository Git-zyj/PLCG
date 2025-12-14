/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240802
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240802 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240802
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
    var_16 -= ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_0))))) ? (min((((((/* implicit */_Bool) (unsigned short)7)) ? (3396650151896201537ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-121)) + (((/* implicit */int) var_4))))))) : (((/* implicit */unsigned long long int) var_8))));
    var_17 -= ((/* implicit */int) var_10);
    var_18 = ((unsigned char) (!(((/* implicit */_Bool) ((unsigned short) var_15)))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                {
                    arr_6 [(_Bool)1] = ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_5 [i_0])) ? (arr_2 [(short)21] [i_1] [i_0]) : (((/* implicit */int) (signed char)124)))));
                    /* LoopSeq 2 */
                    for (long long int i_3 = 3; i_3 < 21; i_3 += 3) 
                    {
                        var_19 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_3 + 1] [i_3 + 1] [i_3 - 3] [i_3 + 1] [i_3])) ? (((((/* implicit */int) var_9)) ^ (((/* implicit */int) (unsigned short)28137)))) : (((/* implicit */int) max((arr_7 [i_1] [i_2] [i_1] [i_1] [11]), (arr_7 [i_1] [i_2] [i_1] [i_0] [i_0]))))))));
                        arr_9 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_2 [19] [i_1] [i_3]), (((/* implicit */int) var_12))))) ? (((int) arr_2 [i_3 + 1] [i_3] [i_3])) : (((int) (unsigned char)152))))) >= (((((/* implicit */_Bool) arr_1 [i_3 + 2])) ? (((long long int) var_12)) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_3] [i_3 - 3])))))));
                        var_20 *= ((/* implicit */short) ((((/* implicit */_Bool) 2147483647)) ? (0ULL) : (((/* implicit */unsigned long long int) -12))));
                        var_21 = ((/* implicit */unsigned short) ((unsigned char) max((arr_7 [i_0] [i_3 + 1] [(unsigned char)3] [i_3 - 3] [(unsigned char)3]), (var_10))));
                    }
                    for (signed char i_4 = 0; i_4 < 23; i_4 += 4) 
                    {
                        var_22 = ((/* implicit */unsigned short) (unsigned char)103);
                        var_23 = ((/* implicit */unsigned char) ((((arr_11 [(signed char)16] [i_1] [i_1] [(signed char)16]) / (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)2016))))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (short)252))))));
                        var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned int) arr_13 [i_0] [i_1] [i_2] [i_4]))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */long long int) ((var_15) ^ (((/* implicit */int) arr_4 [3] [2]))))) % (((long long int) arr_2 [i_0] [i_0] [i_0])))))))));
                    }
                    var_25 = ((/* implicit */signed char) ((unsigned long long int) (((_Bool)1) && (((/* implicit */_Bool) (short)25990)))));
                }
            } 
        } 
    } 
}
