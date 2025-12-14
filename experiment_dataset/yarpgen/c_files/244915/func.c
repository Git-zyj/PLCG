/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244915
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244915 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244915
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
    var_12 = ((/* implicit */unsigned long long int) ((((unsigned int) ((63488U) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)58776)))))) < (((1203780029U) % (((/* implicit */unsigned int) ((/* implicit */int) (short)1813)))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 1; i_2 < 17; i_2 += 4) 
                {
                    for (unsigned short i_3 = 0; i_3 < 18; i_3 += 1) 
                    {
                        {
                            arr_10 [i_2] [i_3] = ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */_Bool) arr_8 [i_2 + 1] [i_2] [i_2 + 1])) ? (((/* implicit */int) arr_8 [i_2 - 1] [i_2] [i_2 - 1])) : (((/* implicit */int) arr_8 [i_2 - 1] [i_2] [i_2 - 1])))));
                            /* LoopSeq 1 */
                            for (unsigned short i_4 = 0; i_4 < 18; i_4 += 1) 
                            {
                                var_13 = ((/* implicit */unsigned char) 16911433728LL);
                                arr_14 [i_2] [(_Bool)1] [(unsigned char)5] [(_Bool)1] = (+(((/* implicit */int) var_8)));
                            }
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (int i_5 = 2; i_5 < 16; i_5 += 3) 
                {
                    var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) 2374109723U))));
                    arr_17 [i_0] |= ((/* implicit */signed char) 1920857566U);
                    arr_18 [i_5] [i_5] = ((/* implicit */unsigned short) (!(((((/* implicit */_Bool) arr_5 [i_5] [i_5 + 1] [i_5 + 2])) || (((/* implicit */_Bool) ((unsigned char) (unsigned char)145)))))));
                }
                for (unsigned long long int i_6 = 1; i_6 < 17; i_6 += 3) 
                {
                    arr_22 [i_6 + 1] [i_6] [i_1] [10] = ((/* implicit */unsigned char) (-(((unsigned long long int) arr_12 [i_1] [i_1] [i_1] [i_6] [i_1] [i_1] [i_0]))));
                    arr_23 [i_6] [i_1] [i_6] = ((/* implicit */long long int) var_10);
                }
                var_15 = ((/* implicit */short) (~(min((1920857572U), (((/* implicit */unsigned int) (unsigned char)125))))));
            }
        } 
    } 
}
