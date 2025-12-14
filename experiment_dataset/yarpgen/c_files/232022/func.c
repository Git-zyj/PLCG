/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232022
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232022 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232022
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
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (unsigned int i_1 = 1; i_1 < 13; i_1 += 3) 
        {
            {
                arr_8 [i_0] = ((/* implicit */signed char) var_13);
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 14; i_2 += 3) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (unsigned long long int i_4 = 0; i_4 < 14; i_4 += 3) 
                            {
                                var_17 = ((/* implicit */unsigned int) max((var_17), (max((min((arr_10 [i_1 + 1] [i_1] [i_1 - 1]), (((/* implicit */unsigned int) arr_12 [i_0] [i_1 + 1] [i_2] [i_3])))), (((/* implicit */unsigned int) arr_5 [i_0] [i_1 + 1] [i_4]))))));
                                arr_15 [i_2] [i_1 + 1] [i_4] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)37063))) > (11262767926271897724ULL)));
                                arr_16 [i_0] [i_2] [i_2] [i_2] [i_0] = ((/* implicit */unsigned char) max((min((((/* implicit */unsigned int) (signed char)-38)), (arr_13 [(_Bool)1] [i_1 + 1] [i_1 + 1] [i_3] [(signed char)8]))), (((/* implicit */unsigned int) var_7))));
                            }
                            var_18 = ((/* implicit */int) max((((/* implicit */unsigned long long int) (signed char)-24)), (var_15)));
                            arr_17 [i_0] [i_2] [i_2] [i_2] [i_0] = ((/* implicit */unsigned int) var_8);
                            arr_18 [i_0] [i_3] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_7 [i_1 - 1])) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (signed char)-5)) : (((/* implicit */int) (signed char)31))))));
                        }
                    } 
                } 
                var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)253)) ? (131008) : (((/* implicit */int) arr_4 [i_0] [i_1 + 1]))));
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 14; i_5 += 3) 
                {
                    for (unsigned short i_6 = 0; i_6 < 14; i_6 += 3) 
                    {
                        for (signed char i_7 = 0; i_7 < 14; i_7 += 2) 
                        {
                            {
                                var_20 -= ((/* implicit */signed char) arr_13 [i_6] [i_6] [i_5] [(signed char)1] [(signed char)1]);
                                arr_27 [i_0] [i_6] [i_1 + 1] [i_5] [12U] [12U] = ((/* implicit */unsigned int) (+((+(((/* implicit */int) max((((/* implicit */unsigned char) var_2)), ((unsigned char)32))))))));
                                arr_28 [i_5] [i_5] [i_5] [i_5] [1ULL] [i_6] = ((/* implicit */int) var_16);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) var_1)) : (var_16))), (((/* implicit */unsigned int) var_2))))) : (var_11)));
}
