/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218445
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218445 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218445
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 12; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_2 = 2; i_2 < 13; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 3; i_3 < 15; i_3 += 3) 
                    {
                        for (signed char i_4 = 2; i_4 < 13; i_4 += 2) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned char) (~(((/* implicit */int) (_Bool)1))));
                                var_21 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_1] [i_4 + 1])) ? (((/* implicit */int) arr_12 [i_1])) : (((/* implicit */int) arr_4 [i_0 + 3] [i_1] [i_2 - 1]))))), (min((((/* implicit */long long int) (_Bool)1)), (var_14)))))) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) ((((/* implicit */int) arr_14 [i_4 + 2] [i_3 - 1] [i_2] [i_2] [i_0])) <= (((/* implicit */int) (unsigned short)65535)))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned long long int i_5 = 0; i_5 < 16; i_5 += 3) 
                {
                    for (short i_6 = 3; i_6 < 15; i_6 += 3) 
                    {
                        for (signed char i_7 = 2; i_7 < 15; i_7 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) (unsigned char)101))));
                                arr_23 [i_0] [i_1] [i_5] [i_5] [i_1] [i_5] = ((/* implicit */int) min((max((((/* implicit */unsigned long long int) arr_21 [i_0] [i_7 + 1] [i_0 + 1] [i_6 + 1] [i_7] [i_0 + 4])), (var_9))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)62)))))));
                            }
                        } 
                    } 
                } 
                arr_24 [i_1] = ((/* implicit */unsigned int) (_Bool)1);
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_8 = 0; i_8 < 10; i_8 += 4) 
    {
        for (signed char i_9 = 0; i_9 < 10; i_9 += 3) 
        {
            {
                /* LoopNest 2 */
                for (short i_10 = 0; i_10 < 10; i_10 += 3) 
                {
                    for (signed char i_11 = 0; i_11 < 10; i_11 += 3) 
                    {
                        {
                            arr_34 [i_11] = ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_3 [i_8])) ? (1301369469722683008ULL) : (var_5))), (((/* implicit */unsigned long long int) (unsigned char)145))))) ? (((/* implicit */int) (unsigned char)165)) : ((((!(((/* implicit */_Bool) var_2)))) ? (((/* implicit */int) arr_14 [i_11] [i_10] [i_10] [i_9] [14ULL])) : (((/* implicit */int) min(((short)2757), (((/* implicit */short) (_Bool)1))))))));
                            arr_35 [i_11] [i_10] [i_9] [i_11] = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) 30U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) 2539295306U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)249)))) : (((/* implicit */int) (_Bool)1))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_12 = 0; i_12 < 10; i_12 += 1) 
                {
                    for (unsigned char i_13 = 3; i_13 < 9; i_13 += 1) 
                    {
                        {
                            var_23 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) -268435456))) || (((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)9380))) ^ (var_11))) + (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned char) arr_29 [i_12] [i_12] [(unsigned char)1])), (arr_40 [i_13 - 3] [i_9] [i_9] [i_9]))))))))));
                            arr_41 [i_13] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((arr_1 [i_13 - 2] [i_13 - 2]), (1701470867779456021ULL)))) ? (arr_1 [i_13 - 3] [i_13 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) var_10)), (arr_3 [i_13 - 1])))))));
                        }
                    } 
                } 
                var_24 = 3269770716U;
                var_25 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (unsigned char)101)) ? (((/* implicit */int) (signed char)-53)) : (((/* implicit */int) (_Bool)1)))) >= (((/* implicit */int) min(((_Bool)1), ((_Bool)1))))));
            }
        } 
    } 
}
