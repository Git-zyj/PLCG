/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20869
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20869 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20869
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
    var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) (-(((int) var_1)))))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */signed char) (((_Bool)1) ? (16856525127292869976ULL) : (((/* implicit */unsigned long long int) var_9))));
        arr_4 [i_0] [i_0] = ((/* implicit */short) ((long long int) arr_2 [i_0]));
        var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) ((((/* implicit */_Bool) 18446744073709551599ULL)) ? (((/* implicit */int) (short)-25572)) : (((/* implicit */int) (unsigned short)62560)))))));
    }
    for (short i_1 = 1; i_1 < 14; i_1 += 4) 
    {
        var_15 = var_7;
        arr_9 [i_1] = ((/* implicit */unsigned char) ((-1301915877) / (((/* implicit */int) ((short) ((((/* implicit */_Bool) var_6)) ? (-1) : (((/* implicit */int) arr_5 [i_1]))))))));
        var_16 ^= ((/* implicit */signed char) min((((((/* implicit */int) (short)-8304)) | ((~(((/* implicit */int) (signed char)101)))))), (((/* implicit */int) arr_8 [i_1] [i_1 + 1]))));
    }
    for (signed char i_2 = 0; i_2 < 23; i_2 += 4) /* same iter space */
    {
        var_17 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)21))))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned char)15)) : (((/* implicit */int) (unsigned char)219)))) : (((/* implicit */int) (unsigned short)0))));
        var_18 &= ((/* implicit */long long int) ((_Bool) ((_Bool) min((3989601974U), (1351678315U)))));
    }
    /* vectorizable */
    for (signed char i_3 = 0; i_3 < 23; i_3 += 4) /* same iter space */
    {
        arr_15 [i_3] [i_3] &= ((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)60157))));
        var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) 3170796904U)) & (var_10)))) ? (((/* implicit */int) arr_12 [i_3])) : (((/* implicit */int) arr_13 [i_3] [i_3])))))));
    }
}
