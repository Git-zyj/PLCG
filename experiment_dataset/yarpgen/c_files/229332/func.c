/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229332
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229332 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229332
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
    var_19 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) var_2)))) ? (var_16) : (((var_2) - (max((-3742043736261406166LL), (((/* implicit */long long int) (_Bool)1))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_20 = max((((/* implicit */unsigned int) (~(((/* implicit */int) ((unsigned short) 1023U)))))), (4294966268U));
                var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)128))) + (4294966251U))))));
            }
        } 
    } 
    var_22 = ((/* implicit */long long int) var_1);
    var_23 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) var_4))) & (((((/* implicit */_Bool) var_14)) ? (3505027725735158162LL) : (((/* implicit */long long int) var_12))))));
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 17; i_2 += 2) 
    {
        for (unsigned long long int i_3 = 0; i_3 < 17; i_3 += 2) 
        {
            for (unsigned int i_4 = 2; i_4 < 16; i_4 += 3) 
            {
                {
                    var_24 = ((/* implicit */_Bool) arr_11 [i_4] [i_4] [i_4]);
                    var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) ((_Bool) (signed char)-35)))));
                }
            } 
        } 
    } 
}
