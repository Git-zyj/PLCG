/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233515
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233515 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233515
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
    for (signed char i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_0] = ((/* implicit */unsigned char) var_11);
                /* LoopSeq 2 */
                for (long long int i_2 = 1; i_2 < 22; i_2 += 3) 
                {
                    arr_9 [i_0] = ((/* implicit */unsigned char) ((signed char) ((((/* implicit */_Bool) max((var_1), (((/* implicit */unsigned int) arr_8 [i_0] [i_0]))))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (_Bool)0)))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 23; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 4; i_4 < 22; i_4 += 3) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) (~(((/* implicit */int) var_4))))), (((unsigned int) arr_12 [i_1] [i_1] [i_4 - 2] [i_3] [14U] [i_0] [i_2 + 1]))));
                                arr_14 [i_0] [(signed char)19] [i_2] [i_3] [(signed char)19] = ((/* implicit */unsigned int) 87854033781418224LL);
                            }
                        } 
                    } 
                    var_15 = ((/* implicit */unsigned char) var_7);
                }
                for (short i_5 = 0; i_5 < 23; i_5 += 3) 
                {
                    arr_17 [i_1] [(short)10] [i_0] [i_0] = ((/* implicit */unsigned char) (!(((arr_0 [i_1]) > (((/* implicit */int) (short)15))))));
                    var_16 = ((/* implicit */unsigned char) max((((/* implicit */int) min((((/* implicit */short) (signed char)30)), (arr_2 [i_0] [i_1] [i_5])))), (((((/* implicit */_Bool) arr_2 [i_0] [i_1] [i_5])) ? (((/* implicit */int) arr_4 [(_Bool)1])) : (((/* implicit */int) arr_2 [i_0] [i_1] [i_5]))))));
                    /* LoopNest 2 */
                    for (unsigned char i_6 = 2; i_6 < 22; i_6 += 3) 
                    {
                        for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
                        {
                            {
                                arr_24 [i_0] [i_1] [i_5] [i_6] [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) (-(arr_3 [i_0] [i_1] [i_6]))))) ? (((min((var_10), (((/* implicit */long long int) var_8)))) % (((/* implicit */long long int) ((unsigned int) arr_11 [i_1] [3U]))))) : (((long long int) arr_12 [(unsigned short)10] [i_6 - 1] [i_5] [i_6] [i_7 + 1] [i_0] [i_7 + 1]))));
                                var_17 = ((/* implicit */unsigned long long int) arr_4 [i_1]);
                                var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_7] [i_7 + 1] [i_7] [i_7 + 1] [i_7])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (arr_20 [i_0] [i_0] [i_0] [i_0] [i_0])))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_7 + 1] [i_6] [i_5] [(short)6] [i_0])) ? (arr_20 [i_0] [i_1] [i_5] [i_6 + 1] [i_7 + 1]) : (arr_20 [i_0] [i_6] [i_5] [i_6 - 1] [(signed char)9]))))));
                            }
                        } 
                    } 
                }
                arr_25 [i_0] [21LL] = min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned int) arr_18 [i_0] [i_0] [i_1] [i_1] [i_1] [i_1])) : (arr_20 [i_0] [i_1] [i_1] [i_1] [i_1])))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) min((var_0), (var_0)))))), (((/* implicit */int) var_6)));
            }
        } 
    } 
    var_19 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) var_3)) ^ (((/* implicit */int) ((unsigned short) var_5)))))) ? (((/* implicit */long long int) (+((-(((/* implicit */int) (_Bool)1))))))) : (((8407344036151506400LL) - (((/* implicit */long long int) ((((/* implicit */_Bool) 12176466619231547567ULL)) ? (var_5) : (((/* implicit */int) var_0)))))))));
}
