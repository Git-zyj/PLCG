/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191638
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191638 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191638
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 7; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 10; i_3 += 3) 
                    {
                        for (short i_4 = 3; i_4 < 9; i_4 += 4) 
                        {
                            {
                                var_13 = ((/* implicit */signed char) min((134217728), (((/* implicit */int) (unsigned short)45608))));
                                var_14 += ((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)10))));
                            }
                        } 
                    } 
                    var_15 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) var_6))) ? (((/* implicit */int) (unsigned short)19908)) : ((~(1161688641)))))) ? (min((var_8), (((/* implicit */unsigned int) min((arr_3 [i_0]), ((short)1022)))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_11 [(short)5] [i_1 - 1] [i_1 - 1] [(unsigned short)0]))))));
                    arr_14 [i_0] = ((/* implicit */unsigned int) -4LL);
                    arr_15 [i_0] [i_1 + 2] [i_0] [i_0] = ((/* implicit */unsigned short) (~(((unsigned long long int) 3898945640U))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        for (unsigned short i_6 = 1; i_6 < 12; i_6 += 4) 
        {
            for (short i_7 = 0; i_7 < 15; i_7 += 3) 
            {
                {
                    arr_22 [i_5] [i_5] = ((/* implicit */unsigned short) var_7);
                    arr_23 [i_5] [(signed char)9] [(signed char)5] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) ((short) ((((/* implicit */long long int) var_7)) / (9223372036854775807LL))))) : ((~(1069235105)))));
                }
            } 
        } 
    } 
}
