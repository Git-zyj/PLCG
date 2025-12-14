/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193981
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193981 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193981
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
    var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) var_3))));
    var_21 = ((/* implicit */unsigned char) var_17);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                arr_6 [(unsigned char)6] [(unsigned char)6] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */int) min((min(((unsigned short)65517), (((/* implicit */unsigned short) var_7)))), (((/* implicit */unsigned short) ((4261412864U) == (((/* implicit */unsigned int) ((/* implicit */int) (signed char)96))))))))) ^ (((/* implicit */int) (signed char)-96))));
                var_22 *= ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-1))) ^ (arr_4 [i_0]));
                /* LoopSeq 2 */
                for (unsigned int i_2 = 3; i_2 < 10; i_2 += 4) /* same iter space */
                {
                    var_23 = ((/* implicit */unsigned char) (signed char)96);
                    arr_10 [i_0] [i_0] [i_0] [i_0] = min((((((/* implicit */unsigned int) ((/* implicit */int) var_19))) ^ (((var_11) & (arr_9 [i_2] [i_2 - 2] [i_2 + 1]))))), (min((max((((/* implicit */unsigned int) arr_0 [i_0] [i_0])), (2583951205U))), (((/* implicit */unsigned int) ((var_10) < (var_12)))))));
                    arr_11 [i_0] [i_0] [i_0] [i_0] &= ((/* implicit */signed char) min((((/* implicit */unsigned short) min((arr_1 [i_2 - 3]), (arr_1 [i_2 - 3])))), (min(((unsigned short)61263), (((/* implicit */unsigned short) arr_1 [i_2 - 2]))))));
                    var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) 4261412864U))));
                }
                for (unsigned int i_3 = 3; i_3 < 10; i_3 += 4) /* same iter space */
                {
                    arr_16 [6U] = min((((/* implicit */unsigned int) min(((!(((/* implicit */_Bool) arr_4 [2U])))), (((arr_2 [i_0]) >= (4261412864U)))))), (min((((/* implicit */unsigned int) arr_12 [i_0])), (arr_9 [(unsigned short)0] [i_1] [i_1]))));
                    arr_17 [5U] [i_1] [5U] [i_1] = ((/* implicit */unsigned int) (unsigned char)227);
                    var_25 = var_4;
                }
            }
        } 
    } 
    var_26 = ((/* implicit */signed char) ((((/* implicit */int) var_3)) >> (((/* implicit */int) ((123205604U) > (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_4 = 0; i_4 < 10; i_4 += 1) 
    {
        var_27 = ((/* implicit */unsigned char) ((arr_9 [3U] [3U] [(unsigned char)7]) == (arr_9 [i_4] [i_4] [i_4])));
        arr_22 [i_4] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [(signed char)9] [i_4])) >> (((arr_5 [i_4]) - (1244907332U)))));
        arr_23 [i_4] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_4] [i_4] [i_4]))) <= (var_10)));
    }
}
