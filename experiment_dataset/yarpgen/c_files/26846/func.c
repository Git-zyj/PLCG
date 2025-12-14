/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26846
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26846 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26846
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
    var_10 *= ((/* implicit */unsigned char) var_9);
    /* LoopSeq 2 */
    for (int i_0 = 3; i_0 < 17; i_0 += 4) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_1 [i_0] [(signed char)8])) : (((int) min((arr_1 [i_0] [i_0 - 2]), (((/* implicit */unsigned char) var_0)))))));
        /* LoopNest 3 */
        for (unsigned char i_1 = 4; i_1 < 18; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                for (signed char i_3 = 0; i_3 < 19; i_3 += 2) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_4 = 0; i_4 < 19; i_4 += 2) 
                        {
                            var_11 = ((/* implicit */unsigned short) min((var_11), (((/* implicit */unsigned short) arr_7 [i_0] [i_1] [(signed char)0] [(unsigned short)5]))));
                            arr_15 [i_0] [(_Bool)1] [i_1] [i_1 - 4] [i_2] [i_0] [(_Bool)1] = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_12 [i_1 + 1])), (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_6)), (var_8)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)81)))))) : (min((((/* implicit */unsigned int) arr_13 [i_0 - 2] [i_0 - 2] [(unsigned char)17] [i_3] [i_4])), (0U)))))));
                            var_12 = ((/* implicit */signed char) (~((-(((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_4 [i_0 + 1] [i_1] [1U])) : (((/* implicit */int) arr_3 [(signed char)12]))))))));
                        }
                        arr_16 [i_0] [i_2] [i_3] = ((/* implicit */signed char) 574208952489738240LL);
                        arr_17 [i_1] = ((/* implicit */unsigned char) ((signed char) (_Bool)1));
                    }
                } 
            } 
        } 
    }
    for (int i_5 = 3; i_5 < 17; i_5 += 4) /* same iter space */
    {
        var_13 = ((/* implicit */unsigned long long int) max((((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_5 - 1] [i_5 + 2] [i_5] [i_5 + 1]))))), (((((/* implicit */_Bool) arr_6 [i_5 + 1] [i_5 + 2])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_5 + 1] [i_5] [i_5] [i_5] [i_5 - 1]))))) : (((/* implicit */int) arr_5 [i_5 + 2] [i_5 + 2] [i_5 + 1]))))));
        var_14 = ((/* implicit */unsigned char) ((int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_5 + 2]))) : (var_7)))) ? (((/* implicit */int) (unsigned short)23466)) : (((/* implicit */int) arr_9 [i_5])))));
        var_15 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967289U)) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)241))) : (arr_20 [i_5] [i_5]))) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))) ? (((/* implicit */int) (!((!(((/* implicit */_Bool) var_6))))))) : (((((/* implicit */int) arr_21 [i_5])) + ((+(((/* implicit */int) var_3))))))));
        arr_22 [i_5] [i_5] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_2)) : (arr_7 [i_5 - 2] [i_5 + 1] [i_5 + 1] [i_5]))) * (((((/* implicit */_Bool) arr_7 [i_5 - 3] [i_5 + 1] [i_5] [i_5])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_14 [i_5 + 2] [i_5 - 3] [i_5] [i_5 - 2] [i_5 - 1] [i_5] [i_5 - 2]))))));
    }
}
