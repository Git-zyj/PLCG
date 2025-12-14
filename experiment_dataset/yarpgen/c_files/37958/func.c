/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37958
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37958 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37958
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
    var_12 = ((/* implicit */unsigned char) var_8);
    /* LoopNest 3 */
    for (long long int i_0 = 4; i_0 < 16; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_11 [i_1] [i_1] |= ((/* implicit */unsigned long long int) max((((/* implicit */int) max((((/* implicit */unsigned char) arr_6 [i_1] [i_1])), (((unsigned char) arr_5 [i_2] [i_0 + 1]))))), (max((min((((/* implicit */int) arr_7 [i_0] [i_1] [i_0])), (arr_1 [i_0] [i_2]))), (((/* implicit */int) arr_8 [i_0] [i_1] [0ULL]))))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 19; i_3 += 1) 
                    {
                        for (short i_4 = 3; i_4 < 17; i_4 += 4) 
                        {
                            {
                                arr_18 [i_1] [i_1] [i_2] [i_2] [i_1] [i_2] |= ((/* implicit */unsigned long long int) arr_17 [i_1] [(signed char)4] [i_2] [i_1]);
                                var_13 |= ((/* implicit */short) arr_1 [i_0 + 3] [i_0 + 3]);
                                arr_19 [2] [i_0] [i_2] [i_2] [2] [(unsigned short)18] [i_0] = ((/* implicit */unsigned long long int) max((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_0 - 4] [i_0 - 2]))) == (arr_16 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_2] [(unsigned short)0] [i_0 + 1] [i_4 + 1])))), (((((/* implicit */int) arr_0 [i_0 - 1] [i_0 - 2])) << (((/* implicit */int) arr_0 [i_0 + 2] [i_0 + 3]))))));
                                var_14 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_0] [i_1])) ? (max((((/* implicit */long long int) arr_13 [i_0] [i_1] [i_2] [i_2])), (arr_16 [i_0] [i_1] [i_1] [i_2] [i_3] [i_4] [i_4 - 2]))) : (((/* implicit */long long int) ((/* implicit */int) max((arr_12 [(unsigned short)14] [i_1] [i_1] [(unsigned short)14] [i_4]), (arr_5 [i_0 - 2] [i_0 - 2])))))))), (((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_2])) ? (arr_9 [i_0] [i_0 - 2] [i_0]) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_14 [i_0 - 2] [i_0 - 2] [i_3] [i_0])), (arr_15 [(signed char)8]))))))));
                            }
                        } 
                    } 
                    var_15 |= ((((/* implicit */_Bool) max(((unsigned char)155), (((/* implicit */unsigned char) (signed char)59))))) ? (max((((/* implicit */long long int) arr_10 [i_1] [i_1] [i_2])), (min((6756145847356954452LL), (((/* implicit */long long int) (_Bool)0)))))) : (((/* implicit */long long int) ((/* implicit */int) max((arr_6 [i_1] [i_0 + 1]), ((signed char)41))))));
                    var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) max((max((((/* implicit */long long int) arr_2 [i_1])), (arr_16 [i_0] [i_0 + 3] [i_2] [i_1] [i_0 + 3] [i_1] [4LL]))), (((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))))))))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        for (unsigned int i_6 = 0; i_6 < 24; i_6 += 2) 
        {
            for (unsigned int i_7 = 2; i_7 < 22; i_7 += 4) 
            {
                {
                    var_17 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))));
                    var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) ((unsigned int) arr_25 [i_7 - 2])))));
                    var_19 = ((/* implicit */int) min((min(((signed char)-57), (((/* implicit */signed char) (_Bool)0)))), (((/* implicit */signed char) (_Bool)1))));
                    var_20 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) (short)-13811)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-14))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned short) max(((short)-31744), (((/* implicit */short) (_Bool)0))));
}
