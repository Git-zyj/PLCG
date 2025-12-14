/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53249
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53249 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53249
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
    var_11 = ((/* implicit */long long int) (unsigned char)191);
    var_12 = ((/* implicit */unsigned long long int) min((var_12), (((/* implicit */unsigned long long int) var_5))));
    var_13 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_1) : (((/* implicit */int) (short)19057))))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_8)))) >= ((~((~(((/* implicit */int) var_7))))))));
    var_14 = ((/* implicit */signed char) var_5);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                /* LoopSeq 2 */
                for (int i_2 = 0; i_2 < 24; i_2 += 3) 
                {
                    arr_6 [3U] [3U] [i_2] = ((/* implicit */unsigned long long int) ((int) ((2591438849U) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0]))))));
                    arr_7 [10ULL] = ((/* implicit */signed char) (~((~(var_9)))));
                }
                for (signed char i_3 = 0; i_3 < 24; i_3 += 4) 
                {
                    arr_11 [14LL] [14LL] = ((/* implicit */int) arr_4 [i_0] [i_1] [i_3]);
                    arr_12 [i_0] [i_0] [i_0] [i_0] = arr_10 [i_0];
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 24; i_4 += 3) 
                {
                    for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
                    {
                        {
                            var_15 = ((/* implicit */int) ((((((/* implicit */_Bool) arr_9 [i_5 + 1])) ? (arr_9 [i_5 + 1]) : (var_4))) == (((/* implicit */long long int) ((/* implicit */int) (signed char)17)))));
                            /* LoopSeq 2 */
                            for (signed char i_6 = 2; i_6 < 23; i_6 += 4) 
                            {
                                arr_21 [i_4] [i_4] [i_0] = ((/* implicit */unsigned long long int) ((int) (-(((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) * (var_4))))));
                                var_16 -= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_9 [i_5 + 1])) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) var_0))))) & (((((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (arr_10 [i_1]) : (((/* implicit */int) (_Bool)0))))) & (((long long int) arr_14 [i_0] [i_4] [i_4]))))));
                            }
                            /* vectorizable */
                            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                            {
                                var_17 = ((/* implicit */signed char) arr_10 [i_0]);
                                var_18 += ((/* implicit */unsigned int) ((short) ((((/* implicit */_Bool) 787670167)) || (((/* implicit */_Bool) (signed char)17)))));
                                arr_24 [i_5] [i_1] [i_4] [19U] [0U] [i_1] [i_1] = ((/* implicit */unsigned char) ((arr_19 [i_5 + 1] [i_5 + 1] [i_5] [i_5 + 1]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_5 + 1] [i_5] [i_5] [i_5] [i_5 + 1])))));
                            }
                        }
                    } 
                } 
            }
        } 
    } 
}
