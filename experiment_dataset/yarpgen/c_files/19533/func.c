/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19533
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19533 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19533
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
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        /* LoopSeq 3 */
        for (signed char i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            var_20 -= ((/* implicit */unsigned long long int) arr_1 [i_0]);
            /* LoopSeq 2 */
            for (unsigned long long int i_2 = 1; i_2 < 12; i_2 += 3) 
            {
                var_21 ^= ((/* implicit */_Bool) min((((((/* implicit */int) (unsigned short)27352)) >> (((1460049218022092606ULL) - (1460049218022092598ULL))))), (((((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_0]))))) ? (var_16) : ((+(((/* implicit */int) arr_4 [8ULL]))))))));
                var_22 = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */int) arr_3 [(_Bool)1] [i_2 - 1] [(_Bool)1])) / (((/* implicit */int) arr_3 [i_2] [i_2 - 1] [i_2])))));
                var_23 = ((/* implicit */int) (((!(((/* implicit */_Bool) -7811496208869832478LL)))) ? (((unsigned int) var_15)) : ((+(arr_2 [i_2] [(unsigned short)2])))));
            }
            /* vectorizable */
            for (unsigned char i_3 = 0; i_3 < 13; i_3 += 2) 
            {
                var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_11 [i_0] [i_1])) ? (7) : (((/* implicit */int) (!(((/* implicit */_Bool) var_18))))))))));
                var_25 *= ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_4 [i_3])) > (((/* implicit */int) ((unsigned short) 2497155751U)))));
                var_26 += ((/* implicit */unsigned short) arr_11 [i_0] [i_0]);
                var_27 += ((/* implicit */int) (unsigned char)255);
            }
            arr_13 [i_1] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) arr_11 [i_0] [i_1])) > (-9223372036854775793LL))))) <= (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_19)) ? (((/* implicit */long long int) -24040200)) : (6333101461118841722LL)))) ? (((/* implicit */unsigned long long int) ((8825682556484762052LL) >> (((((/* implicit */int) (short)-16840)) + (16858)))))) : (((var_11) + (var_6)))))));
            var_28 = ((/* implicit */unsigned short) min((var_28), (((/* implicit */unsigned short) ((((long long int) (unsigned char)0)) >= (((/* implicit */long long int) ((unsigned int) 4243259180U))))))));
        }
        for (short i_4 = 0; i_4 < 13; i_4 += 2) /* same iter space */
        {
            var_29 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((_Bool) arr_11 [i_0] [i_4]))), (((unsigned long long int) arr_7 [i_0] [i_0] [i_4] [i_4]))));
            /* LoopSeq 3 */
            for (int i_5 = 4; i_5 < 12; i_5 += 1) 
            {
                var_30 = ((/* implicit */int) arr_2 [5] [5]);
                /* LoopNest 2 */
                for (signed char i_6 = 3; i_6 < 10; i_6 += 4) 
                {
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        {
                            arr_25 [i_0] [i_0] [i_5] [i_0] [i_0] = ((/* implicit */short) var_5);
                            var_31 = ((/* implicit */signed char) min(((((_Bool)1) ? (((/* implicit */int) arr_6 [i_6 + 1] [i_5 - 3] [i_5 - 3] [i_6 - 3])) : (((/* implicit */int) arr_1 [i_5 - 2])))), (((/* implicit */int) var_7))));
                            var_32 = arr_22 [i_4] [i_5] [i_7];
                            var_33 = ((/* implicit */unsigned long long int) min((((((/* implicit */int) (unsigned short)12)) == (2121867774))), ((_Bool)1)));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (short i_8 = 0; i_8 < 13; i_8 += 4) 
                {
                    var_34 = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) arr_0 [i_4])))) ? (((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), ((signed char)-1)))) : (((int) arr_11 [i_5 - 4] [i_5 - 4]))));
                    var_35 = ((/* implicit */unsigned short) (-(((((((((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_0]))) | (-6333101461118841715LL))) + (9223372036854775807LL))) >> (((/* implicit */int) var_5))))));
                }
            }
            for (unsigned short i_9 = 0; i_9 < 13; i_9 += 2) 
            {
                var_36 = ((/* implicit */short) arr_16 [i_0] [i_4]);
                var_37 -= ((/* implicit */int) (short)28502);
                var_38 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) -8635276480286087919LL)) ? (arr_2 [i_0] [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)31)))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) != (var_6)))) : (((((/* implicit */_Bool) var_18)) ? (578487976) : (((/* implicit */int) arr_16 [7LL] [(signed char)8]))))))));
            }
            for (signed char i_10 = 0; i_10 < 13; i_10 += 2) 
            {
                var_39 -= min((((((/* implicit */_Bool) ((unsigned char) (unsigned char)255))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) : (((((/* implicit */_Bool) var_17)) ? (var_9) : (var_11))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_16 [i_4] [i_10])) ? (((/* implicit */int) (short)-30095)) : (((/* implicit */int) var_2))))));
                arr_34 [i_0] = ((/* implicit */signed char) ((((/* implicit */int) min((arr_33 [i_0]), (arr_24 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))) | (((/* implicit */int) min((arr_33 [i_4]), (arr_33 [i_0]))))));
            }
            arr_35 [i_0] [(_Bool)1] = ((/* implicit */short) (~(((/* implicit */int) ((signed char) (unsigned char)188)))));
            var_40 += ((/* implicit */unsigned short) (+(((((/* implicit */int) var_17)) << (((((((/* implicit */int) (signed char)67)) >> (0LL))) - (61)))))));
        }
        /* vectorizable */
        for (short i_11 = 0; i_11 < 13; i_11 += 2) /* same iter space */
        {
            arr_40 [i_0] [i_0] [i_11] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 16262840432055117247ULL)) ? (((/* implicit */int) arr_24 [i_0] [i_0] [i_0] [i_11] [i_11] [i_11])) : (((/* implicit */int) (short)0))));
            var_41 = ((/* implicit */short) min((var_41), (var_12)));
            /* LoopNest 2 */
            for (signed char i_12 = 0; i_12 < 13; i_12 += 2) 
            {
                for (short i_13 = 0; i_13 < 13; i_13 += 2) 
                {
                    {
                        var_42 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-111)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)13030))) : (1823316267U)));
                        var_43 = ((/* implicit */unsigned short) ((unsigned long long int) var_13));
                    }
                } 
            } 
        }
        var_44 -= ((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) arr_11 [(_Bool)1] [i_0])))))));
        var_45 = ((/* implicit */short) max((var_45), (((/* implicit */short) ((((/* implicit */_Bool) (signed char)127)) ? (7811496208869832478LL) : (-3038339996177274191LL))))));
        var_46 = ((((((/* implicit */int) var_2)) == (((/* implicit */int) arr_21 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))) ? (((((/* implicit */_Bool) ((unsigned char) var_6))) ? (((((/* implicit */_Bool) arr_7 [(_Bool)1] [(_Bool)1] [2U] [10])) ? (var_0) : (((/* implicit */unsigned long long int) 3038339996177274187LL)))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_3)) / (((/* implicit */int) (signed char)-19))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_26 [i_0] [i_0] [(short)6] [i_0])) < (((/* implicit */int) ((((/* implicit */int) (short)-12454)) != (var_16)))))))));
    }
    var_47 |= ((/* implicit */long long int) 3875181639U);
}
