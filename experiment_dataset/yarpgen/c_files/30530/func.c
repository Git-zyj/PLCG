/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30530
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30530 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30530
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
    var_11 -= ((/* implicit */unsigned short) var_2);
    var_12 |= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned short)43615))));
    var_13 = ((/* implicit */unsigned long long int) var_1);
    /* LoopNest 2 */
    for (unsigned short i_0 = 3; i_0 < 12; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                arr_4 [i_0] = ((/* implicit */signed char) arr_1 [i_0]);
                var_14 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [5ULL])) ? (arr_3 [i_0 + 1] [i_1] [i_1]) : ((~(arr_3 [i_0 - 1] [i_0 - 2] [i_0 - 2])))));
                var_15 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0 + 1])) / (var_4)))) ? ((+(724371984761466187LL))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) (short)-12615))))));
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 13; i_2 += 1) 
                {
                    for (unsigned short i_3 = 0; i_3 < 13; i_3 += 2) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0 + 1]))))) != ((-(min((var_4), (((/* implicit */int) arr_5 [i_0]))))))));
                            var_17 = ((/* implicit */int) var_5);
                            /* LoopSeq 1 */
                            for (int i_4 = 0; i_4 < 13; i_4 += 1) 
                            {
                                var_18 += ((/* implicit */long long int) ((((((/* implicit */_Bool) (-(var_7)))) || (((/* implicit */_Bool) arr_7 [i_0] [i_0])))) ? ((~(((/* implicit */int) arr_1 [i_4])))) : ((+(((/* implicit */int) var_5))))));
                                var_19 = ((/* implicit */signed char) ((((/* implicit */int) (short)12615)) / (((/* implicit */int) (unsigned short)2520))));
                                var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) var_10))));
                                var_21 = ((/* implicit */signed char) arr_8 [i_0] [7LL] [i_2] [i_1] [i_0]);
                            }
                            var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_1] [i_0] [i_0] [(unsigned short)10] [i_3])) ? (((/* implicit */int) arr_6 [i_0])) : (((/* implicit */int) arr_6 [i_0]))))), (max((((/* implicit */unsigned long long int) arr_6 [i_0])), (var_2)))))) ? ((~(var_4))) : (((/* implicit */int) arr_6 [i_0]))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_23 = ((/* implicit */_Bool) (+(((((/* implicit */unsigned long long int) (~(33554424)))) & (var_3)))));
}
