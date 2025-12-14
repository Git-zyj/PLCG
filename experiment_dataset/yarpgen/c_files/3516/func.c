/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3516
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3516 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3516
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
    for (signed char i_0 = 3; i_0 < 11; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_10 = ((/* implicit */short) (unsigned char)28);
                /* LoopNest 2 */
                for (signed char i_2 = 1; i_2 < 11; i_2 += 3) 
                {
                    for (short i_3 = 0; i_3 < 13; i_3 += 4) 
                    {
                        {
                            var_11 = ((/* implicit */unsigned long long int) max((((/* implicit */short) (_Bool)0)), ((short)-30367)));
                            var_12 = ((/* implicit */_Bool) min((var_12), (((_Bool) (-(((/* implicit */int) var_7)))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 1 */
    for (short i_4 = 2; i_4 < 7; i_4 += 1) 
    {
        var_13 = ((/* implicit */unsigned char) ((unsigned long long int) (!((!(((/* implicit */_Bool) (unsigned short)65535)))))));
        var_14 &= ((/* implicit */unsigned long long int) ((((((/* implicit */int) max((arr_0 [i_4]), (((/* implicit */unsigned short) var_9))))) & (((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_4] [i_4]))))))) ^ (((/* implicit */int) ((((((/* implicit */_Bool) (unsigned char)55)) || (((/* implicit */_Bool) var_4)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_4])) ? (((/* implicit */int) (unsigned short)65515)) : (((/* implicit */int) arr_9 [i_4] [i_4] [i_4]))))))))));
    }
    var_15 = ((/* implicit */unsigned char) ((signed char) ((((/* implicit */int) ((unsigned short) var_3))) % (((((/* implicit */_Bool) (unsigned char)55)) ? (((/* implicit */int) (unsigned char)213)) : (((/* implicit */int) (unsigned char)28)))))));
    var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) var_4))));
}
