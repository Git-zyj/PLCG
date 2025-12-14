/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222120
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222120 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222120
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
    var_17 = ((/* implicit */short) max((max((((((/* implicit */int) (unsigned short)49793)) ^ (-18))), (((/* implicit */int) var_3)))), (((/* implicit */int) var_4))));
    var_18 = ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), (var_15)))) : (((/* implicit */int) max((((/* implicit */unsigned short) (signed char)0)), ((unsigned short)15742))))))) ^ (((unsigned long long int) 1692408069)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                var_19 = ((/* implicit */short) (!((!(((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0]))))));
                var_20 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)75)) + (((/* implicit */int) arr_2 [i_0] [i_1]))))) : ((-(var_2))))) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_15)), (140737488355327ULL)))) ? (((/* implicit */int) max((arr_3 [i_0] [i_0]), ((unsigned short)0)))) : (((/* implicit */int) ((short) var_4))))))));
                /* LoopNest 2 */
                for (int i_2 = 4; i_2 < 13; i_2 += 2) 
                {
                    for (short i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                            {
                                arr_16 [i_0] [i_1] [i_2 - 3] [i_3] [(unsigned char)3] [i_2 - 3] [i_0] = ((/* implicit */unsigned long long int) ((signed char) max((arr_6 [i_3] [i_4]), (((/* implicit */unsigned long long int) var_0)))));
                                arr_17 [i_0] [i_0] [i_0] [i_0] [i_2] [i_3] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)15743)) != (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65534)) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)15728)))))) || (((/* implicit */_Bool) (unsigned short)15728)))))));
                                arr_18 [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_13 [i_2 - 3] [(_Bool)1] [i_2 - 3] [i_2 - 4] [i_2 - 4] [i_2] [i_2 - 4])) ^ (((/* implicit */int) var_1))))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (unsigned short)57344))));
                            }
                            arr_19 [i_3] [i_0] [(unsigned char)1] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)49793)) ? (((/* implicit */int) (unsigned short)1)) : (((/* implicit */int) ((((/* implicit */int) var_10)) < (((/* implicit */int) arr_11 [7ULL] [(short)13] [i_2] [7ULL])))))))) ? (((((/* implicit */_Bool) 0LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_2] [i_3]))) : (((4127757960367765268LL) << (((((((/* implicit */int) (short)-28964)) + (28997))) - (32))))))) : (((/* implicit */long long int) ((((((/* implicit */_Bool) arr_9 [i_0] [i_0] [(_Bool)1] [i_3])) ? (((/* implicit */int) arr_14 [i_3] [i_2 + 4] [3LL] [i_1] [i_0] [i_0])) : (((/* implicit */int) arr_5 [i_0] [i_2] [i_3])))) / (((/* implicit */int) var_16)))))));
                            var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_2] [i_0])) ? (((/* implicit */int) arr_9 [i_0] [i_0] [i_2 + 4] [i_2 + 4])) : (((/* implicit */int) var_14))))) && (((/* implicit */_Bool) ((signed char) (unsigned short)65534))))))));
                            var_22 = ((/* implicit */long long int) arr_15 [i_0] [i_1] [i_2 - 3] [i_1]);
                        }
                    } 
                } 
                var_23 = ((/* implicit */unsigned long long int) arr_3 [i_0] [i_0]);
                var_24 = ((/* implicit */short) (+(((/* implicit */int) ((((/* implicit */int) (signed char)82)) != (((/* implicit */int) ((((/* implicit */int) arr_3 [i_0] [i_0])) <= (((/* implicit */int) var_9))))))))));
            }
        } 
    } 
    var_25 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) var_8)) : (((((/* implicit */_Bool) -1LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_5))))))));
}
