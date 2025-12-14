/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215516
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215516 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215516
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
    var_20 |= ((/* implicit */signed char) max(((_Bool)0), ((((+(((/* implicit */int) var_16)))) < (((((/* implicit */int) var_4)) >> (((/* implicit */int) var_10))))))));
    /* LoopSeq 2 */
    for (int i_0 = 1; i_0 < 17; i_0 += 1) /* same iter space */
    {
        arr_3 [i_0 + 2] [i_0] = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) ((short) arr_1 [i_0]))))) ? ((~(((((/* implicit */_Bool) arr_2 [i_0 - 1])) ? (arr_0 [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0 + 1]))))))) : (((/* implicit */long long int) ((/* implicit */int) max((((unsigned short) var_12)), (((/* implicit */unsigned short) arr_1 [i_0 - 1]))))))));
        var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_0 + 2])) ? (-2095007476007212766LL) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (unsigned short)63892)))))))));
    }
    for (int i_1 = 1; i_1 < 17; i_1 += 1) /* same iter space */
    {
        var_22 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_1 [i_1]) ? ((~(((/* implicit */int) var_10)))) : (((((/* implicit */int) arr_2 [i_1])) & (((/* implicit */int) (unsigned short)16383))))))) ? (((/* implicit */int) (unsigned short)38701)) : ((~((~(((/* implicit */int) var_0))))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned int i_2 = 0; i_2 < 19; i_2 += 2) /* same iter space */
        {
            var_23 = ((/* implicit */_Bool) ((int) (+(((/* implicit */int) (short)23510)))));
            /* LoopSeq 1 */
            for (unsigned char i_3 = 4; i_3 < 17; i_3 += 2) 
            {
                arr_12 [i_1 + 2] [i_1] [i_1 + 2] [(unsigned char)6] &= ((/* implicit */unsigned int) ((unsigned short) ((signed char) (short)-23511)));
                var_24 += ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_13)))))));
                arr_13 [i_1] [i_2] = (!(((/* implicit */_Bool) arr_9 [i_3 - 3] [i_3] [i_3 - 3])));
                arr_14 [i_1 + 1] [i_2] [i_3] = ((/* implicit */long long int) (-(((/* implicit */int) arr_7 [i_1 + 1]))));
            }
            var_25 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_2 [i_1])))))));
            arr_15 [i_2] = ((signed char) arr_0 [i_1] [i_1]);
        }
        /* vectorizable */
        for (unsigned int i_4 = 0; i_4 < 19; i_4 += 2) /* same iter space */
        {
            var_26 = ((/* implicit */long long int) arr_6 [i_1 + 2] [13ULL] [i_4]);
            var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_18)) ? (((((/* implicit */_Bool) (unsigned short)31521)) ? (((/* implicit */int) (unsigned char)152)) : (((/* implicit */int) (unsigned short)45635)))) : (((/* implicit */int) (unsigned short)45635))));
            var_28 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_17 [i_1] [i_1])) : (((/* implicit */int) arr_5 [i_1] [i_1]))))));
        }
        var_29 = ((/* implicit */short) ((((/* implicit */_Bool) max((arr_9 [i_1] [i_1 + 1] [i_1]), (((/* implicit */unsigned short) arr_10 [i_1 + 2]))))) ? (((int) min((arr_0 [(_Bool)1] [i_1]), (((/* implicit */long long int) var_6))))) : (((/* implicit */int) max((arr_7 [i_1]), (((/* implicit */short) (!(((/* implicit */_Bool) 1959825338U))))))))));
    }
    var_30 = ((/* implicit */unsigned char) max((var_30), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (-(((/* implicit */int) var_17))))))) : (((long long int) max((-1), (((/* implicit */int) (short)-23507))))))))));
}
