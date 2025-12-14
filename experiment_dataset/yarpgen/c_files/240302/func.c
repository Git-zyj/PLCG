/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240302
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240302 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240302
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
    var_15 = ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */_Bool) 169963991332469395ULL)) ? (max((((/* implicit */long long int) (_Bool)0)), (-8253412458977396422LL))) : (8253412458977396421LL))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 6174221814543338800ULL)) && (((/* implicit */_Bool) 1698917103402907296LL))));
        var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [i_0]))))));
    }
    for (signed char i_1 = 0; i_1 < 12; i_1 += 2) 
    {
        var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_13)) ? (var_13) : (((/* implicit */unsigned long long int) -8253412458977396422LL)))), (max((var_3), (((/* implicit */unsigned long long int) (signed char)-18))))))) ? (max((((/* implicit */unsigned long long int) max((var_14), (((/* implicit */long long int) (signed char)3))))), (max((arr_0 [i_1]), (((/* implicit */unsigned long long int) 728330259422411817LL)))))) : (((min((18446744073709551615ULL), (((/* implicit */unsigned long long int) (_Bool)0)))) % (((/* implicit */unsigned long long int) 444997499151390566LL))))));
        var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) ((long long int) 2164251035U)))));
        /* LoopSeq 1 */
        for (unsigned int i_2 = 2; i_2 < 8; i_2 += 4) 
        {
            arr_8 [i_1] [i_2 - 2] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_1] [i_2 + 4])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)121))) : (arr_6 [i_1] [i_2 + 4])))) | (((((/* implicit */_Bool) (~(8253412458977396435LL)))) ? (max((arr_4 [i_1]), (((/* implicit */unsigned long long int) var_14)))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) var_10)))))))));
            arr_9 [i_1] [i_2] [i_2] = ((/* implicit */unsigned long long int) (((-(-1LL))) ^ (((/* implicit */long long int) ((/* implicit */int) ((115324362124867104LL) > (6414841873054027161LL)))))));
        }
        var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((8253412458977396421LL), (((/* implicit */long long int) arr_1 [i_1] [i_1]))))) ? (((/* implicit */long long int) (-(var_2)))) : (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) ^ (var_14)))))) && (((/* implicit */_Bool) arr_4 [i_1]))));
        /* LoopNest 2 */
        for (signed char i_3 = 0; i_3 < 12; i_3 += 4) 
        {
            for (long long int i_4 = 0; i_4 < 12; i_4 += 4) 
            {
                {
                    var_21 &= ((/* implicit */long long int) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_2 [i_1])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_3] [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (var_0)))) : (((((/* implicit */_Bool) (signed char)1)) ? (arr_7 [i_4] [i_3] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1] [i_3])))))))) && (((/* implicit */_Bool) var_2))));
                    arr_16 [i_1] [i_3] [i_4] = ((/* implicit */unsigned long long int) ((long long int) (((!(((/* implicit */_Bool) (unsigned char)0)))) ? (((/* implicit */long long int) 1113730611U)) : (-9223372036854775782LL))));
                    /* LoopSeq 2 */
                    for (unsigned char i_5 = 0; i_5 < 12; i_5 += 3) 
                    {
                        var_22 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((8253412458977396421LL) - (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))) - (((/* implicit */long long int) ((/* implicit */int) (signed char)20)))))) || (((/* implicit */_Bool) (unsigned char)163))));
                        var_23 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((var_0) << (((var_2) - (2997481014U))))), (((/* implicit */unsigned int) (~(((/* implicit */int) var_7)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) 2130716256U)) ? (var_6) : (arr_11 [i_1])))))) : (((((/* implicit */_Bool) ((unsigned int) (_Bool)0))) ? (min((var_3), (((/* implicit */unsigned long long int) var_4)))) : (3953811316411972721ULL)))));
                        var_24 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((8253412458977396422LL) - (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_1])))))) ? (var_4) : (max((max((((/* implicit */long long int) var_0)), (arr_2 [i_1]))), (((/* implicit */long long int) (_Bool)1))))));
                    }
                    for (signed char i_6 = 1; i_6 < 11; i_6 += 2) 
                    {
                        var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) var_11))));
                        arr_23 [i_1] [i_3] [i_4] [i_4] [i_6] = ((/* implicit */unsigned long long int) 7963196702318346050LL);
                    }
                    var_26 &= ((/* implicit */long long int) 135917233U);
                    /* LoopSeq 2 */
                    for (signed char i_7 = 0; i_7 < 12; i_7 += 3) 
                    {
                        var_27 = ((/* implicit */unsigned long long int) max((var_27), (((/* implicit */unsigned long long int) var_6))));
                        var_28 = var_4;
                        var_29 *= ((/* implicit */unsigned long long int) max((((long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned char)160)) : (((/* implicit */int) (unsigned char)84))))), (max((((((-233971010771156254LL) + (9223372036854775807LL))) >> (((-3705541760054141673LL) + (3705541760054141703LL))))), (((/* implicit */long long int) min((2097148U), (((/* implicit */unsigned int) arr_24 [i_1] [i_4] [i_4] [i_1])))))))));
                    }
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        var_30 = ((/* implicit */unsigned int) ((min((((arr_2 [i_4]) - (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))), (-8253412458977396422LL))) - (((/* implicit */long long int) ((/* implicit */int) max((var_5), (arr_12 [i_1] [i_1])))))));
                        var_31 = max((((((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) var_5))))) + ((-(1098018403087899261LL))))), ((+(var_6))));
                    }
                }
            } 
        } 
    }
    for (long long int i_9 = 0; i_9 < 25; i_9 += 3) 
    {
        var_32 = ((/* implicit */unsigned int) ((signed char) (+((-(((/* implicit */int) arr_30 [i_9] [i_9])))))));
        arr_32 [4LL] &= var_0;
        var_33 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_10)), (var_6)))) ? (((var_14) - (8253412458977396445LL))) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned char) arr_29 [i_9] [i_9])), ((unsigned char)160)))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((signed char) arr_31 [(_Bool)1]))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)4)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)101))) : (135917233U))))))) : ((((!(((/* implicit */_Bool) 6ULL)))) ? (((((/* implicit */int) arr_29 [i_9] [i_9])) - (((/* implicit */int) arr_29 [i_9] [i_9])))) : ((-(((/* implicit */int) (signed char)-71))))))));
    }
}
