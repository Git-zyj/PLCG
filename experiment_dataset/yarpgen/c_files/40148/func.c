/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40148
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40148 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40148
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
    var_15 = ((/* implicit */short) var_0);
    var_16 = ((/* implicit */long long int) min((((((/* implicit */_Bool) 7357894704461418071ULL)) ? (5346402744005279946ULL) : (9ULL))), (((/* implicit */unsigned long long int) var_8))));
    var_17 = ((/* implicit */short) ((long long int) min((var_10), (((/* implicit */unsigned long long int) var_9)))));
    /* LoopSeq 3 */
    for (signed char i_0 = 2; i_0 < 19; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 1; i_1 < 20; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                {
                    arr_8 [i_1] [i_1 - 1] [i_1] = ((/* implicit */unsigned long long int) max(((signed char)-51), (((/* implicit */signed char) (_Bool)1))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 3; i_3 < 19; i_3 += 4) 
                    {
                        for (int i_4 = 0; i_4 < 21; i_4 += 3) 
                        {
                            {
                                var_18 = ((/* implicit */signed char) min((max((((/* implicit */unsigned long long int) ((signed char) arr_11 [i_0] [i_1] [i_2] [i_3] [i_4]))), (((((/* implicit */_Bool) var_5)) ? (11088849369248133544ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))))), (min((min((((/* implicit */unsigned long long int) arr_5 [i_1])), (arr_0 [i_2]))), (((/* implicit */unsigned long long int) ((signed char) var_13)))))));
                                arr_14 [i_0] [i_1] [i_1] [i_3] [i_4] = ((/* implicit */short) ((((65535ULL) << (((11088849369248133549ULL) - (11088849369248133548ULL))))) >> (((((/* implicit */int) max((arr_7 [i_0 - 1]), (arr_7 [i_0 - 1])))) - (67)))));
                                arr_15 [i_1] [i_1] [i_2] = ((/* implicit */short) (~(((/* implicit */int) var_5))));
                                var_19 = ((/* implicit */unsigned char) min((max((((/* implicit */long long int) arr_3 [i_0] [i_0] [i_1 - 1])), (arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_1]))), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) - (var_6))))));
                                var_20 = ((/* implicit */unsigned long long int) min((((unsigned int) arr_11 [i_0 + 2] [i_3 + 2] [i_3 - 1] [i_3 - 3] [i_3 - 1])), (((/* implicit */unsigned int) min((arr_11 [i_0 - 2] [i_1] [i_1] [i_3 - 1] [i_4]), (var_13))))));
                            }
                        } 
                    } 
                    arr_16 [i_1] = ((/* implicit */signed char) (unsigned char)197);
                }
            } 
        } 
        var_21 = ((/* implicit */_Bool) min((max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)1))), (min((arr_13 [i_0] [i_0 - 2] [i_0]), (arr_13 [i_0] [i_0 + 2] [i_0])))));
    }
    for (short i_5 = 0; i_5 < 11; i_5 += 1) 
    {
        var_22 = ((unsigned long long int) max((arr_4 [i_5]), (((/* implicit */long long int) var_9))));
        var_23 = ((/* implicit */unsigned char) min((((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_7 [i_5]))))) ^ (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)1))) | (7357894704461418095ULL))))), (((/* implicit */unsigned long long int) (_Bool)0))));
        arr_19 [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) min((arr_17 [i_5]), (((/* implicit */long long int) arr_11 [i_5] [i_5] [i_5] [i_5] [i_5]))))) ? (((/* implicit */int) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_17 [i_5]))))), (var_7)))) : (((/* implicit */int) min((((((/* implicit */_Bool) arr_1 [(short)0])) && (((/* implicit */_Bool) var_4)))), (((((/* implicit */_Bool) arr_18 [i_5] [i_5])) || (((/* implicit */_Bool) var_5)))))))));
        var_24 &= ((/* implicit */_Bool) max(((unsigned char)255), (((/* implicit */unsigned char) (_Bool)1))));
    }
    for (unsigned long long int i_6 = 0; i_6 < 25; i_6 += 3) 
    {
        arr_23 [10ULL] &= ((/* implicit */unsigned long long int) min((max((min((arr_22 [(short)8] [i_6]), (arr_22 [(unsigned short)4] [i_6]))), (((/* implicit */long long int) var_8)))), (((/* implicit */long long int) ((signed char) -702337446)))));
        arr_24 [i_6] [i_6] = ((/* implicit */unsigned char) (~((+(((/* implicit */int) (unsigned char)9))))));
        var_25 = (!(((/* implicit */_Bool) ((short) min((var_1), (((/* implicit */unsigned long long int) arr_20 [i_6] [i_6])))))));
        arr_25 [i_6] [(signed char)6] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 7357894704461418071ULL)) ? (arr_20 [i_6] [i_6]) : (arr_20 [i_6] [i_6])))) ? (min((arr_20 [i_6] [i_6]), (arr_20 [i_6] [i_6]))) : (min((arr_20 [i_6] [i_6]), (arr_20 [i_6] [i_6])))));
    }
}
