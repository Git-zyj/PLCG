/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230139
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230139 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230139
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
    var_14 = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((var_7) ? (var_4) : (var_4)))) ? (((/* implicit */long long int) (-(((/* implicit */int) var_7))))) : (((((/* implicit */_Bool) -1303511952)) ? (var_4) : (9051166820158723037LL))))) >> (((max((((/* implicit */unsigned long long int) var_0)), (min((5633113379460299645ULL), (((/* implicit */unsigned long long int) (_Bool)1)))))) - (37373ULL)))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        var_15 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) (unsigned short)41220)) ? (((/* implicit */int) (unsigned char)31)) : (arr_2 [i_0])))));
        arr_4 [i_0] = arr_1 [17LL] [i_0];
    }
    /* vectorizable */
    for (short i_1 = 0; i_1 < 23; i_1 += 4) 
    {
        var_16 = ((/* implicit */long long int) arr_6 [i_1] [i_1]);
        arr_8 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_7 [i_1]))))) ? (((/* implicit */int) arr_5 [i_1])) : (((/* implicit */int) arr_7 [8]))));
        /* LoopNest 2 */
        for (short i_2 = 0; i_2 < 23; i_2 += 3) 
        {
            for (int i_3 = 0; i_3 < 23; i_3 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_4 = 1; i_4 < 20; i_4 += 3) 
                    {
                        for (unsigned long long int i_5 = 0; i_5 < 23; i_5 += 4) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) (+(-1303511953))))));
                                var_18 ^= ((/* implicit */long long int) arr_11 [i_1] [i_1]);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_6 = 0; i_6 < 23; i_6 += 4) 
                    {
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned long long int) var_11);
                                arr_24 [i_7] [i_1] [i_1] = ((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_20 = ((/* implicit */short) arr_10 [i_1] [i_1]);
    }
    var_21 = ((/* implicit */_Bool) var_3);
}
