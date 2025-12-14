/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194864
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194864 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194864
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
    /* LoopSeq 4 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        var_16 = ((/* implicit */signed char) ((long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 2490048776688977586LL)) - (var_7)))) && (((((/* implicit */_Bool) arr_0 [(_Bool)1] [5U])) && (((/* implicit */_Bool) var_14)))))));
        var_17 = ((/* implicit */unsigned long long int) min((((((int) arr_1 [i_0] [i_0])) + (((/* implicit */int) ((((/* implicit */_Bool) var_15)) && (((/* implicit */_Bool) arr_0 [i_0] [i_0]))))))), (((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) var_12)))))));
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 18; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                for (unsigned char i_3 = 0; i_3 < 21; i_3 += 2) 
                {
                    {
                        var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) var_9))));
                        var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) 1235911014U))));
                        arr_9 [i_0] [(_Bool)1] [i_2] [(_Bool)1] &= ((/* implicit */unsigned int) arr_2 [i_0] [i_2] [i_2]);
                        var_20 = ((/* implicit */unsigned short) ((unsigned char) ((min((((/* implicit */unsigned long long int) arr_3 [i_0] [i_1] [i_2])), (var_9))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_7) != (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-99))))))))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            for (long long int i_5 = 1; i_5 < 18; i_5 += 2) 
            {
                {
                    arr_15 [i_0] [i_4] [i_0] = arr_6 [i_0] [i_0] [i_5] [i_5];
                    /* LoopSeq 1 */
                    for (long long int i_6 = 1; i_6 < 20; i_6 += 2) 
                    {
                        var_21 = ((/* implicit */unsigned int) max((((var_2) & (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_12)) >= (((/* implicit */int) arr_10 [i_4])))))))), (min((min((-2490048776688977595LL), (((/* implicit */long long int) arr_10 [i_0])))), (((/* implicit */long long int) ((3532370819U) | (((/* implicit */unsigned int) ((/* implicit */int) var_5))))))))));
                        arr_18 [i_0] [i_4] [(_Bool)1] [i_6] &= ((/* implicit */signed char) ((long long int) (unsigned char)179));
                    }
                    var_22 = ((/* implicit */long long int) var_8);
                }
            } 
        } 
    }
    for (short i_7 = 0; i_7 < 19; i_7 += 4) 
    {
        var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) min((((/* implicit */unsigned int) ((unsigned short) arr_8 [i_7] [i_7] [i_7]))), (((1184460264U) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)249))))))))));
        arr_22 [i_7] = ((/* implicit */unsigned char) ((((unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) - (arr_2 [i_7] [i_7] [i_7])))) != (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) ((((/* implicit */int) arr_21 [i_7])) > (((/* implicit */int) var_15))))))))));
        var_24 = var_0;
        var_25 = min((((unsigned char) var_14)), (((/* implicit */unsigned char) ((signed char) ((short) var_4)))));
        var_26 = ((/* implicit */unsigned int) (short)11975);
    }
    for (unsigned char i_8 = 1; i_8 < 13; i_8 += 1) /* same iter space */
    {
        var_27 = ((/* implicit */unsigned int) (_Bool)0);
        arr_27 [i_8] = ((/* implicit */long long int) (unsigned short)29410);
        arr_28 [12ULL] &= ((/* implicit */long long int) ((short) max((arr_24 [i_8] [i_8]), (((/* implicit */unsigned long long int) 501092202566495128LL)))));
    }
    for (unsigned char i_9 = 1; i_9 < 13; i_9 += 1) /* same iter space */
    {
        var_28 ^= ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (_Bool)1))))) != (((/* implicit */int) ((((/* implicit */_Bool) ((signed char) var_3))) && (((/* implicit */_Bool) (unsigned short)27827)))))));
        arr_31 [i_9] [i_9] = ((/* implicit */unsigned int) min((((unsigned short) var_3)), (((/* implicit */unsigned short) ((_Bool) var_7)))));
    }
    var_29 &= -6365122877867605526LL;
}
