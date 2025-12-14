/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213592
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213592 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213592
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
    var_19 -= ((/* implicit */long long int) max((max((((/* implicit */unsigned int) var_1)), (var_18))), (3184973377U)));
    /* LoopSeq 1 */
    for (long long int i_0 = 1; i_0 < 12; i_0 += 2) 
    {
        var_20 = ((/* implicit */int) min((var_20), (-743622880)));
        var_21 -= ((/* implicit */signed char) arr_0 [i_0] [i_0]);
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)0)) >> (((((/* implicit */int) (unsigned short)47809)) - (47782))))))));
            arr_7 [i_0] [i_1] [i_1] |= ((/* implicit */unsigned int) ((signed char) (+(arr_2 [i_0]))));
            arr_8 [i_1] = ((/* implicit */signed char) (~(((/* implicit */int) var_5))));
        }
        for (long long int i_2 = 0; i_2 < 14; i_2 += 2) 
        {
            arr_11 [i_0] [i_2] [i_0] = ((/* implicit */unsigned short) arr_3 [i_0] [i_2]);
            arr_12 [i_0] [i_0] [6LL] = ((((/* implicit */_Bool) max((((int) arr_0 [i_2] [i_0])), (max((((/* implicit */int) arr_1 [4] [i_2])), (arr_0 [i_0] [i_2])))))) ? (((/* implicit */int) (unsigned short)17705)) : ((((~(((/* implicit */int) (unsigned short)47845)))) + (703001111))));
        }
        var_23 = min((min((max((((/* implicit */long long int) (unsigned short)2277)), (1057776869633917943LL))), (((/* implicit */long long int) max((var_14), (((/* implicit */unsigned short) arr_1 [i_0] [i_0 + 1]))))))), (((/* implicit */long long int) (signed char)-91)));
        arr_13 [i_0] = ((int) ((unsigned short) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */long long int) arr_10 [4U])) : (arr_3 [i_0] [i_0]))));
    }
    /* LoopNest 2 */
    for (signed char i_3 = 1; i_3 < 20; i_3 += 4) 
    {
        for (unsigned int i_4 = 4; i_4 < 20; i_4 += 1) 
        {
            {
                arr_19 [i_3] = ((/* implicit */int) ((((/* implicit */long long int) var_18)) | (max((((/* implicit */long long int) min((arr_16 [i_3] [i_4]), (((/* implicit */unsigned int) var_8))))), (((long long int) arr_15 [1U]))))));
                var_24 = max((((/* implicit */int) ((_Bool) 1225437426))), ((+((~(arr_14 [14]))))));
            }
        } 
    } 
}
