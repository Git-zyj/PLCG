/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53454
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53454 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53454
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
    var_19 = min((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (var_14) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-20)))))), (((((/* implicit */_Bool) var_2)) ? (14704507630322510905ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((short) var_17)))))));
    var_20 += ((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_3))))) : (max((var_12), (((/* implicit */unsigned long long int) var_3))))))));
    var_21 *= ((/* implicit */_Bool) var_9);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                var_22 = ((/* implicit */unsigned long long int) ((signed char) arr_3 [i_0]));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 21; i_2 += 2) 
                {
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) var_3)) + ((+(var_18)))))) || (((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) (signed char)20)) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1] [i_2] [i_4]))))))))))));
                                arr_13 [i_0] [i_1] [i_0] [i_1] [i_1] [i_4] [i_1] = (!(((/* implicit */_Bool) ((((/* implicit */int) arr_11 [i_0] [i_1] [i_3 + 1] [i_3 + 1] [i_4] [5LL])) - (((/* implicit */int) var_7))))));
                                var_24 |= ((/* implicit */int) max((((/* implicit */short) (signed char)-30)), ((short)8921)));
                            }
                        } 
                    } 
                } 
                var_25 = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_5 [i_0] [i_1] [i_0])) >= (((/* implicit */int) arr_5 [i_0] [i_0] [i_0])))) ? (((/* implicit */int) min((arr_5 [i_0] [i_0] [i_1]), (arr_5 [i_1] [i_0] [i_0])))) : (((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_5 [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_5 [i_0] [i_0] [i_0]))))));
            }
        } 
    } 
}
