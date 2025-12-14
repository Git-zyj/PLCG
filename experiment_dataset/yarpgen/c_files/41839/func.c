/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41839
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41839 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41839
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
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        var_19 += ((/* implicit */short) ((_Bool) min(((~(((/* implicit */int) var_11)))), (((/* implicit */int) var_9)))));
        var_20 = min((((/* implicit */long long int) (~(((/* implicit */int) var_7))))), (((((/* implicit */_Bool) min((var_9), (((/* implicit */short) var_5))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (var_8) : (((/* implicit */int) var_15))))) : (((long long int) var_3)))));
    }
    for (short i_1 = 0; i_1 < 16; i_1 += 3) 
    {
        arr_6 [11LL] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((signed char) ((long long int) var_18))))));
        var_21 = ((/* implicit */_Bool) ((((/* implicit */int) ((unsigned short) var_3))) >> (min((((((/* implicit */_Bool) -6484177366108196249LL)) ? (1745837936590958459LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))))), (((/* implicit */long long int) (unsigned char)15))))));
        arr_7 [i_1] [3ULL] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((long long int) var_3))) ? ((-(((/* implicit */int) var_14)))) : (((/* implicit */int) (((+(((/* implicit */int) (unsigned short)65530)))) > ((~(((/* implicit */int) var_11)))))))));
        var_22 = ((/* implicit */unsigned int) var_7);
    }
    /* LoopNest 3 */
    for (long long int i_2 = 0; i_2 < 14; i_2 += 1) 
    {
        for (long long int i_3 = 2; i_3 < 13; i_3 += 4) 
        {
            for (unsigned short i_4 = 0; i_4 < 14; i_4 += 4) 
            {
                {
                    arr_18 [i_2] = ((/* implicit */unsigned short) ((long long int) max((((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))))), (max((((/* implicit */unsigned long long int) var_10)), (var_18))))));
                    arr_19 [i_2] [i_2] [(unsigned short)8] = ((/* implicit */signed char) (+(max((((/* implicit */long long int) ((signed char) (signed char)-103))), (9223372036854775807LL)))));
                    arr_20 [i_2] = ((/* implicit */long long int) ((short) (unsigned short)3968));
                    arr_21 [(short)13] [i_4] [i_2] [i_2] = ((/* implicit */unsigned short) (~(((/* implicit */int) max((((unsigned short) var_7)), (((unsigned short) -1LL)))))));
                    arr_22 [i_2] [i_3] [i_2] [i_4] = ((/* implicit */long long int) (+(min(((~(((/* implicit */int) var_5)))), (((int) var_0))))));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */unsigned short) min((var_1), (((/* implicit */unsigned int) var_10))));
    var_24 = ((/* implicit */long long int) (!(((/* implicit */_Bool) min((((/* implicit */int) var_9)), ((~(((/* implicit */int) (unsigned char)22)))))))));
}
