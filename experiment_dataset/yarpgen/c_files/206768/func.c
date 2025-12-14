/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206768
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206768 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206768
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
    var_14 = ((/* implicit */unsigned int) (+(var_0)));
    /* LoopSeq 2 */
    for (short i_0 = 2; i_0 < 18; i_0 += 4) 
    {
        arr_3 [i_0] &= ((/* implicit */long long int) (+(((((/* implicit */_Bool) arr_1 [i_0 - 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) min((var_13), (((/* implicit */short) var_5)))))) : (((unsigned int) var_12))))));
        var_15 = ((/* implicit */unsigned int) arr_1 [19U]);
        /* LoopNest 3 */
        for (signed char i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                for (unsigned int i_3 = 4; i_3 < 18; i_3 += 4) 
                {
                    {
                        arr_13 [i_0] [i_1] [i_1] [(_Bool)1] = ((/* implicit */short) ((((((unsigned long long int) arr_5 [i_1])) % (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-23))) : (481135039U)))))) & (((((/* implicit */_Bool) min((arr_7 [19LL]), (((/* implicit */unsigned long long int) 776452515U))))) ? (max((18446744073709551609ULL), (((/* implicit */unsigned long long int) 6U)))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_8 [i_0 - 1] [i_1] [i_1])))))))));
                        var_16 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */int) min(((unsigned short)3), (((/* implicit */unsigned short) var_1))))), (((var_10) ? (((/* implicit */int) (unsigned short)3)) : (((/* implicit */int) (unsigned short)2))))))) ? (((((((/* implicit */_Bool) arr_9 [12ULL] [i_1] [i_0])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_2 [i_1] [i_1])))) >> (((/* implicit */int) min((arr_11 [i_0] [i_1] [i_0] [i_0]), (((/* implicit */signed char) var_9))))))) : (max((((((/* implicit */_Bool) arr_11 [i_0 + 3] [i_1] [(short)19] [i_3 + 2])) ? (((/* implicit */int) arr_4 [(signed char)13])) : (((/* implicit */int) var_11)))), (((/* implicit */int) var_7))))));
                        var_17 = ((/* implicit */unsigned char) var_0);
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 2) 
    {
        var_18 = ((/* implicit */long long int) var_3);
        var_19 = ((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned char) arr_16 [18]))) != (((/* implicit */int) arr_6 [i_4] [i_4]))));
    }
    var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) ((((((/* implicit */_Bool) min((((/* implicit */int) (unsigned short)3)), (var_6)))) ? (((/* implicit */int) (!((_Bool)1)))) : (((/* implicit */int) ((signed char) (_Bool)1))))) << ((((~(((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_2)))))) + (18))))))));
    var_21 = ((/* implicit */long long int) var_10);
}
