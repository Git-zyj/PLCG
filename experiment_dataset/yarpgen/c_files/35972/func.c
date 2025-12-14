/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35972
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35972 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35972
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
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 12; i_2 += 2) 
                {
                    for (short i_3 = 0; i_3 < 12; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 12; i_4 += 2) 
                        {
                            {
                                var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) ((unsigned char) ((long long int) 16093583900985635047ULL))))));
                                var_17 |= ((/* implicit */_Bool) (+(((/* implicit */int) max((((/* implicit */signed char) (_Bool)0)), ((signed char)5))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_5 = 0; i_5 < 12; i_5 += 1) 
                {
                    for (short i_6 = 0; i_6 < 12; i_6 += 1) 
                    {
                        {
                            arr_19 [i_0] [2U] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_7))));
                            var_18 = ((/* implicit */long long int) (+(-1)));
                        }
                    } 
                } 
                arr_20 [i_0] [i_0] [10LL] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_11 [i_0 - 1]))))) ? (((/* implicit */int) ((_Bool) (_Bool)1))) : (((/* implicit */int) max((arr_14 [i_0 - 1] [i_0 - 1] [(_Bool)1] [i_0]), (((/* implicit */signed char) var_11)))))));
            }
        } 
    } 
    var_19 = ((((/* implicit */_Bool) max((((unsigned long long int) var_0)), (max((16093583900985635047ULL), (((/* implicit */unsigned long long int) (_Bool)1))))))) || (((/* implicit */_Bool) var_3)));
}
