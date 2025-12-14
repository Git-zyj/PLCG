/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24120
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24120 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24120
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
    for (unsigned char i_0 = 2; i_0 < 13; i_0 += 4) 
    {
        for (short i_1 = 2; i_1 < 14; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 0; i_3 < 15; i_3 += 4) 
                    {
                        var_15 *= ((/* implicit */short) var_3);
                        var_16 = ((/* implicit */unsigned int) ((((unsigned long long int) var_14)) >= (((1000519419514631369ULL) - (((/* implicit */unsigned long long int) min((arr_8 [i_2] [i_3]), (((/* implicit */unsigned int) var_9)))))))));
                        var_17 = ((/* implicit */unsigned short) ((_Bool) min((((((/* implicit */_Bool) arr_3 [(signed char)11] [i_0 - 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) : (1000519419514631392ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_2 [i_1] [i_2])) == (((/* implicit */int) arr_2 [(short)11] [i_2]))))))));
                    }
                    var_18 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) arr_3 [i_1] [i_2])) ? (1000519419514631408ULL) : (((/* implicit */unsigned long long int) var_0)))))) ? ((~((~(17446224654194920207ULL))))) : (((((((/* implicit */_Bool) var_7)) ? (1000519419514631406ULL) : (((/* implicit */unsigned long long int) var_0)))) - (((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)2047)))))))));
                    var_19 = ((/* implicit */signed char) ((((/* implicit */int) arr_5 [i_2] [i_1] [i_1] [i_2])) & (((int) ((long long int) 17446224654194920207ULL)))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */short) (+(var_12)));
}
