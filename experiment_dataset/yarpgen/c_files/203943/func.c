/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203943
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203943 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203943
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_16 = ((/* implicit */int) (((_Bool)1) ? (877949182098307259LL) : (((/* implicit */long long int) 2147483647))));
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            arr_7 [i_0] [i_0] [i_0] = ((4294967284U) != (4166711287U));
            /* LoopSeq 1 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                var_17 &= ((/* implicit */signed char) -877949182098307259LL);
                arr_11 [i_0] [i_2] [i_2] = ((/* implicit */_Bool) (((_Bool)0) ? (-877949182098307259LL) : (((/* implicit */long long int) 3076234502U))));
                var_18 &= ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((1218732764U) <= (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))) & (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))) % (3076234497U)))));
            }
        }
        var_19 = ((/* implicit */short) ((-3403542120825858727LL) <= (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
        arr_12 [i_0] [i_0] = ((/* implicit */unsigned short) ((-49349323) == (((/* implicit */int) (_Bool)1))));
    }
    var_20 = ((/* implicit */long long int) ((((var_12) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)34515)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (short)24182))))))) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (short)10355)) / (-1410088611)))) ? (((((/* implicit */int) (unsigned char)17)) / (((/* implicit */int) (unsigned short)41437)))) : (((((/* implicit */int) (unsigned char)39)) / (((/* implicit */int) (unsigned short)65535)))))))));
    var_21 = ((((/* implicit */long long int) ((/* implicit */int) var_3))) <= (max((var_13), (((/* implicit */long long int) max((((/* implicit */int) (unsigned char)3)), (-33554432)))))));
}
