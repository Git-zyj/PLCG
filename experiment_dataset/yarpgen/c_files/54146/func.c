/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54146
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54146 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54146
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
    var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) ? (((14748303210624962986ULL) + (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-8990)) + (((/* implicit */int) (signed char)-113))))))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_13)))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                for (unsigned char i_3 = 0; i_3 < 17; i_3 += 4) 
                {
                    {
                        var_20 = ((/* implicit */int) (~(arr_3 [i_2] [i_1] [i_2])));
                        var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) (short)8969))));
                    }
                } 
            } 
        } 
        var_22 = ((/* implicit */short) ((((((/* implicit */int) (short)-8993)) & (((/* implicit */int) var_1)))) == ((~(((/* implicit */int) (short)8959))))));
    }
    for (unsigned int i_4 = 0; i_4 < 23; i_4 += 4) 
    {
        arr_15 [13U] = ((/* implicit */int) arr_11 [i_4]);
        arr_16 [i_4] = ((/* implicit */_Bool) (~((~(max((2147483648U), (((/* implicit */unsigned int) arr_13 [i_4]))))))));
    }
    var_23 = ((/* implicit */unsigned char) max((var_23), ((unsigned char)127)));
    /* LoopNest 3 */
    for (unsigned char i_5 = 0; i_5 < 20; i_5 += 1) 
    {
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            for (unsigned long long int i_7 = 0; i_7 < 20; i_7 += 4) 
            {
                {
                    var_24 += ((/* implicit */_Bool) arr_18 [i_5] [i_5]);
                    arr_24 [i_5] [i_6] = ((/* implicit */unsigned short) var_15);
                    var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) 18446744073709551615ULL))));
                    var_26 += ((/* implicit */int) (_Bool)0);
                }
            } 
        } 
    } 
}
