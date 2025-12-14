/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214673
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214673 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214673
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
    var_13 = ((/* implicit */signed char) (short)-17614);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                arr_5 [i_0] = ((/* implicit */short) ((9223372036854775807LL) << (((((/* implicit */int) (signed char)2)) - (2)))));
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 11; i_2 += 3) 
                {
                    for (signed char i_3 = 1; i_3 < 10; i_3 += 2) 
                    {
                        {
                            arr_12 [i_0] [i_0] [i_2] [i_3] = ((/* implicit */short) max((4294967284U), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 7011315101089925784LL)) || (((/* implicit */_Bool) (short)32763)))))));
                            var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) 7011315101089925784LL)) ? (((/* implicit */int) (unsigned short)12)) : (((/* implicit */int) (unsigned short)42609))));
                            arr_13 [i_0] [i_1] [i_0] [(unsigned short)7] [(short)3] [(short)3] = ((((/* implicit */_Bool) ((signed char) (short)7365))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)12))))) : (max((635242818U), (((/* implicit */unsigned int) var_7)))));
                            var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) (unsigned char)115)) : (((/* implicit */int) arr_6 [i_3] [i_1] [(unsigned short)0])))))));
                        }
                    } 
                } 
                var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) ((((/* implicit */_Bool) ((unsigned char) arr_6 [i_0] [(short)2] [i_1]))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (short)-12632)))))));
                arr_14 [i_0] = ((/* implicit */long long int) (~(((((/* implicit */int) arr_0 [i_0] [i_1])) << (((((/* implicit */int) arr_0 [1LL] [i_1])) - (22717)))))));
            }
        } 
    } 
}
