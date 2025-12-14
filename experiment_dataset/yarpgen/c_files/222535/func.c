/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222535
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222535 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222535
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
    var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_14)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) >= (((/* implicit */unsigned int) ((/* implicit */int) var_4))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (int i_1 = 2; i_1 < 13; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 14; i_2 += 3) 
                {
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_19 = (_Bool)1;
                            var_20 = var_12;
                            var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) (_Bool)1))));
                        }
                    } 
                } 
                var_22 ^= ((/* implicit */unsigned short) (unsigned char)255);
                arr_11 [i_0] [i_0] [i_0] = ((/* implicit */signed char) (+((+(((/* implicit */int) var_9))))));
            }
        } 
    } 
    var_23 += ((/* implicit */short) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) var_0)), (var_1))))));
    var_24 = ((/* implicit */short) min((((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_17)))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned short)24224)))))), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_9))))));
    var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967295U)) ? (((((/* implicit */_Bool) (unsigned short)41312)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)1023))))))))) ? (((/* implicit */long long int) var_8)) : (((((/* implicit */_Bool) var_16)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)103))) : ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (-1593186246796269064LL)))))));
}
