/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217148
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217148 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217148
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
    for (unsigned int i_0 = 2; i_0 < 12; i_0 += 1) 
    {
        var_13 = ((/* implicit */int) min((var_13), (((/* implicit */int) min((18446744073709551615ULL), (((/* implicit */unsigned long long int) (unsigned char)85)))))));
        arr_3 [2] |= max((((/* implicit */unsigned long long int) max(((unsigned short)12988), ((unsigned short)12988)))), (min((6619999899248759930ULL), (4884872321005974817ULL))));
        var_14 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (unsigned short)52547)), (max((13792966910554840092ULL), (((/* implicit */unsigned long long int) (unsigned short)65535))))));
    }
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_1 = 2; i_1 < 10; i_1 += 3) 
    {
        var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) (unsigned short)57943))));
        arr_6 [i_1] = ((/* implicit */int) (short)22395);
        var_16 = ((/* implicit */unsigned char) min((var_16), ((unsigned char)241)));
        var_17 = ((/* implicit */short) (unsigned short)59052);
    }
    /* vectorizable */
    for (unsigned short i_2 = 3; i_2 < 9; i_2 += 4) 
    {
        var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) 4884872321005974817ULL))));
        var_19 ^= ((/* implicit */short) (unsigned short)12988);
    }
    for (unsigned char i_3 = 0; i_3 < 12; i_3 += 3) 
    {
        var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) min((((/* implicit */int) max(((short)22769), (((/* implicit */short) arr_8 [i_3]))))), (max((var_3), (((/* implicit */int) arr_8 [i_3])))))))));
        var_21 -= min((((/* implicit */unsigned int) min((161126699), (((/* implicit */int) arr_8 [i_3]))))), (min((arr_1 [10U]), (((/* implicit */unsigned int) var_11)))));
        var_22 += ((/* implicit */signed char) min((((/* implicit */unsigned int) (unsigned short)63087)), (max((((/* implicit */unsigned int) (short)-32752)), (349011926U)))));
        var_23 ^= ((/* implicit */int) min((((/* implicit */unsigned short) max((arr_2 [i_3]), (((/* implicit */short) (_Bool)0))))), (min(((unsigned short)12077), (((/* implicit */unsigned short) arr_2 [i_3]))))));
    }
}
