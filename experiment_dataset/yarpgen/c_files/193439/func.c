/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193439
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193439 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193439
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
    var_11 += ((/* implicit */_Bool) max((((/* implicit */unsigned short) (_Bool)1)), (var_5)));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)18955)) ? (var_1) : (((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)18940)))))));
                /* LoopNest 3 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 19; i_4 += 1) 
                        {
                            {
                                var_12 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 19)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (1720769452388623749ULL))))));
                                var_13 = ((/* implicit */_Bool) (unsigned short)46595);
                                var_14 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */int) var_5)) >> (((((/* implicit */int) (unsigned short)18940)) - (18931)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((var_6) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))))) : (var_1))) | (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (short)1023)) : (((/* implicit */int) max(((unsigned char)255), (((/* implicit */unsigned char) var_0))))))))));
                            }
                        } 
                    } 
                } 
                var_15 -= arr_0 [(_Bool)1];
            }
        } 
    } 
}
