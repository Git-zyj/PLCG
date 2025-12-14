/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28777
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28777 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28777
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
    var_12 = ((/* implicit */unsigned long long int) min((var_12), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) != (17265389653308220754ULL))))) ^ (((/* implicit */int) ((short) ((int) (signed char)127)))))))));
    var_13 = ((/* implicit */int) ((unsigned long long int) ((signed char) ((signed char) (unsigned char)166))));
    /* LoopSeq 1 */
    for (short i_0 = 2; i_0 < 11; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                {
                    var_14 = ((/* implicit */int) ((((/* implicit */_Bool) ((signed char) ((unsigned long long int) arr_2 [3])))) || (((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) (unsigned short)65535))))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned int i_3 = 0; i_3 < 13; i_3 += 1) 
                    {
                        arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] &= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_9 [i_0] [i_1] [i_2] [i_3])) + (((/* implicit */int) arr_3 [i_0]))))) ^ (((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) | (var_0)))));
                        var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned short) var_11))) | (((/* implicit */int) ((short) (signed char)-25))))))));
                        arr_11 [i_0 - 1] [i_1] [4ULL] [i_2] [i_3] = ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */int) arr_1 [i_0 - 2])) != (((/* implicit */int) (signed char)13)))));
                    }
                    for (signed char i_4 = 0; i_4 < 13; i_4 += 4) 
                    {
                        var_16 ^= ((/* implicit */signed char) ((((int) ((unsigned int) var_3))) - (((/* implicit */int) ((short) ((((/* implicit */unsigned long long int) arr_4 [i_0 - 2] [i_2])) >= (arr_13 [i_4] [i_4])))))));
                        var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) ((unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) 1ULL)))))))));
                        arr_14 [7U] [i_1] [i_2] [2ULL] = ((/* implicit */short) ((unsigned short) ((((((/* implicit */int) var_4)) >> (((((/* implicit */int) arr_3 [11ULL])) - (29))))) - (((/* implicit */int) ((signed char) var_1))))));
                        arr_15 [i_2] [i_2] [i_2] [i_2] [i_4] = ((/* implicit */_Bool) ((((int) ((((/* implicit */int) (signed char)-17)) | (((/* implicit */int) (unsigned short)25344))))) + (((/* implicit */int) ((((((/* implicit */int) var_8)) | (((/* implicit */int) (signed char)37)))) >= (((((/* implicit */int) (signed char)-119)) + (((/* implicit */int) (_Bool)1)))))))));
                    }
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned short i_5 = 0; i_5 < 13; i_5 += 3) 
        {
            for (signed char i_6 = 0; i_6 < 13; i_6 += 4) 
            {
                for (unsigned int i_7 = 4; i_7 < 12; i_7 += 3) 
                {
                    {
                        arr_25 [i_6] [i_6] [i_5] = ((/* implicit */unsigned long long int) ((((((int) arr_12 [9LL] [9LL] [i_6] [i_7 - 4])) + (((/* implicit */int) ((short) (short)-10968))))) * (((((((/* implicit */int) var_4)) + (((/* implicit */int) var_8)))) / (((int) arr_2 [i_0]))))));
                        arr_26 [i_5] [i_5] = ((((/* implicit */unsigned long long int) ((int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0 + 2] [i_5] [i_6] [i_6]))) / (var_5))))) | (((unsigned long long int) ((signed char) 1710299927773934651ULL))));
                    }
                } 
            } 
        } 
        arr_27 [i_0] = ((/* implicit */unsigned char) ((((unsigned int) ((((/* implicit */int) arr_3 [i_0])) - (((/* implicit */int) arr_20 [(signed char)2] [i_0] [i_0] [6ULL]))))) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) ((((/* implicit */int) var_3)) < (((/* implicit */int) (short)-32764)))))))));
    }
}
