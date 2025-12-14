/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207868
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207868 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207868
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
    var_18 = ((/* implicit */unsigned short) var_8);
    var_19 &= ((/* implicit */_Bool) min(((+(((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (9007199254740480LL))))), (var_3)));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 23; i_0 += 3) 
    {
        for (unsigned char i_1 = 4; i_1 < 22; i_1 += 3) 
        {
            {
                /* LoopSeq 2 */
                for (long long int i_2 = 0; i_2 < 24; i_2 += 3) 
                {
                    arr_7 [i_1] [i_1] [i_2] = ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */_Bool) min((9007199254740489LL), (((/* implicit */long long int) arr_3 [i_1] [1U]))))) ? (max((9007199254740493LL), (((/* implicit */long long int) var_0)))) : (((/* implicit */long long int) ((/* implicit */int) min((arr_1 [20ULL] [i_0]), (arr_2 [i_1]))))))));
                    arr_8 [i_0] [(_Bool)1] [i_1] [i_0] = ((/* implicit */unsigned short) (~(9007199254740494LL)));
                    arr_9 [9U] [i_1] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) min((9007199254740495LL), (-9007199254740489LL)))))) ? (((((/* implicit */_Bool) arr_4 [(unsigned short)3] [i_1] [i_0])) ? (min((9007199254740522LL), (9007199254740532LL))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) -9007199254740492LL)))))) : (((/* implicit */long long int) ((/* implicit */int) min((arr_0 [i_0 - 1]), (arr_0 [i_0 + 1])))))));
                    /* LoopSeq 2 */
                    for (unsigned int i_3 = 1; i_3 < 22; i_3 += 1) 
                    {
                        var_20 = ((((/* implicit */_Bool) ((max((-9007199254740494LL), (-9007199254740487LL))) / (((-9007199254740489LL) - (9007199254740532LL)))))) && (max((arr_11 [i_3] [(_Bool)1] [i_2] [(_Bool)1] [i_0 + 1] [14U]), (arr_2 [i_1]))));
                        var_21 = ((/* implicit */unsigned long long int) ((arr_6 [i_3 + 1] [i_2] [i_0]) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) -9007199254740513LL)))) : (-9007199254740470LL)));
                        var_22 |= ((/* implicit */short) (~(max(((+(-9007199254740481LL))), (((/* implicit */long long int) ((-9007199254740482LL) > (9007199254740494LL))))))));
                    }
                    for (unsigned int i_4 = 0; i_4 < 24; i_4 += 3) 
                    {
                        arr_15 [i_4] [i_1] [i_1] [4U] = ((/* implicit */unsigned int) ((long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_2 [i_1])), (arr_4 [(short)0] [i_1] [i_2])))) ? (((/* implicit */int) (!(arr_6 [i_0] [16LL] [i_2])))) : (((/* implicit */int) arr_4 [(_Bool)1] [i_1] [i_0])))));
                        arr_16 [i_1] [i_1] = ((/* implicit */unsigned int) arr_12 [i_0] [i_1] [(_Bool)1]);
                    }
                }
                for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                {
                    arr_20 [i_5] [i_1] [i_1] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) min((var_5), (((/* implicit */unsigned short) arr_6 [i_5 - 1] [i_1] [i_0]))))), (((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1] [i_1]))) + (9007199254740483LL))))))));
                    var_23 ^= ((/* implicit */short) max((max((((/* implicit */long long int) var_13)), (arr_14 [6ULL] [(_Bool)0] [(_Bool)0] [i_1 - 2]))), (((/* implicit */long long int) arr_0 [(short)2]))));
                    var_24 = ((/* implicit */unsigned short) min((9007199254740523LL), (-9007199254740480LL)));
                }
                arr_21 [i_1] = ((/* implicit */short) min((((unsigned int) max((9007199254740486LL), (-9007199254740474LL)))), (((/* implicit */unsigned int) var_8))));
                var_25 = ((/* implicit */short) ((((/* implicit */_Bool) 9007199254740539LL)) ? (min((((/* implicit */unsigned int) arr_0 [i_0])), (((unsigned int) -9007199254740511LL)))) : (((/* implicit */unsigned int) ((arr_6 [i_1 + 2] [i_0] [i_0]) ? (((/* implicit */int) var_8)) : (((((/* implicit */int) arr_13 [(unsigned short)14] [i_0] [i_1] [i_1] [(_Bool)1] [i_0])) | (((/* implicit */int) var_13)))))))));
                var_26 = ((/* implicit */unsigned int) min((min((((/* implicit */long long int) arr_4 [i_0] [i_1] [i_1])), (arr_14 [i_0] [i_0 + 1] [i_1] [i_1]))), (var_3)));
            }
        } 
    } 
}
