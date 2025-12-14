/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35850
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35850 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35850
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
    for (unsigned int i_0 = 4; i_0 < 19; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 18; i_1 += 1) 
        {
            {
                var_19 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) arr_4 [i_0 - 3]))) ? (((/* implicit */int) var_6)) : (((((/* implicit */_Bool) arr_4 [i_0 + 1])) ? (((/* implicit */int) arr_4 [i_0 + 1])) : (((/* implicit */int) arr_4 [i_0 - 3]))))));
                var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_0 - 1])) * (((/* implicit */int) arr_4 [i_0 - 4]))))) ? (((((((/* implicit */_Bool) arr_1 [i_1 + 1] [i_0])) ? (arr_1 [i_0] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))) & (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_3 [i_0] [i_1])), (var_6))))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)32329)) ? (((/* implicit */int) (signed char)-29)) : (-44681753)))))))));
                /* LoopSeq 1 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    var_21 = ((/* implicit */unsigned short) (~(((unsigned long long int) arr_1 [i_1 + 1] [i_0 - 4]))));
                    arr_7 [i_0] [i_1] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_6 [i_2] [i_1] [i_0] [i_0]))))) && (((/* implicit */_Bool) arr_6 [i_0 - 2] [i_1] [i_0 - 2] [i_2 - 1]))));
                    var_22 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_9))));
                    var_23 = ((unsigned char) max((((/* implicit */unsigned char) arr_5 [i_0] [i_1] [i_1])), (var_18)));
                }
            }
        } 
    } 
    var_24 &= ((/* implicit */int) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_12))))) < (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_13)))));
    var_25 = ((/* implicit */int) var_1);
    /* LoopNest 3 */
    for (unsigned short i_3 = 2; i_3 < 16; i_3 += 4) 
    {
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            for (unsigned char i_5 = 2; i_5 < 17; i_5 += 3) 
            {
                {
                    var_26 += ((/* implicit */_Bool) max((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_0 [i_3 + 1])) : (((/* implicit */int) arr_0 [i_3 - 1])))), (((((/* implicit */_Bool) arr_0 [i_3 - 1])) ? (((/* implicit */int) arr_0 [i_3 - 2])) : (((/* implicit */int) arr_0 [i_3 - 2]))))));
                    var_27 = ((/* implicit */unsigned long long int) var_14);
                    var_28 = ((/* implicit */unsigned int) (((~(((((/* implicit */_Bool) arr_2 [i_3] [14ULL])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) : (arr_8 [i_3]))))) >= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_3 + 1])) ? (((/* implicit */int) arr_5 [i_5 - 2] [i_3 - 2] [i_3 - 2])) : (((/* implicit */int) arr_5 [i_5 - 1] [i_3 + 1] [i_3 + 1])))))));
                }
            } 
        } 
    } 
}
