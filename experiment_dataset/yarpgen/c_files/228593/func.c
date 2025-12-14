/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228593
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228593 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228593
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
    for (int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned int i_3 = 2; i_3 < 13; i_3 += 1) 
                    {
                        {
                            var_11 = ((/* implicit */unsigned short) min((((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0] [i_1])) || (((/* implicit */_Bool) var_0)))))) > (min((((/* implicit */long long int) var_5)), (arr_2 [i_1]))))), (((var_8) > (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_2])) || (((/* implicit */_Bool) var_4))))))))));
                            var_12 = ((/* implicit */unsigned int) max((var_12), (((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) var_10)))))) > (((min((((/* implicit */unsigned int) arr_3 [8LL] [i_2])), (var_9))) >> (((arr_4 [i_3 - 1] [i_1]) + (1103691602))))))))));
                            var_13 = min((max((((/* implicit */unsigned long long int) arr_9 [i_0] [i_1] [i_0] [i_0] [i_0])), (arr_5 [i_0] [i_1] [i_2] [i_1]))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (arr_5 [i_0] [i_0] [i_2] [i_2]))));
                        }
                    } 
                } 
                var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) ((unsigned short) ((((((/* implicit */_Bool) 1073741823)) || (((/* implicit */_Bool) (short)-3061)))) ? (((var_8) % (arr_1 [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_1] [i_1] [i_1] [i_1] [i_1])))))))));
                var_15 = ((/* implicit */short) (((!(((/* implicit */_Bool) arr_9 [(signed char)1] [i_1] [i_0] [i_1] [i_0])))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) -1073741815)) : (var_6))))));
                arr_10 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((((((/* implicit */_Bool) (short)-7887)) ? ((-(((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_1] [i_0])))) : (((/* implicit */int) ((var_9) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [8ULL] [i_1] [8ULL] [8ULL] [i_0])))))))) + (2147483647))) >> ((((+(1073741823))) - (1073741804)))));
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_4 = 1; i_4 < 12; i_4 += 3) 
    {
        arr_15 [i_4] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) var_3))));
        var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_4] [i_4 + 1] [i_4] [i_4 + 1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_5))));
        arr_16 [i_4] [i_4 + 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_2 [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_2 [i_4 - 1])));
        var_17 = ((/* implicit */signed char) var_8);
    }
}
