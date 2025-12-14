/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45066
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45066 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45066
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
    for (signed char i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        arr_3 [i_0] [11U] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -6282972638888322213LL)) ? (((/* implicit */int) var_5)) : (min((2013265920), (((((/* implicit */int) var_9)) / (2013265930)))))));
        arr_4 [(signed char)14] = ((short) ((short) (unsigned short)50516));
        arr_5 [i_0] = max(((+(0))), (((/* implicit */int) ((var_4) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))));
    }
    /* LoopNest 3 */
    for (unsigned char i_1 = 0; i_1 < 24; i_1 += 4) 
    {
        for (short i_2 = 0; i_2 < 24; i_2 += 3) 
        {
            for (int i_3 = 0; i_3 < 24; i_3 += 3) 
            {
                {
                    arr_12 [i_1] [i_3] [i_3] = ((signed char) (unsigned short)65074);
                    arr_13 [i_1] [i_2] [i_3] = ((/* implicit */short) max((((6282972638888322195LL) / (((/* implicit */long long int) ((/* implicit */int) (short)32767))))), (((/* implicit */long long int) (~(var_1))))));
                    arr_14 [i_3] [i_2] [i_3] = ((/* implicit */unsigned short) (-(((unsigned long long int) ((signed char) var_0)))));
                    arr_15 [i_1] [i_1] [i_3] [(signed char)15] = ((/* implicit */short) ((var_1) > (((/* implicit */int) var_11))));
                    var_12 = ((/* implicit */_Bool) min((var_12), (((/* implicit */_Bool) ((((((/* implicit */_Bool) -2013265920)) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_5))) * (var_2))) : (max((((/* implicit */unsigned int) var_10)), (3557090430U))))) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)231))))))));
                }
            } 
        } 
    } 
}
