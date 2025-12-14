/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231260
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231260 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231260
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_17 = ((/* implicit */_Bool) 12413666696903137069ULL);
        arr_2 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) <= ((((~(12413666696903137075ULL))) * (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)52917)) / (-564336195))))))));
        arr_3 [i_0] = ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) -2086543994)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)11996))) : (arr_0 [i_0] [i_0]))));
        arr_4 [i_0] [i_0] = ((/* implicit */int) (unsigned short)57374);
    }
    var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) var_13))));
    /* LoopNest 2 */
    for (signed char i_1 = 0; i_1 < 19; i_1 += 4) 
    {
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_3 = 0; i_3 < 19; i_3 += 3) 
                {
                    for (int i_4 = 4; i_4 < 15; i_4 += 2) 
                    {
                        {
                            var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((int) (unsigned short)12609))) && ((!((!(arr_13 [(unsigned char)18] [i_3] [i_3] [i_3] [i_3])))))));
                            /* LoopSeq 2 */
                            for (signed char i_5 = 1; i_5 < 15; i_5 += 1) 
                            {
                                arr_18 [i_1] [i_2] [i_5] [i_1] [i_1] = ((/* implicit */unsigned int) -2678677746926761285LL);
                                var_20 = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned char) arr_11 [i_1] [i_2] [i_2]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (((var_2) & (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_8 [i_4]))) & (var_13))))))));
                                var_21 += ((/* implicit */unsigned int) ((unsigned short) (unsigned short)1));
                            }
                            for (unsigned char i_6 = 0; i_6 < 19; i_6 += 2) 
                            {
                                arr_21 [i_6] [i_4] [i_2] [i_2] [i_1] = ((/* implicit */signed char) var_2);
                                arr_22 [i_1] [i_1] [i_1] [i_1] [i_1] [(unsigned short)16] [i_1] = (((-((-(((/* implicit */int) var_0)))))) * ((+(((((/* implicit */int) var_6)) * (((/* implicit */int) var_0)))))));
                                var_22 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (arr_12 [i_3] [i_2] [i_6]) : (((/* implicit */unsigned int) var_4))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (906475152U)))) * (((unsigned long long int) (-(((/* implicit */int) var_8)))))));
                                arr_23 [i_1] [i_1] [i_2] [i_3] [i_3] [i_4] [i_4] = ((/* implicit */int) ((unsigned int) ((arr_13 [i_1] [i_4 + 4] [i_1] [i_1] [i_4]) ? (((/* implicit */int) arr_13 [i_1] [i_4 + 4] [i_4 + 4] [i_4] [i_4 + 1])) : (((/* implicit */int) arr_13 [i_1] [i_4 + 4] [1] [i_2] [i_6])))));
                                arr_24 [i_6] [i_4 + 1] [i_2] [i_2] [i_1] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_5 [i_2])) ? (arr_5 [i_1]) : (arr_5 [i_1]))) + (((/* implicit */long long int) (~(((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (signed char)-76)) : (((/* implicit */int) var_9)))))))));
                            }
                        }
                    } 
                } 
                var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) ((((/* implicit */int) arr_9 [i_2] [i_2] [i_1])) ^ (arr_19 [i_2] [i_2] [i_1] [i_1] [i_1]))))));
                var_24 = ((/* implicit */short) ((int) min((arr_5 [i_1]), (arr_5 [i_2]))));
            }
        } 
    } 
}
