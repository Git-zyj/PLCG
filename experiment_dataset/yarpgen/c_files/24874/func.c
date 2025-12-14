/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24874
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24874 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24874
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
    var_10 = ((/* implicit */int) ((((/* implicit */int) ((((((/* implicit */int) var_4)) & (((/* implicit */int) (unsigned short)65506)))) <= (((/* implicit */int) min((var_5), (var_4))))))) < (((/* implicit */int) min((((/* implicit */unsigned short) var_7)), (min((var_5), (var_9))))))));
    var_11 = ((/* implicit */unsigned short) (-(((/* implicit */int) var_6))));
    var_12 = ((unsigned short) var_7);
    var_13 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */int) (unsigned short)23)) / (((((/* implicit */int) (unsigned short)65512)) ^ (var_3))))) : (((/* implicit */int) var_6))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 3; i_2 < 9; i_2 += 2) 
                {
                    for (unsigned short i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        {
                            var_14 = (unsigned char)134;
                            arr_12 [(unsigned char)3] [i_1] [i_3] [i_3] &= ((/* implicit */unsigned char) (~(1404378203)));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 10; i_4 += 3) 
                {
                    for (unsigned short i_5 = 0; i_5 < 10; i_5 += 4) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (int i_6 = 1; i_6 < 8; i_6 += 2) 
                            {
                                arr_22 [1LL] [5] [i_6] [3LL] [i_6] [3LL] = ((/* implicit */unsigned short) (((((~(((/* implicit */int) (unsigned char)122)))) & ((-(var_3))))) != (((/* implicit */int) ((unsigned short) (unsigned short)8)))));
                                arr_23 [i_0] [7LL] [i_4] [i_4] [i_6] = ((/* implicit */long long int) arr_16 [i_6] [i_1] [(unsigned short)9] [i_5]);
                                arr_24 [i_0] [4] [i_4] [i_5] [4] |= ((/* implicit */unsigned char) (unsigned short)3);
                            }
                            arr_25 [7] [i_5] = ((/* implicit */int) (!(((-1LL) <= (((/* implicit */long long int) ((/* implicit */int) var_2)))))));
                        }
                    } 
                } 
                arr_26 [i_1] = ((/* implicit */unsigned short) (((~(-93597979138794641LL))) >= (((/* implicit */long long int) ((((/* implicit */int) var_5)) & (((/* implicit */int) ((unsigned char) var_1))))))));
            }
        } 
    } 
}
