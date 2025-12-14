/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4584
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4584 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4584
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                {
                    var_18 += ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((4294967267U) ^ (4294967267U))), ((~(var_1)))))) ? ((((!(((/* implicit */_Bool) 4294967258U)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)2048)) ? (var_0) : (((/* implicit */unsigned int) 0))))) : (((((/* implicit */_Bool) 29U)) ? (((/* implicit */unsigned long long int) arr_2 [i_0] [(_Bool)1])) : (var_13))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (-(arr_3 [i_1]))))))))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 20; i_3 += 3) 
                    {
                        for (signed char i_4 = 2; i_4 < 18; i_4 += 1) 
                        {
                            {
                                arr_12 [i_0] [i_1] [i_2] [i_2] [i_0] [i_4 + 2] = ((/* implicit */long long int) max((max((((/* implicit */unsigned int) min((-127590934), (-738374951)))), (((38U) & (((/* implicit */unsigned int) 1395274717)))))), (((((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) var_9))))) ^ (var_6)))));
                                arr_13 [i_0] [(signed char)8] = ((((((/* implicit */_Bool) ((unsigned long long int) var_11))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1391511984)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)57180))) : (arr_2 [i_0] [i_0])))) : (min((4503565267632128ULL), (((/* implicit */unsigned long long int) var_2)))))) | (((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)(-127 - 1)))))));
                                arr_14 [i_0] [i_0] [i_0] [i_2] [i_2] [i_3] [i_4] = (i_0 % 2 == zero) ? (((/* implicit */_Bool) ((((/* implicit */_Bool) ((9) / (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) arr_4 [i_0] [i_1] [i_2])))))))) ? (((((/* implicit */_Bool) (unsigned short)63487)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (signed char)-111)))) : (((int) 3589147578U))))) : (((/* implicit */_Bool) ((((/* implicit */_Bool) ((9) * (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) arr_4 [i_0] [i_1] [i_2])))))))) ? (((((/* implicit */_Bool) (unsigned short)63487)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (signed char)-111)))) : (((int) 3589147578U)))));
                                arr_15 [i_0] [(short)7] [(unsigned short)0] [i_0] = ((/* implicit */signed char) (-(max(((~(arr_7 [i_1] [i_3] [i_1] [i_0]))), (((((/* implicit */_Bool) 12376064300121482733ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (var_0)))))));
                                var_19 = ((/* implicit */signed char) (_Bool)1);
                            }
                        } 
                    } 
                    arr_16 [18LL] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)36))))) ? (max((-615782547), (((/* implicit */int) (signed char)105)))) : (((/* implicit */int) var_9))));
                }
            } 
        } 
    } 
    var_20 = var_12;
}
