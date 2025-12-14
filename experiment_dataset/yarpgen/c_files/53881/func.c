/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53881
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53881 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53881
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        var_13 = (~(((/* implicit */int) (signed char)12)));
        var_14 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) % (2110471927197294619LL)));
    }
    for (int i_1 = 0; i_1 < 19; i_1 += 2) 
    {
        var_15 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) -237110659)) || (((/* implicit */_Bool) -237110659))));
        var_16 += ((/* implicit */unsigned char) min(((signed char)12), ((signed char)101)));
    }
    for (unsigned char i_2 = 0; i_2 < 10; i_2 += 4) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_3 = 0; i_3 < 10; i_3 += 2) 
        {
            var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) ((short) (_Bool)1)))));
            arr_9 [i_2] [2U] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 6895206985546512035LL)) ? (933375124) : (((/* implicit */int) (_Bool)1))));
            arr_10 [(unsigned char)3] [i_3] |= ((/* implicit */signed char) ((((/* implicit */_Bool) 1918721269)) ? (1066918908354549264LL) : (((/* implicit */long long int) 1918721269))));
            arr_11 [i_2] = ((/* implicit */_Bool) ((unsigned int) (signed char)127));
        }
        arr_12 [i_2] [i_2] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-13)) ? (4293918720U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)236)))));
        var_18 += (((_Bool)1) ? (((/* implicit */long long int) -1005437582)) : (4399760149183407757LL));
    }
    var_19 = ((/* implicit */unsigned short) var_4);
}
