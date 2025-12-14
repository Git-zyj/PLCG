/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229629
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229629 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229629
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
    var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) ((int) ((9223372036854775791LL) < (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)60)) ? (var_16) : (var_16))))))))));
    var_18 -= ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)65535))));
    var_19 = ((/* implicit */unsigned long long int) var_13);
    /* LoopSeq 2 */
    for (unsigned int i_0 = 1; i_0 < 23; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((_Bool) (-(((/* implicit */int) (unsigned short)16017))))))) / (((long long int) (signed char)-105))));
        arr_3 [i_0] = ((/* implicit */long long int) ((((arr_0 [i_0 - 1]) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (unsigned char)189)))) & (((/* implicit */int) arr_0 [i_0 - 1]))));
        var_20 = ((/* implicit */unsigned int) (signed char)124);
        var_21 = ((/* implicit */unsigned short) (_Bool)1);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            for (long long int i_2 = 3; i_2 < 21; i_2 += 4) 
            {
                {
                    var_22 = ((/* implicit */unsigned long long int) (signed char)-124);
                    var_23 = 8782473119465538846ULL;
                    var_24 += ((/* implicit */signed char) ((((/* implicit */_Bool) -1174308636)) ? (1813601966) : ((((+(var_11))) << (((((/* implicit */int) (unsigned short)49518)) - (49518)))))));
                }
            } 
        } 
    }
    for (unsigned int i_3 = 0; i_3 < 24; i_3 += 3) 
    {
        /* LoopNest 3 */
        for (int i_4 = 1; i_4 < 23; i_4 += 1) 
        {
            for (unsigned long long int i_5 = 0; i_5 < 24; i_5 += 1) 
            {
                for (unsigned long long int i_6 = 1; i_6 < 23; i_6 += 2) 
                {
                    {
                        var_25 -= ((/* implicit */int) (unsigned short)13886);
                        var_26 = ((unsigned char) (+(((((/* implicit */_Bool) (unsigned short)49522)) ? (((/* implicit */long long int) -2056838064)) : (var_7)))));
                    }
                } 
            } 
        } 
        var_27 = ((/* implicit */unsigned short) ((unsigned int) (-(var_15))));
        var_28 = ((/* implicit */unsigned int) (~(min((((/* implicit */unsigned long long int) ((long long int) (unsigned short)49519))), (((unsigned long long int) arr_1 [i_3]))))));
    }
}
