/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217773
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217773 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217773
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
    var_15 ^= ((/* implicit */unsigned short) min((((((((/* implicit */int) var_14)) + (2147483647))) << (((((((/* implicit */int) var_13)) + (24726))) - (4))))), (((/* implicit */int) var_6))));
    var_16 *= ((/* implicit */unsigned int) var_13);
    var_17 = ((/* implicit */long long int) ((unsigned char) ((((/* implicit */int) var_13)) + (((/* implicit */int) ((unsigned short) var_2))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 4; i_0 < 14; i_0 += 1) 
    {
        var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) ((min((((long long int) var_6)), (((/* implicit */long long int) max((((/* implicit */unsigned char) var_5)), (var_6)))))) & (((/* implicit */long long int) max((var_12), (var_9)))))))));
        arr_4 [i_0] = ((/* implicit */long long int) var_10);
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_7 [i_1] [1U] = ((/* implicit */unsigned int) ((unsigned long long int) max((var_9), (((/* implicit */unsigned int) var_8)))));
            var_19 *= ((/* implicit */unsigned long long int) var_1);
            /* LoopSeq 1 */
            for (short i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                var_20 |= ((/* implicit */unsigned int) ((long long int) ((-3491438693165905626LL) >= (((/* implicit */long long int) ((/* implicit */int) (short)-15))))));
                /* LoopNest 2 */
                for (unsigned short i_3 = 0; i_3 < 15; i_3 += 3) 
                {
                    for (unsigned char i_4 = 2; i_4 < 14; i_4 += 3) 
                    {
                        {
                            var_21 |= ((/* implicit */long long int) var_2);
                            var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) var_13))));
                        }
                    } 
                } 
                arr_15 [i_1] = ((/* implicit */_Bool) max((((/* implicit */int) ((unsigned char) var_13))), (((((/* implicit */int) var_5)) >> (((((/* implicit */int) var_4)) - (51)))))));
                var_23 = ((/* implicit */signed char) ((unsigned long long int) var_11));
            }
            /* LoopSeq 4 */
            for (unsigned char i_5 = 0; i_5 < 15; i_5 += 3) 
            {
                arr_18 [i_1] [i_1] [(_Bool)1] = ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) <= (((var_12) * (var_0))));
                arr_19 [i_1] = ((/* implicit */signed char) var_0);
            }
            for (short i_6 = 0; i_6 < 15; i_6 += 4) 
            {
                arr_23 [i_1] [i_1] [i_6] = ((/* implicit */_Bool) ((short) ((signed char) var_14)));
                /* LoopNest 2 */
                for (unsigned long long int i_7 = 2; i_7 < 14; i_7 += 3) 
                {
                    for (unsigned int i_8 = 2; i_8 < 14; i_8 += 3) 
                    {
                        {
                            var_24 = ((/* implicit */_Bool) min((min((873784901935356788ULL), (((/* implicit */unsigned long long int) (short)-5054)))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (unsigned char)86)), (min((((/* implicit */unsigned int) (_Bool)0)), (3228778117U))))))));
                            arr_28 [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */int) ((unsigned short) var_8))) | (((/* implicit */int) var_3))));
                            arr_29 [i_0] [i_1] [i_0] [i_7] [(short)6] [i_8] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */signed char) (_Bool)0)), ((signed char)7))))) == (max((2521913883987279470LL), (((/* implicit */long long int) min((((/* implicit */signed char) (_Bool)1)), ((signed char)117))))))));
                        }
                    } 
                } 
                var_25 = ((/* implicit */unsigned long long int) min((var_25), (((/* implicit */unsigned long long int) ((_Bool) max((((/* implicit */unsigned long long int) var_7)), (var_2)))))));
                var_26 = ((/* implicit */short) ((((long long int) ((((/* implicit */int) var_1)) > (((/* implicit */int) var_13))))) ^ (((/* implicit */long long int) var_0))));
            }
            for (short i_9 = 0; i_9 < 15; i_9 += 2) 
            {
                var_27 = ((/* implicit */_Bool) var_4);
                arr_34 [i_1] = var_10;
            }
            for (short i_10 = 2; i_10 < 14; i_10 += 4) 
            {
                var_28 = ((/* implicit */short) max((((/* implicit */unsigned int) max((var_3), (((/* implicit */unsigned short) var_10))))), (var_12)));
                var_29 = ((/* implicit */signed char) min((var_29), (min((((/* implicit */signed char) ((_Bool) var_13))), (var_11)))));
                /* LoopNest 2 */
                for (_Bool i_11 = 0; i_11 < 0; i_11 += 1) 
                {
                    for (signed char i_12 = 0; i_12 < 15; i_12 += 2) 
                    {
                        {
                            arr_45 [(short)9] [5ULL] [i_1] = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((_Bool) var_14))), (var_2)));
                            arr_46 [i_10] [i_11 + 1] [i_1] = ((/* implicit */unsigned char) min((((/* implicit */long long int) ((unsigned int) var_5))), (((long long int) var_9))));
                        }
                    } 
                } 
                var_30 *= ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((signed char) var_11))), (min((((/* implicit */unsigned int) var_11)), (var_12)))));
            }
        }
        for (unsigned long long int i_13 = 2; i_13 < 12; i_13 += 3) 
        {
            arr_49 [i_0] = ((/* implicit */unsigned short) min((min(((short)32741), (((/* implicit */short) (signed char)(-127 - 1))))), (((/* implicit */short) max((((/* implicit */signed char) ((((/* implicit */int) var_3)) != (((/* implicit */int) var_10))))), (var_11))))));
            arr_50 [i_0] [i_0] [i_13] = ((/* implicit */short) ((long long int) var_6));
        }
    }
    for (signed char i_14 = 1; i_14 < 15; i_14 += 4) 
    {
        arr_53 [i_14] [i_14] = ((/* implicit */signed char) max((((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) & (2884516586344428206ULL))), (min((((/* implicit */unsigned long long int) var_3)), (var_2)))));
        arr_54 [i_14] [i_14] = ((/* implicit */_Bool) ((((/* implicit */int) max((((((/* implicit */_Bool) (unsigned char)48)) && (((/* implicit */_Bool) (unsigned char)49)))), (((((/* implicit */unsigned long long int) var_12)) >= (var_2)))))) * (((/* implicit */int) var_1))));
    }
    var_31 = ((/* implicit */unsigned long long int) ((long long int) max((((/* implicit */unsigned long long int) min((-2521913883987279470LL), (-2521913883987279452LL)))), (4098780623981252270ULL))));
}
