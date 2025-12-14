/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239014
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239014 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239014
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [i_1] = min((2146435072), (((/* implicit */int) var_7)));
                /* LoopSeq 2 */
                for (signed char i_2 = 0; i_2 < 11; i_2 += 3) 
                {
                    arr_9 [i_1] [(_Bool)1] [i_2] = ((unsigned short) (signed char)20);
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        arr_12 [i_0] [10ULL] [10ULL] [i_2] [(unsigned short)10] = arr_5 [(unsigned short)1];
                        arr_13 [i_1] = ((/* implicit */int) arr_4 [i_0]);
                    }
                    arr_14 [i_0] [10] [6] [4] &= ((/* implicit */signed char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) arr_4 [i_0])))), (((/* implicit */int) ((signed char) arr_11 [(unsigned short)6] [i_1])))))) ? (((((/* implicit */int) var_11)) << (((/* implicit */int) ((signed char) (_Bool)1))))) : (((/* implicit */int) ((signed char) arr_11 [4] [i_1 - 1])))));
                }
                for (signed char i_4 = 0; i_4 < 11; i_4 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 11; i_5 += 2) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                arr_24 [i_1] [i_1] [(_Bool)1] [i_5] [i_6] [i_4] = ((((/* implicit */_Bool) (-(arr_17 [i_1] [(_Bool)1] [i_1] [i_1])))) ? (((((_Bool) 536870911)) ? (((((/* implicit */_Bool) (unsigned short)52554)) ? (((/* implicit */int) arr_10 [(_Bool)1] [i_1] [i_1] [i_1])) : (arr_15 [i_0]))) : ((+(((/* implicit */int) arr_5 [i_5])))))) : (((/* implicit */int) min(((_Bool)0), (var_16)))));
                                arr_25 [i_0] [(signed char)6] [i_1] [(_Bool)1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) ((signed char) ((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_1]))) : (var_12))))) - (1769958959)));
                            }
                        } 
                    } 
                    arr_26 [(_Bool)1] [(_Bool)1] [i_4] [i_1] = ((/* implicit */signed char) (+(((((/* implicit */int) (unsigned short)12981)) ^ (((/* implicit */int) (signed char)71))))));
                }
                arr_27 [i_1] [i_1] = ((/* implicit */signed char) arr_17 [i_1] [i_0] [i_0] [2]);
            }
        } 
    } 
    var_17 = ((/* implicit */int) ((((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) var_14)) ? (var_14) : (((/* implicit */int) var_16)))) : (((/* implicit */int) ((_Bool) var_3))))) <= (((((/* implicit */_Bool) min((var_6), (((/* implicit */int) var_3))))) ? (((/* implicit */int) var_2)) : (((((/* implicit */_Bool) 2169399652115465355ULL)) ? (((/* implicit */int) (signed char)-117)) : (var_0)))))));
    var_18 = ((/* implicit */unsigned int) var_13);
    /* LoopSeq 1 */
    for (int i_7 = 1; i_7 < 10; i_7 += 3) 
    {
        arr_30 [i_7] [i_7] = var_11;
        arr_31 [i_7 + 2] = ((/* implicit */signed char) min((((/* implicit */unsigned int) ((((int) arr_28 [i_7] [i_7 + 3])) / (((((/* implicit */_Bool) (signed char)0)) ? (arr_29 [i_7]) : (((/* implicit */int) var_13))))))), (((((/* implicit */_Bool) ((2672876938U) / (((/* implicit */unsigned int) ((/* implicit */int) arr_28 [i_7] [(signed char)11])))))) ? (((2644387485U) * (((/* implicit */unsigned int) ((/* implicit */int) var_11))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_0))))))));
    }
}
