/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28111
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28111 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28111
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
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        var_11 = ((/* implicit */_Bool) ((short) min((arr_0 [i_0]), (((/* implicit */long long int) var_3)))));
        arr_2 [i_0] [i_0] = ((/* implicit */short) 1093022011636687908ULL);
    }
    for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 1) 
    {
        arr_6 [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((long long int) var_1)), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned short)32640)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (((((/* implicit */_Bool) ((((-7650239047036154118LL) + (9223372036854775807LL))) >> (((/* implicit */int) var_1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (min((15196930902470842742ULL), (((/* implicit */unsigned long long int) 2147483647))))))));
        var_12 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) -2147483647)) != (((((/* implicit */_Bool) -2147483647)) ? (5173289103168659083ULL) : (((/* implicit */unsigned long long int) 0LL))))))), (max((((((/* implicit */_Bool) var_0)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))), (((/* implicit */unsigned long long int) (~(2147483647))))))));
        var_13 = ((/* implicit */long long int) ((signed char) ((short) 16502787553336276476ULL)));
    }
    var_14 += ((/* implicit */signed char) (-((~(((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)3))) : (-1375779495680351694LL)))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_2 = 2; i_2 < 10; i_2 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 4) /* same iter space */
        {
            var_15 = ((/* implicit */_Bool) (+((~(((((/* implicit */_Bool) (unsigned char)179)) ? ((-2147483647 - 1)) : (16777184)))))));
            arr_11 [i_2] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) 9113952446391954591LL)) ? (arr_9 [i_2] [i_2] [i_3]) : (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_2]))))) + (((/* implicit */long long int) ((((/* implicit */int) var_7)) & (((/* implicit */int) (unsigned char)15))))))))));
        }
        for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 4) /* same iter space */
        {
            arr_15 [i_4] [i_4] = ((/* implicit */signed char) max((((((/* implicit */_Bool) 7493544298703703556LL)) ? (((/* implicit */int) arr_7 [i_2] [i_2])) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned char)77)) : (((/* implicit */int) (unsigned short)21411)))))), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127))) / (arr_13 [i_2 + 2] [i_2 - 2] [i_4])))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) var_4)) : (7650239047036154097LL)))))))));
            var_16 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 2047)), (((((/* implicit */_Bool) (+(12331568732027471919ULL)))) ? (((/* implicit */unsigned long long int) 1011481037)) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) / (var_10)))))));
            var_17 *= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_14 [i_2 + 2] [i_2 - 2])) || (var_9))) ? (((/* implicit */int) arr_7 [i_2 + 2] [i_2 - 2])) : ((+(((/* implicit */int) arr_7 [i_2 + 2] [i_2 - 2]))))));
        }
        var_18 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(var_4)))) ? (min((((/* implicit */unsigned long long int) var_1)), (18446744073709551597ULL))) : (((/* implicit */unsigned long long int) ((3125571331U) ^ (((/* implicit */unsigned int) var_4)))))))) ? (((/* implicit */int) (unsigned char)60)) : (((/* implicit */int) (unsigned char)255))));
    }
}
