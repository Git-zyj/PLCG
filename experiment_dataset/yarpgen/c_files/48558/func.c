/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48558
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48558 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48558
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
    var_15 |= ((/* implicit */long long int) ((unsigned char) (~(((/* implicit */int) ((_Bool) var_1))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (unsigned short i_1 = 3; i_1 < 22; i_1 += 3) 
        {
            {
                var_16 = ((/* implicit */int) min((-238033147372982399LL), (((/* implicit */long long int) (!(((((/* implicit */_Bool) arr_2 [i_0])) || (((/* implicit */_Bool) var_8)))))))));
                var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) min((((/* implicit */unsigned int) arr_0 [i_0])), (var_4))))));
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 23; i_2 += 4) 
                {
                    for (unsigned char i_3 = 0; i_3 < 23; i_3 += 1) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) arr_6 [i_0] [i_0] [i_0]))));
                            var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)253)))))));
                            var_20 = ((/* implicit */long long int) ((var_0) << (((((((/* implicit */_Bool) (+(((/* implicit */int) arr_6 [i_0] [i_1] [i_2]))))) ? (3407987477U) : (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */short) var_5)), (arr_5 [(unsigned short)3] [i_1] [11] [i_3]))))))) - (3407987454U)))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned short) min((min((((/* implicit */unsigned long long int) min((var_13), (((/* implicit */unsigned short) (unsigned char)112))))), (var_0))), (((/* implicit */unsigned long long int) min(((unsigned char)181), (min(((unsigned char)185), ((unsigned char)74))))))));
}
