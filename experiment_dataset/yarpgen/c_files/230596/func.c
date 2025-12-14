/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230596
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230596 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230596
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
    var_16 = ((var_9) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))));
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 11; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 3) 
                {
                    for (long long int i_3 = 0; i_3 < 14; i_3 += 1) 
                    {
                        {
                            var_17 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0 + 3])) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0 + 1])))))) ? (((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) var_5)), ((unsigned short)55266))))) : (arr_9 [i_3] [i_2] [i_0] [i_0] [i_0 + 1] [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) var_10))));
                            var_18 = ((/* implicit */int) arr_10 [i_0] [i_0 - 1] [i_0]);
                            arr_11 [i_0] = ((/* implicit */unsigned short) arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0 + 2]);
                            var_19 = ((/* implicit */short) ((((/* implicit */_Bool) arr_10 [i_2] [i_1] [7ULL])) ? (arr_6 [i_0 + 2] [8ULL]) : (((/* implicit */long long int) (((!(((/* implicit */_Bool) var_0)))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_1))) == (arr_6 [i_2] [i_0])))) : (((((/* implicit */int) arr_3 [(_Bool)1])) / (((/* implicit */int) var_1)))))))));
                            var_20 = ((/* implicit */short) max((((((/* implicit */_Bool) var_3)) ? (arr_9 [i_0] [i_3] [i_0] [i_3] [(unsigned char)8] [i_2]) : (arr_9 [i_0] [(unsigned char)3] [i_0] [i_3] [i_0 + 3] [(unsigned char)3]))), (((((/* implicit */_Bool) arr_9 [i_0 + 3] [i_3] [i_0] [i_3] [i_2] [1LL])) ? (arr_9 [(signed char)6] [i_1] [i_0] [i_1] [i_2] [i_1]) : (arr_9 [i_0] [i_1] [i_0] [i_3] [i_0 + 3] [i_0])))));
                        }
                    } 
                } 
                arr_12 [i_0] [i_0] = ((/* implicit */unsigned short) min((max((arr_7 [i_0] [i_0]), (((/* implicit */long long int) (unsigned short)10269)))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_0 - 1] [i_0 + 3] [i_0 - 1])) ? (var_13) : (((/* implicit */int) arr_4 [i_0 - 1] [i_0 - 1] [i_0 + 1])))))));
                /* LoopNest 2 */
                for (unsigned int i_4 = 0; i_4 < 14; i_4 += 4) 
                {
                    for (unsigned long long int i_5 = 1; i_5 < 13; i_5 += 3) 
                    {
                        {
                            var_21 = ((/* implicit */_Bool) 638882854579607361ULL);
                            var_22 = ((/* implicit */short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_0)) ? (var_13) : (((/* implicit */int) (unsigned short)64469)))), (((/* implicit */int) ((((/* implicit */int) arr_13 [i_0])) != (((/* implicit */int) arr_16 [i_0] [i_4] [i_1] [i_0])))))))) ? (((((/* implicit */_Bool) arr_16 [i_0] [i_1] [i_4] [i_0])) ? (arr_7 [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0]))))) : (((((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) (unsigned short)55275)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [(unsigned char)9] [i_5] [i_0] [i_0] [i_1] [i_0])) ? (var_12) : (((/* implicit */int) arr_16 [i_0] [i_4] [i_1] [i_0]))))) : (((((/* implicit */_Bool) arr_8 [i_0])) ? (var_0) : (arr_9 [i_0] [i_0] [i_0] [i_0] [i_0 + 2] [i_5])))))));
                        }
                    } 
                } 
                var_23 = ((/* implicit */_Bool) 1374601895U);
                var_24 ^= -1816010189754191033LL;
            }
        } 
    } 
}
