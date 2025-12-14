/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211117
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211117 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211117
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
    for (unsigned long long int i_0 = 3; i_0 < 14; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                var_10 = ((/* implicit */unsigned short) ((signed char) arr_5 [i_0]));
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 15; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 3) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (int i_4 = 2; i_4 < 13; i_4 += 3) 
                            {
                                var_11 = ((/* implicit */unsigned short) max(((!(var_4))), ((!(((/* implicit */_Bool) var_9))))));
                                arr_13 [i_0] [i_0] [5U] [12ULL] [i_0] [i_0 - 1] [i_0] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (((+(((/* implicit */int) (_Bool)1)))) != (((/* implicit */int) (_Bool)1)))))));
                            }
                            arr_14 [i_0] [i_1] [i_0] [i_3] = min((((/* implicit */unsigned long long int) arr_8 [i_0] [(unsigned short)10] [i_0] [i_3])), (((unsigned long long int) (_Bool)1)));
                            var_12 = ((/* implicit */_Bool) min((var_12), (((/* implicit */_Bool) var_0))));
                        }
                    } 
                } 
                var_13 = ((/* implicit */unsigned short) (_Bool)1);
                var_14 = ((/* implicit */unsigned int) (_Bool)1);
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned long long int) (_Bool)1);
    var_16 = ((/* implicit */int) (unsigned short)26787);
    var_17 = ((/* implicit */unsigned int) (signed char)-48);
    var_18 = ((/* implicit */unsigned short) (+((~(((/* implicit */int) (unsigned char)9))))));
}
