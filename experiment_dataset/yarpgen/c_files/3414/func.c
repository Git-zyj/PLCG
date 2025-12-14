/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3414
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3414 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3414
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
    for (long long int i_0 = 2; i_0 < 20; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        var_18 = ((/* implicit */long long int) ((((/* implicit */long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_0 [i_0 + 2])) : (((/* implicit */int) var_3))))) + ((~(arr_1 [i_2] [i_3])))))) < (max((((/* implicit */long long int) var_15)), (max((5385789070253656750LL), (((/* implicit */long long int) (short)-23584))))))));
                        var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) min((((/* implicit */short) var_12)), ((short)25005))))));
                        var_20 -= ((/* implicit */unsigned int) 10364071302785041707ULL);
                    }
                    /* LoopNest 2 */
                    for (int i_4 = 1; i_4 < 19; i_4 += 4) 
                    {
                        for (unsigned short i_5 = 2; i_5 < 20; i_5 += 4) 
                        {
                            {
                                arr_15 [i_0 + 2] [i_1] [i_0] [i_0] [i_0] [i_0 + 2] [i_0] = ((/* implicit */_Bool) ((long long int) 2798232356U));
                                arr_16 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((short) arr_0 [i_4]));
                            }
                        } 
                    } 
                    arr_17 [i_1] = ((/* implicit */short) max((arr_7 [i_1] [i_1]), (((/* implicit */unsigned int) ((short) min((arr_12 [(_Bool)1] [i_2]), (arr_6 [3U] [i_1] [i_2])))))));
                }
            } 
        } 
    } 
    var_21 |= ((/* implicit */unsigned short) ((_Bool) ((((((/* implicit */_Bool) (short)11714)) ? (((/* implicit */int) (short)-9973)) : (((/* implicit */int) (unsigned char)71)))) == (((/* implicit */int) (unsigned char)239)))));
    var_22 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((((long long int) var_11)) & (((/* implicit */long long int) ((/* implicit */int) (unsigned short)58714)))))) : (((unsigned long long int) ((unsigned short) 700367296U)))));
}
