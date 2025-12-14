/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219756
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219756 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219756
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
    var_15 -= ((/* implicit */long long int) var_6);
    var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-47))) | (var_8))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 1) /* same iter space */
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned long long int i_1 = 1; i_1 < 10; i_1 += 4) 
        {
            var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) var_3)) ^ (((/* implicit */int) var_10))))) ? (arr_2 [i_1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0])))))))))));
            var_18 = ((/* implicit */signed char) ((var_7) ^ (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */long long int) arr_0 [i_0])) : (7224043316339355144LL)))));
        }
        /* vectorizable */
        for (long long int i_2 = 2; i_2 < 8; i_2 += 1) 
        {
            var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) (((!(((/* implicit */_Bool) var_4)))) ? (arr_0 [i_2 + 3]) : (((/* implicit */int) (_Bool)0)))))));
            var_20 = (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_3 [(_Bool)1] [i_2] [i_2]))))));
            /* LoopSeq 1 */
            for (unsigned int i_3 = 0; i_3 < 11; i_3 += 3) 
            {
                /* LoopSeq 1 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    var_21 *= ((/* implicit */signed char) arr_2 [i_4] [i_2]);
                    var_22 = ((/* implicit */short) var_11);
                }
                var_23 = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_0 [i_3])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_9 [i_0] [i_0] [i_2] [i_3] [i_0])))) / (((/* implicit */int) arr_4 [i_2 + 2]))));
                var_24 = ((/* implicit */long long int) (!(((((/* implicit */int) var_5)) != (((/* implicit */int) arr_1 [i_2] [5U]))))));
            }
        }
        var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)108))) : (18078088107633192050ULL)))) ? (((/* implicit */int) (unsigned short)57344)) : (((/* implicit */int) (_Bool)1)))))));
    }
    for (unsigned short i_5 = 0; i_5 < 11; i_5 += 1) /* same iter space */
    {
        arr_12 [8LL] [8LL] |= ((/* implicit */unsigned char) (-(((/* implicit */int) max((arr_9 [i_5] [i_5] [i_5] [i_5] [i_5]), (arr_9 [i_5] [i_5] [i_5] [i_5] [i_5]))))));
        var_26 *= ((/* implicit */unsigned long long int) max(((-(((((/* implicit */_Bool) var_10)) ? (arr_2 [i_5] [i_5]) : (((/* implicit */long long int) ((/* implicit */int) (short)16352))))))), (((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_5]))) - (arr_2 [i_5] [i_5])))));
        var_27 = ((/* implicit */unsigned short) max(((-(((/* implicit */int) arr_11 [i_5])))), (((/* implicit */int) min((arr_11 [i_5]), (arr_11 [i_5]))))));
        var_28 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_4 [i_5])) ? (((/* implicit */int) arr_3 [i_5] [i_5] [i_5])) : (((/* implicit */int) arr_4 [i_5]))))));
    }
    var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_0)) ? ((~((~(((/* implicit */int) (short)-3)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))));
}
