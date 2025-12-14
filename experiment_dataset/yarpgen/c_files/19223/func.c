/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19223
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19223 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19223
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
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                {
                    var_12 = ((/* implicit */unsigned long long int) arr_6 [i_0] [i_1] [i_2]);
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 17; i_4 += 1) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned long long int) (((~(((/* implicit */int) var_7)))) | (((/* implicit */int) ((short) arr_9 [i_0] [i_1] [i_0] [i_3] [i_0] [(signed char)14])))));
                                arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) ((arr_9 [i_3] [i_1] [i_2] [i_3] [i_4] [(_Bool)1]) ^ (((/* implicit */int) ((unsigned short) (~(var_3)))))));
                                var_14 = ((/* implicit */short) (((((!(((/* implicit */_Bool) arr_8 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4])))) ? (((/* implicit */int) ((short) arr_10 [i_0] [i_0] [i_0]))) : (((/* implicit */int) arr_4 [i_3] [i_0])))) | ((~(((/* implicit */int) arr_0 [i_1] [i_0]))))));
                                var_15 = ((/* implicit */unsigned int) (short)-10340);
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_14 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)10358))))) ? ((~(arr_5 [i_0] [i_0] [(unsigned short)12]))) : (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))));
    }
    /* vectorizable */
    for (short i_5 = 0; i_5 < 21; i_5 += 3) 
    {
        arr_18 [i_5] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) arr_15 [14ULL])) || (((/* implicit */_Bool) arr_17 [i_5]))));
        var_16 = ((/* implicit */unsigned long long int) var_11);
        var_17 = (~(((/* implicit */int) arr_17 [i_5])));
    }
    var_18 *= var_8;
    var_19 = ((/* implicit */unsigned long long int) (((~(((/* implicit */int) (unsigned char)255)))) <= (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) ((unsigned short) var_8))) : (((/* implicit */int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) var_1)))))))));
}
