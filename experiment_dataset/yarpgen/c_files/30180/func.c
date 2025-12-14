/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30180
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30180 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30180
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
    for (short i_0 = 0; i_0 < 23; i_0 += 4) /* same iter space */
    {
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_12 = ((/* implicit */unsigned char) max((var_12), (((/* implicit */unsigned char) ((((((arr_5 [i_1] [i_0] [i_0]) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1] [i_0]))))) - (((/* implicit */unsigned long long int) max((arr_2 [i_1]), (((/* implicit */int) arr_4 [i_0]))))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_1 [i_0]) || (arr_1 [i_0]))))))))));
            arr_7 [i_0] = ((/* implicit */unsigned char) ((((long long int) arr_2 [i_0])) < (((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_4 [i_0])) : (((/* implicit */int) arr_0 [i_0] [i_1])))) : (((-1893124450) / (((/* implicit */int) (unsigned char)27)))))))));
            arr_8 [18] [i_0] [i_1] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_0])) && (((/* implicit */_Bool) min((((/* implicit */unsigned int) (short)-7892)), (3147149721U))))))), (min((((arr_5 [i_0] [i_0] [(_Bool)1]) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0]))))), (((/* implicit */unsigned long long int) arr_2 [i_0]))))));
        }
        for (long long int i_2 = 0; i_2 < 23; i_2 += 1) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (signed char i_3 = 4; i_3 < 21; i_3 += 3) 
            {
                var_13 = ((/* implicit */_Bool) arr_6 [i_3 - 4]);
                var_14 -= ((/* implicit */short) ((((/* implicit */int) var_1)) == (((/* implicit */int) var_6))));
                arr_16 [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */int) (unsigned char)30)) << (((/* implicit */int) var_4)))));
                var_15 = ((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) arr_6 [i_2])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned char)27)))));
                arr_17 [i_0] [i_2] [(short)3] = ((/* implicit */unsigned short) var_6);
            }
            arr_18 [i_2] [20U] [i_2] = ((/* implicit */short) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) : (arr_5 [i_0] [i_0] [i_0])))))) ? (((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (arr_5 [i_0] [i_0] [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) <= (arr_15 [i_2] [i_2] [i_2])))))));
            arr_19 [i_2] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) | (arr_15 [i_2] [i_2] [11LL])));
        }
        var_16 -= ((/* implicit */short) var_5);
    }
    for (short i_4 = 0; i_4 < 23; i_4 += 4) /* same iter space */
    {
        var_17 *= ((/* implicit */int) ((((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) * (arr_14 [i_4] [i_4])))) >= (min((arr_10 [i_4] [i_4]), (((/* implicit */unsigned long long int) arr_0 [i_4] [i_4])))))) && (((((((/* implicit */_Bool) 30)) && (((/* implicit */_Bool) arr_3 [14U] [i_4])))) && (((/* implicit */_Bool) ((arr_1 [i_4]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)52))) : (arr_5 [i_4] [(signed char)5] [i_4]))))))));
        /* LoopNest 2 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            for (short i_6 = 4; i_6 < 22; i_6 += 3) 
            {
                {
                    var_18 *= ((/* implicit */long long int) max(((!(((((/* implicit */_Bool) arr_21 [i_6])) && (((/* implicit */_Bool) -2147483642)))))), ((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_4] [i_4] [i_4])) ? (((/* implicit */int) arr_1 [i_4])) : (((/* implicit */int) var_0)))))))));
                    var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) arr_5 [i_4] [i_5] [3U]))));
                    arr_28 [i_5] [i_4] [i_5] = ((/* implicit */unsigned short) arr_5 [i_4] [(_Bool)1] [i_6 - 3]);
                    arr_29 [i_4] [i_5] [i_5] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_3))))), (((((/* implicit */unsigned long long int) arr_13 [i_5] [i_6 - 1] [i_6] [i_5])) + (arr_15 [i_5] [i_4] [i_5])))));
                }
            } 
        } 
    }
    var_20 = ((/* implicit */short) ((var_0) || (var_1)));
}
