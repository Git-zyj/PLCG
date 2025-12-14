/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240431
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240431 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240431
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
    var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) var_2))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_0] = ((/* implicit */unsigned char) 9223372036854775807LL);
                arr_6 [i_0] = ((/* implicit */long long int) arr_3 [i_0] [(signed char)18]);
                arr_7 [i_0] = ((/* implicit */unsigned int) (_Bool)0);
                /* LoopSeq 1 */
                for (unsigned char i_2 = 0; i_2 < 22; i_2 += 4) 
                {
                    var_15 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_8 [i_1] [i_2])), (max((var_6), (((/* implicit */long long int) 3627244795U))))))) < (((((/* implicit */_Bool) ((((/* implicit */_Bool) 2100394364U)) ? (arr_1 [i_0] [i_1]) : (((/* implicit */unsigned long long int) arr_8 [i_0] [(short)18]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_8 [i_0] [i_1])))) : (var_3)))));
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 0; i_3 < 22; i_3 += 2) 
                    {
                        arr_13 [i_0] [i_2] [i_1] [i_0] = ((/* implicit */unsigned long long int) (_Bool)1);
                        arr_14 [i_1] [i_0] [i_0] [(_Bool)1] = ((/* implicit */unsigned int) (+(((/* implicit */int) ((var_7) == (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))));
                    }
                    var_16 = ((/* implicit */long long int) ((((((/* implicit */int) (unsigned short)19394)) << (((/* implicit */int) var_1)))) % (((/* implicit */int) arr_11 [i_1] [i_1] [i_2] [i_0]))));
                    arr_15 [i_0] = ((/* implicit */long long int) (~((+(((((/* implicit */_Bool) arr_11 [i_2] [i_1] [i_2] [i_2])) ? (((/* implicit */int) (short)12991)) : (((/* implicit */int) var_1))))))));
                }
            }
        } 
    } 
    var_17 = ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_5))))) ? (((((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-12986))))) + (((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) / (var_3))))) : (((unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (var_3) : (var_3))))));
    var_18 = ((/* implicit */unsigned short) (short)-12992);
}
