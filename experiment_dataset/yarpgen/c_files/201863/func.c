/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201863
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201863 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201863
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
    var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) (~(((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)236)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_15))))) / (((((/* implicit */_Bool) (unsigned short)65535)) ? (var_13) : (4003003621U))))))))));
    var_20 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_11)) : (var_14)))) ? (var_7) : (var_10));
    var_21 |= ((/* implicit */unsigned short) var_7);
    /* LoopNest 3 */
    for (unsigned short i_0 = 1; i_0 < 19; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                {
                    var_22 = min((((/* implicit */unsigned int) arr_5 [(short)11] [i_0])), (min((291963677U), (((/* implicit */unsigned int) var_10)))));
                    var_23 = ((/* implicit */unsigned int) (-(((((/* implicit */int) arr_2 [i_2] [i_0])) % (((/* implicit */int) arr_2 [i_0 - 1] [8LL]))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 2; i_3 < 19; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 3; i_4 < 16; i_4 += 3) 
                        {
                            {
                                var_24 &= ((/* implicit */signed char) arr_8 [2ULL] [i_4] [i_1] [i_4 + 1] [i_4 + 3]);
                                arr_11 [i_0] [18LL] [i_0] [i_3] [i_0] = ((/* implicit */short) var_11);
                            }
                        } 
                    } 
                    var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) (+(((((/* implicit */_Bool) arr_2 [i_0 + 1] [i_0])) ? (((/* implicit */int) arr_2 [i_0 - 1] [i_0 - 1])) : (((/* implicit */int) var_1)))))))));
                }
            } 
        } 
    } 
}
