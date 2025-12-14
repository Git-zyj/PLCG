/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200839
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200839 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200839
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 2; i_0 < 9; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 4; i_1 < 7; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 7; i_2 += 1) 
            {
                {
                    var_16 &= ((/* implicit */unsigned long long int) (unsigned char)45);
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (signed char i_4 = 4; i_4 < 8; i_4 += 1) 
                        {
                            {
                                var_17 += ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((unsigned char) (+(((/* implicit */int) (_Bool)1)))))), (max((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_11 [i_0] [i_1] [i_2] [(_Bool)1] [i_4]))))), (((((/* implicit */_Bool) var_12)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0 - 2] [i_1 + 1] [i_2] [i_4])))))))));
                                arr_14 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (short)-13966);
                            }
                        } 
                    } 
                    arr_15 [i_0] [i_1 - 4] [i_2] = ((/* implicit */unsigned long long int) (+(((((/* implicit */int) (unsigned short)53102)) ^ (2147483642)))));
                    arr_16 [i_0] = ((/* implicit */_Bool) var_4);
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */signed char) ((unsigned short) ((((((/* implicit */int) (unsigned short)6510)) & (((/* implicit */int) (unsigned short)12433)))) % (((/* implicit */int) ((var_1) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))))));
}
