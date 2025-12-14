/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200000
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200000 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200000
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
    var_12 = ((/* implicit */signed char) var_5);
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned short i_0 = 1; i_0 < 19; i_0 += 4) 
    {
        /* LoopSeq 3 */
        for (unsigned int i_1 = 2; i_1 < 19; i_1 += 1) 
        {
            arr_7 [i_0] [i_0] [i_0] = var_4;
            /* LoopNest 2 */
            for (int i_2 = 2; i_2 < 19; i_2 += 3) 
            {
                for (unsigned short i_3 = 0; i_3 < 21; i_3 += 1) 
                {
                    {
                        arr_14 [(unsigned char)9] [(unsigned char)10] [i_0] [i_2 + 2] [i_2] [i_3] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_2 [i_0]))));
                        arr_15 [i_0] [i_2 + 2] [i_1 + 1] [i_1] [i_0] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_11 [i_2 + 1] [i_0]))));
                        arr_16 [i_0] [(unsigned char)20] [i_0] = ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (arr_5 [i_2] [i_2] [i_2 - 1]));
                    }
                } 
            } 
        }
        for (long long int i_4 = 0; i_4 < 21; i_4 += 4) 
        {
            arr_21 [i_0] = ((/* implicit */short) var_6);
            var_13 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_5 [i_0 + 2] [i_0] [i_4])) ? (((/* implicit */int) (unsigned char)68)) : ((+(((/* implicit */int) var_0))))));
        }
        for (long long int i_5 = 0; i_5 < 21; i_5 += 1) 
        {
            var_14 += ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_1 [i_0 + 1] [i_0])) : (((/* implicit */int) var_11)))));
            arr_24 [(unsigned char)16] [i_5] [i_0] = ((unsigned short) var_8);
        }
        arr_25 [i_0] = ((/* implicit */short) ((((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (4434477123288127942LL))) << (((((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_0] [i_0]))) : (0ULL))) - (29ULL)))));
    }
    for (unsigned char i_6 = 2; i_6 < 21; i_6 += 4) 
    {
        arr_28 [i_6] = ((/* implicit */int) ((((/* implicit */long long int) (-(((/* implicit */int) arr_26 [i_6 + 1]))))) < ((+(-7220794601433574000LL)))));
        var_15 = ((/* implicit */short) (+(((((/* implicit */_Bool) var_1)) ? (8778913153024ULL) : (((/* implicit */unsigned long long int) ((unsigned int) 7220794601433573997LL)))))));
        var_16 = ((/* implicit */int) ((long long int) (~(((((/* implicit */_Bool) 13979152567100368290ULL)) ? (((/* implicit */int) arr_27 [i_6] [(signed char)15])) : (((/* implicit */int) (_Bool)1)))))));
    }
    for (short i_7 = 0; i_7 < 14; i_7 += 1) 
    {
        var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) (+(((/* implicit */int) arr_23 [18U] [i_7] [10ULL]))))) % (((((/* implicit */_Bool) 4434477123288127942LL)) ? (arr_18 [(unsigned char)10]) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))))) ? (9223372036854775797LL) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_7] [i_7])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_1))))))))))))));
        arr_31 [i_7] = arr_13 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7];
        arr_32 [10ULL] [i_7] = ((/* implicit */long long int) (-(((/* implicit */int) var_4))));
    }
    /* vectorizable */
    for (unsigned char i_8 = 2; i_8 < 17; i_8 += 2) 
    {
        var_18 += ((((((/* implicit */_Bool) 7220794601433574000LL)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_20 [i_8] [i_8 - 2] [i_8])))) > (((/* implicit */int) var_8)));
        arr_35 [i_8 - 1] = ((/* implicit */unsigned int) ((long long int) ((((/* implicit */int) arr_9 [8] [14LL] [i_8])) >= (((/* implicit */int) (_Bool)1)))));
    }
    var_19 ^= ((/* implicit */short) ((((int) ((unsigned char) var_6))) > (((/* implicit */int) var_11))));
    var_20 = ((/* implicit */unsigned int) ((_Bool) var_1));
    var_21 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((min((29ULL), (((/* implicit */unsigned long long int) var_3)))) > (var_5)))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_3))))) ? (var_7) : (((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1)))))))));
}
