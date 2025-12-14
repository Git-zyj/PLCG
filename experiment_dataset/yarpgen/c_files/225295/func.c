/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225295
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225295 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225295
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
    var_13 = ((/* implicit */unsigned char) max((var_3), (((/* implicit */long long int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) var_6)), (var_8)))))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) var_9)) : (var_3)))) ? (max((var_5), (((/* implicit */long long int) var_12)))) : (((/* implicit */long long int) (+(((/* implicit */int) var_1)))))))) ? (var_10) : (((/* implicit */unsigned int) var_9))));
                    var_15 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (var_3)))) ? (var_5) : (((/* implicit */long long int) var_4))))) ? (max((max((var_7), (((/* implicit */unsigned int) var_9)))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_3))))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))));
                    var_16 *= ((/* implicit */signed char) var_9);
                    var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) max((((/* implicit */long long int) (unsigned short)10187)), (-5288694533997665539LL))))));
                }
            } 
        } 
    } 
    var_18 += ((/* implicit */unsigned short) var_9);
    var_19 -= ((/* implicit */short) var_12);
    /* LoopNest 2 */
    for (unsigned int i_3 = 1; i_3 < 12; i_3 += 3) 
    {
        for (unsigned short i_4 = 1; i_4 < 11; i_4 += 4) 
        {
            {
                var_20 = ((/* implicit */unsigned char) max((var_20), (var_0)));
                var_21 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((var_4), (((/* implicit */unsigned int) (+(var_9))))))) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_2))))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_5))) : ((+(var_3)))))));
                var_22 *= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (max((((/* implicit */unsigned int) var_6)), (var_11))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) var_9)) : (var_7)))))) ? (((((/* implicit */_Bool) var_3)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) var_6))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))))));
            }
        } 
    } 
}
