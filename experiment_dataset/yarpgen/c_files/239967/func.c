/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239967
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239967 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239967
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
    var_14 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) max(((-(3))), (((/* implicit */int) min(((short)-31017), (((/* implicit */short) (signed char)127)))))))), ((-(2185887764481601570ULL)))));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        var_15 = ((/* implicit */unsigned int) min((min((((/* implicit */unsigned long long int) (short)-31021)), ((-(18446744073709551609ULL))))), (((/* implicit */unsigned long long int) min(((short)31046), (((/* implicit */short) (_Bool)1)))))));
        var_16 = ((/* implicit */int) max((((((8165573740445710850ULL) + (arr_1 [i_0]))) * (min((((/* implicit */unsigned long long int) arr_0 [i_0] [i_0])), (7913164134459067064ULL))))), (((/* implicit */unsigned long long int) arr_0 [(signed char)2] [(short)3]))));
    }
    for (unsigned char i_1 = 3; i_1 < 9; i_1 += 3) 
    {
        /* LoopNest 2 */
        for (long long int i_2 = 0; i_2 < 11; i_2 += 1) 
        {
            for (long long int i_3 = 0; i_3 < 11; i_3 += 1) 
            {
                {
                    var_17 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_7 [i_3] [i_2] [i_1]))));
                    arr_10 [i_1 - 3] [i_2] [i_2] = (+(min((arr_1 [i_1 - 2]), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)33)) | (arr_8 [i_2] [i_2] [i_2])))))));
                    var_18 = ((/* implicit */unsigned short) (~((~(((/* implicit */int) ((unsigned short) -1)))))));
                }
            } 
        } 
        var_19 = ((/* implicit */unsigned char) min((max((min((((/* implicit */long long int) (short)17807)), (arr_4 [i_1] [i_1]))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_1 - 1] [i_1] [i_1 - 1])) ? (arr_6 [(short)2]) : (((/* implicit */int) (short)-31037))))))), ((-(arr_4 [0] [i_1])))));
        var_20 = ((/* implicit */long long int) (-(min((min((((/* implicit */unsigned long long int) arr_5 [i_1] [i_1 + 1])), (9151314442816847872ULL))), (((/* implicit */unsigned long long int) min((-11), (((/* implicit */int) (short)-22658)))))))));
    }
    /* LoopSeq 1 */
    for (unsigned long long int i_4 = 3; i_4 < 19; i_4 += 3) 
    {
        arr_13 [i_4] [i_4 - 2] = ((/* implicit */unsigned char) arr_11 [i_4 + 1]);
        arr_14 [i_4] [i_4 - 1] = (!(((/* implicit */_Bool) (~(1363061422U)))));
    }
}
