/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27057
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27057 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27057
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
    var_14 += ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) - (min((min((var_13), (((/* implicit */unsigned long long int) var_9)))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned char) (_Bool)1)), (var_9))))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (int i_1 = 2; i_1 < 10; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                {
                    arr_10 [i_0] [i_0] [i_0] [i_0] |= ((/* implicit */long long int) ((((/* implicit */_Bool) (short)-22466)) ? (((/* implicit */int) (unsigned short)30)) : (((/* implicit */int) (signed char)-51))));
                    var_15 = ((/* implicit */int) ((((/* implicit */_Bool) (short)10387)) ? (-1583737441644810129LL) : (((/* implicit */long long int) ((/* implicit */int) (short)11531)))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 11; i_4 += 4) 
                        {
                            {
                                var_16 = ((/* implicit */_Bool) ((((unsigned long long int) (short)10400)) - (((/* implicit */unsigned long long int) min((-9223372036854775783LL), (((/* implicit */long long int) (_Bool)1)))))));
                                var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (short)-20950)))) >= (min((((/* implicit */long long int) (signed char)46)), (234881024LL))))))));
                                var_18 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32757)) ? (3417669230U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? ((+(arr_9 [i_0] [i_3] [i_2]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_0), (arr_1 [i_3] [i_2])))))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) min((max((((/* implicit */short) (signed char)6)), ((short)10390))), (((/* implicit */short) (_Bool)1)))))));
                                var_19 = ((/* implicit */unsigned char) (+(min(((-(arr_9 [i_0] [i_1] [i_4]))), (((/* implicit */unsigned long long int) max((1239230705), (arr_2 [i_1]))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((_Bool) ((long long int) var_6))))));
}
