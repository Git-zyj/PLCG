/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4672
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4672 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4672
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
    for (unsigned int i_0 = 3; i_0 < 7; i_0 += 2) 
    {
        var_14 += ((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? ((+(arr_2 [i_0] [(_Bool)0]))) : (((((/* implicit */_Bool) var_1)) ? (arr_2 [i_0] [0LL]) : (var_4)))))));
        /* LoopSeq 2 */
        for (unsigned char i_1 = 1; i_1 < 6; i_1 += 1) 
        {
            /* LoopSeq 1 */
            for (long long int i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                arr_11 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) (-(arr_4 [i_0 + 1] [i_1 + 2]))))));
                arr_12 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) var_10)) == (((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_0 - 3] [i_1] [i_2])) && (var_10))))));
                var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (~(1334290123270284098LL)))), (arr_7 [i_0] [i_0 - 1] [i_1] [i_1])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_0 - 3] [i_0 - 3])) ? (((/* implicit */int) arr_3 [i_0 - 2] [i_2])) : (((/* implicit */int) arr_3 [i_0 - 3] [i_2]))))) : (((((/* implicit */_Bool) ((unsigned char) arr_9 [(unsigned char)3] [i_1 + 1] [i_0]))) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_3 [i_0] [i_0 + 1]))))) : (var_12)))));
            }
            arr_13 [i_0] = ((/* implicit */unsigned long long int) (unsigned char)16);
            /* LoopSeq 4 */
            for (unsigned char i_3 = 1; i_3 < 8; i_3 += 1) /* same iter space */
            {
                arr_16 [i_0] [i_1] [i_1 + 4] = ((/* implicit */unsigned long long int) ((((var_5) >= (((/* implicit */long long int) ((/* implicit */int) arr_5 [(signed char)1] [2] [9]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_0 - 3] [i_0] [i_0 - 3]))))) : (((((/* implicit */_Bool) arr_5 [i_0 + 2] [i_0 + 2] [1LL])) ? (((/* implicit */int) arr_5 [i_3 + 2] [i_1] [9LL])) : (((/* implicit */int) var_2))))));
                var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) arr_0 [2LL]))));
                arr_17 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_15 [i_1] [i_1 + 4] [i_1 + 2] [i_1 + 1])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_15 [i_1] [i_1] [i_1 + 2] [i_1 + 1]))))) | (3339285526U)));
                var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */long long int) (!(((/* implicit */_Bool) (signed char)51))))), ((-(arr_6 [(_Bool)1] [i_3 + 2])))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_1 + 2] [i_1] [i_3])) ? (((/* implicit */int) arr_5 [i_1 + 2] [i_1 + 2] [i_0 + 1])) : (var_3)))) : (((((/* implicit */_Bool) arr_14 [i_0 + 2] [i_1 + 3] [i_1 + 1])) ? (arr_7 [i_1 - 1] [i_1 + 4] [i_1 + 2] [i_1 + 4]) : (((((/* implicit */_Bool) arr_14 [i_0] [i_1] [i_3])) ? (arr_9 [i_0 + 1] [(unsigned char)0] [(unsigned short)2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))))))))));
            }
            for (unsigned char i_4 = 1; i_4 < 8; i_4 += 1) /* same iter space */
            {
                var_18 *= ((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_4 + 1] [i_1 + 2] [i_1 + 2])) ? (((/* implicit */int) (unsigned char)57)) : (((/* implicit */int) arr_5 [i_4 + 2] [i_4] [i_4])))))));
                arr_21 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) 2484457027U)) ? (2540686207U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)57))))))) && (((/* implicit */_Bool) arr_18 [i_0 - 1]))));
            }
            for (unsigned char i_5 = 1; i_5 < 8; i_5 += 1) /* same iter space */
            {
                /* LoopSeq 1 */
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    var_19 = ((/* implicit */int) (((+(10ULL))) % (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_8 [i_0] [i_5 + 1] [i_5 + 1] [i_6])))))));
                    arr_29 [i_0] [i_0] [9] [i_0] [i_6] = ((/* implicit */unsigned short) (+((+(arr_2 [i_1] [i_0])))));
                    arr_30 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_2 [i_0 - 3] [i_0])) ? ((-(arr_9 [i_0] [i_0 - 3] [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [(unsigned char)5] [i_5 - 1] [0LL] [i_0])))));
                }
                arr_31 [i_0] [i_0 - 2] [i_0 - 2] [(short)8] = ((/* implicit */unsigned char) var_9);
                var_20 = ((/* implicit */_Bool) (~((((_Bool)1) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) : ((~(((/* implicit */int) arr_0 [i_0]))))))));
            }
            for (unsigned char i_7 = 1; i_7 < 8; i_7 += 1) /* same iter space */
            {
                var_21 = ((/* implicit */int) arr_7 [i_0] [i_1] [i_0] [i_7]);
                var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_5 [i_0] [i_0] [3LL]))))) && (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_0] [i_0 - 1] [i_7 + 2]))) | (var_11))))));
                arr_36 [i_0] [i_1] [i_0] = ((((/* implicit */_Bool) (-(var_11)))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_34 [i_7 + 1] [i_0 - 1])));
            }
            var_23 = ((/* implicit */_Bool) arr_35 [i_0]);
            var_24 = ((/* implicit */signed char) arr_4 [i_0] [i_0 + 1]);
        }
        for (unsigned int i_8 = 0; i_8 < 10; i_8 += 2) 
        {
            var_25 -= ((/* implicit */_Bool) var_4);
            var_26 = (i_0 % 2 == 0) ? (((/* implicit */signed char) (-(((((/* implicit */int) arr_35 [i_0])) >> (((((/* implicit */int) arr_35 [i_0])) - (114)))))))) : (((/* implicit */signed char) (-(((((/* implicit */int) arr_35 [i_0])) >> (((((((/* implicit */int) arr_35 [i_0])) - (114))) - (108))))))));
            var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_28 [i_0 + 3] [i_0 + 3] [i_0] [i_8] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_26 [0ULL] [i_8] [i_8] [i_8] [i_8] [i_8])))))) : (arr_1 [i_0])));
            var_28 = ((/* implicit */_Bool) max((var_28), (((/* implicit */_Bool) (~(((/* implicit */int) arr_15 [i_0] [i_0 - 3] [i_0] [i_8])))))));
        }
    }
    for (unsigned int i_9 = 2; i_9 < 16; i_9 += 1) 
    {
        arr_43 [i_9] = ((/* implicit */_Bool) arr_40 [14]);
        var_29 *= ((unsigned char) (((_Bool)1) ? (var_12) : (((/* implicit */long long int) (~(var_3))))));
    }
    var_30 &= ((/* implicit */unsigned short) var_10);
}
