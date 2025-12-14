/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222255
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222255 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222255
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
    for (long long int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 24; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 3; i_3 < 24; i_3 += 4) 
                    {
                        for (long long int i_4 = 0; i_4 < 25; i_4 += 1) 
                        {
                            {
                                var_15 = ((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_4 [(unsigned short)20] [i_2 - 3] [i_2 - 3])))))));
                                var_16 = ((/* implicit */int) ((max((arr_5 [i_1]), (((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)0))))))) >> (((max((arr_2 [i_2]), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (signed char)0))))))) - (17762607952968052225ULL)))));
                                var_17 = ((/* implicit */short) (-(max((((/* implicit */unsigned int) (-(-276351680)))), (max((7U), (((/* implicit */unsigned int) (signed char)-32))))))));
                                var_18 = ((/* implicit */signed char) (((~(max((var_13), (((/* implicit */unsigned long long int) arr_5 [i_1])))))) != (((/* implicit */unsigned long long int) min((((/* implicit */int) max((var_11), (var_5)))), (min((((/* implicit */int) (short)32512)), (65520))))))));
                            }
                        } 
                    } 
                    arr_15 [i_0] [i_1] [i_1] = ((/* implicit */signed char) var_13);
                }
            } 
        } 
    } 
    var_19 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) max((((/* implicit */unsigned char) var_14)), (var_2)))), (((unsigned long long int) var_6))))) ? (((max((((/* implicit */int) var_11)), (var_8))) / (65503))) : (((/* implicit */int) (short)32512))));
    var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) ((_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_3)) : (65520)))), (min((-4908037242988721349LL), (((/* implicit */long long int) var_10))))))))));
    var_21 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 2195148603U)) ? (var_7) : (((/* implicit */long long int) ((65520) % (1610612736)))))))));
}
