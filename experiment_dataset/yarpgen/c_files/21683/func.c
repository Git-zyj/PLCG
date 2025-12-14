/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21683
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21683 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21683
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
    for (unsigned short i_0 = 1; i_0 < 15; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */long long int) (unsigned short)43292);
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned short i_2 = 0; i_2 < 16; i_2 += 2) 
                {
                    var_15 = ((/* implicit */unsigned long long int) ((unsigned int) (unsigned short)43277));
                    arr_7 [i_0] = ((/* implicit */unsigned short) ((int) (signed char)75));
                    var_16 = ((/* implicit */unsigned long long int) ((unsigned int) 13165884489309363976ULL));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 15; i_3 += 3) 
                    {
                        for (short i_4 = 3; i_4 < 14; i_4 += 3) 
                        {
                            {
                                var_17 = ((/* implicit */long long int) ((short) arr_6 [i_0 - 1] [i_0] [i_0 + 1] [i_0 + 1]));
                                var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_6)) | (((/* implicit */int) ((unsigned char) arr_4 [i_4] [i_3] [i_1])))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_19 = ((/* implicit */_Bool) var_8);
    var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) var_3))));
}
