/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194506
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194506 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194506
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 2; i_1 < 23; i_1 += 1) 
        {
            {
                var_10 = ((/* implicit */long long int) 2146959360U);
                var_11 = ((/* implicit */unsigned short) arr_1 [i_0] [i_0]);
                var_12 *= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_1 [i_1 - 2] [i_1 - 2])) ? (((/* implicit */int) arr_1 [i_1 - 2] [7ULL])) : (((/* implicit */int) var_9)))) <= (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned long long int) (unsigned char)230))))))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 24; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 1) 
                    {
                        {
                            arr_9 [i_0] = ((/* implicit */long long int) (unsigned char)26);
                            /* LoopSeq 2 */
                            for (unsigned int i_4 = 4; i_4 < 21; i_4 += 4) 
                            {
                                var_13 += ((/* implicit */unsigned int) var_4);
                                var_14 = ((/* implicit */unsigned int) var_0);
                            }
                            for (long long int i_5 = 0; i_5 < 24; i_5 += 3) 
                            {
                                arr_15 [i_0] [i_1] [20LL] [20LL] = ((/* implicit */unsigned char) var_3);
                                var_15 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned char) var_7))) ? (min((((/* implicit */unsigned long long int) (unsigned char)39)), (min((var_2), (((/* implicit */unsigned long long int) (unsigned char)26)))))) : (var_2)));
                                var_16 ^= ((/* implicit */unsigned short) var_1);
                                var_17 -= ((/* implicit */unsigned long long int) min((((long long int) arr_6 [i_0] [i_1 - 2])), (((/* implicit */long long int) ((((/* implicit */_Bool) min((4ULL), (4844687028879910434ULL)))) || (((/* implicit */_Bool) arr_7 [i_1 - 1] [i_1 - 1])))))));
                                arr_16 [(unsigned char)14] [(unsigned char)14] [i_1 + 1] [i_2] [i_3] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_0 [i_1] [i_1 + 1]) ? (((/* implicit */int) arr_5 [i_1 + 1] [i_1 - 1] [i_1 - 1] [i_1 - 1])) : (((/* implicit */int) var_6))))) ? (((((((/* implicit */_Bool) var_5)) ? (arr_12 [i_0] [i_0] [i_1 - 1] [i_2] [i_3] [5LL]) : (13602057044829641183ULL))) * (0ULL))) : (max((((/* implicit */unsigned long long int) var_4)), (min((0ULL), (13602057044829641188ULL)))))));
                            }
                        }
                    } 
                } 
            }
        } 
    } 
    var_18 &= ((/* implicit */unsigned int) var_3);
    var_19 = var_2;
    var_20 |= ((long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) & (var_0)))) ? (var_2) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) | (((/* implicit */int) var_8)))))));
}
