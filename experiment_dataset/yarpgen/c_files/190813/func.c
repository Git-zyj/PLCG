/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190813
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190813 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190813
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
    var_20 = ((/* implicit */long long int) (signed char)0);
    /* LoopNest 2 */
    for (long long int i_0 = 4; i_0 < 21; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                var_21 &= arr_1 [i_0] [i_1];
                var_22 = (+(614080255));
                /* LoopSeq 2 */
                for (signed char i_2 = 0; i_2 < 22; i_2 += 4) 
                {
                    var_23 = ((/* implicit */signed char) arr_3 [i_0 - 3] [i_0 - 3]);
                    arr_11 [(signed char)21] [17] [17] = ((/* implicit */int) ((long long int) arr_5 [i_0] [i_1] [i_1]));
                    var_24 = (-(arr_5 [i_2] [i_0 - 3] [i_0 - 3]));
                    var_25 = (-(arr_3 [i_1] [i_0]));
                    arr_12 [(signed char)9] [i_1] [i_1] [i_2] = ((/* implicit */long long int) -614080256);
                }
                for (int i_3 = 0; i_3 < 22; i_3 += 2) 
                {
                    var_26 = ((/* implicit */long long int) min((var_26), (((/* implicit */long long int) (~(((/* implicit */int) (signed char)18)))))));
                    var_27 = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [(signed char)11]))))) & (((/* implicit */int) ((signed char) (~(arr_14 [i_0] [i_3] [i_3] [i_3])))))));
                }
                /* LoopSeq 3 */
                /* vectorizable */
                for (signed char i_4 = 1; i_4 < 19; i_4 += 3) 
                {
                    var_28 = ((/* implicit */long long int) (+(((614080255) + (-614080256)))));
                    var_29 = ((/* implicit */int) ((signed char) arr_4 [i_1]));
                    arr_17 [i_0] [i_1] [i_4] = ((/* implicit */signed char) arr_13 [i_0] [i_1] [i_4] [i_4]);
                }
                for (long long int i_5 = 2; i_5 < 21; i_5 += 3) 
                {
                    var_30 = ((/* implicit */int) min((var_30), (arr_9 [(signed char)20] [i_1] [12] [i_1])));
                    var_31 |= -907917392;
                    var_32 = ((/* implicit */int) arr_14 [13LL] [i_1] [(signed char)12] [12LL]);
                }
                for (int i_6 = 0; i_6 < 22; i_6 += 3) 
                {
                    var_33 = ((/* implicit */long long int) arr_16 [19LL] [i_1] [(signed char)3] [4]);
                    arr_22 [15LL] [15LL] [i_6] = ((/* implicit */int) ((long long int) 614080258));
                    var_34 = ((/* implicit */signed char) arr_16 [i_0] [i_1] [(signed char)11] [i_6]);
                    var_35 = ((/* implicit */long long int) (signed char)-104);
                }
            }
        } 
    } 
}
