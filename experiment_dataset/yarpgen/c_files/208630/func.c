/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208630
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208630 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208630
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
    for (long long int i_0 = 1; i_0 < 23; i_0 += 3) 
    {
        for (unsigned char i_1 = 1; i_1 < 23; i_1 += 4) 
        {
            {
                var_11 = ((/* implicit */short) min((var_11), (((/* implicit */short) max((max((arr_3 [i_0 + 1] [i_1] [i_1 - 1]), (((/* implicit */unsigned int) arr_1 [i_1 + 1])))), (((/* implicit */unsigned int) ((_Bool) ((unsigned long long int) arr_0 [i_1] [(_Bool)1])))))))));
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) var_10);
                var_12 = ((/* implicit */short) ((((/* implicit */_Bool) 4191679707275786393LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)62986))) : (((unsigned long long int) 3911167464412486117LL))));
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) var_8))));
    /* LoopNest 2 */
    for (unsigned short i_2 = 3; i_2 < 14; i_2 += 2) 
    {
        for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
        {
            {
                arr_11 [i_2] [i_2] = ((/* implicit */_Bool) max((((/* implicit */long long int) (~(((/* implicit */int) var_5))))), (var_4)));
                var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) var_3))));
                /* LoopNest 2 */
                for (short i_4 = 2; i_4 < 15; i_4 += 2) 
                {
                    for (short i_5 = 2; i_5 < 15; i_5 += 4) 
                    {
                        {
                            var_15 = (-(((unsigned long long int) ((short) -4624855972029419898LL))));
                            var_16 += ((/* implicit */unsigned char) max((((/* implicit */unsigned short) (!(((_Bool) (_Bool)1))))), (((unsigned short) min((var_10), (var_10))))));
                            var_17 = ((/* implicit */unsigned long long int) min((var_17), (((unsigned long long int) (-(((/* implicit */int) ((unsigned short) var_6))))))));
                            var_18 = ((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))));
                            var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) var_0))));
                        }
                    } 
                } 
                arr_18 [i_2] [i_2] = (_Bool)1;
            }
        } 
    } 
}
