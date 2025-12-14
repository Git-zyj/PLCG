/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47876
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47876 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47876
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
    var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) ((max((var_4), (((/* implicit */long long int) var_6)))) != (var_15))))));
    /* LoopNest 3 */
    for (short i_0 = 3; i_0 < 15; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 16; i_2 += 3) 
            {
                {
                    var_19 ^= ((/* implicit */short) var_12);
                    var_20 = var_11;
                    var_21 -= ((/* implicit */long long int) ((arr_0 [i_0 - 2] [i_0 - 1]) <= (((/* implicit */int) var_10))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_3 = 0; i_3 < 22; i_3 += 4) 
    {
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            for (unsigned char i_5 = 0; i_5 < 22; i_5 += 4) 
            {
                {
                    var_22 = ((/* implicit */int) max((var_22), (max(((~(max((arr_15 [i_3]), (((/* implicit */int) var_11)))))), (((/* implicit */int) (!(((/* implicit */_Bool) max((var_8), (((/* implicit */unsigned int) (unsigned short)54712))))))))))));
                    var_23 -= ((/* implicit */_Bool) arr_16 [i_3] [i_4] [i_5] [i_3]);
                    var_24 |= ((/* implicit */unsigned short) var_7);
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 22; i_6 += 2) 
                    {
                        for (unsigned short i_7 = 2; i_7 < 20; i_7 += 4) 
                        {
                            {
                                var_25 = ((/* implicit */int) max((max((((/* implicit */unsigned int) var_2)), (arr_19 [i_7 + 1] [i_7 + 2] [i_7] [i_7] [i_7 - 2]))), (((/* implicit */unsigned int) max(((!(((/* implicit */_Bool) arr_22 [i_3] [i_4] [i_5] [i_6] [i_7])))), (((((/* implicit */_Bool) 710261870U)) || (((/* implicit */_Bool) var_17)))))))));
                                var_26 = max((((/* implicit */unsigned short) var_9)), (((unsigned short) max((((/* implicit */long long int) (unsigned short)41517)), (-8946715305692849658LL)))));
                            }
                        } 
                    } 
                    var_27 = ((/* implicit */int) min((var_27), ((+(((((/* implicit */int) arr_21 [i_3] [i_3] [i_4] [i_5] [i_5])) / (var_12)))))));
                }
            } 
        } 
    } 
}
