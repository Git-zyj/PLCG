/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192162
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192162 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192162
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
    var_12 = ((/* implicit */long long int) (unsigned short)52520);
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        var_13 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_0 [i_0])) << (((/* implicit */int) var_8))));
        arr_2 [2U] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned short)65535))));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_5 [i_1] |= ((/* implicit */long long int) (-(arr_3 [i_1])));
        var_14 = ((/* implicit */_Bool) ((((((/* implicit */long long int) ((/* implicit */int) (unsigned short)52516))) + (var_9))) / (((/* implicit */long long int) ((/* implicit */int) var_8)))));
        arr_6 [i_1] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) arr_4 [i_1])) ? (arr_3 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)12991)))))));
        arr_7 [i_1] [i_1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1]))) : (arr_3 [(unsigned short)2])))) ? (arr_3 [i_1]) : ((+(arr_3 [i_1]))));
        var_15 = ((/* implicit */_Bool) max((var_15), (var_8)));
    }
    var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) var_4))) || (((/* implicit */_Bool) (+(((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) (unsigned short)13015))))))))));
    /* LoopSeq 1 */
    for (long long int i_2 = 0; i_2 < 12; i_2 += 1) 
    {
        var_17 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) var_3)) ? (arr_9 [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_2] [i_2]))))) : (((arr_9 [i_2]) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_2] [i_2])))))))));
        /* LoopSeq 1 */
        for (long long int i_3 = 0; i_3 < 12; i_3 += 3) 
        {
            var_18 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) (unsigned short)12999)) : (((/* implicit */int) arr_11 [i_2] [i_2]))))) ? (var_2) : (((/* implicit */long long int) ((((((/* implicit */int) arr_4 [i_2])) + (2147483647))) << (((var_10) - (372691364217102060LL))))))))) ? (((max((((/* implicit */unsigned long long int) arr_4 [i_2])), (18446744073709551590ULL))) & (((/* implicit */unsigned long long int) ((long long int) 2380745043U))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) arr_4 [i_2])) ? (((/* implicit */int) arr_12 [(unsigned short)0])) : (((/* implicit */int) arr_4 [i_3]))))))));
            var_19 = ((/* implicit */signed char) (((_Bool)1) ? (6118807754192565768LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)42)))));
            var_20 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) ((signed char) (unsigned short)13016))) ? ((-(((/* implicit */int) (unsigned short)12989)))) : ((+(((/* implicit */int) (_Bool)1))))))));
            var_21 = ((/* implicit */unsigned int) (_Bool)1);
        }
    }
}
