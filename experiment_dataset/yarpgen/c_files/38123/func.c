/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38123
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38123 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38123
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
    var_18 = ((/* implicit */_Bool) ((unsigned long long int) (!(((_Bool) 1592658767)))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 3; i_0 < 18; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 16; i_1 += 2) 
        {
            {
                var_19 = ((/* implicit */unsigned long long int) min((var_19), ((~(((((/* implicit */_Bool) ((arr_1 [6ULL]) ^ (((/* implicit */int) var_17))))) ? (max((((/* implicit */unsigned long long int) -1592658768)), (var_3))) : (((/* implicit */unsigned long long int) ((long long int) arr_1 [(unsigned char)0])))))))));
                arr_6 [i_0 - 3] [i_0 - 3] [i_0] = ((/* implicit */int) arr_5 [i_0 + 1] [i_0]);
                /* LoopSeq 1 */
                for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 2) 
                {
                    var_20 *= ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) & (var_15)))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_1))))) : (658527905U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_2])) ? (960329189999740688ULL) : (arr_3 [i_1])))) ? (((/* implicit */int) max(((_Bool)1), (arr_7 [i_2])))) : ((~(((/* implicit */int) var_9)))))))));
                    /* LoopNest 2 */
                    for (short i_3 = 1; i_3 < 17; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 19; i_4 += 4) 
                        {
                            {
                                var_21 = ((/* implicit */_Bool) ((var_10) * (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_0 - 2] [i_1 + 1] [i_0 - 2] [i_3] [i_3 + 2] [i_3 - 1] [i_4]))) & (var_7)))));
                                var_22 *= ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [8ULL])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_0] [i_0] [(unsigned char)5] [(unsigned char)5] [(unsigned char)5]))) : (arr_10 [i_0 - 1] [i_0 - 1] [i_3] [i_4])))) ? (((/* implicit */long long int) ((arr_10 [i_2] [i_3] [i_2] [i_0 - 3]) << (((/* implicit */int) var_17))))) : (((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_2] [i_4])) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) var_2)))))))));
                                arr_14 [i_0] [i_2] [i_2] [i_0] [i_4] [i_4] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((long long int) 2203879597333871620ULL))) >= (16242864476375679996ULL)));
                            }
                        } 
                    } 
                }
                /* LoopNest 2 */
                for (unsigned long long int i_5 = 2; i_5 < 15; i_5 += 3) 
                {
                    for (short i_6 = 0; i_6 < 19; i_6 += 4) 
                    {
                        {
                            var_23 = 2203879597333871625ULL;
                            var_24 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) var_5)) ? (arr_8 [i_0] [i_1 + 2] [i_5 + 1] [i_1 + 2]) : (((/* implicit */unsigned int) ((/* implicit */int) var_17)))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
