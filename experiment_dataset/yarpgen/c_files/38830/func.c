/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38830
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38830 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38830
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
    for (short i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (long long int i_3 = 0; i_3 < 24; i_3 += 1) 
                    {
                        var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) (_Bool)1))));
                        arr_11 [i_2] = ((/* implicit */short) (-(((/* implicit */int) min((((/* implicit */short) (signed char)127)), (arr_1 [i_2]))))));
                        arr_12 [i_2] [(unsigned char)16] [i_2] [(unsigned char)16] = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */long long int) (-2147483647 - 1))) != ((-(var_12)))))) >> ((((~(((/* implicit */int) arr_6 [i_0] [i_1] [i_2] [i_1])))) + (40423)))));
                    }
                    var_18 = ((/* implicit */unsigned short) (((_Bool)1) || (((/* implicit */_Bool) (signed char)120))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_4 = 0; i_4 < 24; i_4 += 1) 
                    {
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */long long int) max((var_19), (((long long int) ((((/* implicit */_Bool) arr_14 [i_0] [i_2] [i_4] [i_5])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1)))) : (arr_14 [i_1] [i_2] [17ULL] [i_5]))))));
                                var_20 = ((/* implicit */unsigned short) (_Bool)1);
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */long long int) ((((/* implicit */long long int) ((arr_3 [i_0]) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) arr_3 [i_2]))))) != ((-(var_12)))));
                }
            } 
        } 
    } 
    var_22 -= ((/* implicit */long long int) var_11);
    /* LoopSeq 1 */
    for (short i_6 = 2; i_6 < 24; i_6 += 4) 
    {
        var_23 *= ((/* implicit */unsigned int) var_3);
        arr_19 [(_Bool)1] [i_6] = ((unsigned short) ((((/* implicit */int) arr_18 [i_6] [i_6 + 1])) | (((/* implicit */int) arr_18 [i_6] [i_6 + 1]))));
    }
}
