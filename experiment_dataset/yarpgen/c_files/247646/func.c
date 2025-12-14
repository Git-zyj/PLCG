/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247646
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247646 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247646
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
    var_20 = ((/* implicit */long long int) var_2);
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 3) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 991737226)) ? (((/* implicit */int) var_3)) : (131068)));
        /* LoopNest 3 */
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            for (int i_2 = 1; i_2 < 10; i_2 += 2) 
            {
                for (unsigned int i_3 = 0; i_3 < 13; i_3 += 1) 
                {
                    {
                        var_22 = ((/* implicit */unsigned short) (-(-9222717062239616062LL)));
                        var_23 = ((/* implicit */unsigned short) -9222717062239616069LL);
                        var_24 = ((/* implicit */unsigned short) (-((+(((/* implicit */int) (unsigned char)216))))));
                        var_25 = ((/* implicit */unsigned short) ((9101350005219383673LL) <= (((/* implicit */long long int) ((/* implicit */int) var_12)))));
                    }
                } 
            } 
        } 
    }
    for (signed char i_4 = 0; i_4 < 13; i_4 += 3) /* same iter space */
    {
        var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) ((((/* implicit */long long int) min((var_10), (var_10)))) & ((~((~(-9222717062239616080LL))))))))));
        var_27 = ((/* implicit */unsigned long long int) (((~(((/* implicit */int) (unsigned char)63)))) >= (((/* implicit */int) min((arr_1 [i_4]), ((short)-14532))))));
    }
}
