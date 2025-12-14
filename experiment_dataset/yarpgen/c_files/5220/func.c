/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5220
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5220 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5220
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
    var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) ((min((((/* implicit */unsigned int) (~(((/* implicit */int) var_7))))), (((((/* implicit */_Bool) var_10)) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))))) < (((/* implicit */unsigned int) ((/* implicit */int) (((~(((/* implicit */int) (_Bool)0)))) >= (((/* implicit */int) ((((/* implicit */unsigned long long int) var_9)) != (var_5)))))))))))));
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */short) min((((/* implicit */unsigned int) (!(((((/* implicit */_Bool) (short)-32609)) && (((/* implicit */_Bool) (short)1023))))))), (max((max((var_9), (((/* implicit */unsigned int) var_11)))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_1 [i_0] [i_0])))))))));
        var_16 += var_3;
        var_17 ^= var_8;
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 4; i_1 < 17; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_0] [i_0] [i_0] |= ((/* implicit */signed char) arr_3 [i_0] [i_1] [i_2]);
                    var_18 = ((/* implicit */unsigned char) max((((unsigned int) max((((/* implicit */unsigned long long int) var_13)), (var_1)))), ((+(var_12)))));
                }
            } 
        } 
        arr_9 [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) var_1))));
    }
    for (unsigned long long int i_3 = 1; i_3 < 21; i_3 += 4) 
    {
        var_19 = ((/* implicit */unsigned int) var_4);
        var_20 = ((/* implicit */unsigned short) (~(((/* implicit */int) (short)-1))));
    }
    for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 3) 
    {
        arr_14 [i_4] = ((/* implicit */signed char) var_0);
        var_21 = ((/* implicit */int) ((((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_4] [i_4] [i_4] [i_4])) ? (((/* implicit */int) arr_10 [i_4])) : (((/* implicit */int) var_6))))) ^ ((-(var_9))))) >> ((((~((+(var_12))))) - (2737629046U)))));
        /* LoopNest 3 */
        for (short i_5 = 2; i_5 < 13; i_5 += 3) 
        {
            for (unsigned long long int i_6 = 0; i_6 < 15; i_6 += 2) 
            {
                for (unsigned char i_7 = 0; i_7 < 15; i_7 += 3) 
                {
                    {
                        arr_23 [i_5] = ((/* implicit */long long int) max((((/* implicit */signed char) (!(((/* implicit */_Bool) 18446744073709551602ULL))))), (arr_5 [i_4] [i_5] [i_4] [i_7])));
                        var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) (+(((/* implicit */int) ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) var_7))))))))));
                        arr_24 [i_4] [i_4] [i_5] [i_4] [i_7] = max((67108863U), (((/* implicit */unsigned int) (signed char)31)));
                        arr_25 [i_4] [i_6] [i_5] [i_6] [i_6] [i_7] &= ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_0))));
                    }
                } 
            } 
        } 
    }
}
