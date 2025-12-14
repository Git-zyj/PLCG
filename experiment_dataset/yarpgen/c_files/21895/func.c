/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21895
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21895 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21895
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
    for (signed char i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        var_14 &= ((/* implicit */int) ((((/* implicit */unsigned int) arr_0 [i_0])) <= (var_8)));
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            arr_4 [i_0] [i_1] [i_1] = ((/* implicit */_Bool) arr_0 [i_1]);
            /* LoopNest 3 */
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                for (unsigned char i_3 = 2; i_3 < 19; i_3 += 1) 
                {
                    for (int i_4 = 0; i_4 < 21; i_4 += 4) 
                    {
                        {
                            arr_12 [i_2] [i_3] [i_2] [i_1] [i_2] = ((/* implicit */short) ((((((/* implicit */_Bool) (unsigned char)246)) ? (((/* implicit */int) arr_7 [i_2 - 1] [i_4] [i_4] [(unsigned char)14])) : (arr_0 [i_3 + 1]))) << (((((/* implicit */int) arr_7 [i_2 - 1] [i_2 - 1] [i_3] [i_4])) - (((/* implicit */int) arr_7 [i_2 - 1] [i_2] [i_2 - 1] [i_3]))))));
                            arr_13 [i_0] [i_1] [i_2] [i_1] [i_3] [i_2] [i_2] = ((/* implicit */int) (((+(((((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_0])) / (((/* implicit */int) arr_7 [i_1] [i_2] [i_3] [i_4])))))) != (max((((/* implicit */int) arr_1 [i_0] [i_2 - 1])), ((-(var_7)))))));
                            var_15 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) var_5)), (var_6)))) ? (arr_9 [i_1] [i_2 - 1] [i_3] [i_3] [i_1] [i_3 + 1]) : (((/* implicit */long long int) max((var_12), (var_9))))))) ? (((((/* implicit */_Bool) arr_10 [i_4] [(unsigned char)3] [i_0] [i_0])) ? (((unsigned int) (unsigned char)246)) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [18ULL]))) >= (arr_5 [i_4] [i_1] [i_4]))))))) : ((((!(((/* implicit */_Bool) var_7)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) -371797381)))))) : (((((/* implicit */_Bool) -371797373)) ? (3490238280U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)6)))))))));
                        }
                    } 
                } 
            } 
            var_16 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0] [i_0])) / (((/* implicit */int) (unsigned char)255))))) || (((((/* implicit */unsigned long long int) arr_9 [i_0] [i_0] [i_1] [i_1] [i_1] [i_1])) > (arr_3 [i_0] [i_1] [i_1])))));
        }
        var_17 *= ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) arr_7 [i_0] [(unsigned char)9] [i_0] [i_0])) > (((/* implicit */int) min((((/* implicit */unsigned short) (short)32748)), (arr_7 [i_0] [13ULL] [i_0] [i_0]))))))) >> (((((/* implicit */int) (unsigned char)162)) - (154)))));
    }
    var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) var_0))));
}
