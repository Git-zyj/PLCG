/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224608
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224608 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224608
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
    var_11 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) var_10))) ? (((/* implicit */int) var_3)) : (var_2)))) ? (((/* implicit */int) ((short) 0ULL))) : (((/* implicit */int) var_10))));
    var_12 = ((/* implicit */long long int) var_5);
    /* LoopNest 3 */
    for (signed char i_0 = 3; i_0 < 20; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (unsigned char i_2 = 2; i_2 < 18; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 21; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 4; i_4 < 18; i_4 += 1) 
                        {
                            {
                                var_13 = arr_2 [i_2 - 1] [i_0];
                                var_14 *= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) < (-4340179424988666251LL))))) < (arr_6 [i_2] [i_2] [i_0])));
                                var_15 = ((/* implicit */long long int) max((((arr_6 [i_0] [20LL] [i_3]) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_10 [i_0] [i_0] [(unsigned char)0] [i_0] [(signed char)11])))))), (((/* implicit */unsigned long long int) ((unsigned short) arr_9 [i_0 - 2])))));
                            }
                        } 
                    } 
                    var_16 &= ((short) 0U);
                    var_17 = ((/* implicit */unsigned char) arr_2 [i_2 + 2] [(signed char)16]);
                }
            } 
        } 
    } 
    var_18 |= ((/* implicit */signed char) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) || ((!(((/* implicit */_Bool) (short)-6049))))))), (((((/* implicit */_Bool) (~(4294967281U)))) ? (var_6) : (((/* implicit */unsigned int) ((((/* implicit */int) (short)-2027)) ^ (((/* implicit */int) (short)6462)))))))));
}
