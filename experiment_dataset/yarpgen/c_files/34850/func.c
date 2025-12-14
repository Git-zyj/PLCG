/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34850
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34850 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34850
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
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (unsigned short i_1 = 1; i_1 < 14; i_1 += 3) 
        {
            {
                var_14 = ((/* implicit */_Bool) min((var_14), (var_4)));
                var_15 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned short) max((0ULL), (5ULL))))) ? (((/* implicit */unsigned long long int) max((max((((/* implicit */long long int) var_12)), (arr_2 [i_1] [i_1]))), (((/* implicit */long long int) (-(((/* implicit */int) var_2)))))))) : (max((max((((/* implicit */unsigned long long int) arr_3 [i_1] [i_0] [i_0])), (8210141046930194391ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-11426)) != (((/* implicit */int) var_13)))))))));
                var_16 += ((/* implicit */unsigned char) (~(arr_3 [i_0] [i_0] [i_0])));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_2 = 1; i_2 < 10; i_2 += 3) 
    {
        for (signed char i_3 = 1; i_3 < 8; i_3 += 3) 
        {
            {
                var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) arr_6 [i_2]))) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (((long long int) var_6))));
                var_18 |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((int) (~(arr_2 [i_2] [i_3 + 3]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_2] [i_3])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_13))))))))) : (min((((unsigned long long int) var_1)), (((/* implicit */unsigned long long int) (~(arr_3 [i_2] [i_3] [i_3]))))))));
                var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) (~((-(arr_0 [i_2 + 1]))))))));
                arr_10 [2] |= ((/* implicit */signed char) min((((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_3))))) * ((~(arr_7 [(unsigned char)10] [i_2] [(unsigned char)10]))))), (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) var_9)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [(signed char)6]))) : (((750063876094366552LL) % (arr_6 [6U]))))))));
            }
        } 
    } 
    var_20 = ((/* implicit */int) ((unsigned short) var_8));
}
