/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248515
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248515 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248515
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
    var_12 = ((/* implicit */_Bool) var_7);
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        var_13 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)4)) + (((/* implicit */int) var_8))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) (short)26703))));
                    var_15 = ((/* implicit */unsigned short) var_5);
                    /* LoopSeq 4 */
                    for (int i_3 = 1; i_3 < 23; i_3 += 4) /* same iter space */
                    {
                        var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) ((unsigned char) ((arr_2 [(unsigned short)10] [(unsigned short)10]) - (arr_2 [i_0] [(signed char)18])))))));
                        var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) arr_2 [i_2] [(_Bool)0]))));
                        var_18 = ((/* implicit */_Bool) min(((short)-26687), (((/* implicit */short) ((unsigned char) ((_Bool) arr_1 [i_1] [i_0]))))));
                        var_19 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)252)) ? (max((var_6), (var_9))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65524)))))) ? (((/* implicit */int) ((short) ((var_2) & (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))))) : (((/* implicit */int) ((((((/* implicit */_Bool) (unsigned char)100)) ? (4138548288U) : (arr_4 [15]))) != (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_3 - 1] [(_Bool)1]))))))));
                        arr_10 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) % (var_4))), (var_6)))) && (((/* implicit */_Bool) ((var_8) ? (min((((/* implicit */unsigned long long int) arr_9 [i_0] [19U] [i_1] [i_2] [i_3])), (var_4))) : (max((((/* implicit */unsigned long long int) (signed char)-44)), (var_4))))))));
                    }
                    for (int i_4 = 1; i_4 < 23; i_4 += 4) /* same iter space */
                    {
                        arr_13 [(signed char)23] [i_0] [i_1] [(signed char)23] [i_4] [i_4] = ((/* implicit */unsigned long long int) (short)26687);
                        arr_14 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) min((7443331011935077374LL), (((/* implicit */long long int) (unsigned char)40))))))))) % (((long long int) ((((/* implicit */_Bool) var_7)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0]))))))));
                    }
                    /* vectorizable */
                    for (int i_5 = 1; i_5 < 23; i_5 += 4) /* same iter space */
                    {
                        arr_17 [i_0] [i_1] [i_0] [i_5 + 2] = ((/* implicit */int) ((_Bool) arr_11 [i_5] [i_5] [i_2] [(signed char)11] [i_0]));
                        arr_18 [i_0] [i_1] [i_0] [i_5] = ((/* implicit */unsigned long long int) var_8);
                        var_20 *= ((/* implicit */unsigned char) ((var_8) ? (((((/* implicit */_Bool) arr_6 [(unsigned char)2] [(_Bool)1] [i_0])) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [(unsigned char)14] [i_2]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0)))));
                    }
                    for (int i_6 = 1; i_6 < 23; i_6 += 4) /* same iter space */
                    {
                        var_21 = ((/* implicit */_Bool) arr_9 [i_0] [i_2] [i_2] [i_6 + 1] [i_6 + 1]);
                        var_22 = ((((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) var_5)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-26421)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_0))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)67)))))))));
                        var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_6] [i_6] [i_6] [i_0]))) * (var_6)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_6] [i_6] [i_6] [i_0])) ? (((/* implicit */int) arr_7 [i_1] [i_1] [i_2] [i_0])) : (((/* implicit */int) var_5))))) : (((((/* implicit */unsigned long long int) var_0)) / (13253787413836708183ULL)))));
                    }
                }
            } 
        } 
    }
    var_24 = ((/* implicit */int) max((min((((((/* implicit */_Bool) var_6)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)30623))))), (((((/* implicit */unsigned int) ((/* implicit */int) (short)-5237))) * (var_2))))), (((/* implicit */unsigned int) 2147483647))));
}
