/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19373
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19373 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19373
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
    var_19 |= ((/* implicit */short) var_2);
    /* LoopSeq 2 */
    for (unsigned short i_0 = 2; i_0 < 9; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (signed char i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (signed char i_3 = 0; i_3 < 10; i_3 += 2) 
                {
                    {
                        var_20 = max(((-((-(arr_5 [i_0] [i_0] [i_0]))))), (((/* implicit */long long int) var_4)));
                        var_21 = ((/* implicit */int) (signed char)-13);
                        arr_11 [i_0] [i_0] [i_0] [5] = (signed char)13;
                        /* LoopSeq 3 */
                        for (unsigned short i_4 = 0; i_4 < 10; i_4 += 4) 
                        {
                            var_22 = ((/* implicit */int) min((var_22), (((((/* implicit */_Bool) 7428179642678117888LL)) ? (((/* implicit */int) (!((_Bool)1)))) : ((~(((/* implicit */int) (unsigned short)51452))))))));
                            var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) min((1510641600), (-2114389237))))));
                        }
                        for (unsigned short i_5 = 1; i_5 < 9; i_5 += 2) 
                        {
                            arr_17 [i_0] [i_0] [i_0] [i_0] [i_0 + 1] |= ((/* implicit */int) (~((~(7428179642678117875LL)))));
                            arr_18 [i_0] [0ULL] [i_0] [i_5] [i_0] = arr_0 [(signed char)4];
                            var_24 = arr_9 [i_0] [i_2] [(signed char)1] [i_5 - 1];
                            var_25 = ((/* implicit */int) ((((/* implicit */_Bool) 4398038122496ULL)) ? ((+(var_18))) : (((/* implicit */long long int) ((/* implicit */int) (!(var_9)))))));
                        }
                        for (signed char i_6 = 0; i_6 < 10; i_6 += 1) 
                        {
                            var_26 -= ((/* implicit */unsigned char) var_16);
                            var_27 ^= ((/* implicit */short) max((((/* implicit */int) arr_0 [i_1])), (((((/* implicit */_Bool) arr_4 [i_2] [i_2])) ? (var_13) : (((/* implicit */int) arr_4 [i_3] [i_1]))))));
                            arr_22 [i_6] [i_6] [i_6] [i_0] = ((/* implicit */short) ((min((arr_7 [i_0]), (((/* implicit */int) max((var_14), (((/* implicit */unsigned char) var_16))))))) >> (((/* implicit */int) arr_8 [i_0 + 1] [i_0 - 2] [i_0] [i_0] [(signed char)2]))));
                            arr_23 [i_6] [(unsigned char)9] [i_2] [(unsigned char)9] [i_6] = ((/* implicit */unsigned short) var_16);
                        }
                    }
                } 
            } 
        } 
        arr_24 [i_0] = ((/* implicit */signed char) 7428179642678117875LL);
    }
    /* vectorizable */
    for (signed char i_7 = 2; i_7 < 11; i_7 += 4) 
    {
        var_28 = ((/* implicit */unsigned char) max((var_28), (((/* implicit */unsigned char) var_9))));
        arr_28 [i_7] = ((/* implicit */int) arr_26 [i_7 - 2]);
    }
}
