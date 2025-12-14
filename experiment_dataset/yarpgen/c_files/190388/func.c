/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190388
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190388 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190388
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
    var_13 &= ((/* implicit */_Bool) (+(((int) 17601497232619135619ULL))));
    var_14 = ((/* implicit */int) var_4);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                {
                    var_15 = ((((/* implicit */_Bool) min((((/* implicit */int) var_4)), (((((-1188766001) + (2147483647))) >> (((var_12) - (1262869450U)))))))) ? ((((~(var_10))) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1038774634375586298LL)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (signed char)-20))))))) : ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) << (((((/* implicit */int) var_5)) - (20658)))))) : ((~(var_10))))));
                    var_16 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */int) min(((unsigned char)98), (arr_3 [(short)17])))), (max((var_3), (((/* implicit */int) arr_5 [i_0] [i_1] [i_2] [15LL]))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((1038774634375586290LL), (-1038774634375586291LL)))) ? (((/* implicit */int) var_4)) : ((-(((/* implicit */int) var_9))))))) : (min((arr_2 [i_2]), (((/* implicit */unsigned long long int) (+(var_3))))))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 22; i_4 += 4) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(var_2)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned short) (unsigned char)208)), (var_5))))))) : (((/* implicit */int) ((unsigned short) -1038774634375586316LL)))));
                                var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (short)-30286))) / (1038774634375586290LL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)246)) / (((/* implicit */int) ((_Bool) arr_2 [17ULL])))))) : (var_10)));
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) var_0))));
                }
            } 
        } 
    } 
}
