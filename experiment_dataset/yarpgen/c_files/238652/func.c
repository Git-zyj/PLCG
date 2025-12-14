/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238652
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238652 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238652
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
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                {
                    arr_8 [3ULL] [i_0] [8ULL] [i_2] = ((/* implicit */_Bool) arr_3 [i_0]);
                    var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)0)) || (((/* implicit */_Bool) (short)10))));
                    arr_9 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */signed char) max((min((min((((/* implicit */unsigned int) arr_4 [i_1] [i_0])), (var_8))), (((/* implicit */unsigned int) max((-1446435616), (((/* implicit */int) arr_3 [i_0]))))))), (((/* implicit */unsigned int) var_9))));
                }
            } 
        } 
    } 
    var_19 += ((/* implicit */signed char) var_7);
    /* LoopNest 2 */
    for (short i_3 = 3; i_3 < 10; i_3 += 4) 
    {
        for (unsigned long long int i_4 = 0; i_4 < 11; i_4 += 1) 
        {
            {
                var_20 = ((/* implicit */_Bool) min((max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (short)-32762)) : (((/* implicit */int) arr_1 [(unsigned short)14]))))), ((-(23U))))), (((/* implicit */unsigned int) max((max((((/* implicit */unsigned short) (short)32762)), (arr_6 [8U]))), (((/* implicit */unsigned short) arr_4 [i_4] [i_3])))))));
                /* LoopSeq 1 */
                for (long long int i_5 = 0; i_5 < 11; i_5 += 3) 
                {
                    var_21 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) min(((signed char)-68), ((signed char)67)))), (((((/* implicit */_Bool) arr_16 [i_5])) ? (arr_16 [i_5]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)66)))))));
                    /* LoopNest 2 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            {
                                var_22 = min((((/* implicit */short) (_Bool)1)), ((short)-17));
                                var_23 ^= ((/* implicit */short) (~(arr_17 [0ULL] [0ULL])));
                            }
                        } 
                    } 
                }
                arr_23 [i_3 - 1] [i_3 - 1] [i_3 - 1] = ((/* implicit */unsigned int) max((((/* implicit */long long int) arr_21 [i_3] [i_3 - 1] [(unsigned short)0] [i_3 + 1] [i_3 - 3])), (((var_4) - (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_3] [i_3] [i_3] [i_4] [i_4])))))));
            }
        } 
    } 
}
