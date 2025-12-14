/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31879
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31879 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31879
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
    var_14 = ((/* implicit */short) -176713120);
    var_15 = ((/* implicit */short) var_8);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (unsigned short i_1 = 2; i_1 < 20; i_1 += 1) 
        {
            {
                var_16 |= ((/* implicit */int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (unsigned char)181)) : (((/* implicit */int) var_2)))), (((/* implicit */int) ((_Bool) arr_0 [i_1])))))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) max((var_8), (var_8)))))) : (min((max((((/* implicit */long long int) var_6)), (var_9))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_4 [(short)19] [i_1] [i_0])))))))));
                arr_6 [i_1] [i_0] = ((/* implicit */unsigned char) arr_4 [i_0] [i_1] [i_1]);
                /* LoopNest 2 */
                for (signed char i_2 = 1; i_2 < 22; i_2 += 1) 
                {
                    for (unsigned short i_3 = 0; i_3 < 24; i_3 += 3) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned char) (~((~(((/* implicit */int) arr_7 [i_3] [i_2] [i_1 + 3] [(_Bool)1]))))));
                            var_18 = ((/* implicit */int) ((((/* implicit */_Bool) ((int) arr_11 [i_0] [13ULL] [i_0] [i_1 + 1]))) ? (arr_11 [i_0] [i_1] [i_2] [i_1 + 1]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) (unsigned char)58)) : (((/* implicit */int) (unsigned char)58)))))));
                            arr_14 [i_2 - 1] [19ULL] [i_2] [(_Bool)1] [i_0] |= ((/* implicit */int) max((max((((/* implicit */unsigned int) var_5)), (arr_3 [i_0]))), (max((((((/* implicit */_Bool) arr_4 [i_3] [i_2 + 2] [i_1])) ? (9U) : (36U))), (((/* implicit */unsigned int) ((signed char) (unsigned char)197)))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_19 &= ((/* implicit */long long int) (unsigned short)13180);
}
