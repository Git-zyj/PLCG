/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238926
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238926 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238926
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
    var_18 = ((/* implicit */unsigned char) ((((unsigned long long int) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) var_3))))) * (((/* implicit */unsigned long long int) ((((/* implicit */int) var_6)) >> (((((/* implicit */int) var_13)) - (68))))))));
    var_19 = ((/* implicit */int) var_11);
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            /* LoopSeq 2 */
            /* vectorizable */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)29542))) & (arr_3 [i_0]))))));
                var_21 = ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */_Bool) (short)-29549)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-29542))) : (arr_0 [i_2]))));
            }
            for (signed char i_3 = 0; i_3 < 20; i_3 += 2) 
            {
                var_22 *= ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)29540)) ? (((/* implicit */int) arr_5 [(_Bool)1] [i_1] [i_0])) : (((/* implicit */int) arr_1 [i_0] [i_1]))))) ? (((((/* implicit */_Bool) (short)29541)) ? (((/* implicit */int) (short)29549)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) != (var_5))))))));
                arr_11 [i_1] [i_1] [i_1] = ((/* implicit */_Bool) (short)-1);
            }
            arr_12 [i_1] = ((/* implicit */short) ((max((((var_16) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0] [i_0] [i_1] [i_1]))))), (((((/* implicit */_Bool) var_10)) || (var_4))))) ? (((((/* implicit */_Bool) 13035510708439184791ULL)) ? (((((/* implicit */unsigned long long int) 1767107188892652858LL)) ^ (arr_3 [i_0]))) : (((((/* implicit */_Bool) arr_4 [i_1])) ? (18446744073709551601ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))))) : (((/* implicit */unsigned long long int) (-(((var_12) - (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_1] [i_1]))))))))));
        }
        arr_13 [(_Bool)1] [(_Bool)1] = 1509844681;
        /* LoopSeq 2 */
        for (short i_4 = 4; i_4 < 19; i_4 += 1) 
        {
            var_23 = ((/* implicit */short) ((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_7 [i_4 - 3] [i_0])) : (1509844696))) + (((/* implicit */int) ((((/* implicit */_Bool) (short)29541)) && (((/* implicit */_Bool) (short)29549)))))));
            var_24 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_7 [i_4 - 4] [i_0])) : (((/* implicit */int) arr_7 [i_4 - 2] [i_0]))))) ? (((/* implicit */int) (_Bool)1)) : ((-(((/* implicit */int) (short)-29559)))));
            var_25 = arr_8 [i_0] [16];
            var_26 += ((/* implicit */int) (((_Bool)0) ? (arr_8 [i_0] [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_4 - 4])))));
        }
        for (int i_5 = 3; i_5 < 19; i_5 += 2) 
        {
            var_27 = arr_14 [i_0];
            arr_20 [i_0] [i_5] = ((/* implicit */short) min((((((/* implicit */_Bool) (signed char)-100)) ? (arr_8 [i_0] [i_0]) : (arr_8 [i_0] [i_5 - 2]))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_8 [i_0] [i_5 - 3])))))));
            /* LoopNest 2 */
            for (unsigned long long int i_6 = 1; i_6 < 19; i_6 += 1) 
            {
                for (unsigned char i_7 = 0; i_7 < 20; i_7 += 4) 
                {
                    {
                        var_28 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((int) 2710374121U))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((arr_18 [i_6] [i_7]), (((/* implicit */long long int) var_0))))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_0])) ? (-7685313104908907675LL) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_4 [i_5])))) : (arr_21 [i_5 - 3] [i_7] [i_5 - 3])))));
                        arr_26 [i_5] [i_6] [i_5] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_5 [i_6] [i_6 + 1] [i_5]))));
                    }
                } 
            } 
            var_29 -= ((/* implicit */_Bool) ((((((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (_Bool)0)))) << (((((arr_21 [i_5] [i_0] [i_0]) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))) - (12702177789908842050ULL))))) >> (((((/* implicit */int) var_10)) - (2677)))));
        }
        var_30 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) var_1)) : (((((/* implicit */_Bool) arr_25 [i_0] [i_0] [5U])) ? (1622840103) : (((/* implicit */int) (unsigned char)164))))));
    }
}
