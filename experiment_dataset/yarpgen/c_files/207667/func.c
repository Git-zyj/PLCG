/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207667
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207667 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207667
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
    var_17 = ((/* implicit */short) ((max((((((/* implicit */unsigned int) ((/* implicit */int) var_16))) + (var_10))), (var_1))) + (((/* implicit */unsigned int) ((/* implicit */int) var_5)))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                var_18 = ((/* implicit */long long int) var_4);
                var_19 -= ((/* implicit */unsigned char) ((long long int) var_8));
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 16; i_2 += 4) 
                {
                    for (short i_3 = 0; i_3 < 16; i_3 += 3) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned int) var_5);
                            var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (arr_6 [i_3] [i_2] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0])))))) ? (((/* implicit */long long int) (-(((/* implicit */int) arr_1 [i_0]))))) : (((((/* implicit */_Bool) arr_7 [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) : (var_8))))))));
                        }
                    } 
                } 
                arr_14 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) -390240754278041839LL);
                var_22 = ((/* implicit */unsigned char) (short)9968);
            }
        } 
    } 
    var_23 = ((/* implicit */short) min((-390240754278041839LL), (390240754278041838LL)));
}
