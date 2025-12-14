/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207777
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207777 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207777
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
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) var_14))));
                var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) var_14))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 24; i_2 += 1) 
                {
                    for (int i_3 = 2; i_3 < 21; i_3 += 2) 
                    {
                        {
                            var_21 = ((/* implicit */int) ((unsigned char) (+(((/* implicit */int) max(((unsigned char)210), ((unsigned char)184)))))));
                            var_22 = var_3;
                        }
                    } 
                } 
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)121))))) ? (((unsigned long long int) 756791155)) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)103)) ? (-69656811) : (((/* implicit */int) (signed char)120)))))))) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-48))) : (var_17)))) ? (((/* implicit */long long int) (~(((/* implicit */int) var_3))))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)131))) : (var_11)))))));
}
