/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231245
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231245 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231245
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
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 23; i_2 += 4) 
                {
                    for (long long int i_3 = 0; i_3 < 23; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_19 += ((/* implicit */unsigned char) max(((+(9206153648503650147LL))), (((/* implicit */long long int) (-(((/* implicit */int) ((signed char) arr_2 [11ULL]))))))));
                                var_20 = ((/* implicit */unsigned char) max((((/* implicit */signed char) arr_1 [20LL] [i_0])), (var_14)));
                            }
                        } 
                    } 
                } 
                arr_14 [15ULL] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_5 [(_Bool)1] [(unsigned char)11] [(signed char)7]))) >= (var_15)))) >= (((/* implicit */int) arr_9 [(unsigned char)3] [10LL] [(signed char)16] [19ULL])))))) % (((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)62))))) ? (((/* implicit */unsigned long long int) -9206153648503650147LL)) : (var_0)))));
                /* LoopSeq 3 */
                for (unsigned char i_5 = 3; i_5 < 21; i_5 += 1) 
                {
                    var_21 *= ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((var_16) == (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)210))))))) - (((4ULL) << (((/* implicit */int) (_Bool)1))))));
                    arr_18 [5ULL] |= ((/* implicit */unsigned long long int) var_15);
                }
                /* vectorizable */
                for (unsigned char i_6 = 2; i_6 < 19; i_6 += 1) 
                {
                    arr_23 [i_6] [(signed char)10] [(_Bool)1] [11ULL] = arr_2 [13ULL];
                    arr_24 [i_6] = arr_17 [(_Bool)1] [10ULL] [8LL];
                }
                for (unsigned char i_7 = 4; i_7 < 21; i_7 += 3) 
                {
                    /* LoopNest 2 */
                    for (long long int i_8 = 2; i_8 < 22; i_8 += 3) 
                    {
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            {
                                arr_33 [3LL] [3LL] [8LL] [i_7] = max((((((/* implicit */_Bool) arr_3 [i_8 - 2] [i_7 + 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_8 - 2] [i_7 + 1]))) : (9329381092479642595ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_14)) + (((/* implicit */int) (signed char)-72))))));
                                var_22 *= ((/* implicit */unsigned char) max((((arr_19 [i_7 + 1] [i_7 - 2] [i_8 - 1] [i_8 - 1]) ? (((/* implicit */int) arr_19 [i_7 - 4] [i_7 - 1] [i_8 - 1] [i_8 + 1])) : (((/* implicit */int) arr_2 [i_8 + 1])))), ((-(((/* implicit */int) arr_19 [i_7 - 4] [i_7 + 1] [i_8 - 1] [i_8 - 2]))))));
                            }
                        } 
                    } 
                    arr_34 [i_7] [5ULL] [i_7] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_28 [i_7] [(unsigned char)5] [5ULL] [16ULL] [(_Bool)1] [i_7]))));
                    var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) max(((!(((/* implicit */_Bool) arr_5 [i_7 - 4] [i_7 - 2] [i_7 + 2])))), (arr_2 [8LL]))))));
                }
            }
        } 
    } 
    var_24 = ((/* implicit */long long int) 10924817237194866871ULL);
}
