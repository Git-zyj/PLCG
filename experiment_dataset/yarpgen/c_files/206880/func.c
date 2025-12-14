/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206880
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206880 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206880
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
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (unsigned char i_1 = 2; i_1 < 22; i_1 += 2) 
        {
            {
                arr_6 [i_1 - 1] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) arr_3 [(unsigned char)2] [i_1])) != (((((/* implicit */_Bool) (-(15172463600249325465ULL)))) ? (((unsigned long long int) var_9)) : (max((var_9), (((/* implicit */unsigned long long int) arr_5 [i_0] [i_0]))))))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 2; i_2 < 21; i_2 += 1) 
                {
                    for (unsigned char i_3 = 1; i_3 < 22; i_3 += 4) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned char) ((arr_3 [i_2] [i_2]) >= (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) max((((/* implicit */long long int) (unsigned char)208)), (arr_3 [(short)0] [i_3])))) > (max((((/* implicit */unsigned long long int) (unsigned char)202)), (arr_8 [i_0] [i_0] [i_0] [i_0])))))))));
                            arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((arr_3 [i_3 - 1] [i_1 - 1]) | (arr_3 [i_3 - 1] [i_1 - 1]))) & (arr_3 [i_3 - 1] [i_1 - 2])));
                        }
                    } 
                } 
            }
        } 
    } 
    var_21 = ((/* implicit */short) (unsigned char)7);
    var_22 = 17060591061402783180ULL;
}
