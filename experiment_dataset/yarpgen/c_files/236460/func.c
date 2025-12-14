/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236460
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236460 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236460
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 2) /* same iter space */
    {
        var_11 = ((/* implicit */unsigned char) max((var_11), (((/* implicit */unsigned char) 4294967295U))));
        var_12 = ((/* implicit */unsigned short) min((var_12), (((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (short)4719))) == (22U))))));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 2) /* same iter space */
    {
        /* LoopSeq 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_13 = ((/* implicit */unsigned long long int) ((unsigned char) (_Bool)1));
            var_14 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)239)) ? (((/* implicit */int) (unsigned short)17907)) : (((/* implicit */int) arr_1 [i_2]))));
            arr_8 [i_1] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) > (3164967028U)));
        }
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) var_7))));
            arr_11 [i_3] = ((/* implicit */unsigned long long int) arr_10 [i_3]);
            var_16 = ((/* implicit */int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)37864))) : (((var_5) / (2802544590U)))));
            arr_12 [i_3] [i_3] [i_3] = ((/* implicit */unsigned char) ((arr_5 [i_1] [(_Bool)1]) ? (((/* implicit */int) (signed char)79)) : (((/* implicit */int) (unsigned short)16383))));
            /* LoopSeq 1 */
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                var_17 = ((/* implicit */short) ((unsigned short) ((((/* implicit */_Bool) 3783420666U)) ? (((/* implicit */long long int) var_5)) : (var_1))));
                arr_15 [i_3] [i_3] [i_4] = ((/* implicit */unsigned int) arr_2 [i_1] [i_1]);
                var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */int) var_8)) * (((/* implicit */int) (signed char)-105)))) : (((((/* implicit */int) (_Bool)1)) << (((/* implicit */int) (_Bool)1))))));
            }
        }
        arr_16 [i_1] = ((/* implicit */_Bool) 0ULL);
    }
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
    {
        var_19 = ((/* implicit */unsigned int) var_3);
        arr_21 [i_5] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_17 [i_5])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_5]))) : (arr_17 [i_5]))) % (((/* implicit */unsigned int) ((/* implicit */int) var_8)))));
        var_20 = ((/* implicit */unsigned char) var_7);
        arr_22 [(unsigned short)18] |= ((/* implicit */signed char) (((((!(((/* implicit */_Bool) var_9)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (arr_18 [(unsigned char)16]))) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_5) == (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)16431)))))))));
        var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1671063575446083634LL)) ? (((((/* implicit */_Bool) 2235152230859579821ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (7135841381679545185ULL))) : (((/* implicit */unsigned long long int) ((arr_17 [i_5]) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)127))))))))) ? (((/* implicit */int) arr_19 [i_5])) : (((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)0)), (var_10))))));
    }
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
    {
        var_22 = ((/* implicit */unsigned char) max((3221225472U), (((/* implicit */unsigned int) (short)12100))));
        arr_26 [i_6] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_24 [i_6]))));
        var_23 = ((/* implicit */signed char) ((((((/* implicit */int) (unsigned short)49105)) & (((/* implicit */int) arr_19 [i_6])))) % (((/* implicit */int) ((arr_18 [6LL]) >= (((/* implicit */unsigned long long int) 1343979536)))))));
        var_24 += ((/* implicit */unsigned short) min((((int) arr_20 [(_Bool)1])), ((+(((((/* implicit */int) (_Bool)0)) % (((/* implicit */int) (unsigned char)82))))))));
    }
    var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) var_8))));
}
