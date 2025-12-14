/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37588
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37588 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37588
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
    var_18 = ((/* implicit */unsigned long long int) max((var_3), (var_5)));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 2; i_0 < 20; i_0 += 4) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned char i_1 = 4; i_1 < 21; i_1 += 4) 
        {
            arr_7 [i_0] [i_1 - 2] [i_1 + 2] = ((/* implicit */unsigned long long int) (((-(1268657791U))) | (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned char)255)), (var_7))))))))));
            arr_8 [i_1 + 2] = ((/* implicit */unsigned short) arr_4 [i_0] [i_1 - 3]);
            arr_9 [i_1 - 3] [i_0 + 2] [i_0 + 2] = ((((/* implicit */_Bool) (~(var_10)))) ? (((((/* implicit */_Bool) arr_3 [i_0 + 2] [i_0 + 2] [i_0 + 3])) ? (min((((/* implicit */unsigned long long int) arr_6 [i_0 + 2])), (arr_5 [i_0 + 2]))) : (var_7))) : (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_6 [i_0]))))) | (var_6))));
            /* LoopSeq 1 */
            for (int i_2 = 2; i_2 < 19; i_2 += 4) 
            {
                var_19 = ((/* implicit */unsigned int) max((var_19), (((((/* implicit */unsigned int) ((/* implicit */int) ((var_15) <= (((/* implicit */int) (short)29806)))))) & (((var_13) | (3026309504U)))))));
                var_20 ^= ((/* implicit */unsigned char) (~(((((((/* implicit */_Bool) arr_4 [i_0 + 2] [i_0 + 2])) && (((/* implicit */_Bool) var_5)))) ? (((/* implicit */long long int) var_11)) : (((((/* implicit */_Bool) (short)-29806)) ? (-8960643122283074728LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)127)))))))));
            }
            var_21 = ((/* implicit */signed char) (((-(var_6))) - (arr_5 [i_0 - 1])));
        }
        for (long long int i_3 = 1; i_3 < 22; i_3 += 2) 
        {
            arr_16 [i_3] [i_0] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) (unsigned short)48)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)29776))) : (627139058U))), (((3667828237U) % (((/* implicit */unsigned int) var_11))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((3511007216U) | (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0 + 3] [i_3] [i_3]))))))))) : (((/* implicit */int) var_12))));
            /* LoopSeq 2 */
            for (short i_4 = 3; i_4 < 20; i_4 += 4) /* same iter space */
            {
                var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) var_16))));
                arr_19 [i_0] [i_3 - 1] [i_4 + 2] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_11))));
                var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? ((+(1992506744U))) : (((/* implicit */unsigned int) (-(((/* implicit */int) arr_2 [i_3 - 1] [i_0 - 1])))))));
                /* LoopSeq 1 */
                for (unsigned char i_5 = 0; i_5 < 23; i_5 += 4) 
                {
                    var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) ((((/* implicit */int) ((((((/* implicit */_Bool) arr_20 [i_5])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_6))) != (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_0)), (2302460582U))))))) >= (((/* implicit */int) (unsigned short)48397)))))));
                    var_25 -= ((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) arr_12 [i_5] [i_4 - 3])))))));
                }
            }
            for (short i_6 = 3; i_6 < 20; i_6 += 4) /* same iter space */
            {
                var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) var_17))));
                var_27 = ((/* implicit */unsigned char) max((var_27), (((/* implicit */unsigned char) arr_1 [i_0 - 2] [i_3]))));
                var_28 *= ((/* implicit */unsigned int) min((((((/* implicit */long long int) ((/* implicit */int) (short)29806))) - (7008092543125730856LL))), (((/* implicit */long long int) 6U))));
            }
        }
        var_29 = ((/* implicit */unsigned int) max((var_29), (((/* implicit */unsigned int) var_14))));
        var_30 = ((/* implicit */unsigned short) (-(((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)8484))) * (((627139080U) * (var_13)))))));
        arr_25 [i_0 - 1] [i_0 - 1] = ((/* implicit */int) max((arr_4 [i_0] [i_0 + 1]), (((((/* implicit */unsigned int) ((/* implicit */int) var_5))) / (arr_13 [i_0 - 1] [i_0 - 1])))));
        /* LoopNest 2 */
        for (signed char i_7 = 0; i_7 < 23; i_7 += 1) 
        {
            for (unsigned char i_8 = 2; i_8 < 20; i_8 += 1) 
            {
                {
                    var_31 -= ((/* implicit */signed char) ((int) (~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)56327))))))));
                    var_32 *= 3270613622U;
                    /* LoopNest 2 */
                    for (short i_9 = 2; i_9 < 19; i_9 += 4) 
                    {
                        for (short i_10 = 0; i_10 < 23; i_10 += 4) 
                        {
                            {
                                var_33 = ((/* implicit */int) min((max((((/* implicit */short) ((((/* implicit */_Bool) arr_34 [i_8 + 3] [i_8] [i_8 + 3] [i_8 + 2] [i_8])) || (((/* implicit */_Bool) arr_28 [i_7] [i_7]))))), (((short) arr_34 [i_0 + 2] [i_7] [i_8 - 2] [i_9 + 4] [i_10])))), (((/* implicit */short) (!(((/* implicit */_Bool) max((var_6), (((/* implicit */unsigned long long int) var_5))))))))));
                                var_34 *= ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) arr_10 [i_10] [i_9 + 4] [i_8 + 3])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)36))) : (((unsigned int) arr_5 [i_8]))))));
                            }
                        } 
                    } 
                    arr_36 [i_7] [i_7] [i_7] = ((/* implicit */short) ((min((((((/* implicit */_Bool) arr_22 [i_7] [i_7])) ? (((/* implicit */int) (_Bool)1)) : (arr_15 [i_0 - 1] [i_7] [i_8 - 2]))), (((/* implicit */int) (signed char)-35)))) != (((/* implicit */int) var_16))));
                }
            } 
        } 
    }
    for (unsigned short i_11 = 2; i_11 < 20; i_11 += 4) /* same iter space */
    {
        var_35 = ((/* implicit */signed char) max((var_35), (((/* implicit */signed char) arr_4 [i_11 + 1] [i_11 - 2]))));
        var_36 = ((((/* implicit */_Bool) (~(((((((/* implicit */int) (signed char)-15)) + (2147483647))) << (((3667828216U) - (3667828216U)))))))) ? (((/* implicit */unsigned int) min((arr_32 [i_11 + 2] [i_11 - 1] [i_11 - 2] [i_11]), (((((/* implicit */int) arr_24 [i_11] [i_11 + 2])) ^ (((/* implicit */int) var_0))))))) : (((((/* implicit */unsigned int) min((((/* implicit */int) var_5)), (var_17)))) | (((3304292439U) >> (((((/* implicit */int) (signed char)-15)) + (40))))))));
    }
    var_37 = ((/* implicit */int) var_7);
}
