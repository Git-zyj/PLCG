/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33999
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33999 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33999
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
    var_17 = ((/* implicit */long long int) ((unsigned char) ((unsigned short) var_12)));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 13; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                {
                    arr_7 [i_0] [i_0] [i_0] [i_1] = ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) (~(var_5)))) ? (arr_3 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_5) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1] [i_1]))))))))));
                    arr_8 [i_1] = ((/* implicit */long long int) var_1);
                    var_18 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) min(((+(var_14))), (((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)71)))))))), (min((arr_3 [i_1]), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) 0U)), (1292601518944905103LL))))))));
                }
            } 
        } 
    } 
}
