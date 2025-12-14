/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197553
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197553 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197553
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
    var_10 = max((min((((var_8) & (((/* implicit */unsigned int) ((/* implicit */int) var_6))))), (((/* implicit */unsigned int) var_9)))), (((/* implicit */unsigned int) ((min((var_1), (var_9))) * (((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            {
                var_11 = ((/* implicit */signed char) min((((/* implicit */long long int) (~(((int) arr_3 [i_0] [i_0]))))), (((((long long int) var_5)) / (((/* implicit */long long int) ((unsigned int) arr_6 [i_0])))))));
                var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((min((4294967295U), (((/* implicit */unsigned int) var_5)))) ^ (((((/* implicit */_Bool) (short)-12862)) ? (12U) : (4294967288U)))))) || (((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_3)) : (arr_3 [i_0] [i_1]))))))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 3; i_2 < 12; i_2 += 4) 
                {
                    for (short i_3 = 0; i_3 < 14; i_3 += 2) 
                    {
                        {
                            var_13 = ((/* implicit */long long int) arr_0 [i_0] [i_1]);
                            arr_13 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (short)-3957)) ? (2939272922U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)47342)))));
                            var_14 &= ((/* implicit */unsigned char) (signed char)-54);
                        }
                    } 
                } 
            }
        } 
    } 
    var_15 = min((((/* implicit */unsigned int) ((((/* implicit */int) var_3)) > (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_4))))))), (min((max((var_8), (((/* implicit */unsigned int) (short)3956)))), (((/* implicit */unsigned int) (~(((/* implicit */int) var_5))))))));
}
