/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240170
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240170 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240170
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
    var_17 = ((/* implicit */unsigned short) max((var_17), (var_4)));
    var_18 = ((/* implicit */short) max((((/* implicit */unsigned long long int) min((var_3), (min((var_10), (var_4)))))), (var_14)));
    var_19 -= ((/* implicit */_Bool) var_16);
    /* LoopSeq 1 */
    for (unsigned short i_0 = 2; i_0 < 9; i_0 += 4) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned int i_1 = 1; i_1 < 9; i_1 += 1) 
        {
            /* LoopSeq 1 */
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                /* LoopSeq 1 */
                for (short i_3 = 2; i_3 < 9; i_3 += 1) 
                {
                    var_20 = var_10;
                    var_21 = ((/* implicit */signed char) var_7);
                }
                var_22 = ((/* implicit */signed char) var_11);
            }
            /* LoopSeq 3 */
            for (unsigned short i_4 = 0; i_4 < 11; i_4 += 4) /* same iter space */
            {
                /* LoopSeq 4 */
                for (signed char i_5 = 3; i_5 < 9; i_5 += 1) 
                {
                    var_23 = ((/* implicit */_Bool) var_8);
                    var_24 ^= ((/* implicit */signed char) var_11);
                    arr_17 [i_1 + 1] [i_5] = ((/* implicit */unsigned int) var_9);
                }
                for (signed char i_6 = 0; i_6 < 11; i_6 += 2) 
                {
                    var_25 = ((/* implicit */short) var_7);
                    var_26 ^= ((/* implicit */signed char) var_15);
                    var_27 = var_12;
                }
                for (unsigned long long int i_7 = 3; i_7 < 10; i_7 += 1) /* same iter space */
                {
                    var_28 = var_1;
                    arr_23 [i_0 - 1] [i_1 + 1] [i_0 - 1] [10] = ((/* implicit */unsigned long long int) var_1);
                }
                for (unsigned long long int i_8 = 3; i_8 < 10; i_8 += 1) /* same iter space */
                {
                    var_29 -= var_4;
                    var_30 = ((/* implicit */unsigned int) var_1);
                }
                var_31 ^= ((/* implicit */signed char) var_3);
                /* LoopSeq 1 */
                for (short i_9 = 2; i_9 < 10; i_9 += 1) 
                {
                    arr_28 [i_0] [i_0] = ((/* implicit */short) var_16);
                    var_32 = ((/* implicit */_Bool) max((var_32), (((/* implicit */_Bool) var_1))));
                }
            }
            for (unsigned short i_10 = 0; i_10 < 11; i_10 += 4) /* same iter space */
            {
                var_33 = ((/* implicit */short) var_1);
                var_34 = ((/* implicit */unsigned short) var_5);
            }
            for (int i_11 = 4; i_11 < 10; i_11 += 4) 
            {
                arr_34 [i_0 - 1] [i_1] [i_11] = ((/* implicit */unsigned long long int) var_4);
                arr_35 [i_11] [i_1 - 1] [i_0] = ((/* implicit */unsigned int) var_13);
            }
            var_35 *= ((/* implicit */short) var_7);
            /* LoopNest 2 */
            for (signed char i_12 = 0; i_12 < 11; i_12 += 1) 
            {
                for (short i_13 = 1; i_13 < 9; i_13 += 4) 
                {
                    {
                        var_36 = ((/* implicit */_Bool) var_12);
                        var_37 = var_7;
                        arr_44 [i_0 + 2] [i_13] [i_0 + 1] [10] [i_0 + 1] [i_13 - 1] = ((/* implicit */short) var_0);
                    }
                } 
            } 
        }
        for (unsigned long long int i_14 = 3; i_14 < 10; i_14 += 1) 
        {
            /* LoopNest 2 */
            for (int i_15 = 1; i_15 < 9; i_15 += 1) 
            {
                for (unsigned short i_16 = 0; i_16 < 11; i_16 += 2) 
                {
                    {
                        var_38 = ((/* implicit */signed char) max((min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) var_12)), (var_4)))), (var_2))), (min((((/* implicit */unsigned long long int) var_16)), (var_2)))));
                        arr_51 [i_0] = ((/* implicit */short) max(((signed char)127), ((signed char)-2)));
                        arr_52 [10U] [3ULL] [i_16] = ((/* implicit */_Bool) min((((/* implicit */short) min((var_1), (((/* implicit */signed char) var_0))))), (max(((short)-1773), (((/* implicit */short) (_Bool)1))))));
                    }
                } 
            } 
            var_39 = ((/* implicit */int) max((var_39), (((/* implicit */int) max((min((max((var_2), (var_7))), (((/* implicit */unsigned long long int) var_9)))), (min((min((var_7), (((/* implicit */unsigned long long int) var_12)))), (((/* implicit */unsigned long long int) max((((/* implicit */int) var_9)), (var_5)))))))))));
            var_40 *= ((/* implicit */short) max((var_5), (((/* implicit */int) max((var_10), (var_8))))));
            var_41 = ((/* implicit */unsigned int) max((var_3), (var_10)));
            var_42 |= ((/* implicit */unsigned short) min((((/* implicit */int) var_15)), (var_5)));
        }
        var_43 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) max((var_9), (var_12)))), (max((min((((/* implicit */unsigned long long int) var_1)), (var_2))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) var_12)), (var_4))))))));
        /* LoopNest 2 */
        for (unsigned int i_17 = 0; i_17 < 11; i_17 += 4) 
        {
            for (_Bool i_18 = 1; i_18 < 1; i_18 += 1) 
            {
                {
                    var_44 = min((min((((/* implicit */unsigned short) var_1)), (var_3))), (max((var_4), (((/* implicit */unsigned short) var_1)))));
                    var_45 ^= min((((/* implicit */short) min((var_9), (var_1)))), (var_15));
                    var_46 = ((/* implicit */unsigned short) max((var_7), (min((min((var_7), (((/* implicit */unsigned long long int) var_8)))), (min((var_2), (((/* implicit */unsigned long long int) var_9))))))));
                }
            } 
        } 
        /* LoopSeq 2 */
        for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
        {
            arr_63 [i_0] [i_0 - 2] [(short)2] = ((/* implicit */_Bool) max((min((var_7), (((/* implicit */unsigned long long int) var_13)))), (max((var_7), (((/* implicit */unsigned long long int) var_11))))));
            var_47 = ((/* implicit */unsigned int) max((var_47), (((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) var_1)), (var_7))))));
            var_48 = ((/* implicit */unsigned short) max((var_48), (((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned long long int) var_3)))))));
        }
        for (unsigned int i_20 = 0; i_20 < 11; i_20 += 4) 
        {
            arr_67 [i_20] [i_0 + 2] |= ((/* implicit */unsigned long long int) min((max((var_4), (var_6))), (var_6)));
            var_49 ^= ((/* implicit */unsigned long long int) var_3);
        }
    }
}
