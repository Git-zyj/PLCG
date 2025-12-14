/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247493
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247493 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247493
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
    var_19 ^= var_9;
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 11; i_2 += 4) 
                {
                    for (int i_3 = 1; i_3 < 9; i_3 += 3) 
                    {
                        {
                            arr_9 [i_0] = ((/* implicit */unsigned char) (+(((/* implicit */int) min((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_1]))))));
                            arr_10 [i_0] [i_1] [i_0] [(signed char)3] = ((/* implicit */unsigned long long int) (+((-((+(((/* implicit */int) (unsigned short)65535))))))));
                            var_20 &= (-(960349641U));
                            arr_11 [(unsigned short)9] [(unsigned short)9] [2U] [i_3 + 1] [i_3 + 2] = ((/* implicit */int) arr_4 [i_0]);
                            var_21 = ((/* implicit */_Bool) min((min(((~(12731998318417090463ULL))), (((/* implicit */unsigned long long int) (signed char)82)))), ((+(((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)80))) & (14969858576520723332ULL)))))));
                        }
                    } 
                } 
                var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) (-(arr_8 [i_0] [i_0] [i_1] [i_1]))))));
            }
        } 
    } 
    var_23 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_6))) <= (var_16)));
    var_24 = ((/* implicit */unsigned short) var_4);
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 22; i_4 += 4) 
    {
        for (unsigned char i_5 = 0; i_5 < 22; i_5 += 3) 
        {
            {
                var_25 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_14 [i_5])), (((4294967281U) >> (((((/* implicit */int) (unsigned short)61684)) - (61659)))))))), ((~(17ULL)))));
                /* LoopNest 2 */
                for (unsigned long long int i_6 = 3; i_6 < 21; i_6 += 3) 
                {
                    for (unsigned short i_7 = 0; i_7 < 22; i_7 += 3) 
                    {
                        {
                            var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) min((((/* implicit */long long int) arr_12 [i_4] [i_5])), (min((((((-3220409265386720696LL) + (9223372036854775807LL))) << (((21U) - (21U))))), (((/* implicit */long long int) var_0)))))))));
                            var_27 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_15 [i_7] [i_6 - 2] [i_6]))))), ((~(1ULL)))));
                        }
                    } 
                } 
                var_28 = ((/* implicit */_Bool) max((var_28), (((/* implicit */_Bool) ((21U) ^ (((/* implicit */unsigned int) -1)))))));
                /* LoopNest 2 */
                for (unsigned long long int i_8 = 2; i_8 < 20; i_8 += 2) 
                {
                    for (unsigned int i_9 = 1; i_9 < 19; i_9 += 2) 
                    {
                        {
                            var_29 = ((/* implicit */unsigned short) min((var_29), (((/* implicit */unsigned short) arr_18 [i_4] [i_4] [i_4]))));
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (unsigned long long int i_10 = 1; i_10 < 19; i_10 += 1) 
                            {
                                var_30 = ((/* implicit */unsigned short) max((var_30), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_13 [i_4] [i_10])))))));
                                var_31 = ((/* implicit */int) max((var_31), (((/* implicit */int) ((arr_18 [i_10] [i_9] [i_4]) / (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
                            }
                            arr_28 [i_5] [i_5] [i_5] = (unsigned short)61704;
                        }
                    } 
                } 
                var_32 -= ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) var_3)), (arr_12 [i_4] [i_5])))), (min((((/* implicit */unsigned long long int) arr_12 [i_4] [i_4])), (18446744073709551593ULL)))));
            }
        } 
    } 
}
