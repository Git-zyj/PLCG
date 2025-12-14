/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236440
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236440 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236440
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
    var_15 = ((/* implicit */unsigned long long int) ((-1LL) == (((/* implicit */long long int) ((/* implicit */int) (short)16)))));
    /* LoopSeq 1 */
    for (int i_0 = 1; i_0 < 13; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */short) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) ((arr_1 [7LL]) / (((/* implicit */long long int) ((/* implicit */int) var_3)))))) != (11837230563707842745ULL))))));
        arr_4 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 8320411755253457834ULL)) ? (((/* implicit */int) (unsigned char)101)) : (((/* implicit */int) (short)15))));
    }
    /* LoopNest 3 */
    for (unsigned char i_1 = 0; i_1 < 19; i_1 += 3) 
    {
        for (signed char i_2 = 0; i_2 < 19; i_2 += 2) 
        {
            for (long long int i_3 = 1; i_3 < 18; i_3 += 4) 
            {
                {
                    var_16 = ((/* implicit */long long int) (short)11);
                    var_17 &= ((/* implicit */signed char) (-(((/* implicit */int) max(((short)20353), (((/* implicit */short) (unsigned char)0)))))));
                    /* LoopNest 2 */
                    for (unsigned char i_4 = 0; i_4 < 19; i_4 += 2) 
                    {
                        for (unsigned int i_5 = 1; i_5 < 18; i_5 += 4) 
                        {
                            {
                                var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)120)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)103))) : (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -13LL)) ? (((/* implicit */long long int) 2960139473U)) : (-2303248338526068852LL)))), (max((arr_15 [(short)17] [i_4] [8U] [i_4]), (((/* implicit */unsigned long long int) (signed char)-24))))))));
                                var_19 ^= ((/* implicit */_Bool) min((((int) 4294967295U)), (((/* implicit */int) (unsigned char)152))));
                                var_20 = ((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) arr_9 [i_3 + 1] [i_3 - 1] [i_3])) ? (58720256) : (((/* implicit */int) (unsigned char)68)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
