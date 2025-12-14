/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203470
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203470 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203470
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
    var_10 = ((/* implicit */unsigned char) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))));
    var_11 = ((/* implicit */unsigned long long int) 2095104);
    var_12 = ((/* implicit */unsigned short) max((var_12), (var_9)));
    /* LoopSeq 3 */
    /* vectorizable */
    for (int i_0 = 4; i_0 < 19; i_0 += 1) 
    {
        arr_2 [4LL] [4LL] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (arr_1 [i_0])))) ? (((long long int) arr_0 [(_Bool)1])) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) -1663817351)) <= (var_4)))))));
        var_13 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_0 - 2])) ? (((/* implicit */int) ((1663817350) <= (var_6)))) : ((+(((/* implicit */int) (_Bool)1))))));
    }
    for (short i_1 = 0; i_1 < 24; i_1 += 1) 
    {
        var_14 = ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) 237729792690856830LL)) ? (((/* implicit */int) var_9)) : (arr_3 [i_1]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 0ULL))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) var_5)) : (var_1)))) ? ((~(1879048192))) : (1663817351))));
        var_15 = ((/* implicit */long long int) var_8);
    }
    for (short i_2 = 0; i_2 < 10; i_2 += 3) 
    {
        /* LoopSeq 1 */
        for (int i_3 = 0; i_3 < 10; i_3 += 2) 
        {
            var_16 = ((/* implicit */int) ((((/* implicit */long long int) 1663817350)) >= (var_3)));
            var_17 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_11 [i_3]) ? (var_7) : (var_7)))) ? (((/* implicit */long long int) (~(-1663817351)))) : ((~(arr_9 [i_3])))))) ? (237729792690856822LL) : (7445411647003534059LL)));
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned short i_4 = 0; i_4 < 10; i_4 += 3) 
            {
                var_18 = ((/* implicit */int) ((unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (1663817334) : (1663817351))));
                var_19 = ((/* implicit */unsigned long long int) -791861878075019762LL);
                var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) (~(var_4))))));
                var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) ((((/* implicit */_Bool) (short)11073)) ? (1663817340) : (((/* implicit */int) (unsigned short)36176)))))));
            }
        }
        arr_15 [i_2] [0] = ((/* implicit */signed char) (unsigned short)10810);
    }
}
