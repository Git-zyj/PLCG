/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234397
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234397 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234397
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
    var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_5)) ? (var_11) : (((int) (+(((/* implicit */int) (unsigned char)255)))))));
    var_15 = ((/* implicit */unsigned short) ((var_1) <= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) var_2)), (var_3)))) ? (((long long int) var_4)) : (((/* implicit */long long int) ((/* implicit */int) var_10))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 4; i_0 < 19; i_0 += 3) 
    {
        for (long long int i_1 = 1; i_1 < 19; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_0 [i_0]), (((/* implicit */int) max((var_3), (((/* implicit */unsigned char) (_Bool)0)))))))) ? (3281934842072677075ULL) : (0ULL)));
                var_17 = ((/* implicit */unsigned char) max((((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) arr_1 [i_0] [i_0]))) ? (((var_8) & (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [(short)4] [i_0] [0]))))) : (((/* implicit */unsigned int) 62914560))))), (max((arr_2 [i_0] [i_1]), (((/* implicit */long long int) var_10))))));
                /* LoopSeq 1 */
                for (unsigned int i_2 = 0; i_2 < 20; i_2 += 3) 
                {
                    arr_6 [i_0] [i_1] [i_1] = ((/* implicit */int) var_8);
                    arr_7 [i_2] [14LL] [i_0] |= ((/* implicit */_Bool) arr_3 [i_0] [i_0 - 2] [(unsigned char)8]);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20; i_3 += 3) 
                    {
                        for (short i_4 = 0; i_4 < 20; i_4 += 3) 
                        {
                            {
                                arr_16 [8LL] [8LL] [i_2] [8LL] [i_2] = ((/* implicit */unsigned short) arr_10 [(short)3]);
                                arr_17 [i_1] [i_1 + 1] [11U] [i_0] [i_0] = ((/* implicit */unsigned char) var_7);
                                arr_18 [i_4] [i_3] [i_2] [(unsigned char)16] [i_0 + 1] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) min((arr_15 [i_0] [i_1] [i_1] [i_3] [i_4]), (((/* implicit */unsigned short) arr_3 [i_0] [i_0] [i_0 - 1]))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)127)))), (((/* implicit */int) min((var_10), (((/* implicit */unsigned char) ((_Bool) (_Bool)0))))))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
}
