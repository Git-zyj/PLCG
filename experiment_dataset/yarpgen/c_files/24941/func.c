/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24941
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24941 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24941
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
    for (long long int i_0 = 2; i_0 < 16; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                {
                    var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned char) var_16))))))));
                    var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) min((max((((/* implicit */int) ((var_11) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)17)))))), (((((/* implicit */_Bool) 4653152044002383795LL)) ? (((/* implicit */int) (unsigned char)141)) : (((/* implicit */int) arr_2 [i_0 - 2])))))), (((/* implicit */int) (!(((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned char)24)))))))))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_22 -= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) var_19))))) / ((-(var_4)))));
                        var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) ((long long int) (unsigned char)0)))));
                        var_24 = ((/* implicit */signed char) min((var_24), (var_17)));
                        var_25 -= ((/* implicit */_Bool) (unsigned char)141);
                    }
                    for (long long int i_4 = 0; i_4 < 19; i_4 += 3) 
                    {
                        arr_13 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_6)), (arr_6 [i_0 + 3] [i_0] [i_0 + 2])))) && (((/* implicit */_Bool) (((_Bool)1) ? (arr_12 [i_0] [i_1] [i_0 - 1]) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), (var_13))))))))));
                        arr_14 [i_4] [i_4] [i_0] [5LL] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_4])) ? (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_12 [i_4] [i_1] [i_0 + 1])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_0 [i_4])))))) : (((/* implicit */int) var_3))));
                        arr_15 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) min((arr_3 [i_0 + 2] [i_1] [i_0 - 1]), (arr_3 [i_0 + 1] [i_0] [i_0 + 1])))) / (((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), ((signed char)1)))) : (((/* implicit */int) ((_Bool) (_Bool)1)))))));
                    }
                    arr_16 [i_2] [i_1] [i_0] [i_2] = ((((((/* implicit */_Bool) (unsigned char)99)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127))) : (1586397323929828626ULL))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)0))));
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                arr_22 [i_5] [i_5] [(unsigned char)2] [i_0] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((unsigned char) (((_Bool)1) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_17 [i_0] [i_0] [i_0] [i_0] [i_6] [i_0])))))), (9870451820848611519ULL)));
                                arr_23 [i_0] [i_0] [i_0] [i_0 + 2] [(unsigned char)4] [i_0] [(_Bool)1] &= ((/* implicit */_Bool) (~((+(4958065888414224805ULL)))));
                                arr_24 [14LL] [(_Bool)1] [14LL] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_2 [i_5]))))) + (var_4)))) ? (((/* implicit */int) (!(min(((_Bool)1), (arr_2 [i_5])))))) : ((-(((/* implicit */int) arr_17 [i_0 + 1] [i_0 + 2] [i_0 + 1] [i_0] [i_0 - 2] [i_6]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_26 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_3)))))))), (((var_12) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))));
    var_27 = ((/* implicit */unsigned char) var_18);
}
