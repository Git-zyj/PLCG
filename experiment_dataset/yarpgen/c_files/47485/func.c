/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47485
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47485 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47485
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
    var_16 = ((/* implicit */_Bool) (+(((/* implicit */int) var_5))));
    var_17 = ((/* implicit */unsigned int) 5221193453913917248ULL);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (signed char i_1 = 1; i_1 < 13; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (signed char i_2 = 0; i_2 < 14; i_2 += 1) 
                {
                    var_18 = 13225550619795634382ULL;
                    arr_7 [i_2] [i_1] [(unsigned short)0] = ((/* implicit */unsigned int) ((min((arr_6 [i_0] [i_0] [i_1 - 1] [(unsigned char)1]), (arr_6 [i_0] [i_0] [i_1 - 1] [i_0]))) ^ (((/* implicit */int) ((signed char) arr_6 [(_Bool)1] [i_1] [i_1 - 1] [i_1])))));
                }
                arr_8 [(unsigned short)8] [i_1] = ((/* implicit */long long int) min((((arr_6 [i_1] [i_1 + 1] [i_1 - 1] [i_0]) / (((/* implicit */int) arr_1 [i_1 + 1] [(unsigned short)7])))), (((((/* implicit */_Bool) arr_1 [i_1 - 1] [i_0])) ? (((/* implicit */int) arr_5 [(signed char)4] [i_1 - 1] [i_1 - 1] [i_1])) : (((/* implicit */int) arr_1 [i_1 + 1] [i_1]))))));
            }
        } 
    } 
}
