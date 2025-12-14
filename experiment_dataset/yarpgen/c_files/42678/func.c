/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42678
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42678 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42678
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
    for (signed char i_0 = 1; i_0 < 14; i_0 += 3) 
    {
        arr_2 [i_0] = ((max(((~(6225902071197266062ULL))), (((/* implicit */unsigned long long int) var_9)))) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) | (var_7)))) ? (((/* implicit */int) (signed char)95)) : (((/* implicit */int) (signed char)118))))));
        var_12 = ((/* implicit */signed char) (!(((/* implicit */_Bool) 18446744073709551615ULL))));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_0))));
        var_13 = ((/* implicit */signed char) max((((((/* implicit */_Bool) var_1)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) var_6)))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            var_14 *= ((/* implicit */signed char) (-(((/* implicit */int) var_9))));
            var_15 -= ((/* implicit */unsigned long long int) ((((((/* implicit */int) (signed char)-126)) + (2147483647))) >> (((((/* implicit */int) var_11)) + (64)))));
        }
        /* vectorizable */
        for (signed char i_2 = 0; i_2 < 15; i_2 += 1) 
        {
            /* LoopSeq 2 */
            for (signed char i_3 = 0; i_3 < 15; i_3 += 4) /* same iter space */
            {
                arr_11 [i_0] [i_0] [i_3] = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_10))));
                arr_12 [i_0] [i_2] [i_3] &= ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-116))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (3029382355854361639ULL));
            }
            for (signed char i_4 = 0; i_4 < 15; i_4 += 4) /* same iter space */
            {
                var_16 ^= (signed char)-107;
                var_17 = ((/* implicit */signed char) var_5);
            }
            arr_16 [i_0] [i_2] [i_0] = var_6;
            arr_17 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (signed char)-104))))) : (var_7)));
        }
    }
    for (signed char i_5 = 0; i_5 < 16; i_5 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_6 = 4; i_6 < 15; i_6 += 3) 
        {
            /* LoopSeq 3 */
            for (signed char i_7 = 1; i_7 < 13; i_7 += 3) /* same iter space */
            {
                var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)22)) ? (max(((+(((/* implicit */int) var_9)))), (((/* implicit */int) (signed char)-1)))) : (((/* implicit */int) (signed char)103)))))));
                var_19 += (+(16205695128619878538ULL));
                var_20 ^= ((/* implicit */signed char) ((((((/* implicit */_Bool) 13231836806722944895ULL)) ? (8051962257532579574ULL) : (2910744203499110299ULL))) << ((((~(((/* implicit */int) (signed char)26)))) + (69)))));
            }
            for (signed char i_8 = 1; i_8 < 13; i_8 += 3) /* same iter space */
            {
                arr_29 [i_5] [i_6] [i_6] [i_5] = max((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_9))))), (max((((/* implicit */unsigned long long int) (signed char)108)), (((((/* implicit */_Bool) (signed char)-109)) ? (2241048945089673103ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-105))))))));
                var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) (-(((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)127))))) ? ((+(((/* implicit */int) (signed char)8)))) : ((-(((/* implicit */int) (signed char)112)))))))))));
            }
            /* vectorizable */
            for (unsigned long long int i_9 = 0; i_9 < 16; i_9 += 3) 
            {
                arr_32 [i_5] [(signed char)2] [i_6] = var_8;
                arr_33 [i_6] = ((/* implicit */signed char) (+(((/* implicit */int) (signed char)124))));
            }
            var_22 &= ((/* implicit */signed char) var_1);
            var_23 = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_0)) : (((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) (signed char)117)) : (((/* implicit */int) var_0))))))));
        }
        var_24 += (~(max((((/* implicit */unsigned long long int) var_11)), (2047105918949500429ULL))));
    }
    var_25 = ((/* implicit */unsigned long long int) var_9);
    var_26 = ((/* implicit */signed char) max((var_26), (var_8)));
    var_27 = ((/* implicit */signed char) max((((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_4)))))))), (((((/* implicit */int) var_4)) * (((/* implicit */int) var_9))))));
}
