/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220032
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220032 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220032
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
    for (unsigned char i_0 = 2; i_0 < 11; i_0 += 2) 
    {
        arr_2 [i_0 + 2] = ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) * (-4LL));
        /* LoopNest 3 */
        for (long long int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        arr_10 [i_3] [i_1] [i_0] [(_Bool)0] = ((/* implicit */short) ((((/* implicit */_Bool) ((long long int) var_6))) ? (((/* implicit */unsigned long long int) (-(max((((/* implicit */unsigned int) (signed char)30)), (1048544U)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (var_6) : (var_3)))) ? (((/* implicit */unsigned long long int) ((((((/* implicit */int) var_12)) + (2147483647))) >> (((var_3) - (2619390381U)))))) : (var_8)))));
                        var_15 = var_14;
                        /* LoopSeq 1 */
                        for (unsigned long long int i_4 = 0; i_4 < 13; i_4 += 3) 
                        {
                            var_16 = (!(((/* implicit */_Bool) (unsigned char)1)));
                            var_17 = ((/* implicit */unsigned long long int) (_Bool)1);
                        }
                        var_18 = ((/* implicit */unsigned int) var_9);
                    }
                } 
            } 
        } 
        var_19 = ((/* implicit */signed char) (-(var_10)));
        arr_14 [i_0] = ((/* implicit */_Bool) max((((unsigned long long int) max((var_13), (((/* implicit */unsigned long long int) (unsigned char)91))))), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)3)) ? (var_4) : (7715532673972768052LL)))) : ((+(34359738367ULL)))))));
    }
    for (signed char i_5 = 0; i_5 < 11; i_5 += 3) 
    {
        arr_18 [i_5] = var_8;
        var_20 &= ((/* implicit */unsigned char) var_11);
        var_21 = ((/* implicit */_Bool) var_1);
    }
    for (unsigned long long int i_6 = 0; i_6 < 11; i_6 += 2) 
    {
        arr_22 [(_Bool)0] [i_6] = ((/* implicit */int) var_7);
        /* LoopSeq 2 */
        for (signed char i_7 = 0; i_7 < 11; i_7 += 3) 
        {
            arr_25 [i_6] &= ((/* implicit */unsigned char) min((((/* implicit */long long int) (_Bool)0)), (((((/* implicit */_Bool) -1194100531)) ? (var_14) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (var_3) : (var_6))))))));
            /* LoopSeq 1 */
            for (signed char i_8 = 0; i_8 < 11; i_8 += 3) 
            {
                arr_29 [i_7] = ((/* implicit */unsigned char) (-(((/* implicit */int) min(((short)1023), (((/* implicit */short) (_Bool)1)))))));
                /* LoopSeq 1 */
                for (signed char i_9 = 0; i_9 < 11; i_9 += 3) 
                {
                    arr_32 [i_7] [i_8] [i_8] [i_7] [i_7] = ((/* implicit */unsigned short) ((((((/* implicit */int) var_12)) + (2147483647))) << (((((-7715532673972768052LL) + (7715532673972768071LL))) - (19LL)))));
                    arr_33 [i_6] [i_9] [i_7] [i_9] = ((/* implicit */unsigned short) 3LL);
                }
            }
            arr_34 [i_7] [i_7] [i_6] = ((/* implicit */int) (~(var_4)));
        }
        for (int i_10 = 0; i_10 < 11; i_10 += 2) 
        {
            var_22 = ((/* implicit */short) (_Bool)1);
            var_23 = ((/* implicit */int) var_8);
        }
    }
    var_24 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)221)) ? (((/* implicit */long long int) 16383)) : (274877906943LL)));
}
