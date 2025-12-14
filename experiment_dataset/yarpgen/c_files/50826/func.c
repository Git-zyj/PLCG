/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50826
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50826 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50826
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
    var_11 = ((/* implicit */long long int) var_10);
    var_12 = (-(-1LL));
    var_13 = ((/* implicit */signed char) ((-2131386318) >= (((/* implicit */int) var_9))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) 2131386325)) * (0U)))) ? (((/* implicit */int) arr_3 [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_2 [i_0] [i_1]))));
                var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -429623837276868731LL)) ? (0LL) : (((/* implicit */long long int) -1955792624))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_2 = 1; i_2 < 21; i_2 += 4) 
    {
        for (unsigned char i_3 = 1; i_3 < 20; i_3 += 3) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                {
                    var_15 = ((((/* implicit */_Bool) min((arr_8 [i_2 + 2] [i_3 + 2]), (arr_8 [i_2 + 1] [i_3 + 1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max(((!(((/* implicit */_Bool) arr_12 [i_2 - 1] [21ULL] [i_4] [(short)1])))), ((!(((/* implicit */_Bool) arr_13 [i_2] [i_3] [i_2] [i_4])))))))) : (max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_6 [i_2] [i_4]))))), (7168529322646886140ULL))));
                    arr_14 [i_2] [i_3 + 2] [i_4] = ((/* implicit */signed char) (~(max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [i_2] [i_2] [i_2])) ? (((/* implicit */int) arr_10 [i_4] [i_3 + 3] [i_2])) : ((-2147483647 - 1))))), (((((/* implicit */_Bool) arr_7 [i_3 + 3] [i_3 + 3])) ? (arr_11 [i_2] [i_2]) : (arr_11 [i_2] [i_4])))))));
                }
            } 
        } 
    } 
}
