/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205957
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205957 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205957
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
    for (signed char i_0 = 3; i_0 < 12; i_0 += 2) 
    {
        var_15 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */int) arr_0 [i_0])) <= (((/* implicit */int) var_14))))))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            var_16 -= ((/* implicit */signed char) arr_2 [i_0]);
            /* LoopSeq 1 */
            for (long long int i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                /* LoopSeq 3 */
                for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 2) 
                {
                    var_17 = ((/* implicit */unsigned long long int) (-(((((/* implicit */int) var_12)) | (((/* implicit */int) var_4))))));
                    var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_7 [i_2] [i_2] [i_0] [i_0 - 1] [i_0 + 3] [i_0])))))));
                    var_19 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (unsigned short)0)) ? (-3663522958369700767LL) : (3663522958369700766LL))) > (((/* implicit */long long int) ((/* implicit */int) var_0)))));
                    var_20 *= arr_3 [i_0] [i_1];
                }
                for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 1) 
                {
                    var_21 = ((/* implicit */unsigned long long int) (~(((((/* implicit */int) var_5)) ^ (((/* implicit */int) arr_3 [i_0 + 1] [i_0 + 2]))))));
                    var_22 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_3))) < (arr_1 [i_0] [i_0]))))));
                }
                for (long long int i_5 = 0; i_5 < 16; i_5 += 2) 
                {
                    var_23 = ((/* implicit */unsigned char) (((~(((/* implicit */int) arr_0 [i_0 - 2])))) <= (((/* implicit */int) ((unsigned char) var_9)))));
                    var_24 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)68)) << (((((/* implicit */int) (unsigned char)187)) - (169))))))));
                }
                var_25 = ((/* implicit */signed char) var_1);
                /* LoopSeq 3 */
                for (signed char i_6 = 3; i_6 < 15; i_6 += 3) 
                {
                    /* LoopSeq 2 */
                    for (signed char i_7 = 2; i_7 < 14; i_7 += 4) 
                    {
                        var_26 &= ((/* implicit */signed char) var_2);
                        var_27 = ((/* implicit */unsigned short) (-((-((-(arr_4 [i_2] [i_1] [i_2])))))));
                        var_28 = ((/* implicit */signed char) ((unsigned char) arr_13 [i_0] [i_0] [i_0 - 2] [i_0]));
                    }
                    for (unsigned long long int i_8 = 0; i_8 < 16; i_8 += 3) 
                    {
                        arr_23 [i_0] = ((/* implicit */unsigned char) arr_10 [i_1] [i_2] [i_0]);
                        var_29 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) <= (((/* implicit */int) var_14))));
                        var_30 = ((/* implicit */unsigned long long int) var_11);
                    }
                    var_31 = ((/* implicit */signed char) ((unsigned char) 9223372036854775796LL));
                    var_32 = ((long long int) ((signed char) var_10));
                    var_33 = ((/* implicit */long long int) arr_14 [i_0] [i_0]);
                    arr_24 [i_0] [i_0] = ((/* implicit */unsigned char) ((signed char) arr_13 [i_0] [i_1] [6ULL] [i_1]));
                }
                for (signed char i_9 = 0; i_9 < 16; i_9 += 1) 
                {
                    var_34 |= ((/* implicit */unsigned short) ((arr_17 [i_0] [i_1] [5LL] [i_9] [i_0 + 4]) << (((((/* implicit */int) var_14)) - (49753)))));
                    var_35 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_11))))));
                }
                for (long long int i_10 = 0; i_10 < 16; i_10 += 2) 
                {
                    var_36 = ((/* implicit */signed char) (~(var_1)));
                    var_37 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_30 [i_0] [(unsigned char)14] [i_2])))))));
                    var_38 = var_7;
                    var_39 = ((/* implicit */long long int) var_2);
                    var_40 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) var_13)) <= (((unsigned long long int) (+(arr_8 [i_0] [(signed char)1]))))));
                }
            }
            var_41 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(var_13)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -3663522958369700781LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0 + 1] [i_0 + 2]))) : (3663522958369700766LL)))) : (((arr_9 [i_0 - 1] [i_0] [i_0 + 3] [i_0 + 3] [i_0]) * (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_3)))))))));
        }
        var_42 = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_29 [i_0 + 3] [i_0 + 2] [i_0] [i_0] [1LL] [i_0])) : (((/* implicit */int) var_11))))));
        var_43 += ((/* implicit */unsigned long long int) arr_2 [i_0 - 3]);
    }
    var_44 = ((/* implicit */unsigned short) var_5);
}
