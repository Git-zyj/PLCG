/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36005
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36005 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36005
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
    var_12 = ((/* implicit */short) (-(max((((11459182318230591473ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))), (((/* implicit */unsigned long long int) var_11))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 13; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            {
                var_13 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_1 [i_0] [i_0 - 1]))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 12; i_2 += 2) 
                {
                    for (short i_3 = 2; i_3 < 13; i_3 += 1) 
                    {
                        {
                            arr_8 [(signed char)4] [i_1] [i_0] [i_3] = ((/* implicit */unsigned long long int) max((arr_3 [i_0 - 1] [i_2 - 1]), (((/* implicit */long long int) (-(((/* implicit */int) min((arr_1 [i_1] [i_1]), ((short)29574)))))))));
                            arr_9 [(short)10] [(unsigned char)6] [i_1] [12ULL] |= ((/* implicit */unsigned int) ((signed char) arr_7 [i_0 + 1] [i_2 + 2] [i_1]));
                        }
                    } 
                } 
            }
        } 
    } 
    var_14 = ((/* implicit */signed char) (-(0ULL)));
}
