/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196765
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196765 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196765
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
    for (signed char i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (signed char i_1 = 3; i_1 < 12; i_1 += 1) 
        {
            {
                /* LoopSeq 3 */
                for (short i_2 = 1; i_2 < 12; i_2 += 1) 
                {
                    arr_8 [i_1] [i_2] = ((/* implicit */unsigned int) 4924993314871816833ULL);
                    var_12 -= 13521750758837734769ULL;
                }
                for (short i_3 = 0; i_3 < 14; i_3 += 4) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned short i_4 = 3; i_4 < 10; i_4 += 4) 
                    {
                        for (short i_5 = 0; i_5 < 14; i_5 += 1) 
                        {
                            {
                                var_13 = ((/* implicit */short) (~((~(((/* implicit */int) max((((/* implicit */unsigned short) arr_12 [i_1] [i_3] [i_4] [i_5])), (var_4))))))));
                                arr_18 [i_0] [i_0] [i_0] [i_0] [i_1] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)59))) : (1998137682U)));
                                var_14 &= ((/* implicit */signed char) ((((/* implicit */_Bool) (+(var_1)))) ? ((+(arr_14 [i_4 + 4] [i_4 - 3] [i_3] [i_4 + 2] [i_4 + 4] [i_4 - 3]))) : (((/* implicit */long long int) arr_1 [i_0]))));
                            }
                        } 
                    } 
                    var_15 -= ((((/* implicit */_Bool) ((arr_15 [i_3] [i_0] [i_1] [i_1] [i_3] [i_3] [i_3]) ? (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_3] [i_1] [i_3] [i_1] [i_3] [i_3] [i_1]))) : (2588526123167858558LL)))) ? (arr_7 [i_0] [i_3]) : (((/* implicit */unsigned long long int) arr_16 [i_0] [i_0] [i_0] [i_1 - 3] [i_0])));
                    arr_19 [i_0] [i_1] = ((/* implicit */unsigned int) arr_0 [i_1 - 1]);
                }
                for (short i_6 = 0; i_6 < 14; i_6 += 4) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned short i_7 = 0; i_7 < 14; i_7 += 4) 
                    {
                        for (int i_8 = 0; i_8 < 14; i_8 += 4) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned long long int) (_Bool)1);
                                var_17 = ((/* implicit */unsigned long long int) -2147483645);
                                var_18 = ((/* implicit */short) var_1);
                            }
                        } 
                    } 
                    var_19 ^= ((/* implicit */unsigned long long int) max(((+(((/* implicit */int) (short)0)))), (((/* implicit */int) arr_15 [i_6] [i_6] [i_1 - 3] [i_1 - 1] [i_1] [i_1] [i_1 + 1]))));
                }
                var_20 = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) 2308918317350604044ULL)) ? (((/* implicit */int) (unsigned short)56959)) : ((-(((/* implicit */int) (_Bool)1))))))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) var_9)) % (max((9416022723359921075ULL), (((/* implicit */unsigned long long int) (unsigned char)133))))));
    /* LoopNest 3 */
    for (unsigned int i_9 = 0; i_9 < 20; i_9 += 1) 
    {
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            for (long long int i_11 = 0; i_11 < 20; i_11 += 2) 
            {
                {
                    arr_33 [i_10] = ((/* implicit */_Bool) (-(arr_29 [i_9] [i_9])));
                    var_22 -= ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_30 [i_9]))));
                    var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) min((arr_32 [i_9] [i_10] [i_10]), (((/* implicit */short) arr_27 [i_11])))))));
                }
            } 
        } 
    } 
}
