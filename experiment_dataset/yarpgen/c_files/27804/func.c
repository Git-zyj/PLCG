/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27804
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27804 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27804
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 24; i_2 += 3) 
                {
                    for (int i_3 = 2; i_3 < 20; i_3 += 4) 
                    {
                        {
                            var_20 *= ((/* implicit */_Bool) max(((~(((/* implicit */int) ((_Bool) var_10))))), (((int) (unsigned char)192))));
                            arr_11 [i_0] [i_0] = ((/* implicit */_Bool) min((min((((/* implicit */long long int) (+(0U)))), (max((arr_6 [i_0] [i_1] [i_2]), (((/* implicit */long long int) var_16)))))), (((/* implicit */long long int) ((unsigned char) (-(var_2)))))));
                            var_21 *= ((/* implicit */short) ((unsigned char) max((arr_7 [i_3] [i_1] [i_3]), (((/* implicit */unsigned int) (-(((/* implicit */int) var_1))))))));
                        }
                    } 
                } 
                var_22 = ((/* implicit */_Bool) ((signed char) max(((unsigned short)46057), (((/* implicit */unsigned short) (unsigned char)162)))));
                /* LoopNest 2 */
                for (unsigned char i_4 = 0; i_4 < 24; i_4 += 4) 
                {
                    for (unsigned char i_5 = 1; i_5 < 23; i_5 += 3) 
                    {
                        {
                            var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) ((((/* implicit */_Bool) max(((-(arr_17 [i_0] [i_1] [i_1] [i_5]))), (((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)-4)))))))) ? ((~(((((/* implicit */_Bool) var_4)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))))))) : (((/* implicit */unsigned int) ((((_Bool) var_4)) ? (((/* implicit */int) arr_12 [i_0])) : (((/* implicit */int) var_4))))))))));
                            var_24 += ((/* implicit */long long int) ((unsigned int) 0));
                            var_25 = ((/* implicit */unsigned int) min((var_25), (var_3)));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned char i_6 = 0; i_6 < 24; i_6 += 3) 
                {
                    for (long long int i_7 = 2; i_7 < 23; i_7 += 3) 
                    {
                        for (signed char i_8 = 0; i_8 < 24; i_8 += 3) 
                        {
                            {
                                var_26 = ((/* implicit */unsigned char) var_16);
                                arr_25 [i_8] [i_7] [i_0] [i_0] [i_1] [i_0] = ((/* implicit */_Bool) arr_15 [i_0] [i_7] [i_0] [i_0]);
                            }
                        } 
                    } 
                } 
                arr_26 [i_0] [i_1] = ((/* implicit */_Bool) ((unsigned char) (short)32767));
            }
        } 
    } 
    var_27 -= ((/* implicit */signed char) var_5);
}
