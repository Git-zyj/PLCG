/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194056
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194056 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194056
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
    var_15 = ((/* implicit */unsigned int) (((-(((/* implicit */int) max((var_4), (var_4)))))) >= (((/* implicit */int) ((signed char) max((var_7), (((/* implicit */unsigned long long int) (unsigned char)226))))))));
    var_16 = ((/* implicit */short) (+(((/* implicit */int) ((5428791079324762485ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))))));
    var_17 = ((/* implicit */unsigned int) var_6);
    /* LoopNest 2 */
    for (signed char i_0 = 3; i_0 < 24; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 23; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 1; i_2 < 23; i_2 += 4) 
                {
                    for (signed char i_3 = 0; i_3 < 25; i_3 += 4) 
                    {
                        {
                            arr_8 [i_0 - 3] [i_0 - 3] = ((/* implicit */_Bool) max(((+(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) max(((short)24451), (((/* implicit */short) arr_5 [i_0] [i_1 + 2] [i_1 + 1] [i_1 + 1])))))));
                            var_18 = max((((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)29)) >= (((/* implicit */int) (signed char)52)))))) >= (max((((/* implicit */long long int) arr_2 [i_0 - 2])), (var_2))))), (((((/* implicit */int) ((((/* implicit */int) var_6)) >= (((/* implicit */int) arr_7 [i_0] [i_2]))))) >= (((/* implicit */int) (short)18479)))));
                            arr_9 [(_Bool)1] [8ULL] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) min(((unsigned char)97), (((/* implicit */unsigned char) ((arr_1 [i_0 - 1]) >= (13017952994384789106ULL))))))) >= (((((/* implicit */_Bool) ((unsigned char) arr_0 [i_2] [i_3]))) ? (((((/* implicit */_Bool) arr_0 [i_3] [17ULL])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_2 [i_2])))) : (((/* implicit */int) (unsigned char)30))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (unsigned short i_5 = 4; i_5 < 24; i_5 += 2) 
                    {
                        {
                            arr_15 [i_0] [i_1] [13ULL] [i_5 - 2] |= ((/* implicit */_Bool) var_8);
                            var_19 = ((/* implicit */_Bool) (short)25000);
                        }
                    } 
                } 
                var_20 = arr_1 [(unsigned char)16];
            }
        } 
    } 
}
