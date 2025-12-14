/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45576
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45576 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45576
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
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 20; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                arr_6 [18U] [i_0] [i_1] = ((/* implicit */long long int) max((arr_2 [i_0 + 1] [i_0]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)222)) ? (((/* implicit */int) (unsigned short)216)) : (((/* implicit */int) (unsigned short)239)))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 21; i_2 += 2) 
                {
                    for (unsigned char i_3 = 0; i_3 < 21; i_3 += 1) 
                    {
                        {
                            var_13 = ((/* implicit */unsigned char) max((var_13), (((/* implicit */unsigned char) (unsigned short)222))));
                            var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_0 - 1] [i_0])) ? (((/* implicit */unsigned long long int) arr_11 [i_0 - 2] [i_0] [i_0] [i_0] [i_0] [i_0 - 1])) : (arr_10 [i_0 + 1] [i_0])))) ? (((/* implicit */int) ((((/* implicit */int) (short)(-32767 - 1))) >= (((/* implicit */int) arr_1 [i_0]))))) : ((~(((/* implicit */int) arr_1 [i_0]))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_15 |= var_10;
    var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) min(((unsigned short)0), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((var_0), (((/* implicit */unsigned short) var_7)))))))))))));
    var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 2147483647)) && ((!(((/* implicit */_Bool) var_2))))));
    /* LoopNest 2 */
    for (unsigned char i_4 = 0; i_4 < 11; i_4 += 2) 
    {
        for (int i_5 = 0; i_5 < 11; i_5 += 4) 
        {
            {
                arr_17 [i_4] [(short)6] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (~(((arr_0 [i_4]) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))))))));
                var_18 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((unsigned short) arr_9 [i_4] [i_5] [i_5])))));
                var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) (~(((/* implicit */int) (unsigned char)79)))))));
            }
        } 
    } 
}
