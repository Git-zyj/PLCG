/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47488
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47488 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47488
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
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            for (long long int i_2 = 4; i_2 < 19; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 2) 
                    {
                        /* LoopSeq 3 */
                        for (long long int i_4 = 0; i_4 < 20; i_4 += 4) 
                        {
                            arr_11 [7U] = ((/* implicit */long long int) 3633392477U);
                            arr_12 [i_4] [i_4] [i_2] [i_1] [i_4] = ((/* implicit */long long int) (((~(((/* implicit */int) arr_4 [i_2 + 1] [i_1])))) ^ (((/* implicit */int) arr_7 [i_1] [i_1] [i_3] [i_4]))));
                            arr_13 [i_2] [i_0] [i_2] [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_3] [i_4]))))) / (((/* implicit */int) max((arr_3 [i_1]), (arr_3 [i_4]))))))) - (max(((-(7024739713036440384LL))), (((/* implicit */long long int) (_Bool)1))))));
                            var_14 = ((/* implicit */long long int) var_8);
                        }
                        for (unsigned char i_5 = 0; i_5 < 20; i_5 += 4) 
                        {
                            var_15 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (((-(((/* implicit */int) (signed char)-115)))) * (((/* implicit */int) max((((/* implicit */short) (_Bool)1)), (var_3)))))))));
                            var_16 &= ((/* implicit */short) arr_5 [i_1] [i_2] [i_3] [(short)15]);
                            arr_16 [(unsigned short)19] [i_1] [i_1] [i_1] [i_1] |= ((/* implicit */short) (_Bool)1);
                        }
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            arr_19 [i_0] [i_3] [i_2] [i_6] [i_3] = ((/* implicit */long long int) (+(2672395331U)));
                            var_17 = ((/* implicit */short) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_9 [i_2 - 4] [i_2 - 3] [i_2 - 1] [i_2 + 1])))))));
                            arr_20 [i_0] [(signed char)0] [i_6] = ((/* implicit */long long int) ((((/* implicit */int) arr_4 [i_2] [i_2 - 4])) >= (arr_17 [i_3] [i_3] [i_6] [i_3] [i_3] [i_2])));
                        }
                        var_18 ^= ((/* implicit */long long int) min(((+(((/* implicit */int) arr_7 [i_0] [i_1] [i_2] [i_3])))), (((/* implicit */int) var_5))));
                    }
                    var_19 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)133)) >= (((/* implicit */int) min((arr_14 [i_1] [i_1] [i_2] [i_2] [i_2 - 2] [i_2] [i_2 - 3]), (((/* implicit */short) max(((unsigned char)128), (((/* implicit */unsigned char) arr_18 [i_0] [i_0] [i_0] [i_0] [i_0]))))))))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */short) (~(((/* implicit */int) var_9))));
}
