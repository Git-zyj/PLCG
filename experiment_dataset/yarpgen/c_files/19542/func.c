/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19542
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19542 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19542
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
    var_18 = (+(var_12));
    var_19 *= ((/* implicit */int) ((min((((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)28515))))), ((+(2251799813684224ULL))))) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18444492273895867394ULL)) ? (18444492273895867401ULL) : (((/* implicit */unsigned long long int) var_17))))) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)0)) && (((/* implicit */_Bool) (short)27304))))) : (((/* implicit */int) ((var_6) || (((/* implicit */_Bool) var_0))))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (unsigned short i_1 = 2; i_1 < 11; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((max((((/* implicit */unsigned int) (unsigned short)17993)), (14U))) - (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_1] [i_0])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_4)))))))), (min((15787148465848232315ULL), (((/* implicit */unsigned long long int) (~(-404306204))))))));
                arr_6 [i_0] [i_1 + 1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) 2251799813684214ULL))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1 + 1] [i_1]))) : (0ULL))))));
                /* LoopNest 3 */
                for (unsigned int i_2 = 2; i_2 < 13; i_2 += 1) 
                {
                    for (unsigned int i_3 = 1; i_3 < 13; i_3 += 3) 
                    {
                        for (int i_4 = 1; i_4 < 12; i_4 += 3) 
                        {
                            {
                                arr_17 [i_0] [i_2] [i_0] [i_0] [i_0 + 1] = arr_1 [(signed char)8];
                                var_21 ^= ((/* implicit */int) max((((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) == (arr_11 [i_2 - 1] [i_0 + 1] [i_3] [0U] [(unsigned short)2] [i_3 + 1])))), ((+(arr_11 [i_4 - 1] [6LL] [i_4 + 2] [i_2 - 2] [6LL] [i_1 + 1])))));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 1 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    arr_20 [i_0] [i_1 - 2] [i_5] [13LL] = ((/* implicit */unsigned short) (-(((/* implicit */int) var_10))));
                    arr_21 [(_Bool)1] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_19 [(unsigned short)1] [i_1] [i_5]))))), ((-(min((((/* implicit */unsigned long long int) (short)-27323)), (arr_0 [i_1])))))));
                    /* LoopNest 2 */
                    for (unsigned short i_6 = 2; i_6 < 14; i_6 += 1) 
                    {
                        for (unsigned int i_7 = 1; i_7 < 14; i_7 += 4) 
                        {
                            {
                                arr_26 [i_6] [6ULL] = ((/* implicit */unsigned char) ((54070350) < ((-2147483647 - 1))));
                                arr_27 [i_6] [i_1 + 1] = ((/* implicit */unsigned long long int) arr_24 [i_0 + 1] [i_1] [i_5] [i_6] [i_6]);
                            }
                        } 
                    } 
                    arr_28 [i_0] [i_1 + 1] [i_5] [i_5] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) 1125898833100800LL)), (2251799813684226ULL)));
                }
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (max((((/* implicit */int) ((2251799813684224ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))), ((~(((/* implicit */int) var_10)))))) : (((/* implicit */int) var_5))));
}
