/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241960
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241960 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241960
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
    var_13 = ((/* implicit */long long int) (-((((_Bool)1) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((_Bool) var_0)))))));
    var_14 = ((/* implicit */int) max((((/* implicit */unsigned short) var_4)), (var_10)));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        /* LoopSeq 3 */
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            arr_4 [(_Bool)1] = ((/* implicit */short) min(((+(((/* implicit */int) arr_0 [i_0] [i_0])))), (((((/* implicit */int) var_1)) & (((/* implicit */int) arr_3 [i_0] [i_1] [i_0]))))));
            var_15 += arr_0 [i_0] [i_1];
        }
        for (unsigned long long int i_2 = 4; i_2 < 11; i_2 += 3) 
        {
            arr_7 [i_0] = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_2 - 3]))))) < (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_11))))));
            arr_8 [i_0] [i_2] = ((/* implicit */long long int) var_6);
            arr_9 [i_0] [(_Bool)1] [i_0] |= ((/* implicit */_Bool) max((arr_6 [i_0] [i_2 - 2]), (((/* implicit */long long int) ((var_4) ? (((/* implicit */int) (!(((/* implicit */_Bool) -150402407))))) : (((/* implicit */int) arr_2 [(signed char)10] [i_2 - 3] [i_2 - 3])))))));
        }
        /* vectorizable */
        for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 3) 
        {
            var_16 = ((/* implicit */int) (-(arr_5 [(signed char)7] [(short)0] [i_3])));
            var_17 = ((/* implicit */signed char) (~((-(((/* implicit */int) var_9))))));
        }
        /* LoopSeq 1 */
        for (int i_4 = 0; i_4 < 12; i_4 += 4) 
        {
            var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned char)254)))))));
            /* LoopSeq 2 */
            for (short i_5 = 2; i_5 < 9; i_5 += 2) /* same iter space */
            {
                var_19 = min(((-((+(var_7))))), (((max((-150402407), (((/* implicit */int) (unsigned short)18182)))) + (((/* implicit */int) arr_14 [i_0] [i_0])))));
                arr_18 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) var_7);
            }
            for (short i_6 = 2; i_6 < 9; i_6 += 2) /* same iter space */
            {
                var_20 = (((-(((/* implicit */int) (unsigned short)47361)))) > ((-(150402407))));
                arr_21 [i_0] [i_0] [i_4] [i_4] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [3U] [i_6 - 1] [i_6 + 1])) ? (((/* implicit */int) arr_13 [i_0] [i_6 - 1] [i_6])) : (((/* implicit */int) arr_13 [i_0] [i_6 - 2] [i_6]))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_6 + 2] [10]))) - (arr_17 [i_0] [i_6 + 3] [7]))));
                arr_22 [i_4] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)241))) : (((6414473931607524153LL) * (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
            }
            arr_23 [(signed char)8] [i_4] = ((/* implicit */long long int) min(((((+(((/* implicit */int) arr_1 [i_0])))) | (((/* implicit */int) ((signed char) arr_1 [i_4]))))), (((/* implicit */int) arr_1 [i_0]))));
        }
    }
}
