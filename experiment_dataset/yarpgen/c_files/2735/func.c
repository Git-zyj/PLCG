/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2735
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2735 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2735
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
    var_15 = (!(((/* implicit */_Bool) var_12)));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 3 */
                for (short i_2 = 0; i_2 < 20; i_2 += 1) /* same iter space */
                {
                    var_16 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((((/* implicit */int) arr_7 [i_0] [i_0])) * (((/* implicit */int) var_7))))))) ? (var_9) : (max((((((/* implicit */unsigned int) ((/* implicit */int) var_7))) * (0U))), (((((/* implicit */_Bool) var_7)) ? (var_6) : (arr_2 [i_0])))))));
                    var_17 = min((((((/* implicit */_Bool) arr_7 [i_0] [i_1])) ? (((/* implicit */int) arr_7 [i_1] [i_2])) : (((/* implicit */int) arr_7 [i_2] [i_1])))), (((/* implicit */int) var_2)));
                }
                for (short i_3 = 0; i_3 < 20; i_3 += 1) /* same iter space */
                {
                    var_18 = ((/* implicit */unsigned long long int) var_13);
                    /* LoopNest 2 */
                    for (unsigned char i_4 = 0; i_4 < 20; i_4 += 1) 
                    {
                        for (unsigned char i_5 = 2; i_5 < 18; i_5 += 3) 
                        {
                            {
                                arr_15 [i_0] [i_0] [i_0] [i_4] [i_5] [i_3] = ((/* implicit */signed char) max((((((((/* implicit */_Bool) arr_14 [i_3] [i_3] [i_3])) || (((/* implicit */_Bool) arr_14 [i_3] [i_1] [i_1])))) ? (((/* implicit */int) ((((/* implicit */_Bool) 506930477U)) || (((/* implicit */_Bool) (unsigned char)41))))) : ((-(((/* implicit */int) (signed char)-101)))))), (((/* implicit */int) ((((/* implicit */int) max((arr_7 [i_1] [i_0]), ((signed char)-101)))) > (((/* implicit */int) arr_8 [i_5 + 1] [i_5 + 2])))))));
                                var_19 = arr_5 [i_0] [i_1];
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_6 = 3; i_6 < 19; i_6 += 1) 
                    {
                        for (int i_7 = 0; i_7 < 20; i_7 += 2) 
                        {
                            {
                                arr_24 [i_7] [i_6] [i_3] [i_3] [i_1] [i_0] = ((/* implicit */unsigned int) (+(min((((/* implicit */long long int) ((((/* implicit */int) (signed char)-101)) == (((/* implicit */int) (signed char)101))))), (((((/* implicit */_Bool) arr_23 [i_0] [i_6 + 1] [i_6 + 1] [i_6] [i_7] [i_6 + 1] [i_6 + 1])) ? (((/* implicit */long long int) var_12)) : (arr_1 [i_0])))))));
                                arr_25 [i_0] [i_3] [i_3] [i_0] = arr_18 [i_0] [i_6 - 3] [i_0] [i_6 - 1];
                            }
                        } 
                    } 
                }
                for (signed char i_8 = 0; i_8 < 20; i_8 += 2) 
                {
                    /* LoopSeq 1 */
                    for (int i_9 = 0; i_9 < 20; i_9 += 2) 
                    {
                        var_20 = ((/* implicit */int) min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)-101))))), (arr_2 [i_1])))), (((((/* implicit */_Bool) max((arr_0 [i_0]), (var_6)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : ((+(arr_27 [i_0] [i_9])))))));
                        var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) var_13))));
                    }
                    var_22 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_13) - (arr_0 [i_0])))) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_3)) << (((arr_18 [i_8] [i_1] [i_0] [i_0]) - (5963689552235855524ULL)))))) : ((-(arr_0 [i_0])))));
                }
                var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) ((((((arr_1 [i_0]) + (9223372036854775807LL))) >> (((arr_1 [i_1]) + (8320368605353893303LL))))) + (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-101)) ? (((/* implicit */int) (signed char)-101)) : (((/* implicit */int) (signed char)-110))))))))));
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned char) (+(((/* implicit */int) (signed char)101))));
}
