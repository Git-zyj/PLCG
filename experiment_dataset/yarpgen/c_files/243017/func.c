/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243017
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243017 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243017
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
    var_20 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) var_8))) + (var_10)));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (long long int i_1 = 3; i_1 < 12; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                {
                    arr_7 [12ULL] [i_1 - 2] [i_2] = ((/* implicit */signed char) arr_1 [i_0]);
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned char i_3 = 0; i_3 < 14; i_3 += 3) 
                    {
                        var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_1 - 3] [i_1 + 1] [i_1])) ? (arr_2 [i_1 - 1] [i_1 - 1] [i_1]) : (189769082732034578LL)));
                        var_22 = ((/* implicit */long long int) var_5);
                        arr_10 [i_0] = ((/* implicit */signed char) 4279819667U);
                    }
                    /* vectorizable */
                    for (signed char i_4 = 0; i_4 < 14; i_4 += 3) 
                    {
                        var_23 -= ((/* implicit */long long int) ((arr_8 [i_1 + 1] [i_1 + 2] [i_1 + 1]) ? (((/* implicit */int) arr_8 [i_1 + 1] [i_1 + 2] [i_1 + 1])) : (((/* implicit */int) arr_8 [i_1 + 1] [i_1 + 2] [i_1 + 1]))));
                        var_24 = ((/* implicit */unsigned long long int) ((long long int) 7703818629984255710ULL));
                    }
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 2; i_5 < 10; i_5 += 4) 
                    {
                        for (long long int i_6 = 0; i_6 < 14; i_6 += 3) 
                        {
                            {
                                var_25 ^= arr_5 [i_0] [i_1] [i_0] [i_5];
                                var_26 = ((/* implicit */long long int) min((var_26), (((/* implicit */long long int) (unsigned short)33294))));
                                var_27 = ((/* implicit */unsigned short) max((var_27), (((/* implicit */unsigned short) arr_8 [i_0] [13U] [13U]))));
                                var_28 ^= ((/* implicit */long long int) (-2147483647 - 1));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
