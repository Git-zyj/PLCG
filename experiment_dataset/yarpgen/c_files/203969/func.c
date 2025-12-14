/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203969
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203969 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203969
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
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 13; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                arr_7 [i_0] [i_0] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((4021616128U) | (4021616148U)))) ? (min((273351167U), (((/* implicit */unsigned int) (_Bool)1)))) : (273351147U)));
                arr_8 [i_0] [i_0] [i_1] = ((/* implicit */signed char) 273351147U);
                arr_9 [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) var_0);
                arr_10 [i_0] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) (signed char)-57)) ? (arr_5 [i_0 + 1] [i_1]) : (arr_5 [i_0 + 2] [i_1]))), (((/* implicit */long long int) (~(((((/* implicit */_Bool) (signed char)54)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)99)))))))));
                /* LoopSeq 1 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_16 |= ((/* implicit */unsigned char) (signed char)-55);
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 3; i_3 < 14; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 16; i_4 += 4) 
                        {
                            {
                                var_17 = ((/* implicit */_Bool) min((((/* implicit */int) min(((unsigned short)8682), (((/* implicit */unsigned short) (_Bool)0))))), (((arr_18 [i_0] [i_1] [i_2] [i_3 - 2] [i_2]) << (((arr_18 [i_0 + 2] [i_0 - 1] [i_0] [i_0 - 1] [i_0]) - (171245929)))))));
                                arr_20 [i_0] [i_1] [i_2] [i_2] [i_0] = ((/* implicit */long long int) var_1);
                                arr_21 [i_0] [i_0] [i_2] [i_0] [i_0] [i_4] = ((/* implicit */short) (((((_Bool)1) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)99)) ? (((/* implicit */long long int) 273351169U)) : (arr_4 [i_0])))) : (((unsigned long long int) (unsigned char)178)))) & (((/* implicit */unsigned long long int) max((((((/* implicit */unsigned int) ((/* implicit */int) var_2))) ^ (273351148U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned short)20551))))))))));
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */short) ((((/* implicit */_Bool) 2943100808U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-71))) : (4294967295U)));
                    var_19 = ((/* implicit */unsigned int) max((((/* implicit */unsigned char) var_12)), ((unsigned char)4)));
                }
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned int) ((signed char) ((((((/* implicit */_Bool) (signed char)-4)) || (((/* implicit */_Bool) (short)-274)))) ? (((var_14) / (((/* implicit */long long int) var_11)))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)74))) >= (4021616148U))))))));
}
