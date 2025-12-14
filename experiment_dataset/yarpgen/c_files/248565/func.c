/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248565
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248565 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248565
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
    var_20 = ((/* implicit */_Bool) (+(((/* implicit */int) var_6))));
    /* LoopSeq 2 */
    for (signed char i_0 = 4; i_0 < 20; i_0 += 3) 
    {
        var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) min((((/* implicit */int) var_3)), (max((((/* implicit */int) (!((_Bool)1)))), (((((/* implicit */int) arr_1 [i_0] [i_0 - 1])) ^ (((/* implicit */int) var_18)))))))))));
        var_22 |= ((/* implicit */_Bool) max((min(((-(((/* implicit */int) arr_1 [i_0 + 2] [i_0])))), (((/* implicit */int) min((arr_2 [i_0] [i_0]), (((/* implicit */short) arr_0 [i_0 - 4] [i_0 - 4]))))))), ((~(((/* implicit */int) max((var_17), (((/* implicit */signed char) var_1)))))))));
        var_23 = ((/* implicit */_Bool) (+(((((/* implicit */int) var_12)) & (((/* implicit */int) var_4))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_24 *= ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_18))));
        /* LoopSeq 2 */
        for (unsigned long long int i_2 = 2; i_2 < 10; i_2 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 4) 
            {
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    {
                        arr_13 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_9), (((/* implicit */unsigned long long int) max((((/* implicit */signed char) arr_1 [i_2] [i_3])), (arr_7 [i_2] [i_3] [i_2]))))))) ? (((((/* implicit */int) var_8)) ^ (((/* implicit */int) arr_9 [i_1] [i_2] [i_2])))) : ((~(((/* implicit */int) (!(arr_9 [i_1] [i_3] [i_1]))))))));
                        var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) >> (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_1] [i_2 + 1])))))))) ? (arr_6 [i_1] [i_2] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))));
                    }
                } 
            } 
            arr_14 [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((signed char) var_7)))));
        }
        /* vectorizable */
        for (unsigned long long int i_5 = 1; i_5 < 10; i_5 += 2) 
        {
            var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) var_14))));
            arr_17 [i_1] [i_5] [i_5 - 1] = ((/* implicit */unsigned long long int) var_5);
            arr_18 [i_1] [i_5 + 1] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_7)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1] [i_5 + 1])))));
            arr_19 [i_1] [i_5] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_11 [i_1] [i_1] [i_1] [i_1] [i_1] [i_5 - 1]))));
            arr_20 [i_1] = arr_6 [i_1] [i_5 + 2] [i_1];
        }
        arr_21 [i_1] = ((/* implicit */unsigned long long int) min((((((/* implicit */int) arr_1 [i_1] [i_1])) << (((/* implicit */int) arr_9 [i_1] [i_1] [i_1])))), (((/* implicit */int) ((((/* implicit */int) arr_11 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])) <= (((/* implicit */int) arr_8 [i_1])))))));
        var_27 = ((/* implicit */_Bool) ((((((/* implicit */int) arr_12 [i_1] [i_1])) + (((/* implicit */int) max((((/* implicit */unsigned short) arr_12 [i_1] [i_1])), (arr_15 [i_1])))))) - (((((/* implicit */int) max((arr_1 [i_1] [i_1]), (var_2)))) + (((/* implicit */int) ((unsigned short) arr_1 [i_1] [i_1])))))));
        /* LoopNest 3 */
        for (short i_6 = 0; i_6 < 12; i_6 += 2) 
        {
            for (unsigned long long int i_7 = 3; i_7 < 10; i_7 += 1) 
            {
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    {
                        var_28 = ((/* implicit */_Bool) min((var_28), (((/* implicit */_Bool) var_10))));
                        var_29 = arr_1 [i_7] [i_1];
                        var_30 = ((/* implicit */_Bool) (signed char)-1);
                    }
                } 
            } 
        } 
    }
    /* LoopNest 2 */
    for (unsigned long long int i_9 = 0; i_9 < 19; i_9 += 3) 
    {
        for (unsigned short i_10 = 2; i_10 < 15; i_10 += 1) 
        {
            {
                var_31 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_4)) ? (4362862139015168ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))), (((var_11) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))))) ? ((~((-(arr_34 [i_9] [i_9]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_10) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_10 - 2] [i_10 + 1])))))))));
                /* LoopNest 2 */
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    for (unsigned short i_12 = 0; i_12 < 19; i_12 += 2) 
                    {
                        {
                            var_32 &= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_15) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_36 [i_9])))))) ? (((/* implicit */int) (!((_Bool)1)))) : ((-(((/* implicit */int) var_8)))))))));
                            var_33 = ((/* implicit */_Bool) var_13);
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_13 = 1; i_13 < 22; i_13 += 1) 
    {
        for (unsigned long long int i_14 = 0; i_14 < 24; i_14 += 1) 
        {
            {
                var_34 = ((/* implicit */unsigned short) var_15);
                arr_48 [i_13] [i_14] [i_14] = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (var_9) : (arr_45 [i_13 - 1] [i_13 - 1])))) ? (arr_45 [i_13] [i_14]) : (min((((/* implicit */unsigned long long int) var_7)), (arr_43 [i_14]))))) | (((((((/* implicit */_Bool) var_10)) ? (12695343893742104249ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))) % (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_45 [i_14] [i_13 + 2])) || (((/* implicit */_Bool) var_12))))))))));
            }
        } 
    } 
    var_35 += var_1;
}
