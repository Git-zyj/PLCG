/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31966
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31966 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31966
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (unsigned short i_1 = 1; i_1 < 13; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                {
                    var_18 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) arr_5 [i_0] [i_1] [i_2] [13])) : (7)))) ? (((((/* implicit */_Bool) var_12)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) var_17))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) var_8)))))))) >> (((var_7) + (351864110)))));
                    /* LoopSeq 3 */
                    for (long long int i_3 = 2; i_3 < 13; i_3 += 2) /* same iter space */
                    {
                        var_19 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */int) var_12)) < (((/* implicit */int) (signed char)-43)))))))), (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [13ULL] [i_1 + 1])) ? (var_7) : (arr_0 [i_0] [i_1 - 1])))), (((((/* implicit */_Bool) var_13)) ? (4294967295U) : (15U)))))));
                        var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) var_11)) * (((/* implicit */int) (signed char)-50))))) ? (var_15) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 148045322U)) ? (((/* implicit */unsigned int) -1436969011)) : (4146921955U))))));
                        var_21 = ((/* implicit */int) ((max((((/* implicit */unsigned int) ((arr_1 [i_1]) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (_Bool)1))))), (4146921971U))) | (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (unsigned short)6))))));
                        var_22 = ((/* implicit */int) var_1);
                        var_23 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))) ? (((((/* implicit */_Bool) arr_3 [i_1] [i_2])) ? (((/* implicit */int) var_16)) : (1436969007))) : (((/* implicit */int) arr_1 [i_0]))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_10))) % (((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (4146921977U))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned char) (unsigned char)82))) || (((/* implicit */_Bool) (-(var_8))))))))));
                    }
                    for (long long int i_4 = 2; i_4 < 13; i_4 += 2) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (long long int i_5 = 0; i_5 < 14; i_5 += 1) 
                        {
                            var_24 = ((/* implicit */signed char) var_3);
                            var_25 = ((/* implicit */_Bool) arr_0 [i_0] [i_5]);
                            var_26 = ((/* implicit */unsigned char) arr_5 [i_0] [i_1] [1U] [i_5]);
                        }
                        for (unsigned char i_6 = 1; i_6 < 13; i_6 += 3) 
                        {
                            var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) (~(((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned short) var_5)), ((unsigned short)12))))))))))));
                            var_28 = ((((/* implicit */_Bool) arr_6 [(unsigned short)4] [(short)2] [(short)2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) (_Bool)1)), (var_2))))) : (max((((/* implicit */unsigned long long int) arr_11 [i_1] [i_1 + 1] [i_2])), (((((/* implicit */unsigned long long int) arr_18 [0ULL] [i_1])) - (21ULL))))));
                            var_29 = min((-1510913743), (((/* implicit */int) var_17)));
                            var_30 = ((/* implicit */unsigned long long int) min((var_30), (((/* implicit */unsigned long long int) (_Bool)1))));
                        }
                        var_31 = ((/* implicit */_Bool) ((int) ((((/* implicit */int) arr_1 [i_1 - 1])) / (((/* implicit */int) var_10)))));
                    }
                    for (long long int i_7 = 2; i_7 < 13; i_7 += 2) /* same iter space */
                    {
                        var_32 = ((/* implicit */unsigned int) max((var_32), (((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) 27U)) && (((/* implicit */_Bool) var_17))))) & (((((/* implicit */int) arr_5 [i_7] [i_1] [i_1 - 1] [i_7])) - (((/* implicit */int) arr_17 [i_0] [i_7] [i_7])))))))));
                        var_33 = ((/* implicit */unsigned long long int) arr_9 [i_2] [i_1]);
                    }
                    var_34 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) ((unsigned char) arr_1 [i_1]))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))));
                }
            } 
        } 
    } 
    var_35 &= ((/* implicit */unsigned short) var_7);
    var_36 = ((/* implicit */unsigned short) (short)32758);
}
