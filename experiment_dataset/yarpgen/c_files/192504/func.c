/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192504
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192504 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192504
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
    var_14 &= ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) max((var_13), (var_3)))), (max((17798296802457789844ULL), (17798296802457789840ULL)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) max((((/* implicit */long long int) var_5)), (0LL)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)230)) ? (((/* implicit */int) (signed char)27)) : (((/* implicit */int) (unsigned char)230))))) ? (17798296802457789862ULL) : (((((/* implicit */_Bool) (short)-4550)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32757))) : (17798296802457789844ULL)))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (unsigned int i_1 = 3; i_1 < 24; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                {
                    arr_8 [i_1] [i_1 + 1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) (signed char)-76)) ? (((/* implicit */unsigned long long int) arr_7 [i_0] [i_0] [i_0] [i_0])) : (4188864930719234659ULL))), (min((648447271251761753ULL), (((/* implicit */unsigned long long int) arr_5 [i_1] [i_0]))))))) ? (max((((((/* implicit */_Bool) 648447271251761766ULL)) ? (17798296802457789849ULL) : (((/* implicit */unsigned long long int) -1251241392)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)43602)) ? (((/* implicit */int) (signed char)76)) : (((/* implicit */int) (unsigned char)41))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min(((unsigned char)232), (((/* implicit */unsigned char) (signed char)30))))) ? (((((/* implicit */_Bool) arr_3 [i_1] [(signed char)24] [i_1])) ? (722768309) : (((/* implicit */int) (short)-32759)))) : ((~(2147483630))))))));
                    var_15 = ((/* implicit */int) ((long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_1] [2])) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) arr_3 [i_1] [i_1] [i_2]))))))));
                }
            } 
        } 
    } 
}
