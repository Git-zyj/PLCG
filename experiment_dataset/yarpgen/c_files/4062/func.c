/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4062
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4062 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4062
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
    var_14 |= (~(((/* implicit */int) (_Bool)0)));
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        var_15 = ((/* implicit */unsigned char) var_9);
        var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) (!((!(var_3))))))));
    }
    /* vectorizable */
    for (unsigned char i_1 = 2; i_1 < 12; i_1 += 3) 
    {
        var_17 = ((/* implicit */unsigned int) ((var_1) % (((/* implicit */unsigned long long int) -1063399995))));
        var_18 = ((/* implicit */unsigned short) (+(((/* implicit */int) var_13))));
    }
    /* vectorizable */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        var_19 *= (!(((/* implicit */_Bool) (signed char)-6)));
        var_20 |= ((/* implicit */unsigned char) -281230103758672998LL);
        var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) (~(((/* implicit */int) var_9)))))));
        /* LoopNest 2 */
        for (int i_3 = 2; i_3 < 10; i_3 += 3) 
        {
            for (unsigned long long int i_4 = 0; i_4 < 11; i_4 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (unsigned short i_6 = 0; i_6 < 11; i_6 += 3) 
                        {
                            {
                                var_22 *= ((/* implicit */unsigned int) var_4);
                                var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) + (var_4))))));
                                var_24 *= ((/* implicit */unsigned long long int) (~(var_7)));
                                var_25 = ((/* implicit */unsigned long long int) -7083598664353169745LL);
                                var_26 = ((/* implicit */_Bool) (short)11704);
                            }
                        } 
                    } 
                    var_27 = ((/* implicit */unsigned short) var_13);
                    var_28 = ((/* implicit */_Bool) (signed char)9);
                }
            } 
        } 
    }
    for (int i_7 = 0; i_7 < 11; i_7 += 1) 
    {
        var_29 = ((/* implicit */_Bool) min((var_29), (((/* implicit */_Bool) max((max((var_0), (((/* implicit */unsigned long long int) var_2)))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)-32346))))))))));
        var_30 = ((/* implicit */unsigned char) var_1);
    }
}
