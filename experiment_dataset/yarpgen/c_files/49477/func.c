/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49477
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49477 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49477
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
    var_15 -= ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */int) var_3)) <= (((/* implicit */int) var_6)))) ? (((((((/* implicit */int) var_0)) + (2147483647))) >> (((((/* implicit */int) var_10)) - (43897))))) : (((((/* implicit */_Bool) (short)9)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_7))))))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) min(((_Bool)0), ((_Bool)1))))) : ((~(-5LL))))) : (var_11)));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                {
                    var_16 = ((/* implicit */short) min((((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_2])) ? (var_2) : (((/* implicit */int) (unsigned short)15)))), ((~(((/* implicit */int) arr_7 [i_1] [i_1] [i_1] [i_1]))))));
                    var_17 = ((/* implicit */short) arr_0 [(unsigned short)15] [i_1]);
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */signed char) (~(((/* implicit */int) var_1))));
    var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)105)) ? (5LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)0))))))));
    /* LoopSeq 1 */
    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
    {
        var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) arr_0 [i_3] [i_3])) ? (((/* implicit */int) (signed char)-84)) : (max((((/* implicit */int) arr_6 [i_3 + 1] [(unsigned short)3] [i_3 + 1])), (-1250866986))))) : (((/* implicit */int) ((((((/* implicit */_Bool) 5578111)) ? (arr_8 [2]) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))))) <= (((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned char)111), (((/* implicit */unsigned char) var_5))))))))))))));
        var_21 = ((/* implicit */short) arr_4 [i_3] [i_3]);
        arr_10 [i_3] = ((/* implicit */signed char) arr_0 [i_3] [8LL]);
    }
}
