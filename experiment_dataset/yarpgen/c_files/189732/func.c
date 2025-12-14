/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189732
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189732 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189732
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
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */long long int) 469071873);
        arr_3 [i_0] [i_0] = ((long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 469071873)) * (9503622153835538342ULL)))) ? (min((((/* implicit */int) var_6)), (var_12))) : (((((/* implicit */_Bool) 11LL)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) var_17))))));
    }
    /* vectorizable */
    for (int i_1 = 3; i_1 < 7; i_1 += 4) 
    {
        /* LoopSeq 1 */
        for (signed char i_2 = 0; i_2 < 11; i_2 += 4) 
        {
            var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_6 [i_2])))))));
            var_20 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_2])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_17))))) ? (((((/* implicit */_Bool) arr_5 [i_1])) ? (18009402070172800191ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_7 [i_1])) / (((/* implicit */int) var_6)))))));
            var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)2057))))) : (((((/* implicit */_Bool) var_14)) ? (2597286859803041580ULL) : (var_16))))))));
        }
        /* LoopNest 3 */
        for (unsigned short i_3 = 0; i_3 < 11; i_3 += 3) 
        {
            for (long long int i_4 = 0; i_4 < 11; i_4 += 1) 
            {
                for (unsigned long long int i_5 = 0; i_5 < 11; i_5 += 2) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_6 = 0; i_6 < 11; i_6 += 4) 
                        {
                            var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) arr_18 [i_5]))));
                            var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)49518))))) : (((((/* implicit */_Bool) 18LL)) ? (var_16) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))));
                            arr_20 [i_1] [i_3] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) var_14);
                            arr_21 [i_1] [i_5] [i_3] [i_3] [i_1] = ((/* implicit */signed char) (((_Bool)0) ? (((/* implicit */long long int) ((unsigned int) (unsigned short)0))) : (-11LL)));
                            arr_22 [i_1] = ((/* implicit */int) (short)-20619);
                        }
                        var_24 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (unsigned char)144)) ? (-4687822278796502850LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))) / (((/* implicit */long long int) ((/* implicit */int) (short)32758)))));
                    }
                } 
            } 
        } 
        var_25 ^= arr_19 [i_1] [i_1] [i_1] [i_1 + 4] [i_1] [i_1 + 4];
    }
    for (unsigned long long int i_7 = 2; i_7 < 22; i_7 += 4) 
    {
        var_26 ^= ((/* implicit */unsigned int) min((((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) - (((((/* implicit */_Bool) arr_23 [i_7])) ? (var_10) : (var_14))))), ((~(((((/* implicit */_Bool) -524288)) ? (9503622153835538342ULL) : (((/* implicit */unsigned long long int) 679596918448598979LL))))))));
        arr_26 [i_7 + 1] |= ((/* implicit */unsigned int) min((min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (signed char)-28))))), (min((var_5), (((/* implicit */unsigned long long int) -679596918448598980LL)))))), (((/* implicit */unsigned long long int) ((min((((/* implicit */unsigned long long int) var_12)), (16816359514835721526ULL))) >= (((/* implicit */unsigned long long int) -19LL)))))));
        var_27 = ((/* implicit */long long int) max((var_27), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1309528318)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)99)), (arr_25 [i_7] [i_7])))) : (((((/* implicit */int) arr_24 [i_7])) << (((((-1290430241) + (1290430272))) - (28)))))))) ? (var_16) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((18258883011752266716ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))) && (((/* implicit */_Bool) ((int) var_17))))))))))));
    }
    var_28 = ((/* implicit */unsigned char) 12779609362032024982ULL);
}
