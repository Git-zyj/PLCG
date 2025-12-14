/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25841
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25841 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25841
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
        var_13 = ((/* implicit */long long int) ((var_7) * (((/* implicit */unsigned int) min((var_12), (var_0))))));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 7; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                {
                    arr_6 [i_2] [(unsigned char)3] [i_1] [i_0] = ((/* implicit */short) ((2147483647) >= (((/* implicit */int) (unsigned char)23))));
                    arr_7 [i_2] [i_1] [(signed char)8] = ((/* implicit */short) var_11);
                }
            } 
        } 
        arr_8 [8] [i_0] = ((/* implicit */short) min((((((var_0) + (2147483647))) >> (((var_11) + (16593568000613670LL))))), (((/* implicit */int) ((((/* implicit */int) var_6)) >= (((/* implicit */int) var_4)))))));
        /* LoopNest 2 */
        for (short i_3 = 0; i_3 < 10; i_3 += 4) 
        {
            for (signed char i_4 = 0; i_4 < 10; i_4 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_5 = 0; i_5 < 10; i_5 += 1) 
                    {
                        arr_19 [i_0] [i_3] [i_3] [i_0] [0] [i_5] = ((/* implicit */long long int) var_8);
                        arr_20 [i_0] [i_3] [3U] [i_4] [i_4] = ((((((/* implicit */long long int) ((var_0) % (((/* implicit */int) var_1))))) / (((var_11) + (((/* implicit */long long int) ((/* implicit */int) var_9))))))) / (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) min((var_4), (((/* implicit */unsigned short) var_8))))) || (((/* implicit */_Bool) max((var_2), (((/* implicit */long long int) var_4))))))))));
                        arr_21 [i_0] [(_Bool)1] [i_4] [1U] = ((/* implicit */unsigned int) max((((((/* implicit */int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) var_5))))) ^ (((/* implicit */int) var_4)))), (((((/* implicit */int) (signed char)-38)) % (1227558160)))));
                    }
                    var_14 = max((var_7), (((/* implicit */unsigned int) ((var_7) >= (var_7)))));
                }
            } 
        } 
    }
    /* LoopSeq 1 */
    for (unsigned char i_6 = 1; i_6 < 11; i_6 += 4) 
    {
        arr_24 [i_6 - 1] = ((((/* implicit */unsigned long long int) var_0)) + (min((((/* implicit */unsigned long long int) var_11)), (var_5))));
        var_15 = ((/* implicit */short) max((((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (((var_10) != (((/* implicit */long long int) ((/* implicit */int) var_8)))))))), (var_0)));
    }
    /* LoopSeq 1 */
    for (unsigned long long int i_7 = 0; i_7 < 10; i_7 += 4) 
    {
        arr_29 [i_7] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) / (min((((/* implicit */unsigned int) var_3)), (var_7)))));
        var_16 = ((/* implicit */unsigned char) var_2);
        var_17 = ((/* implicit */int) ((max((var_5), (((/* implicit */unsigned long long int) var_12)))) != (((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) % (((/* implicit */int) var_1)))))));
        var_18 = ((/* implicit */short) ((min((((/* implicit */long long int) var_6)), (var_11))) / (((/* implicit */long long int) ((((/* implicit */int) var_3)) + (((/* implicit */int) var_9)))))));
    }
}
