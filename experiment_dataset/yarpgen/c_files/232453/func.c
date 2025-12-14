/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232453
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232453 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232453
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
    var_12 = ((/* implicit */long long int) var_6);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (short i_1 = 1; i_1 < 12; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 2; i_3 < 10; i_3 += 1) 
                    {
                        var_13 = (((~(arr_8 [i_1] [i_2] [i_1 + 1] [i_1]))) ^ (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) max((((/* implicit */unsigned short) arr_5 [i_3] [(signed char)7])), ((unsigned short)65535)))), ((~(arr_6 [i_0])))))));
                        arr_11 [4LL] [i_1] [i_2] [i_2] [i_1] [(unsigned short)10] = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) max((arr_6 [i_1 + 1]), (arr_6 [i_1 + 1])))), ((+(-4098299860706890657LL)))));
                        var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 4098299860706890656LL)) ? (((/* implicit */unsigned long long int) max(((+(((/* implicit */int) (_Bool)1)))), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)0))))))) : (17492962877979422027ULL)));
                        arr_12 [i_2] [i_2] [i_1] [i_2] = ((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) arr_10 [i_2] [i_3 - 1] [i_3] [i_3 - 1])) ? (arr_10 [i_2] [i_3 - 1] [i_3 + 1] [i_3]) : (arr_10 [i_2] [i_3 - 1] [i_3] [i_3]))));
                    }
                    arr_13 [i_0] [i_2] [(signed char)11] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */long long int) 8191U)) | (4098299860706890666LL)))) ? (((((/* implicit */_Bool) (signed char)-118)) ? (var_2) : (arr_8 [i_0] [i_2] [i_2] [i_0]))) : (((/* implicit */unsigned long long int) -4098299860706890637LL)))) & (((/* implicit */unsigned long long int) (~(((((/* implicit */int) var_10)) & (((/* implicit */int) arr_5 [i_1] [i_0])))))))));
                }
            } 
        } 
    } 
}
