/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197848
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197848 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197848
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
    var_10 = ((/* implicit */unsigned char) max((var_10), (((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)47863)) ? (((/* implicit */long long int) 2115612068)) : (var_9)))))))))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [i_0] [i_2] [i_0] = (+(arr_3 [i_2] [i_0]));
                    arr_9 [i_0] [i_0] [i_2] [i_1] = ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)17672)) ^ (((/* implicit */int) (unsigned short)17673))));
                    var_11 = (unsigned short)14584;
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */unsigned int) (~((+(var_4)))));
    var_13 |= ((/* implicit */unsigned short) (+((+(((((/* implicit */_Bool) (unsigned char)128)) ? (((/* implicit */long long int) var_3)) : (var_4)))))));
    var_14 = ((/* implicit */unsigned short) var_0);
}
