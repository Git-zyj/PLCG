/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34437
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34437 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34437
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
    var_20 = ((/* implicit */unsigned int) var_4);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (signed char i_1 = 4; i_1 < 20; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 21; i_2 += 2) 
                {
                    for (signed char i_3 = 1; i_3 < 18; i_3 += 1) 
                    {
                        {
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (int i_4 = 1; i_4 < 18; i_4 += 4) 
                            {
                                var_21 = ((/* implicit */unsigned int) (+((-(((/* implicit */int) (unsigned short)5))))));
                                var_22 ^= 451995328;
                                arr_13 [i_1] [i_3] [i_2] [i_1] [i_1] [i_1] [i_1] = (short)24576;
                                arr_14 [(unsigned short)12] [i_1] [(unsigned short)12] [(unsigned short)12] [i_1] [(unsigned short)12] = ((unsigned short) ((((/* implicit */_Bool) (unsigned char)249)) ? (arr_11 [i_0] [(unsigned short)14] [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_3] [i_3])))));
                            }
                            arr_15 [i_3] [i_2] [i_1] [i_1 - 2] [i_0] = ((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) arr_7 [i_0] [i_1 - 3] [i_1] [i_3 - 1])) ? (2147483641) : (arr_7 [i_1] [i_1 - 3] [i_1] [i_2]))));
                            arr_16 [i_1] [(signed char)6] [(_Bool)1] = ((/* implicit */signed char) ((((/* implicit */int) (signed char)8)) * (((/* implicit */int) arr_4 [i_1] [i_2] [i_2]))));
                        }
                    } 
                } 
                var_23 = ((/* implicit */unsigned short) (+(((/* implicit */int) (!(((/* implicit */_Bool) min((4294705152ULL), (((/* implicit */unsigned long long int) (unsigned char)1))))))))));
            }
        } 
    } 
}
