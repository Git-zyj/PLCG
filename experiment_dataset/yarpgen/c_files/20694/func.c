/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20694
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20694 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20694
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
    /* LoopSeq 1 */
    for (long long int i_0 = 1; i_0 < 9; i_0 += 2) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */_Bool) max((max((((/* implicit */unsigned int) max((arr_2 [i_0] [i_0]), (((/* implicit */short) (signed char)-110))))), (max((1386652299U), (((/* implicit */unsigned int) (short)20778)))))), (((/* implicit */unsigned int) var_11))));
        arr_4 [(unsigned char)6] = ((/* implicit */short) ((((/* implicit */_Bool) max((arr_2 [i_0 + 1] [i_0 + 1]), (((/* implicit */short) var_9))))) ? (((/* implicit */int) ((signed char) arr_2 [i_0 + 1] [i_0 - 1]))) : (((((/* implicit */_Bool) arr_2 [i_0 + 2] [i_0 + 2])) ? (((/* implicit */int) (signed char)-51)) : (((/* implicit */int) arr_2 [i_0 + 2] [i_0 - 1]))))));
    }
    var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) ((((/* implicit */int) min((max((((/* implicit */short) (signed char)-51)), (var_18))), (((/* implicit */short) var_5))))) >= (((/* implicit */int) (unsigned short)40739)))))));
    var_20 = ((8412143895883628405LL) / (((/* implicit */long long int) ((/* implicit */int) var_6))));
    var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) ((((/* implicit */_Bool) max((var_8), (((/* implicit */long long int) var_15))))) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : ((-(min((-8412143895883628405LL), (230877964679380784LL))))))))));
    /* LoopNest 2 */
    for (unsigned char i_1 = 0; i_1 < 20; i_1 += 1) 
    {
        for (long long int i_2 = 0; i_2 < 20; i_2 += 3) 
        {
            {
                arr_10 [i_1] [i_2] |= ((/* implicit */long long int) arr_9 [i_2]);
                /* LoopNest 3 */
                for (long long int i_3 = 0; i_3 < 20; i_3 += 4) 
                {
                    for (unsigned short i_4 = 0; i_4 < 20; i_4 += 2) 
                    {
                        for (unsigned char i_5 = 0; i_5 < 20; i_5 += 3) 
                        {
                            {
                                arr_17 [i_5] [(unsigned char)16] [(signed char)9] [(signed char)9] [(_Bool)1] [i_2] [i_1] = ((/* implicit */long long int) ((max((((/* implicit */unsigned long long int) arr_6 [i_4])), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_1] [13LL] [19LL] [(signed char)11] [i_1] [15]))) & (var_7))))) << (((((/* implicit */int) arr_5 [(unsigned char)19])) - (5757)))));
                                arr_18 [i_5] [1U] [6] [i_2] [i_1] = ((/* implicit */unsigned short) (((+(arr_12 [i_5]))) * (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) min((arr_6 [i_2]), (arr_6 [i_4])))) && (((/* implicit */_Bool) 3021354060600400662LL))))))));
                                arr_19 [0U] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */_Bool) max((230877964679380784LL), (((/* implicit */long long int) max((((/* implicit */unsigned int) arr_6 [i_2])), (arr_16 [i_3] [i_4]))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
