/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197959
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197959 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197959
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
    var_18 = ((/* implicit */int) ((((/* implicit */_Bool) 2147483520)) ? (((unsigned int) 2147483524)) : (((/* implicit */unsigned int) -2147483526))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) (+(-2147483517))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned char i_1 = 1; i_1 < 17; i_1 += 4) /* same iter space */
        {
            arr_5 [i_0] [i_0] [i_1] = ((/* implicit */int) (_Bool)1);
            var_20 = ((/* implicit */short) (-(-2147483520)));
        }
        /* vectorizable */
        for (unsigned char i_2 = 1; i_2 < 17; i_2 += 4) /* same iter space */
        {
            var_21 = ((/* implicit */signed char) ((int) ((((/* implicit */int) var_3)) % (((/* implicit */int) arr_6 [i_2] [i_0] [i_0])))));
            var_22 *= ((/* implicit */short) ((var_3) ? (2147483507) : (((/* implicit */int) arr_6 [i_2] [i_2] [i_2 + 1]))));
            var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) ((unsigned short) var_5)))));
        }
    }
    var_24 = ((/* implicit */short) max((((/* implicit */long long int) var_17)), (max((max((var_0), (var_7))), (((/* implicit */long long int) var_15))))));
    /* LoopSeq 1 */
    for (int i_3 = 3; i_3 < 22; i_3 += 2) 
    {
        var_25 = ((/* implicit */signed char) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_10 [i_3] [i_3])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_8 [i_3] [i_3]))))), (((var_3) ? (arr_10 [i_3 - 1] [i_3 + 1]) : (((/* implicit */unsigned int) -2147483520))))));
        var_26 += ((((/* implicit */int) (_Bool)1)) >> (((((((/* implicit */long long int) ((/* implicit */int) var_11))) | (var_13))) - (1502630662239677399LL))));
        arr_11 [i_3] [i_3] = ((/* implicit */_Bool) var_2);
        var_27 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) 1435415365))) ? (((/* implicit */long long int) var_1)) : (((long long int) arr_8 [i_3] [i_3 - 1]))));
    }
}
