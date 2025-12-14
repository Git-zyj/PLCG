/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215983
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215983 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215983
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
    /* LoopSeq 1 */
    for (int i_0 = 1; i_0 < 6; i_0 += 4) 
    {
        var_20 = ((/* implicit */int) ((short) 11093690860501012747ULL));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned long long int) max(((!(((/* implicit */_Bool) 885784108137387605ULL)))), (((((/* implicit */_Bool) ((unsigned int) arr_1 [i_0]))) || (((/* implicit */_Bool) max((((/* implicit */long long int) var_4)), (var_14))))))));
        var_21 = arr_0 [i_0] [i_0];
        var_22 -= ((/* implicit */unsigned int) ((int) -1LL));
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (int i_2 = 3; i_2 < 8; i_2 += 4) 
            {
                arr_7 [i_2] [1] [i_2 + 2] = ((/* implicit */short) (+((~(arr_4 [i_0])))));
                arr_8 [(short)3] [i_2] [i_2 - 1] = ((/* implicit */unsigned long long int) 1385191073U);
            }
            var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((min((((/* implicit */unsigned long long int) 1385191068U)), (arr_1 [i_1]))), (((/* implicit */unsigned long long int) ((var_6) ^ (((/* implicit */unsigned int) var_11)))))))) ? (arr_1 [i_0]) : (((/* implicit */unsigned long long int) (+(((int) var_18)))))));
        }
    }
    var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) max((((var_17) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))), (((/* implicit */unsigned int) var_8)))))));
    /* LoopNest 3 */
    for (unsigned short i_3 = 0; i_3 < 10; i_3 += 3) 
    {
        for (long long int i_4 = 0; i_4 < 10; i_4 += 1) 
        {
            for (signed char i_5 = 0; i_5 < 10; i_5 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_6 = 2; i_6 < 9; i_6 += 4) 
                    {
                        for (int i_7 = 0; i_7 < 10; i_7 += 4) 
                        {
                            {
                                arr_26 [i_3] [i_4] [i_3] [i_3] [i_4] [i_3] = ((/* implicit */short) ((((var_8) + (2147483647))) >> (((885784108137387617ULL) - (885784108137387596ULL)))));
                                var_25 *= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_13 [i_6])) || (((/* implicit */_Bool) (-(((/* implicit */int) arr_21 [i_3] [i_3] [i_5] [i_3])))))));
                            }
                        } 
                    } 
                    var_26 &= ((/* implicit */unsigned int) -2121958358);
                    var_27 = ((/* implicit */unsigned long long int) 2909776191U);
                }
            } 
        } 
    } 
}
