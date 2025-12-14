/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45986
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45986 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45986
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_0] = ((/* implicit */int) max((((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) * (var_11))), (((/* implicit */unsigned int) (+(((/* implicit */int) (short)-4581)))))));
                arr_6 [i_0] [i_0] = (-(((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_1] [i_0] [i_0])) && (((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_1]))))));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
                {
                    for (short i_3 = 2; i_3 < 20; i_3 += 2) 
                    {
                        {
                            var_17 &= ((/* implicit */unsigned long long int) (~(((var_1) ? (arr_8 [i_0] [i_3] [i_2 + 1]) : (((/* implicit */long long int) 1390768176))))));
                            var_18 = ((/* implicit */short) (~(((/* implicit */int) (unsigned char)194))));
                        }
                    } 
                } 
                arr_12 [0LL] [i_0] [0LL] = (~((~(((/* implicit */int) var_6)))));
                var_19 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)108)) != (((/* implicit */int) (unsigned char)4))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_1] [i_1])) && (((/* implicit */_Bool) arr_10 [i_1] [i_1] [i_0] [(_Bool)1])))))))));
            }
        } 
    } 
    var_20 = ((/* implicit */_Bool) var_13);
    var_21 ^= ((/* implicit */long long int) (!(((/* implicit */_Bool) var_16))));
}
