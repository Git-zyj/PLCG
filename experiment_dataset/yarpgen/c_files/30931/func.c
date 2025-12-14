/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30931
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30931 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30931
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
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) (-(((/* implicit */int) ((-735287619) < (-735287619))))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                {
                    arr_8 [i_0] [i_0] [(short)3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(var_5)))) ? (((/* implicit */int) ((_Bool) var_5))) : (((/* implicit */int) ((signed char) var_0)))));
                    var_11 = ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */int) var_7)) + (((/* implicit */int) var_7)))));
                    /* LoopSeq 2 */
                    for (unsigned char i_3 = 0; i_3 < 10; i_3 += 1) /* same iter space */
                    {
                        var_12 = ((/* implicit */unsigned long long int) (+(((((((/* implicit */int) var_9)) + (((/* implicit */int) var_1)))) >> ((((~(2147483647U))) - (2147483634U)))))));
                        var_13 = ((/* implicit */unsigned char) max((var_13), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) var_7)) >> (((((/* implicit */int) var_3)) + (156)))))) ? (max((((/* implicit */int) var_7)), (var_2))) : ((~(((/* implicit */int) var_3)))))))));
                        var_14 = ((/* implicit */_Bool) (+((-(var_6)))));
                        var_15 = ((/* implicit */unsigned short) ((_Bool) min((min((18446744073709551615ULL), (((/* implicit */unsigned long long int) (unsigned char)249)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) -735287613))))))));
                    }
                    for (unsigned char i_4 = 0; i_4 < 10; i_4 += 1) /* same iter space */
                    {
                        var_16 = ((/* implicit */unsigned char) ((signed char) ((_Bool) ((var_2) % (((/* implicit */int) var_0))))));
                        arr_15 [i_0] [i_1] [(unsigned short)2] [(_Bool)1] [i_2] &= ((/* implicit */unsigned short) (+(3235553039U)));
                        var_17 = ((/* implicit */short) (~((-(var_5)))));
                        arr_16 [i_0] = ((/* implicit */short) ((((/* implicit */unsigned long long int) (-(var_2)))) ^ ((+(var_8)))));
                    }
                }
            } 
        } 
        arr_17 [i_0] [i_0] = var_6;
    }
    var_18 = ((/* implicit */_Bool) (-(3235553039U)));
}
