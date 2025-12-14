/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239021
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239021 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239021
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
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_4 [i_0] [i_0] = arr_1 [i_0];
        var_20 ^= ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (short)(-32767 - 1))), (((unsigned long long int) arr_2 [i_0] [i_0]))));
        var_21 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 676515985)) ? (416074761) : (((/* implicit */int) (signed char)112))));
    }
    for (unsigned int i_1 = 0; i_1 < 12; i_1 += 1) 
    {
        var_22 = ((/* implicit */int) (+(min((((/* implicit */long long int) ((((/* implicit */_Bool) var_16)) && (((/* implicit */_Bool) -6922478433507202877LL))))), (((arr_5 [i_1]) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1]))) : (var_6)))))));
        var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_18)) ? (((((/* implicit */_Bool) var_19)) ? (((-4774906435914561607LL) / (((/* implicit */long long int) ((/* implicit */int) var_10))))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (signed char)16)))))) : (((((/* implicit */_Bool) ((arr_5 [i_1]) ? (arr_1 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))) ? (((var_5) & (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1]))))) : (((/* implicit */long long int) ((/* implicit */int) (short)511)))))));
        var_24 = ((/* implicit */unsigned short) ((unsigned long long int) (+(((arr_2 [i_1] [9LL]) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)11))))))));
    }
    /* LoopNest 2 */
    for (unsigned long long int i_2 = 3; i_2 < 18; i_2 += 2) 
    {
        for (unsigned short i_3 = 0; i_3 < 19; i_3 += 2) 
        {
            {
                var_25 *= min((arr_13 [i_2] [i_3]), (arr_13 [i_2] [i_2]));
                arr_14 [i_2] [i_2] = ((/* implicit */long long int) (signed char)112);
            }
        } 
    } 
    var_26 ^= var_0;
    /* LoopSeq 1 */
    for (int i_4 = 0; i_4 < 12; i_4 += 2) 
    {
        var_27 = ((/* implicit */unsigned long long int) max((var_27), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) (signed char)-94)), (max((arr_16 [i_4]), (((/* implicit */long long int) var_15))))))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_4]))))))))));
        var_28 = min((((/* implicit */long long int) ((unsigned short) var_11))), (((max((arr_9 [i_4] [i_4]), (((/* implicit */long long int) arr_12 [i_4] [i_4])))) ^ (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_4] [(_Bool)0]))))));
        var_29 = ((/* implicit */int) (+(min((((/* implicit */unsigned long long int) arr_17 [i_4])), (((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) var_14)) : (var_18)))))));
    }
}
