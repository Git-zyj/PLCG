/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224352
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224352 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224352
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
    var_13 = ((/* implicit */unsigned short) var_8);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 4; i_0 < 20; i_0 += 3) 
    {
        /* LoopSeq 4 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_14 = ((/* implicit */signed char) var_12);
            arr_7 [i_1] = ((/* implicit */unsigned char) ((signed char) (unsigned short)45972));
            var_15 = ((/* implicit */_Bool) (+(var_9)));
            var_16 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)109)) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) var_5))))) ? (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) arr_6 [i_0] [i_0] [i_0]))))) : ((~(arr_4 [i_0] [i_0] [i_1])))));
        }
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
        {
            arr_10 [(signed char)7] [i_2] [i_2] = ((/* implicit */_Bool) arr_8 [i_0] [i_2]);
            arr_11 [i_2] = ((/* implicit */long long int) (((!(((/* implicit */_Bool) var_2)))) || (((/* implicit */_Bool) ((short) 409811526U)))));
            var_17 = ((/* implicit */long long int) ((unsigned char) var_3));
            arr_12 [i_2] [i_2] [i_0] = ((/* implicit */short) ((((/* implicit */int) var_6)) - (((/* implicit */int) (unsigned short)1370))));
            var_18 = ((/* implicit */short) ((((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : ((-9223372036854775807LL - 1LL)))) + (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_2] [i_2])))));
        }
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
        {
            var_19 = ((/* implicit */_Bool) min((var_19), (((3885155765U) != (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_0 - 3] [i_0 + 2] [i_0 + 2])))))));
            arr_16 [i_0] [i_0] [i_3] = ((/* implicit */unsigned char) 409811526U);
            arr_17 [i_3] = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) >= (((/* implicit */int) (_Bool)1))));
            arr_18 [i_3] [(unsigned short)11] = ((/* implicit */_Bool) arr_15 [i_0]);
            var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(arr_1 [i_3])))) ? (((((/* implicit */_Bool) var_10)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) : (var_10)));
        }
        for (unsigned char i_4 = 0; i_4 < 23; i_4 += 3) 
        {
            /* LoopSeq 1 */
            for (signed char i_5 = 2; i_5 < 21; i_5 += 2) 
            {
                var_21 ^= ((/* implicit */long long int) ((((/* implicit */int) arr_8 [i_5 + 2] [i_5])) << (((((/* implicit */int) arr_8 [i_5 + 1] [i_5])) - (12911)))));
                /* LoopSeq 3 */
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    var_22 = ((/* implicit */unsigned short) arr_4 [i_6] [i_4] [i_5]);
                    var_23 = ((/* implicit */short) (_Bool)1);
                }
                for (long long int i_7 = 2; i_7 < 20; i_7 += 3) 
                {
                    var_24 ^= ((/* implicit */unsigned char) (-(((/* implicit */int) (!((_Bool)1))))));
                    arr_30 [i_7] [i_5] [i_4] [i_7] [i_4] [i_0 - 1] = ((/* implicit */int) (signed char)-63);
                    var_25 = ((/* implicit */unsigned short) var_4);
                    arr_31 [i_4] = ((/* implicit */_Bool) (+(((/* implicit */int) var_5))));
                }
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    var_26 = (-(((((/* implicit */int) (short)32765)) << (((((/* implicit */int) (signed char)122)) - (114))))));
                    var_27 = (i_4 % 2 == zero) ? ((~(((3678585460U) << (((((/* implicit */int) arr_19 [i_4] [i_4] [(unsigned short)16])) - (17053))))))) : ((~(((3678585460U) << (((((((/* implicit */int) arr_19 [i_4] [i_4] [(unsigned short)16])) - (17053))) - (23714)))))));
                    var_28 = ((/* implicit */short) min((var_28), (((/* implicit */short) arr_21 [i_8] [i_8] [i_8]))));
                }
                var_29 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_4])) ? (((/* implicit */int) arr_6 [i_5 - 2] [i_5 + 1] [i_5 - 2])) : (((/* implicit */int) arr_19 [i_4] [i_4] [i_4]))));
            }
            var_30 = ((/* implicit */short) var_2);
            arr_34 [i_4] [i_4] [(_Bool)1] = ((((/* implicit */_Bool) arr_4 [i_0 + 2] [i_0 + 3] [i_0 + 2])) ? (arr_4 [i_0 - 3] [i_4] [i_4]) : (((/* implicit */long long int) ((/* implicit */int) var_3))));
            var_31 = ((/* implicit */signed char) arr_23 [i_0] [i_0]);
            arr_35 [i_4] [i_4] [i_4] = (i_4 % 2 == 0) ? (((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_4]))) > (((var_10) << (((((arr_32 [i_4] [i_4]) + (5479469719339835035LL))) - (50LL)))))))) : (((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_4]))) > (((var_10) << (((((((arr_32 [i_4] [i_4]) + (5479469719339835035LL))) - (50LL))) - (2192419050789645917LL))))))));
        }
        arr_36 [i_0] [i_0 + 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_19 [(unsigned char)6] [i_0 - 4] [i_0 + 3])) ? (((/* implicit */int) arr_19 [(unsigned char)4] [i_0 - 4] [i_0 - 3])) : (((/* implicit */int) arr_19 [22ULL] [i_0 - 3] [i_0 + 2]))));
    }
    var_32 = ((/* implicit */unsigned int) (~(var_10)));
    var_33 = ((/* implicit */_Bool) ((var_0) ? (var_10) : (var_12)));
}
