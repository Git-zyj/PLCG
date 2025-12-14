/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42458
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42458 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42458
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
    for (short i_0 = 2; i_0 < 11; i_0 += 2) 
    {
        var_13 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) 2147483647))) ? (var_5) : (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_11))))))) ? ((~(((((/* implicit */_Bool) arr_2 [i_0 + 1])) ? (arr_0 [i_0 + 1] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)15785))))))) : (((/* implicit */unsigned long long int) arr_1 [(short)3]))));
        /* LoopSeq 3 */
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            var_14 -= ((/* implicit */short) ((((unsigned long long int) arr_0 [i_1] [i_0])) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_0] [9ULL])))));
            /* LoopSeq 3 */
            for (short i_2 = 1; i_2 < 8; i_2 += 2) 
            {
                arr_8 [i_1] [i_2] = ((/* implicit */int) (~(((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_6 [i_2])) : (2147483647)))) / (arr_0 [i_0 - 2] [i_2 + 2])))));
                arr_9 [i_2] [i_1] [i_0 + 1] [i_0 + 1] |= ((/* implicit */unsigned short) var_7);
            }
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                arr_12 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) arr_5 [i_0]);
                var_15 = (short)32748;
                var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) var_5)) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)4715))) % (arr_0 [i_0 - 1] [(short)7]))))))));
                var_17 = ((/* implicit */signed char) min((((unsigned char) max((((/* implicit */long long int) var_5)), (var_2)))), (((/* implicit */unsigned char) var_6))));
                var_18 = ((/* implicit */_Bool) (-(min((((unsigned long long int) 1097501894)), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_3 [i_3] [(short)4] [i_0 - 2])) >> (((((/* implicit */int) var_0)) - (25226))))))))));
            }
            for (unsigned long long int i_4 = 1; i_4 < 10; i_4 += 1) 
            {
                var_19 = ((/* implicit */short) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((short) var_8))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0 + 1])) ? (((/* implicit */int) var_0)) : (2147483647))))))), (min((((/* implicit */unsigned int) arr_6 [i_0 - 2])), ((+(2059056051U)))))));
                var_20 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) ((((/* implicit */int) (signed char)16)) + (((/* implicit */int) var_4))))))) ? (((unsigned long long int) ((((/* implicit */int) var_0)) > (-1852926319)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_4] [i_4] [i_4 + 2])))));
            }
        }
        for (unsigned short i_5 = 0; i_5 < 12; i_5 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned char i_6 = 1; i_6 < 11; i_6 += 1) 
            {
                for (unsigned short i_7 = 0; i_7 < 12; i_7 += 3) 
                {
                    {
                        var_21 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_15 [i_0] [i_0] [i_6] [i_7]))));
                        arr_26 [i_0 - 2] [i_0 - 2] [i_6] [i_7] [i_7] = ((/* implicit */_Bool) ((((((/* implicit */int) var_8)) / (((/* implicit */int) arr_21 [i_0 - 1] [i_6 + 1] [(signed char)6] [i_7])))) | (((/* implicit */int) ((((/* implicit */int) var_8)) <= (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)16))))))))));
                    }
                } 
            } 
            var_22 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_3 [i_0] [i_0] [i_0])) - (((/* implicit */int) (unsigned short)30986))));
        }
        for (unsigned long long int i_8 = 4; i_8 < 11; i_8 += 1) 
        {
            var_23 &= ((/* implicit */short) arr_28 [i_8 - 3] [i_8 + 1]);
            arr_31 [i_8] = ((/* implicit */unsigned long long int) (signed char)26);
        }
    }
    var_24 |= ((/* implicit */int) (((_Bool)0) ? ((+(min((2235911241U), (((/* implicit */unsigned int) var_4)))))) : (((/* implicit */unsigned int) min((((/* implicit */int) var_0)), (var_5))))));
    var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */long long int) max((((/* implicit */unsigned int) var_0)), (1048320U)))), (max((((/* implicit */long long int) var_8)), (var_2)))))) ? (((/* implicit */int) max((min(((short)14445), (var_0))), (((/* implicit */short) ((signed char) var_5)))))) : (((/* implicit */int) var_8))));
}
