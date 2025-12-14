/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46749
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46749 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46749
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
    var_19 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_5))));
    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 5968756815402389362ULL)) ? (((/* implicit */int) (signed char)61)) : (((/* implicit */int) (_Bool)1))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 3; i_0 < 22; i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] |= ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)0)) >> (((((/* implicit */int) arr_1 [i_0 - 2])) - (99)))));
        var_21 -= ((((/* implicit */_Bool) (short)-15933)) ? (((/* implicit */int) (signed char)60)) : (((/* implicit */int) (signed char)-61)));
    }
    for (unsigned long long int i_1 = 3; i_1 < 22; i_1 += 1) /* same iter space */
    {
        var_22 = ((/* implicit */signed char) 9823931253975491725ULL);
        /* LoopNest 3 */
        for (unsigned char i_2 = 1; i_2 < 21; i_2 += 2) 
        {
            for (signed char i_3 = 1; i_3 < 22; i_3 += 1) 
            {
                for (unsigned long long int i_4 = 1; i_4 < 22; i_4 += 1) 
                {
                    {
                        var_23 = ((/* implicit */unsigned long long int) 3941148598U);
                        var_24 = ((/* implicit */int) var_3);
                    }
                } 
            } 
        } 
    }
    var_25 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) (short)15933)))))));
    var_26 = max((var_18), (((/* implicit */unsigned long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) (short)-3882))) - (var_4))) <= (((/* implicit */unsigned int) ((/* implicit */int) ((var_7) <= (((/* implicit */unsigned long long int) 3209137530U))))))))));
}
