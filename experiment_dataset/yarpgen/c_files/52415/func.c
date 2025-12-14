/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52415
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52415 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52415
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
    var_14 = ((/* implicit */unsigned char) var_12);
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            for (short i_2 = 4; i_2 < 16; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_3 = 3; i_3 < 16; i_3 += 2) 
                    {
                        var_15 = min((((/* implicit */unsigned long long int) ((((/* implicit */long long int) arr_7 [i_0] [i_1] [i_2 - 2])) & (((arr_4 [i_0]) ? (var_7) : (((/* implicit */long long int) 1631464613U))))))), (max((var_3), (((/* implicit */unsigned long long int) ((arr_4 [i_2]) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)120)))))))));
                        var_16 = ((/* implicit */long long int) ((max((((/* implicit */unsigned long long int) (unsigned short)65513)), (var_9))) >> (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (signed char)-16)) + (((/* implicit */int) (signed char)7))))))))));
                        var_17 = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)2)) ? (((/* implicit */int) (unsigned short)30688)) : (((/* implicit */int) (signed char)-5))));
                    }
                    for (long long int i_4 = 0; i_4 < 18; i_4 += 2) 
                    {
                        var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) - (var_9)))) ? (((/* implicit */long long int) (~(((/* implicit */int) (signed char)-16))))) : (((long long int) (unsigned char)165))));
                        var_19 |= ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)8)) ? (-142933506) : (((/* implicit */int) (short)16995))));
                        var_20 |= ((/* implicit */unsigned short) ((((/* implicit */unsigned int) (+(((/* implicit */int) arr_11 [i_2 - 4] [i_2] [i_2] [i_2 - 2]))))) >= (((((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)34175))))) & (max((((/* implicit */unsigned int) arr_11 [i_0] [i_0] [i_0] [15])), (var_2)))))));
                    }
                    var_21 = ((((/* implicit */_Bool) arr_0 [i_2 - 4])) ? (((((/* implicit */_Bool) arr_0 [i_2 - 3])) ? (arr_0 [i_2 - 1]) : (arr_0 [i_2 - 4]))) : (arr_0 [i_2 - 1]));
                    var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (signed char)-15)), (15427315607556246986ULL))))));
                    /* LoopNest 2 */
                    for (short i_5 = 0; i_5 < 18; i_5 += 2) 
                    {
                        for (short i_6 = 0; i_6 < 18; i_6 += 1) 
                        {
                            {
                                var_23 &= (!(((/* implicit */_Bool) arr_16 [i_5] [i_2 + 2] [i_2] [i_2 - 4] [i_0] [(signed char)6])));
                                var_24 = ((/* implicit */int) max((var_24), (((((/* implicit */_Bool) arr_14 [i_0] [i_1] [i_1] [15ULL] [i_5] [i_6])) ? (arr_19 [i_0] [i_0] [i_2 + 2] [i_2 - 1] [i_2 - 2] [i_2] [i_2 - 1]) : (((((/* implicit */_Bool) (unsigned char)88)) ? (((/* implicit */int) (unsigned char)254)) : (arr_15 [i_2 + 1] [i_2 - 3])))))));
                                var_25 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_13) | (var_5)))) ? (((/* implicit */int) arr_20 [i_6])) : (((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) 11019772456720343494ULL)))))))), (((var_3) * (((/* implicit */unsigned long long int) ((/* implicit */int) (short)0)))))));
                            }
                        } 
                    } 
                    var_26 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((arr_21 [i_0] [i_0] [(_Bool)1] [(_Bool)1] [i_2 - 1] [(_Bool)1] [i_2 - 1]) ? (((/* implicit */int) arr_21 [i_1] [8ULL] [(short)14] [(short)12] [i_2 - 1] [i_2 - 3] [i_2])) : (((/* implicit */int) arr_21 [i_0] [i_2 - 1] [i_2] [i_2] [i_2 + 2] [i_2] [i_2]))))), ((((~(var_3))) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_1] [i_2] [i_2 - 1] [i_1] [i_1] [i_1] [i_1])))))));
                }
            } 
        } 
    } 
    var_27 = var_11;
    var_28 = ((/* implicit */unsigned long long int) min((var_28), (min((((/* implicit */unsigned long long int) var_7)), (((((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) var_6)) : (18446744073709551585ULL))) >> (((var_1) - (1123658378618495246LL)))))))));
}
