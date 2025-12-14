/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35278
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35278 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35278
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
    var_14 = ((/* implicit */short) ((((/* implicit */_Bool) (short)-15)) ? (4122335635U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)71)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (short i_1 = 1; i_1 < 17; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                {
                    var_15 = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) min((arr_0 [i_0]), (arr_0 [i_2]))))))) + (min((((/* implicit */int) (signed char)71)), (arr_6 [i_1] [i_1 - 1] [i_1] [i_1 + 1])))));
                    var_16 = ((unsigned char) (signed char)-71);
                    /* LoopSeq 3 */
                    for (unsigned char i_3 = 0; i_3 < 18; i_3 += 4) 
                    {
                        var_17 = ((/* implicit */long long int) arr_3 [i_3]);
                        var_18 ^= ((/* implicit */short) (((((-9223372036854775807LL - 1LL)) % (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_2] [i_2] [i_2] [i_1 + 1]))))) / (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) var_5)), (((short) (signed char)-107))))))));
                    }
                    for (short i_4 = 0; i_4 < 18; i_4 += 2) 
                    {
                        var_19 = ((/* implicit */short) min((min((((/* implicit */unsigned long long int) min((arr_3 [i_0]), (((/* implicit */unsigned int) var_7))))), ((~(arr_8 [i_0] [i_1] [i_1] [i_4]))))), (((/* implicit */unsigned long long int) arr_6 [i_0] [i_1 + 1] [i_1] [(signed char)16]))));
                        var_20 = ((/* implicit */unsigned int) arr_2 [i_0]);
                        arr_12 [(unsigned char)5] [i_1] [i_2] [(short)3] [i_2] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) max((min((arr_10 [i_0] [i_0] [i_2] [(signed char)8] [i_4]), (((/* implicit */short) (signed char)-25)))), (((/* implicit */short) ((((/* implicit */int) (signed char)-81)) <= (((/* implicit */int) (signed char)97))))))))) == (min((((/* implicit */long long int) min((((/* implicit */int) (signed char)-81)), (-13)))), (((((/* implicit */_Bool) (signed char)80)) ? (1362377155877331795LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-17)))))))));
                    }
                    for (int i_5 = 0; i_5 < 18; i_5 += 2) 
                    {
                        arr_15 [i_1] = ((/* implicit */short) ((signed char) min((arr_8 [i_1 + 1] [i_1 - 1] [i_1 + 1] [i_1 + 1]), (((((/* implicit */_Bool) arr_14 [i_0] [i_1 + 1] [i_2] [(short)2])) ? (((/* implicit */unsigned long long int) var_3)) : (arr_4 [i_1] [i_2] [i_5]))))));
                        var_21 = arr_0 [i_0];
                        var_22 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((min((arr_3 [i_0]), (((/* implicit */unsigned int) arr_2 [i_2])))), (((/* implicit */unsigned int) arr_9 [i_1 - 1] [i_1] [i_5])))))));
                    }
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) var_4)) ? ((~(((/* implicit */int) var_4)))) : (((((/* implicit */int) var_7)) - (((/* implicit */int) var_5))))))));
}
