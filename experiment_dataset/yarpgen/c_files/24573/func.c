/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24573
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24573 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24573
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
    for (short i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                arr_5 [i_1] = ((/* implicit */short) (unsigned char)234);
                /* LoopNest 2 */
                for (unsigned char i_2 = 2; i_2 < 19; i_2 += 2) 
                {
                    for (unsigned char i_3 = 0; i_3 < 21; i_3 += 4) 
                    {
                        {
                            arr_10 [i_0] [i_0] [i_1] [i_1] [i_1] [i_3] = ((/* implicit */_Bool) (unsigned char)221);
                            /* LoopSeq 2 */
                            for (unsigned char i_4 = 4; i_4 < 20; i_4 += 4) /* same iter space */
                            {
                                arr_13 [i_0] [i_1] [i_1] [i_0] [i_4] = (signed char)127;
                                var_11 = ((/* implicit */int) max((9014771371923522290LL), (((/* implicit */long long int) 375923300))));
                                arr_14 [i_1] [20U] = ((/* implicit */unsigned int) var_8);
                            }
                            for (unsigned char i_5 = 4; i_5 < 20; i_5 += 4) /* same iter space */
                            {
                                var_12 = ((/* implicit */int) (unsigned char)34);
                                var_13 = ((/* implicit */short) var_6);
                            }
                            arr_18 [i_3] [i_1] [i_1] [(unsigned char)1] = ((/* implicit */long long int) 700062365U);
                        }
                    } 
                } 
            }
        } 
    } 
    var_14 = ((/* implicit */_Bool) min((((/* implicit */long long int) max((((/* implicit */int) (unsigned char)81)), ((-(((/* implicit */int) var_8))))))), (min((9223372036854775807LL), (min((((/* implicit */long long int) (_Bool)1)), ((-9223372036854775807LL - 1LL))))))));
    /* LoopNest 2 */
    for (unsigned char i_6 = 1; i_6 < 16; i_6 += 4) 
    {
        for (unsigned short i_7 = 0; i_7 < 18; i_7 += 4) 
        {
            {
                var_15 = ((/* implicit */int) max((174289893U), (((/* implicit */unsigned int) (unsigned char)240))));
                arr_26 [i_6 + 1] [i_6] [i_7] = ((/* implicit */unsigned char) -175342702);
                var_16 = ((/* implicit */unsigned char) max(((unsigned short)35412), (((/* implicit */unsigned short) (unsigned char)167))));
            }
        } 
    } 
}
