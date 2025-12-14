/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54924
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54924 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54924
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
    var_20 = ((/* implicit */long long int) var_9);
    var_21 = ((/* implicit */unsigned long long int) var_2);
    var_22 = ((/* implicit */unsigned long long int) var_11);
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 9; i_0 += 1) 
    {
        for (unsigned int i_1 = 4; i_1 < 10; i_1 += 2) 
        {
            {
                var_23 = ((/* implicit */unsigned int) (unsigned char)241);
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 11; i_2 += 4) 
                {
                    for (short i_3 = 3; i_3 < 7; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 11; i_4 += 3) 
                        {
                            {
                                arr_11 [i_0 + 2] [i_0 - 1] [i_2] [(unsigned char)2] [i_0] [i_2] = ((/* implicit */short) min((((((/* implicit */_Bool) (unsigned char)112)) ? (((/* implicit */long long int) var_8)) : (arr_8 [i_0] [i_4] [i_2] [i_4] [i_0 - 1] [i_0] [i_0]))), ((-(arr_8 [i_0 + 2] [5LL] [i_2] [i_0] [i_0 - 1] [i_0] [i_0 - 1])))));
                                arr_12 [i_0] [i_0] [1LL] [i_3] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) min((min((var_2), (((/* implicit */int) (unsigned char)192)))), (((/* implicit */int) ((unsigned char) var_14)))))) ? (min((((/* implicit */long long int) (short)27645)), (max((-4226454291519375185LL), (-3551780322587503194LL))))) : (((((/* implicit */long long int) var_10)) & (4226454291519375184LL)))));
                                arr_13 [i_4] [i_0] [i_2] [i_0] [i_0 + 2] = ((/* implicit */int) ((((/* implicit */_Bool) min(((unsigned char)249), ((unsigned char)112)))) ? (-4226454291519375185LL) : (((/* implicit */long long int) 2147483647))));
                                var_24 = ((/* implicit */int) (-(var_11)));
                                arr_14 [3LL] [i_1] [i_2] [i_1] [i_0] [i_1] [i_2] = ((((/* implicit */_Bool) ((((/* implicit */int) arr_9 [i_3 + 1] [i_3 - 1] [i_3 + 3] [i_0] [(short)7])) + (((/* implicit */int) min((arr_6 [i_4] [i_0] [i_0] [i_0] [i_0]), (var_18))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) (short)-27893))) ? (arr_4 [i_0 + 2] [i_1] [(unsigned char)10] [i_0 + 2]) : (((((/* implicit */int) var_12)) / ((-2147483647 - 1))))))) : (7276360029361775662ULL));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned int i_5 = 2; i_5 < 9; i_5 += 1) 
                {
                    for (unsigned long long int i_6 = 1; i_6 < 8; i_6 += 3) 
                    {
                        for (long long int i_7 = 0; i_7 < 11; i_7 += 2) 
                        {
                            {
                                arr_23 [i_0] [i_0] [i_0 + 1] [i_0] = ((/* implicit */unsigned int) (unsigned char)77);
                                arr_24 [3U] [i_6 + 2] [i_0] [i_0] [i_0] [3] = ((/* implicit */long long int) var_14);
                            }
                        } 
                    } 
                } 
                var_25 ^= ((/* implicit */int) ((((unsigned long long int) ((((/* implicit */_Bool) var_19)) ? (15820301338266872526ULL) : (((/* implicit */unsigned long long int) -2040639091))))) | (15820301338266872531ULL)));
                arr_25 [i_1] [i_0] [i_1] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_1] [i_0] [i_0])) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_17))));
            }
        } 
    } 
}
