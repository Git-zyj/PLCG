/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200419
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200419 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200419
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
    var_14 = ((/* implicit */unsigned short) var_1);
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 19; i_0 += 4) 
    {
        for (unsigned int i_1 = 3; i_1 < 19; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (unsigned int i_2 = 0; i_2 < 21; i_2 += 1) 
                {
                    for (int i_3 = 0; i_3 < 21; i_3 += 2) 
                    {
                        for (long long int i_4 = 0; i_4 < 21; i_4 += 1) 
                        {
                            {
                                var_15 += ((/* implicit */signed char) arr_12 [4] [i_2] [(_Bool)1] [i_4]);
                                var_16 ^= ((/* implicit */signed char) (unsigned char)22);
                                var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) var_12))));
                                arr_15 [i_0] [i_0] [i_1] [i_0] [(signed char)9] [(unsigned char)13] = (((-(((/* implicit */int) arr_2 [i_1] [i_1 - 2])))) << (((min((arr_9 [15ULL] [i_0 - 2] [i_2] [i_1 - 2]), (arr_9 [(short)10] [i_0 - 1] [i_2] [i_1 - 2]))) - (52006343))));
                            }
                        } 
                    } 
                } 
                arr_16 [i_1] = ((/* implicit */int) min((((/* implicit */unsigned int) max((((arr_10 [i_0]) ? (var_11) : (((/* implicit */int) (unsigned char)247)))), (((/* implicit */int) ((signed char) arr_9 [i_0] [14LL] [i_1 - 3] [i_1 + 1])))))), (var_8)));
                /* LoopNest 2 */
                for (short i_5 = 0; i_5 < 21; i_5 += 2) 
                {
                    for (unsigned short i_6 = 0; i_6 < 21; i_6 += 2) 
                    {
                        {
                            var_18 = ((/* implicit */_Bool) min((var_18), (arr_10 [(_Bool)1])));
                            var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) ((short) min((((/* implicit */int) var_13)), (var_11)))))));
                            arr_23 [i_0] [i_1] = ((/* implicit */signed char) var_10);
                        }
                    } 
                } 
            }
        } 
    } 
}
