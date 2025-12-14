/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5384
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5384 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5384
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
    var_16 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-1))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_0))))) : ((+(((/* implicit */int) (unsigned char)4))))))) ? (max((var_1), (((/* implicit */unsigned int) (short)32767)))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) ((((/* implicit */int) (signed char)-1)) != (((/* implicit */int) var_4))))) : (((/* implicit */int) var_4)))))));
    /* LoopNest 3 */
    for (signed char i_0 = 3; i_0 < 9; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                {
                    arr_9 [i_0] [9U] [(short)6] [i_2] = ((/* implicit */signed char) var_14);
                    var_17 = ((/* implicit */unsigned int) min((((/* implicit */short) (signed char)3)), ((short)14365)));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 10; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 2) 
                        {
                            {
                                arr_14 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (-(min((arr_8 [i_0 + 1] [i_1]), (((/* implicit */unsigned int) var_5))))));
                                var_18 = ((((((((/* implicit */int) var_12)) >= (((/* implicit */int) var_14)))) || (((/* implicit */_Bool) (+(((/* implicit */int) var_4))))))) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) min((arr_11 [i_0] [i_0] [i_0] [i_3] [i_3] [i_4]), (var_1)))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) (-(((((/* implicit */int) var_5)) << (((1381549602543768143LL) - (1381549602543768127LL)))))))) % (var_10)));
    var_20 = ((/* implicit */unsigned long long int) ((688800702U) == (((/* implicit */unsigned int) (-(((((/* implicit */int) var_12)) << (((var_6) - (3051232625U))))))))));
}
