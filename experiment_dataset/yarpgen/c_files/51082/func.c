/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51082
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51082 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51082
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
    var_13 = ((/* implicit */signed char) (unsigned char)93);
    var_14 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 4123083447934801262LL))));
    var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_9)) : (((int) var_3))));
    /* LoopSeq 1 */
    for (long long int i_0 = 2; i_0 < 12; i_0 += 1) 
    {
        var_16 = ((/* implicit */short) 5748781528740752312LL);
        /* LoopNest 2 */
        for (unsigned short i_1 = 2; i_1 < 10; i_1 += 1) 
        {
            for (signed char i_2 = 1; i_2 < 12; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (short i_3 = 4; i_3 < 11; i_3 += 3) 
                    {
                        var_17 = ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) arr_6 [i_2] [i_1 + 1])));
                        arr_9 [i_0] [i_0] [i_0] [i_1] [i_2] [i_0] = (unsigned short)65525;
                    }
                    arr_10 [i_0] [i_0] [i_1] = ((/* implicit */unsigned short) var_11);
                    arr_11 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) -5748781528740752312LL);
                    /* LoopNest 2 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        for (short i_5 = 1; i_5 < 11; i_5 += 4) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65530)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)93))) : (var_1)))))))));
                                var_19 ^= ((/* implicit */short) ((min((((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) || ((_Bool)0)))), (var_1))) | (((/* implicit */long long int) (-(((/* implicit */int) var_11)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_20 = ((/* implicit */short) min((var_8), (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned short)42427))))))))));
    }
}
