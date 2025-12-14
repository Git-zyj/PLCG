/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2032
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2032 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2032
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
    var_13 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (1938283497) : (((/* implicit */int) var_7))));
    /* LoopNest 2 */
    for (short i_0 = 3; i_0 < 20; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                var_14 &= ((/* implicit */_Bool) arr_2 [i_1]);
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 20; i_2 += 1) 
                {
                    for (unsigned char i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        {
                            var_15 *= ((/* implicit */unsigned int) arr_13 [i_2 - 1] [i_1] [i_1] [i_0]);
                            var_16 = ((/* implicit */short) ((((/* implicit */int) ((signed char) ((unsigned short) var_12)))) | (((/* implicit */int) var_12))));
                            var_17 *= ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */_Bool) (signed char)3)) ? (((/* implicit */int) arr_4 [(unsigned char)10] [i_1])) : (((((/* implicit */_Bool) (unsigned char)205)) ? (((/* implicit */int) arr_4 [i_1] [19])) : (((/* implicit */int) (unsigned short)49152)))))));
                        }
                    } 
                } 
                arr_14 [8] [i_0] [i_0] = ((/* implicit */unsigned int) ((unsigned short) (unsigned char)248));
                var_18 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_6 [i_0 - 2] [i_0 - 3] [i_0 + 1])) <= (((((/* implicit */_Bool) (+(((/* implicit */int) arr_4 [i_1] [(signed char)0]))))) ? (((((/* implicit */_Bool) (unsigned short)41104)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned short)24473)))) : ((+(((/* implicit */int) (unsigned char)248))))))));
            }
        } 
    } 
}
