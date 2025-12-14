/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46740
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46740 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46740
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
    var_14 = ((/* implicit */_Bool) max((var_14), (min((var_3), (((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) 3917527225U))))))));
    var_15 &= ((((/* implicit */int) var_3)) < (((/* implicit */int) var_6)));
    /* LoopNest 3 */
    for (unsigned char i_0 = 3; i_0 < 21; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 4; i_2 < 22; i_2 += 1) 
            {
                {
                    var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) max((((var_3) ? (((/* implicit */int) arr_6 [i_0 - 3] [i_0 - 3])) : (((/* implicit */int) arr_6 [i_0 - 1] [i_0 + 2])))), ((-(((/* implicit */int) arr_0 [i_0 - 3])))))))));
                    var_17 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_5 [i_1] [i_2 - 4])) ? (arr_5 [i_1] [i_2 - 4]) : (arr_5 [i_1] [i_2 - 4]))), (((((/* implicit */_Bool) arr_2 [i_0] [i_0 - 3])) ? (((/* implicit */int) min((arr_2 [i_0] [i_1]), (((/* implicit */short) (_Bool)1))))) : (((/* implicit */int) var_1))))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
    {
        for (unsigned int i_4 = 0; i_4 < 14; i_4 += 4) 
        {
            for (unsigned short i_5 = 2; i_5 < 12; i_5 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        var_18 = min((((/* implicit */unsigned int) var_11)), (((((/* implicit */_Bool) arr_15 [i_6] [i_5 + 1] [i_3 - 1])) ? (arr_15 [i_6] [i_5 + 1] [i_3 - 1]) : (arr_15 [i_5 - 2] [i_5 + 2] [i_3 - 1]))));
                        var_19 = ((/* implicit */unsigned short) min((var_2), (((/* implicit */unsigned long long int) (unsigned char)11))));
                        var_20 = ((/* implicit */unsigned int) ((max((((/* implicit */unsigned int) ((((/* implicit */int) var_5)) >= (((/* implicit */int) (unsigned short)35152))))), (arr_4 [i_6] [i_6]))) < (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), (var_9)))))));
                        var_21 = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_11 [i_3] [i_3 - 1]))));
                        /* LoopSeq 1 */
                        for (unsigned int i_7 = 0; i_7 < 14; i_7 += 3) 
                        {
                            var_22 = ((min((((/* implicit */int) arr_3 [i_3 - 1])), (908399047))) >= (((/* implicit */int) arr_8 [i_3] [i_6] [i_6])));
                            var_23 = ((/* implicit */unsigned char) ((4294967295U) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)86)))));
                            var_24 = ((/* implicit */unsigned short) (~(((/* implicit */int) (signed char)-76))));
                        }
                    }
                    var_25 = ((/* implicit */short) max((min((arr_12 [i_5 + 2] [i_4]), (arr_12 [i_5 - 2] [(_Bool)0]))), ((~(var_12)))));
                }
            } 
        } 
    } 
}
