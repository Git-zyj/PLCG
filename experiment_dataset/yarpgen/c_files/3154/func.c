/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3154
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3154 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3154
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
    /* LoopSeq 3 */
    for (unsigned int i_0 = 2; i_0 < 19; i_0 += 4) 
    {
        var_12 *= ((/* implicit */short) min((((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_1)), (arr_1 [i_0 - 2])))), (((((/* implicit */_Bool) arr_1 [i_0 - 2])) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) (-2147483647 - 1)))))));
        arr_3 [i_0] = ((/* implicit */unsigned char) min((-938214099), (((/* implicit */int) var_9))));
        var_13 = ((/* implicit */unsigned int) arr_2 [i_0 + 1]);
    }
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 24; i_1 += 3) /* same iter space */
    {
        var_14 = ((/* implicit */signed char) ((long long int) arr_4 [i_1]));
        arr_7 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)0))))) && (((/* implicit */_Bool) var_11))));
        var_15 &= ((/* implicit */unsigned char) 2147483647);
        /* LoopSeq 1 */
        for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
        {
            /* LoopSeq 1 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                arr_14 [i_1] [i_2] |= ((/* implicit */_Bool) (~((~((-2147483647 - 1))))));
                var_16 *= ((/* implicit */unsigned short) (+((+(((/* implicit */int) var_9))))));
            }
            arr_15 [i_1] [i_2 + 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_10 [i_1] [(unsigned char)1] [i_2 + 1])) ? (((/* implicit */int) arr_10 [i_2] [i_2] [i_2 + 1])) : (((/* implicit */int) arr_10 [i_1] [i_2 + 1] [i_2 + 1]))));
            /* LoopNest 2 */
            for (signed char i_4 = 0; i_4 < 24; i_4 += 1) 
            {
                for (unsigned short i_5 = 0; i_5 < 24; i_5 += 3) 
                {
                    {
                        arr_21 [i_4] = ((/* implicit */short) -8958235981547736054LL);
                        var_17 -= ((/* implicit */signed char) (unsigned short)5);
                        arr_22 [i_1] [i_1] [i_4] [i_5] [i_4] = ((/* implicit */signed char) (~(((/* implicit */int) arr_9 [i_2 + 1] [i_2] [i_2 + 1]))));
                    }
                } 
            } 
        }
        var_18 *= ((/* implicit */signed char) (~(((((/* implicit */_Bool) arr_6 [i_1] [i_1])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_8))))));
    }
    for (unsigned short i_6 = 0; i_6 < 24; i_6 += 3) /* same iter space */
    {
        var_19 -= ((/* implicit */unsigned short) max((((/* implicit */unsigned int) min((((((/* implicit */_Bool) (unsigned short)5)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) arr_17 [i_6] [i_6] [i_6] [i_6])))), (((((/* implicit */int) var_4)) >> (((((/* implicit */int) (unsigned short)65532)) - (65525)))))))), (max((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)223)) % (((/* implicit */int) var_11))))), (((((/* implicit */_Bool) (unsigned short)65524)) ? (2375871013U) : (((/* implicit */unsigned int) 938214109))))))));
        arr_26 [i_6] &= ((((/* implicit */_Bool) (-(((arr_5 [i_6]) - (((/* implicit */int) arr_25 [i_6] [i_6]))))))) ? (min((((unsigned int) var_11)), (((/* implicit */unsigned int) max((((/* implicit */int) arr_16 [i_6] [i_6])), (2147483647)))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((signed char) arr_5 [i_6]))) ? ((+(((/* implicit */int) arr_9 [i_6] [i_6] [i_6])))) : (((((/* implicit */_Bool) arr_4 [i_6])) ? (arr_5 [i_6]) : (((/* implicit */int) arr_12 [i_6] [i_6] [i_6]))))))));
    }
    var_20 = ((/* implicit */unsigned short) var_9);
}
