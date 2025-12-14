/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44766
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44766 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44766
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
    var_13 *= ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) ((long long int) 65280U)))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 1; i_0 < 10; i_0 += 4) 
    {
        var_14 = (~((-(((/* implicit */int) (unsigned char)154)))));
        var_15 = ((/* implicit */unsigned long long int) ((unsigned int) (-(((/* implicit */int) var_0)))));
        var_16 = ((/* implicit */short) ((_Bool) (+(34139030))));
        var_17 *= ((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)-15975))));
    }
    for (unsigned char i_1 = 0; i_1 < 22; i_1 += 4) 
    {
        var_18 = (~(((unsigned int) (!(((/* implicit */_Bool) (short)(-32767 - 1)))))));
        var_19 = ((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) (short)15977)))))));
        /* LoopNest 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 2) 
            {
                {
                    var_20 *= ((/* implicit */short) ((signed char) (!(((_Bool) var_0)))));
                    var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) ((unsigned short) ((_Bool) (-(((/* implicit */int) arr_2 [i_1])))))))));
                    var_22 = ((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((long long int) 34139032))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_4 = 2; i_4 < 21; i_4 += 3) 
                    {
                        for (signed char i_5 = 2; i_5 < 20; i_5 += 3) 
                        {
                            {
                                arr_19 [i_5] [i_5 + 1] [i_5 - 1] [i_4] [2] = ((/* implicit */unsigned long long int) ((unsigned int) (+(((/* implicit */int) (signed char)-100)))));
                                var_23 *= ((/* implicit */_Bool) ((short) (short)15977));
                                arr_20 [i_4] = ((/* implicit */unsigned short) (+((~(((/* implicit */int) ((unsigned char) (unsigned char)170)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) (~(((/* implicit */int) ((unsigned short) (-(-1185660347))))))))));
        var_25 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+((-(var_9))))))));
    }
}
