/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191288
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191288 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191288
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
    var_15 += ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) == (var_3)));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                for (unsigned char i_3 = 0; i_3 < 22; i_3 += 4) 
                {
                    {
                        var_16 -= ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */unsigned int) var_4)) / (var_1)))) * (((long long int) var_4))))), (((var_5) / (((/* implicit */unsigned long long int) ((long long int) var_13)))))));
                        var_17 = ((/* implicit */unsigned char) ((((var_5) - (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_10))))))) / (((/* implicit */unsigned long long int) ((var_3) / (var_9))))));
                        arr_13 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) var_4))))) / (((int) var_3))));
                        var_18 -= ((/* implicit */unsigned int) ((((((((/* implicit */long long int) ((/* implicit */int) var_12))) >= (var_11))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (((var_5) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((var_5) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_14)))))) && (((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) var_1))))))))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned long long int i_4 = 2; i_4 < 21; i_4 += 1) 
            {
                for (long long int i_5 = 0; i_5 < 22; i_5 += 1) 
                {
                    {
                        arr_18 [i_4 + 1] [i_1] [i_0] = max((((unsigned long long int) var_9)), (((/* implicit */unsigned long long int) ((var_5) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))));
                        var_19 = ((/* implicit */unsigned int) ((((var_5) / (var_5))) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))));
                        var_20 = ((/* implicit */long long int) max((var_20), (max((((/* implicit */long long int) ((signed char) ((((/* implicit */long long int) var_4)) & (var_9))))), (((((/* implicit */long long int) ((/* implicit */int) var_14))) - (var_6)))))));
                        var_21 = ((/* implicit */signed char) max((max((((/* implicit */unsigned long long int) 218943339U)), (7323219198023070756ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((var_5) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))))) > (var_11))))));
                    }
                } 
            } 
        }
        var_22 = ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */long long int) ((/* implicit */int) var_14))) * (var_11))))) ? (((/* implicit */unsigned long long int) ((var_4) * (((/* implicit */int) var_2))))) : (((var_5) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))));
    }
    for (signed char i_6 = 0; i_6 < 11; i_6 += 3) 
    {
        var_23 = ((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) <= (var_5)))), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_11)))));
        /* LoopNest 2 */
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                {
                    var_24 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((((/* implicit */int) var_8)) / (var_4))) / (((((/* implicit */int) var_7)) / (((/* implicit */int) var_7))))))), (((((unsigned long long int) 4076023934U)) / (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) * (var_1))))))));
                    var_25 = ((/* implicit */unsigned char) min((((((/* implicit */int) var_12)) < ((~(var_4))))), (((var_11) >= (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_1))))))));
                }
            } 
        } 
        var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) ((((unsigned long long int) var_0)) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_8)) > (((/* implicit */int) var_13)))))))))));
        var_27 *= ((/* implicit */int) max((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_2))))), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (var_1)))))), (((((var_6) >= (((/* implicit */long long int) ((/* implicit */int) var_8))))) ? (((var_5) / (((/* implicit */unsigned long long int) var_1)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_2)) != (var_4)))))))));
        /* LoopNest 2 */
        for (int i_9 = 4; i_9 < 9; i_9 += 1) 
        {
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                {
                    arr_32 [i_6] [(signed char)5] [i_6] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) var_14)) != (((/* implicit */int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) var_0)))))))) * (((/* implicit */int) (!(((/* implicit */_Bool) ((11123524875686480860ULL) * (((/* implicit */unsigned long long int) 4294967295U))))))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_11 = 0; i_11 < 11; i_11 += 4) 
                    {
                        for (unsigned int i_12 = 2; i_12 < 9; i_12 += 1) 
                        {
                            {
                                var_28 = ((/* implicit */unsigned int) ((-3266721675393697798LL) ^ (((long long int) 4076023919U))));
                                arr_37 [i_6] [i_6] [i_12 - 2] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((var_4) ^ (((/* implicit */int) max((var_12), (((/* implicit */unsigned char) var_7)))))))) + (min((var_11), (((/* implicit */long long int) var_2))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    var_29 = ((/* implicit */int) (-(((var_9) / (((/* implicit */long long int) ((var_1) * (var_1))))))));
    var_30 *= ((/* implicit */unsigned char) ((((/* implicit */long long int) min((((/* implicit */int) var_13)), (((((/* implicit */int) var_12)) / (var_4)))))) / ((-(((3266721675393697793LL) / (((/* implicit */long long int) 1150332759))))))));
    var_31 = ((/* implicit */_Bool) min((var_31), (((/* implicit */_Bool) var_0))));
}
