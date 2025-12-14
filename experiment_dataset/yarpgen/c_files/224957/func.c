/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224957
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224957 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224957
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
    var_18 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(min((((/* implicit */unsigned int) var_16)), (var_15)))))) ? (((((/* implicit */_Bool) ((unsigned char) (_Bool)1))) ? (((/* implicit */int) ((var_15) > (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))) : (((((/* implicit */int) var_0)) ^ (((/* implicit */int) var_17)))))) : (((/* implicit */int) var_2))));
    /* LoopSeq 3 */
    for (long long int i_0 = 2; i_0 < 19; i_0 += 1) 
    {
        var_19 += ((((/* implicit */_Bool) max((-455269906594813520LL), (((long long int) var_5))))) ? (min((((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))))), (arr_0 [i_0 - 2]))) : (((unsigned int) ((2309282907U) << (((31744U) - (31713U)))))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    for (long long int i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        var_20 += ((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)235))))) ? (((((/* implicit */int) (unsigned char)250)) >> (((((/* implicit */int) (unsigned char)112)) - (105))))) : (((/* implicit */int) min(((unsigned char)220), (((/* implicit */unsigned char) (_Bool)0)))))))) >= (arr_7 [i_0] [i_1] [i_2] [i_3])));
                        var_21 *= ((/* implicit */signed char) ((var_6) >> (((((/* implicit */int) (signed char)-1)) + (16)))));
                        var_22 ^= ((/* implicit */unsigned short) (+(((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_1] [i_0] [i_0 - 1]))));
                        var_23 = ((/* implicit */unsigned short) ((_Bool) (!(((/* implicit */_Bool) (-(arr_5 [i_3] [i_2] [i_1])))))));
                        var_24 -= ((/* implicit */signed char) max((((/* implicit */unsigned int) var_10)), (((unsigned int) 3801218437U))));
                    }
                    for (unsigned int i_4 = 1; i_4 < 19; i_4 += 4) 
                    {
                        arr_14 [i_4] = ((/* implicit */unsigned short) max((max((max((((/* implicit */long long int) var_17)), (var_12))), (((((/* implicit */_Bool) arr_11 [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)127))) : (arr_8 [i_0]))))), (((/* implicit */long long int) (+((-(((/* implicit */int) var_4)))))))));
                        var_25 *= ((/* implicit */unsigned char) ((int) arr_3 [i_4]));
                        var_26 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) min((var_9), (((/* implicit */unsigned short) var_10))))) && (((/* implicit */_Bool) min((((/* implicit */int) (unsigned char)0)), (arr_5 [i_0] [i_1] [i_4]))))))) & (((/* implicit */int) ((((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */unsigned long long int) arr_0 [i_4])) : (arr_2 [i_4]))) < (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_14))))))))));
                        var_27 = ((/* implicit */unsigned long long int) (+(((((/* implicit */int) var_7)) - (((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_0 - 2] [i_4 + 3] [i_4]))))));
                        var_28 &= ((/* implicit */int) arr_9 [i_4]);
                    }
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 4; i_5 < 20; i_5 += 3) 
                    {
                        for (signed char i_6 = 1; i_6 < 21; i_6 += 4) 
                        {
                            {
                                var_29 = ((/* implicit */short) max((var_29), (((/* implicit */short) var_15))));
                                var_30 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_18 [i_0] [i_1] [i_6] [i_5 - 3] [i_6])) % (((/* implicit */int) var_0))))), (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (_Bool)1)))) : (min((((/* implicit */unsigned long long int) (signed char)-71)), (arr_2 [i_6])))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_31 -= ((long long int) (!(((/* implicit */_Bool) (unsigned short)65534))));
        var_32 = ((/* implicit */int) (unsigned char)228);
    }
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
    {
        var_33 &= ((/* implicit */int) min((((/* implicit */long long int) (((+(arr_21 [i_7] [0]))) == (((/* implicit */long long int) arr_6 [i_7]))))), (((long long int) ((((/* implicit */_Bool) arr_10 [i_7] [i_7] [i_7] [4ULL] [i_7] [i_7])) ? (((/* implicit */int) (unsigned char)193)) : (((/* implicit */int) (unsigned short)28672)))))));
        arr_23 [i_7] = arr_2 [i_7];
        var_34 = ((/* implicit */long long int) max((var_34), (((/* implicit */long long int) (signed char)-121))));
    }
    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
    {
        var_35 = ((/* implicit */unsigned short) arr_25 [i_8] [i_8]);
        var_36 = var_6;
    }
}
