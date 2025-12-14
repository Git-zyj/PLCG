/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214133
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214133 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214133
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
    for (short i_0 = 4; i_0 < 14; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_12 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((unsigned short) arr_8 [i_0 - 3] [i_0] [i_0 - 3]))), (((arr_6 [i_1] [i_2]) - (((/* implicit */long long int) arr_4 [i_1] [i_2]))))))) ? (126100789566373888ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_2])))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 1; i_3 < 13; i_3 += 3) 
                    {
                        for (long long int i_4 = 2; i_4 < 14; i_4 += 3) 
                        {
                            {
                                var_13 = ((/* implicit */long long int) min((var_13), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_0] [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_9 [i_0 - 2] [15LL] [i_1] [i_2] [i_3] [i_4 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) : (126100789566373888ULL)))))) : (((unsigned long long int) max((0ULL), (((/* implicit */unsigned long long int) 3788518153U))))))))));
                                var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) max((max((((/* implicit */unsigned long long int) arr_3 [i_0])), (((unsigned long long int) (_Bool)0)))), (126100789566373888ULL))))));
                            }
                        } 
                    } 
                    arr_13 [i_1] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) max(((signed char)0), (((/* implicit */signed char) (((_Bool)1) && (((/* implicit */_Bool) (short)-9623)))))))) || (((/* implicit */_Bool) (signed char)-48))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (short i_5 = 1; i_5 < 12; i_5 += 1) 
    {
        for (long long int i_6 = 1; i_6 < 10; i_6 += 1) 
        {
            {
                var_15 = ((/* implicit */long long int) arr_8 [i_5] [i_5] [i_6]);
                /* LoopNest 2 */
                for (short i_7 = 1; i_7 < 11; i_7 += 4) 
                {
                    for (long long int i_8 = 0; i_8 < 13; i_8 += 3) 
                    {
                        {
                            arr_26 [i_5] [i_5] [i_5] [(unsigned char)7] = ((/* implicit */_Bool) max(((-(((/* implicit */int) (short)-16384)))), ((~(((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)230)) || (((/* implicit */_Bool) (short)21779)))))))));
                            var_16 += ((/* implicit */short) max((max((((/* implicit */long long int) arr_9 [i_5 + 1] [i_5] [i_6] [10ULL] [i_7] [i_8])), (3978082088720229144LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) (short)5432)) ? (((/* implicit */int) (short)-9623)) : (((/* implicit */int) (unsigned short)7015)))))));
                            arr_27 [i_5] [i_6] [i_5] [i_8] = ((/* implicit */unsigned short) ((unsigned int) max((((/* implicit */unsigned long long int) arr_23 [i_8])), (arr_22 [i_6] [i_6] [i_7] [i_7] [i_7 + 2] [i_7]))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_17 = ((/* implicit */long long int) var_9);
}
