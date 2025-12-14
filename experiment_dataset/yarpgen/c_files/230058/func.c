/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230058
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230058 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230058
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
    for (signed char i_0 = 2; i_0 < 14; i_0 += 3) 
    {
        for (short i_1 = 2; i_1 < 14; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                {
                    var_12 = ((/* implicit */short) (signed char)-35);
                    var_13 &= ((/* implicit */unsigned short) max((min((((/* implicit */unsigned int) var_5)), ((-(var_0))))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_4 [(unsigned char)0] [(unsigned char)0])) <= (((/* implicit */int) (signed char)-123)))))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (signed char i_3 = 0; i_3 < 24; i_3 += 3) 
    {
        var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) (!(((/* implicit */_Bool) min((((/* implicit */short) arr_9 [i_3] [i_3])), (var_4)))))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_4 = 0; i_4 < 24; i_4 += 3) 
        {
            var_15 += ((/* implicit */unsigned short) min(((signed char)-95), ((signed char)40)));
            var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) min((arr_7 [i_3]), (min((arr_7 [i_3]), (((/* implicit */long long int) var_3)))))))));
        }
        var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) arr_10 [i_3]))));
    }
    var_18 += ((/* implicit */_Bool) (-(((/* implicit */int) (short)(-32767 - 1)))));
    var_19 = ((/* implicit */unsigned int) var_3);
}
