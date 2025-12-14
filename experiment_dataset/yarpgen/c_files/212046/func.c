/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212046
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212046 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212046
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
    var_13 = ((/* implicit */signed char) max((var_11), ((~((-(var_7)))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 3; i_0 < 24; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                {
                    /* LoopSeq 4 */
                    for (int i_3 = 4; i_3 < 21; i_3 += 3) /* same iter space */
                    {
                        var_14 += ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) ((arr_5 [i_0] [i_0] [i_2] [(unsigned short)22]) & (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [i_1] [i_2])))))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) min((((/* implicit */unsigned short) var_1)), (arr_6 [i_3 - 3] [i_2] [i_1])))))), (((/* implicit */int) arr_6 [i_0] [i_1] [i_1]))));
                        var_15 = ((/* implicit */unsigned int) (!(((((/* implicit */int) (_Bool)0)) > (((/* implicit */int) (unsigned short)5036))))));
                        var_16 = ((/* implicit */unsigned short) (((_Bool)0) || (((/* implicit */_Bool) 1762428332U))));
                        arr_10 [i_0 - 3] [i_0] [i_1] [i_2] [i_0 - 3] [i_3 + 4] = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_7 [i_0]))));
                    }
                    for (int i_4 = 4; i_4 < 21; i_4 += 3) /* same iter space */
                    {
                        arr_13 [i_2] [i_4] = ((/* implicit */unsigned char) (+(((/* implicit */int) (_Bool)0))));
                        arr_14 [i_1] [i_1] [i_2] [i_1] = ((/* implicit */_Bool) ((long long int) arr_2 [i_1]));
                        var_17 = ((((/* implicit */_Bool) ((unsigned char) arr_12 [i_0 - 2] [i_1]))) ? (((/* implicit */int) max((arr_1 [i_4 + 3]), (arr_1 [i_2])))) : (((((/* implicit */_Bool) arr_1 [i_0 - 3])) ? (((/* implicit */int) arr_12 [i_0 - 3] [i_4 + 2])) : (((/* implicit */int) arr_1 [i_4])))));
                    }
                    for (long long int i_5 = 2; i_5 < 23; i_5 += 4) 
                    {
                        var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((int) arr_6 [i_5] [i_5 + 2] [i_0 - 2]))) && (((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) (unsigned char)212)) : (1274129782))))));
                        var_19 += ((/* implicit */unsigned int) min((arr_1 [i_0 - 2]), (((/* implicit */short) ((((/* implicit */_Bool) arr_2 [i_0 - 2])) || (((/* implicit */_Bool) arr_1 [i_0 - 2])))))));
                    }
                    for (unsigned char i_6 = 2; i_6 < 22; i_6 += 3) 
                    {
                        var_20 ^= min((((/* implicit */unsigned long long int) ((short) (_Bool)1))), (max((((/* implicit */unsigned long long int) ((signed char) arr_6 [i_0] [i_1] [i_0]))), ((+(3803395535665400411ULL))))));
                        arr_19 [i_6 - 2] [i_6 - 2] &= ((/* implicit */signed char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_1])) ? (((int) arr_16 [(unsigned short)4] [i_2] [i_6])) : (((((/* implicit */_Bool) (short)3)) ? (((/* implicit */int) (short)-10156)) : (((/* implicit */int) (unsigned char)64))))))) / (((min((arr_0 [i_0]), (arr_0 [i_0]))) - (min((((/* implicit */unsigned int) var_5)), (var_2)))))));
                    }
                    arr_20 [i_2] = ((/* implicit */unsigned long long int) max(((~(((((/* implicit */long long int) ((/* implicit */int) var_0))) & (var_7))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((unsigned char) var_3))))))));
                    var_21 = ((/* implicit */long long int) var_8);
                }
            } 
        } 
    } 
}
