/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52268
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52268 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52268
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
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_3 = 1; i_3 < 22; i_3 += 1) /* same iter space */
                    {
                        var_16 = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_1 [i_3 + 1])) + (2147483647))) << (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_7 [i_0] [i_1] [i_0] [i_0])) : (arr_8 [i_0] [i_1] [i_1] [i_3] [i_0])))));
                        var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) ((unsigned char) arr_7 [14ULL] [i_1] [14ULL] [i_3])))));
                        var_18 = ((/* implicit */unsigned char) min(((((!(((/* implicit */_Bool) var_11)))) ? (((/* implicit */unsigned long long int) arr_9 [i_3 - 1] [i_3 - 1] [(unsigned char)3] [i_2])) : (var_3))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_5)))))));
                    }
                    for (unsigned long long int i_4 = 1; i_4 < 22; i_4 += 1) /* same iter space */
                    {
                        var_19 = max((((((/* implicit */_Bool) arr_8 [i_2] [i_4 + 1] [(short)14] [i_4 + 1] [i_4 + 1])) ? (1785904791871139468ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [3] [(_Bool)1] [i_2] [16LL]))))), (((/* implicit */unsigned long long int) (_Bool)1)));
                        arr_12 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */int) ((signed char) (((!(var_4))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) ((unsigned char) (-2147483647 - 1)))))));
                    }
                    arr_13 [i_2] [i_2] &= var_11;
                    var_20 -= ((/* implicit */int) min((((/* implicit */unsigned long long int) ((arr_6 [i_1] [i_1] [i_2]) ? (((unsigned int) arr_6 [i_0] [i_0] [i_2])) : (((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1)))))))), (((((/* implicit */_Bool) ((signed char) var_13))) ? (arr_3 [i_2] [i_2] [i_2]) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_11 [(unsigned char)6] [i_0] [i_1] [i_2])) & (((/* implicit */int) arr_10 [i_0])))))))));
                    var_21 = ((/* implicit */_Bool) arr_2 [i_0]);
                }
            } 
        } 
    } 
    var_22 &= ((/* implicit */unsigned char) var_13);
    var_23 = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) 394691049572415001ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (10333095464188857896ULL))) : (var_11))) << (((min((((((/* implicit */_Bool) 539143771)) ? (var_9) : (var_1))), (((((/* implicit */_Bool) var_1)) ? (var_11) : (var_10))))) - (10804156324659663601ULL)))));
}
