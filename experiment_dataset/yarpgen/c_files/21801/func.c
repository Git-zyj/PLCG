/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21801
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21801 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21801
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
    var_11 = ((/* implicit */unsigned short) max((((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_8)))) | (var_7))), ((~(var_7)))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        var_12 = ((/* implicit */int) ((unsigned char) ((14880350983324529391ULL) % (((/* implicit */unsigned long long int) -356347731172989621LL)))));
        arr_2 [(unsigned char)12] [(unsigned char)12] &= ((/* implicit */signed char) ((-2473362084515406917LL) < (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255)))));
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            /* LoopSeq 1 */
            for (signed char i_2 = 1; i_2 < 12; i_2 += 2) 
            {
                var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) ((((/* implicit */_Bool) -2473362084515406916LL)) ? (7102761786554622685LL) : (((/* implicit */long long int) ((/* implicit */int) var_2))))))));
                var_14 = ((/* implicit */short) ((((/* implicit */_Bool) (-(var_7)))) ? (((/* implicit */int) arr_7 [i_0] [i_2 + 3] [i_2 + 3] [(unsigned char)2])) : (((((/* implicit */int) arr_0 [i_0] [i_2])) >> (((var_7) + (303640528)))))));
            }
            var_15 = ((/* implicit */unsigned char) (-((-(-6696440419522275235LL)))));
            arr_8 [i_0] = ((/* implicit */long long int) var_3);
        }
        arr_9 [8U] [i_0] = ((/* implicit */signed char) arr_4 [i_0] [i_0] [i_0]);
        var_16 &= ((/* implicit */unsigned short) (~(var_7)));
    }
}
