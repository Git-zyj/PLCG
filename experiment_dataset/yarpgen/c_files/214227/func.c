/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214227
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214227 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214227
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
    var_16 = ((/* implicit */_Bool) (+(9223372036854775807LL)));
    var_17 = ((/* implicit */unsigned int) var_1);
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        /* LoopSeq 4 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_18 = ((/* implicit */_Bool) max((var_18), (arr_4 [i_1])));
            var_19 = ((/* implicit */_Bool) max((var_19), (arr_4 [i_1])));
        }
        for (long long int i_2 = 3; i_2 < 16; i_2 += 1) 
        {
            var_20 = ((/* implicit */int) ((var_11) ? (((/* implicit */unsigned long long int) ((arr_7 [i_2 + 2] [i_2 + 1] [i_0]) ? (((/* implicit */long long int) -304677677)) : (8236069663135044874LL)))) : (min((var_9), (((/* implicit */unsigned long long int) arr_4 [i_0]))))));
            var_21 = ((/* implicit */signed char) arr_4 [i_0]);
            /* LoopNest 2 */
            for (long long int i_3 = 2; i_3 < 17; i_3 += 3) 
            {
                for (signed char i_4 = 0; i_4 < 18; i_4 += 3) 
                {
                    {
                        var_22 = ((/* implicit */unsigned char) min((arr_10 [i_3 + 1] [i_2 - 1] [i_2 - 3]), (((arr_6 [i_3 - 2] [i_0] [i_2 - 3]) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_6 [i_3 + 1] [i_0] [i_2 - 3]))))));
                        var_23 = ((/* implicit */unsigned short) (short)-12487);
                        var_24 = ((/* implicit */unsigned long long int) min((((arr_7 [i_2] [i_2 + 2] [i_3 - 2]) ? (((/* implicit */int) arr_7 [i_3] [i_3 - 1] [i_3 - 1])) : (((/* implicit */int) arr_7 [i_0] [i_2] [i_3 - 2])))), (max((arr_10 [i_0] [i_2] [i_3]), (((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) arr_1 [17ULL])))))))));
                        var_25 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_4] [i_2] [i_0]))) : (((var_5) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) (short)32767)))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (max((((/* implicit */int) arr_5 [i_0] [i_2 - 3] [i_3])), (arr_10 [i_0] [(unsigned char)16] [i_4]))) : (max((((/* implicit */int) arr_5 [i_0] [i_2] [(short)1])), (arr_10 [i_0] [i_2] [i_3])))))) : (((((/* implicit */_Bool) ((16ULL) + (((/* implicit */unsigned long long int) 8236069663135044893LL))))) ? (((/* implicit */unsigned long long int) arr_14 [i_3 - 2] [i_2 - 3])) : (((var_13) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)201)))))))));
                    }
                } 
            } 
        }
        /* vectorizable */
        for (short i_5 = 0; i_5 < 18; i_5 += 2) /* same iter space */
        {
            var_26 *= ((/* implicit */_Bool) arr_16 [i_5]);
            arr_17 [i_0] [i_0] = ((/* implicit */signed char) arr_6 [i_0] [i_0] [i_5]);
            /* LoopNest 2 */
            for (unsigned short i_6 = 0; i_6 < 18; i_6 += 2) 
            {
                for (unsigned long long int i_7 = 0; i_7 < 18; i_7 += 1) 
                {
                    {
                        var_27 = ((/* implicit */_Bool) min((var_27), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_7] [2LL] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */long long int) arr_10 [i_0] [i_0] [i_0])) : (arr_1 [i_6]))))));
                        var_28 = ((/* implicit */_Bool) max((var_28), (((/* implicit */_Bool) arr_11 [i_6] [i_6]))));
                    }
                } 
            } 
        }
        for (short i_8 = 0; i_8 < 18; i_8 += 2) /* same iter space */
        {
            var_29 = min((549755813887ULL), ((((_Bool)0) ? (6703973585165900818ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)132))))));
            var_30 = ((/* implicit */short) var_14);
        }
        var_31 *= ((/* implicit */short) (-(((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_0] [i_0] [i_0] [i_0]))) : (max((var_6), (((/* implicit */unsigned int) (signed char)-97))))))));
        arr_30 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0])) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_0] [i_0])))))) ? (max((((/* implicit */long long int) arr_5 [i_0] [i_0] [i_0])), (8236069663135044893LL))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_7))))));
    }
    var_32 = ((/* implicit */unsigned short) ((long long int) (-9223372036854775807LL - 1LL)));
    var_33 &= min((min((((/* implicit */long long int) var_3)), ((+(9223372036854775807LL))))), (var_8));
}
