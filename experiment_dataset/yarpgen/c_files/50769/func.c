/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50769
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50769 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50769
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 2; i_1 < 9; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                {
                    arr_8 [i_0] [i_1] = ((/* implicit */signed char) max((((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_5 [i_0])) != (((/* implicit */int) arr_5 [i_0])))))) >= (max((((/* implicit */unsigned long long int) (_Bool)1)), (549755813887ULL))))), (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)55428)) * (((/* implicit */int) (short)0))))) || (((/* implicit */_Bool) ((8388544U) % (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)20))))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 3; i_3 < 9; i_3 += 4) 
                    {
                        for (int i_4 = 0; i_4 < 10; i_4 += 4) 
                        {
                            {
                                arr_14 [i_2] [i_0] = ((/* implicit */unsigned long long int) ((arr_10 [i_1 - 2] [i_0] [i_3] [i_4]) % (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_0 [i_0])) > (((/* implicit */int) ((((/* implicit */_Bool) 8388528U)) && (((/* implicit */_Bool) arr_1 [i_0])))))))))));
                                arr_15 [i_0] [i_1] [i_2] [i_3] [i_0] = ((/* implicit */_Bool) -1655888336);
                                arr_16 [i_1 + 1] [i_1 + 1] [i_1] [i_0] [i_1] [i_1] [i_1] = ((/* implicit */short) max((549755813887ULL), (((/* implicit */unsigned long long int) (signed char)15))));
                                arr_17 [i_0] [i_0] [i_2] [i_3 + 1] = ((/* implicit */unsigned int) arr_0 [i_0]);
                            }
                        } 
                    } 
                    arr_18 [i_0] [i_0] = ((/* implicit */_Bool) max((((/* implicit */unsigned char) (_Bool)1)), (arr_7 [i_0] [i_0] [i_0])));
                    /* LoopNest 2 */
                    for (long long int i_5 = 0; i_5 < 10; i_5 += 1) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 10; i_6 += 1) 
                        {
                            {
                                var_11 -= ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((arr_1 [i_2]) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_2] [i_2] [i_2])))))), (arr_3 [i_5] [i_2] [i_0])));
                                var_12 = ((/* implicit */unsigned int) arr_0 [i_0]);
                                arr_23 [i_0] [i_5] [i_2] [i_1] [i_0] = ((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_7 = 0; i_7 < 10; i_7 += 4) 
                    {
                        for (unsigned long long int i_8 = 3; i_8 < 8; i_8 += 3) 
                        {
                            {
                                var_13 += ((/* implicit */signed char) (unsigned char)255);
                                var_14 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_12 [(unsigned short)2] [i_1] [2LL] [i_7] [i_8 + 1])) || (((/* implicit */_Bool) arr_2 [i_1])))))) <= (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) | (109171136486650688LL)))))) / (((/* implicit */int) ((((/* implicit */int) (short)0)) <= (((/* implicit */int) ((arr_13 [i_0] [i_0] [i_0] [i_1 - 1] [i_2] [i_0] [i_2]) == (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_8])))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */_Bool) ((((max((1655059584U), (((/* implicit */unsigned int) (short)0)))) - (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))) ^ (max((185483396U), (((/* implicit */unsigned int) (signed char)127))))));
    var_16 -= ((/* implicit */unsigned long long int) var_4);
    var_17 = ((/* implicit */signed char) ((((/* implicit */int) (_Bool)0)) >> (((/* implicit */int) (_Bool)1))));
}
