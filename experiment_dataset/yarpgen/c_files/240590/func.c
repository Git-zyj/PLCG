/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240590
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240590 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240590
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
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_6)) ? (var_11) : (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) (signed char)63)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)7393)))))))))))));
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 24; i_2 += 4) 
                {
                    for (int i_3 = 0; i_3 < 24; i_3 += 3) 
                    {
                        {
                            var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned short)7393)))))));
                            var_17 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) 0)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned short)58141))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_4 = 1; i_4 < 23; i_4 += 1) 
                {
                    for (long long int i_5 = 0; i_5 < 24; i_5 += 3) 
                    {
                        {
                            var_18 ^= ((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)7383))));
                            var_19 = ((/* implicit */unsigned long long int) -6517795413958139849LL);
                        }
                    } 
                } 
                var_20 = ((/* implicit */_Bool) (~((-(var_12)))));
                var_21 = ((/* implicit */unsigned int) max(((((_Bool)1) ? (((/* implicit */int) (unsigned short)11491)) : (((/* implicit */int) (!(((/* implicit */_Bool) 0LL))))))), (((/* implicit */int) (unsigned char)224))));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) min((((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_13)))))))), ((-((+(((/* implicit */int) (unsigned short)55319)))))))))));
    var_23 += ((/* implicit */_Bool) min((min((((/* implicit */long long int) (unsigned char)99)), (max((((/* implicit */long long int) (signed char)-73)), (var_14))))), (((/* implicit */long long int) var_6))));
}
