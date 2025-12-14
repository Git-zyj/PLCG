/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245678
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245678 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245678
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
    for (signed char i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                {
                    var_12 -= ((/* implicit */unsigned long long int) ((((/* implicit */int) ((signed char) min((17261654778117595092ULL), (((/* implicit */unsigned long long int) var_11)))))) ^ (((/* implicit */int) arr_3 [i_0]))));
                    var_13 = ((/* implicit */int) max((var_13), (((/* implicit */int) min(((signed char)-87), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)223))) > (4888008870857678175ULL)))))))));
                    arr_7 [i_2] [i_1] [i_1] [16ULL] = ((/* implicit */unsigned long long int) -1123503673);
                }
            } 
        } 
        var_14 += ((/* implicit */long long int) (!(((/* implicit */_Bool) max((arr_0 [i_0] [i_0]), (((/* implicit */unsigned char) max(((_Bool)1), (arr_6 [i_0] [i_0] [i_0] [i_0])))))))));
    }
    var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) var_4))));
    /* LoopNest 3 */
    for (signed char i_3 = 0; i_3 < 21; i_3 += 1) 
    {
        for (unsigned long long int i_4 = 0; i_4 < 21; i_4 += 4) 
        {
            for (int i_5 = 2; i_5 < 18; i_5 += 3) 
            {
                {
                    var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) arr_13 [i_3] [i_4] [i_4] [i_3]))));
                    var_17 ^= ((/* implicit */long long int) ((arr_14 [i_3] [i_4] [i_4]) - (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)227)))))));
                    var_18 *= ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((unsigned char) arr_9 [i_3] [i_3]))), (4226311978001809524LL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -4226311978001809524LL)) ? (((/* implicit */int) (short)13385)) : (((/* implicit */int) (unsigned short)55158))))) : ((~(0ULL)))));
                }
            } 
        } 
    } 
}
