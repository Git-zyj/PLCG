/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45365
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45365 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45365
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                {
                    var_16 = ((/* implicit */long long int) var_9);
                    var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_7)) ? (12738247983855447175ULL) : (((/* implicit */unsigned long long int) var_2))))))) ? (((/* implicit */int) (!(var_13)))) : (((/* implicit */int) (!(((/* implicit */_Bool) max((5708496089854104432ULL), (5708496089854104441ULL))))))))))));
                    var_18 &= ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) 1607026984754279103LL))))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */long long int) (-(var_7)));
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 21; i_3 += 3) 
    {
        for (short i_4 = 1; i_4 < 18; i_4 += 2) 
        {
            for (unsigned int i_5 = 1; i_5 < 20; i_5 += 1) 
            {
                {
                    var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_15))))))))));
                    var_21 += ((/* implicit */unsigned int) var_0);
                    var_22 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (0ULL) : (((/* implicit */unsigned long long int) var_11))))) ? (((/* implicit */int) var_1)) : ((-(((/* implicit */int) max((var_6), (((/* implicit */unsigned short) var_12)))))))));
                    var_23 -= ((/* implicit */unsigned int) var_3);
                }
            } 
        } 
    } 
    var_24 ^= ((/* implicit */unsigned char) var_8);
}
