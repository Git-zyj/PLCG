/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31061
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31061 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31061
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
    var_11 = ((/* implicit */unsigned long long int) (-(648043715)));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 11; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        var_12 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)11984)) ? ((+(0ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_0] [i_0]))))) : (((((((/* implicit */int) arr_8 [i_3] [i_3 - 1] [i_3 - 1] [i_3])) + (2147483647))) << (((((/* implicit */int) (unsigned short)65505)) - (65505))))));
                        var_13 += ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_8 [i_3 - 1] [i_1] [i_2] [(unsigned char)0]))))) && (((/* implicit */_Bool) max((3041436136374913897LL), (((/* implicit */long long int) (unsigned short)30)))))));
                        arr_10 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) var_0))) ? (1269959702) : (((/* implicit */int) arr_8 [i_3 - 1] [i_3] [i_3 - 1] [i_3 - 1]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (2851310693U)));
                    }
                    var_14 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [10] [10])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (arr_5 [(signed char)10] [i_2])))) ? (max((9189087880491526573LL), (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)30)) < (((/* implicit */int) var_6))))))) : (((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)65531)))))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */long long int) var_3);
    var_16 = ((/* implicit */int) var_5);
}
