/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46312
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46312 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46312
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
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 22; i_1 += 4) 
        {
            for (unsigned short i_2 = 1; i_2 < 22; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [i_2] [i_0] = ((/* implicit */unsigned long long int) arr_5 [i_0] [i_1] [i_1]);
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 25; i_3 += 3) 
                    {
                        for (int i_4 = 0; i_4 < 25; i_4 += 3) 
                        {
                            {
                                var_16 -= ((/* implicit */unsigned long long int) (+(((arr_12 [i_1 + 1] [(unsigned char)0] [i_2 - 1] [i_4]) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_2))))));
                                var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_12 [i_0] [i_0] [i_2] [i_3]))))) ? (arr_10 [i_2 + 3] [i_1 + 1] [i_1 + 3]) : (((/* implicit */int) (unsigned short)54364))))) ? ((+(var_10))) : ((+(((/* implicit */int) (short)32767))))));
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */short) max((((/* implicit */unsigned short) min((var_13), (((/* implicit */short) arr_15 [i_0] [(unsigned short)24] [(signed char)10] [i_2] [i_0] [i_2 + 3] [i_0]))))), (max((arr_13 [i_2 + 2] [i_2] [i_2 + 2] [i_2 + 2] [i_2]), (((/* implicit */unsigned short) arr_15 [i_0] [i_2] [i_2] [i_2] [i_2] [i_2 + 3] [i_0]))))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 25; i_5 += 3) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) ((((((/* implicit */_Bool) min((var_15), (arr_11 [i_5] [(_Bool)1] [i_5] [i_5])))) || ((!(((/* implicit */_Bool) arr_16 [i_0] [i_1] [i_2] [i_1] [i_6])))))) ? (((((((/* implicit */int) (_Bool)0)) * (((/* implicit */int) (_Bool)1)))) * (((/* implicit */int) arr_2 [i_0] [i_1 - 1] [i_2 - 1])))) : (max((((/* implicit */int) (_Bool)1)), (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_20 [(unsigned char)8] [i_1] [i_1])))))))))));
                                arr_22 [14] [i_0] [(signed char)9] [i_0] [i_0] = ((/* implicit */int) 0ULL);
                                arr_23 [i_0] [i_0] = ((/* implicit */unsigned short) max(((-(((((/* implicit */int) (signed char)-64)) + (((/* implicit */int) (unsigned char)180)))))), ((+(((/* implicit */int) arr_21 [i_5] [i_1 + 3] [i_5] [i_2 - 1] [i_6] [i_5] [i_0]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */_Bool) var_2);
    var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (((((/* implicit */int) max((var_11), (((/* implicit */unsigned short) (_Bool)1))))) + (((/* implicit */int) var_4)))) : (((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) var_6))))));
}
