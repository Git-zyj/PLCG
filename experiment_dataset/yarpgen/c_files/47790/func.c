/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47790
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47790 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47790
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
    for (signed char i_0 = 1; i_0 < 17; i_0 += 2) 
    {
        var_17 ^= ((/* implicit */unsigned long long int) var_2);
        var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) (signed char)-121))));
        var_19 *= ((/* implicit */unsigned int) ((((/* implicit */int) var_13)) <= (((((/* implicit */_Bool) (signed char)-17)) ? (((arr_0 [i_0]) - (((/* implicit */int) (signed char)120)))) : (((/* implicit */int) var_4))))));
        /* LoopSeq 4 */
        /* vectorizable */
        for (unsigned char i_1 = 1; i_1 < 19; i_1 += 2) /* same iter space */
        {
            var_20 = ((/* implicit */short) var_2);
            var_21 = ((/* implicit */short) arr_1 [i_0]);
            arr_4 [i_1] = ((/* implicit */signed char) var_16);
            var_22 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */unsigned int) 180541367)) <= (var_0)))) - (((/* implicit */int) (signed char)77))));
        }
        for (unsigned char i_2 = 1; i_2 < 19; i_2 += 2) /* same iter space */
        {
            var_23 = ((/* implicit */unsigned int) var_11);
            arr_8 [i_0 + 3] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (signed char)81)), (max((arr_3 [i_0 + 1] [i_0 + 1]), (((/* implicit */unsigned long long int) var_9))))));
            var_24 = ((/* implicit */short) var_3);
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 20; i_3 += 2) 
            {
                for (unsigned short i_4 = 0; i_4 < 20; i_4 += 3) 
                {
                    {
                        var_25 = max((((((/* implicit */_Bool) var_16)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) max((14680064), (2006770624)))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (signed char)-77)) : (max((((/* implicit */int) arr_1 [i_0 + 1])), (var_10)))))));
                        arr_17 [i_4] [i_2] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) arr_10 [i_2 + 1] [i_0 + 1] [i_3]))) ? (((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0 + 3])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)67))))))) : ((((+(((/* implicit */int) (unsigned char)255)))) & (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (_Bool)1)) : (arr_16 [i_0] [i_4] [i_3] [i_3])))))));
                    }
                } 
            } 
        }
        for (unsigned char i_5 = 1; i_5 < 19; i_5 += 2) /* same iter space */
        {
            var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_13 [i_0] [i_0] [i_0] [i_5]), (((/* implicit */unsigned long long int) var_9))))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_12)) : (arr_11 [i_5] [i_5] [i_0]))) : (((((/* implicit */int) arr_10 [i_0] [i_5 + 1] [i_0])) >> (((((/* implicit */int) var_13)) - (162)))))))) ? ((~(((/* implicit */int) max(((unsigned short)6647), (((/* implicit */unsigned short) (signed char)3))))))) : (((((/* implicit */_Bool) max((((/* implicit */long long int) (signed char)120)), (4333419724973939319LL)))) ? (max((((/* implicit */int) arr_5 [i_0] [i_0] [i_5 + 1])), (arr_14 [i_0] [i_0] [i_0] [i_0]))) : (max((arr_16 [i_0] [i_5] [i_0] [i_0 + 1]), (((/* implicit */int) var_14))))))));
            arr_20 [i_0] [i_5] [i_5] = ((/* implicit */unsigned long long int) max((((((/* implicit */int) arr_2 [i_0])) % (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) var_13))));
            var_27 = ((/* implicit */unsigned long long int) min((var_27), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-102)) | (((/* implicit */int) max((var_2), (((/* implicit */signed char) arr_2 [i_0])))))))) ? (max((((/* implicit */unsigned int) max((var_15), (((/* implicit */int) (signed char)58))))), (((((/* implicit */unsigned int) ((/* implicit */int) var_13))) + (arr_6 [i_0] [i_0] [i_0]))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_13 [i_0] [i_0 - 1] [i_0] [(unsigned short)2])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_18 [i_0 - 1] [i_0] [(unsigned short)8]))))))))));
        }
        for (signed char i_6 = 0; i_6 < 20; i_6 += 3) 
        {
            arr_25 [i_6] [i_6] [i_6] = ((/* implicit */_Bool) var_6);
            arr_26 [i_6] [i_6] [i_6] = ((/* implicit */int) max(((~(max((((/* implicit */unsigned int) arr_12 [i_0 - 1] [i_0 - 1] [i_0] [i_0 - 1])), (var_5))))), (((/* implicit */unsigned int) var_4))));
        }
        var_28 = ((/* implicit */long long int) max((var_28), (((/* implicit */long long int) arr_11 [i_0] [i_0] [i_0]))));
    }
    /* LoopNest 2 */
    for (unsigned char i_7 = 2; i_7 < 12; i_7 += 2) 
    {
        for (signed char i_8 = 0; i_8 < 13; i_8 += 1) 
        {
            {
                var_29 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_27 [i_7] [i_7])) ? (((/* implicit */int) ((unsigned short) arr_22 [i_7 + 1] [i_7] [i_7 + 1]))) : (((/* implicit */int) var_9))));
                arr_31 [(unsigned short)10] = ((/* implicit */long long int) max((((((/* implicit */int) arr_15 [i_7 - 1] [i_7 - 1] [i_7 + 1] [i_7] [15LL] [i_7 + 1])) | (((/* implicit */int) arr_22 [i_7 - 2] [i_7 - 2] [i_7])))), (((((((/* implicit */int) arr_27 [i_7 - 2] [i_7 - 2])) + (2147483647))) >> (((/* implicit */int) (unsigned char)0))))));
            }
        } 
    } 
}
