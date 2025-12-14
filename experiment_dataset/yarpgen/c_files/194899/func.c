/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194899
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194899 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194899
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
    for (short i_0 = 1; i_0 < 20; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) ((((/* implicit */_Bool) ((arr_0 [i_0 - 1]) + (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_2 [i_1]), (arr_2 [i_0])))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)33550))) >= (var_11)))) : (((/* implicit */int) ((268433408U) <= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)209))))))))) : (max((((unsigned long long int) arr_0 [i_0 + 1])), (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) >> (((arr_3 [i_0] [i_1]) + (315459773)))))))))))));
                arr_5 [i_1] [i_0 - 1] = ((/* implicit */short) (((!(((((/* implicit */int) arr_1 [i_0])) > (((/* implicit */int) (signed char)18)))))) ? (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) -533845437618003655LL)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_2 [i_0])))), (((/* implicit */int) var_1))))) : (((((((/* implicit */_Bool) (unsigned char)229)) ? (1687915671192073648ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)99))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((599031633U) == (0U)))))))));
                /* LoopNest 2 */
                for (int i_2 = 4; i_2 < 20; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 21; i_3 += 3) 
                    {
                        {
                            arr_12 [i_0] [i_1] [i_2] [i_2] [i_3] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 4005209937U)), ((~(arr_4 [i_0] [i_1] [i_2 - 2])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (~(-1984973104651483367LL)))))) : (((((/* implicit */_Bool) arr_7 [i_2 - 4] [i_2])) ? (((((/* implicit */_Bool) var_9)) ? (0ULL) : (((/* implicit */unsigned long long int) 599031639U)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)209)))))));
                            var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) (((-(599031626U))) * (((/* implicit */unsigned int) ((arr_9 [i_0] [i_1] [i_0] [i_0 - 1]) / (arr_9 [i_0] [i_1] [i_2] [i_0 + 1])))))))));
                            arr_13 [i_2] = ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_0 [i_1])) ? (arr_0 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))))));
                            var_17 = ((/* implicit */signed char) ((((/* implicit */int) ((unsigned char) arr_6 [i_0] [i_2 - 3] [(short)12] [0ULL]))) / (arr_9 [i_0 - 1] [i_1] [i_2] [i_3])));
                            var_18 = ((/* implicit */short) arr_0 [i_1]);
                        }
                    } 
                } 
            }
        } 
    } 
    var_19 = ((/* implicit */long long int) var_1);
    var_20 = ((/* implicit */unsigned short) ((((((/* implicit */unsigned int) ((/* implicit */int) var_14))) > (523264U))) ? (((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) % (599031633U)))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) ((1087167282619596409ULL) == (((/* implicit */unsigned long long int) -2032249530584547339LL))))))) : (((/* implicit */int) var_2))));
    var_21 = ((/* implicit */unsigned short) ((((((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) (short)0))) : (var_7))) <= (((/* implicit */long long int) (-(((/* implicit */int) var_10))))))) ? (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) 6)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (short)(-32767 - 1))))), (((((/* implicit */int) (unsigned char)245)) + (((/* implicit */int) (_Bool)0))))))) : (((unsigned long long int) ((((/* implicit */int) (signed char)-49)) * (((/* implicit */int) var_1)))))));
}
