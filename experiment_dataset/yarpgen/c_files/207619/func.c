/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207619
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207619 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207619
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
    for (short i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 22; i_2 += 2) 
                {
                    for (unsigned char i_3 = 2; i_3 < 20; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 22; i_4 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((long long int) arr_9 [i_0] [17U] [i_4] [i_1])))));
                                var_20 = ((/* implicit */unsigned char) 13891130561110103396ULL);
                            }
                        } 
                    } 
                } 
                var_21 = ((/* implicit */unsigned int) (-(((/* implicit */int) max((((signed char) arr_0 [i_1] [(unsigned char)3])), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_6 [3LL])) || (((/* implicit */_Bool) (unsigned short)65535))))))))));
                /* LoopNest 2 */
                for (unsigned char i_5 = 0; i_5 < 22; i_5 += 3) 
                {
                    for (unsigned char i_6 = 0; i_6 < 22; i_6 += 3) 
                    {
                        {
                            var_22 = ((unsigned long long int) max((((/* implicit */int) arr_13 [i_5] [i_5] [i_5])), (arr_15 [i_6] [i_5] [i_0])));
                            var_23 = ((/* implicit */int) arr_3 [i_0]);
                            var_24 = ((/* implicit */unsigned short) (+(((unsigned int) arr_3 [i_1]))));
                            var_25 = ((/* implicit */unsigned long long int) arr_9 [i_6] [i_6] [i_5] [i_6]);
                        }
                    } 
                } 
            }
        } 
    } 
    var_26 = (-(min(((-(4555613512599448220ULL))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_12))))))));
    var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((max((((/* implicit */int) (unsigned short)1)), (var_9))), (var_11)))) ? (((/* implicit */int) (unsigned short)20)) : (min(((-(((/* implicit */int) var_4)))), (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (_Bool)1))))))));
}
