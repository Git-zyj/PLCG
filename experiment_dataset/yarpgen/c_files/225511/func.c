/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225511
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225511 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225511
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
    var_16 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (((var_13) ? (var_0) : (var_4)))))) ? (((/* implicit */int) ((((/* implicit */long long int) (-(var_11)))) >= ((~(var_7)))))) : (((/* implicit */int) var_3)));
    /* LoopSeq 3 */
    for (signed char i_0 = 1; i_0 < 21; i_0 += 1) 
    {
        var_17 = ((/* implicit */int) var_10);
        /* LoopNest 3 */
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (unsigned short i_2 = 1; i_2 < 21; i_2 += 3) 
            {
                for (unsigned short i_3 = 0; i_3 < 23; i_3 += 4) 
                {
                    {
                        arr_9 [i_0] [i_0] [i_0] [i_0] = ((arr_8 [i_0] [(short)8] [i_2 + 1]) / (max((arr_8 [i_0] [i_1] [i_2]), (((/* implicit */int) arr_5 [(_Bool)0] [i_1] [i_0])))));
                        /* LoopSeq 1 */
                        for (signed char i_4 = 1; i_4 < 22; i_4 += 2) 
                        {
                            arr_13 [i_4] [16LL] [i_0] [i_0] [3U] [i_0] = ((/* implicit */short) max(((-((+(((/* implicit */int) var_14)))))), ((-(((/* implicit */int) var_12))))));
                            arr_14 [i_3] [i_1] [i_1] [i_3] [i_3] &= ((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
                            arr_15 [i_0] [5] [i_0] [i_3] [i_4] [(short)9] [5] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_6 [i_2] [i_2] [i_0]))));
                            arr_16 [i_0] [i_0] [i_0] [i_3] [i_4 - 1] = ((/* implicit */unsigned int) max((((((/* implicit */long long int) arr_8 [i_4] [i_0] [i_0])) % (max((((/* implicit */long long int) arr_7 [6ULL] [(short)17] [(signed char)6])), (var_7))))), (((/* implicit */long long int) max((((/* implicit */unsigned int) (-(arr_8 [i_1] [i_3] [i_4])))), (max((var_2), (((/* implicit */unsigned int) var_14)))))))));
                        }
                        var_18 = ((/* implicit */short) max((((/* implicit */long long int) arr_5 [i_0 + 2] [i_0 + 2] [i_0 + 1])), (((((/* implicit */_Bool) max((arr_4 [i_0] [i_0] [(_Bool)1]), (((/* implicit */int) arr_11 [i_0] [i_0]))))) ? (((/* implicit */long long int) arr_4 [i_0] [i_0 + 2] [i_0])) : (min((((/* implicit */long long int) var_5)), (arr_0 [i_2])))))));
                    }
                } 
            } 
        } 
    }
    for (unsigned int i_5 = 3; i_5 < 13; i_5 += 2) 
    {
        var_19 = ((/* implicit */int) max((((/* implicit */unsigned long long int) arr_17 [i_5])), (((arr_5 [i_5] [i_5] [i_5]) ? (arr_3 [i_5 - 3]) : (((/* implicit */unsigned long long int) (((_Bool)0) ? (4023417759U) : (0U))))))));
        arr_20 [i_5] = ((/* implicit */unsigned short) max((arr_0 [i_5]), (((/* implicit */long long int) max((((/* implicit */int) var_15)), (((((/* implicit */int) var_5)) | (arr_4 [0U] [i_5] [i_5]))))))));
        var_20 *= ((/* implicit */_Bool) var_1);
    }
    for (long long int i_6 = 1; i_6 < 13; i_6 += 2) 
    {
        var_21 = ((/* implicit */unsigned long long int) min((var_21), (((max((max((4414597660717749435ULL), (((/* implicit */unsigned long long int) 0U)))), (((/* implicit */unsigned long long int) min((((/* implicit */int) var_10)), (arr_4 [22U] [22U] [22U])))))) >> ((((~(((/* implicit */int) arr_12 [i_6] [i_6 - 1] [(signed char)8] [i_6 - 1] [i_6 + 1] [i_6])))) + (54)))))));
        var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) (+(((/* implicit */int) min((arr_2 [0ULL] [i_6 - 1]), (((/* implicit */signed char) var_13))))))))));
    }
    var_23 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) (~(((/* implicit */int) var_5))))) : (((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (var_7)))))));
    var_24 = ((/* implicit */signed char) max((max((max((((/* implicit */unsigned int) var_12)), (var_2))), (((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned char) var_13))))))), (var_0)));
}
