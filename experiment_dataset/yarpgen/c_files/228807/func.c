/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228807
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228807 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228807
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
    for (long long int i_0 = 3; i_0 < 19; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned char i_3 = 0; i_3 < 20; i_3 += 3) 
                    {
                        arr_13 [i_0] [i_0] [i_1] [i_0] [i_0] [i_1] = ((/* implicit */long long int) ((unsigned int) (!(((/* implicit */_Bool) arr_8 [i_0])))));
                        arr_14 [i_1] [i_1] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */int) (!(var_5)))) > (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0])) && (((/* implicit */_Bool) (unsigned short)65535)))))));
                        arr_15 [i_0] [i_1] = ((/* implicit */unsigned long long int) (+((+(arr_1 [i_0])))));
                    }
                    for (unsigned char i_4 = 0; i_4 < 20; i_4 += 1) 
                    {
                        var_12 = (i_1 % 2 == 0) ? (((/* implicit */_Bool) ((long long int) (-(((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) arr_9 [i_1] [i_2])))))))) : (((/* implicit */_Bool) ((long long int) (-(((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) arr_9 [i_1] [i_2]))))))));
                        var_13 = ((/* implicit */short) min((((/* implicit */long long int) ((((/* implicit */unsigned int) max((var_6), (((/* implicit */int) var_10))))) | ((~(var_4)))))), (((((/* implicit */long long int) max((1372413054U), (arr_3 [i_1] [i_1] [i_1])))) / (min((var_1), (((/* implicit */long long int) 1372413047U))))))));
                    }
                    for (unsigned int i_5 = 0; i_5 < 20; i_5 += 1) 
                    {
                        var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) (~(min((min((((/* implicit */unsigned int) arr_10 [i_5] [i_1] [i_1] [i_0] [i_0])), (1372413034U))), (arr_19 [i_0 - 2] [i_5] [i_0 - 2] [i_0 - 2] [(unsigned char)2]))))))));
                        var_15 *= ((/* implicit */unsigned int) min((max((((((/* implicit */long long int) arr_19 [i_0] [i_1] [i_2] [i_2] [(short)8])) / (var_11))), (((/* implicit */long long int) min((261383261), (((/* implicit */int) (_Bool)0))))))), (((/* implicit */long long int) -1))));
                    }
                    arr_21 [i_0] [i_1] [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_3 [i_1] [i_1] [6]))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) (_Bool)1))));
    var_17 = ((/* implicit */unsigned char) var_3);
}
