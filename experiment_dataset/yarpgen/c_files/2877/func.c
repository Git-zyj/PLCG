/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2877
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2877 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2877
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
    for (long long int i_0 = 2; i_0 < 11; i_0 += 3) 
    {
        for (unsigned char i_1 = 4; i_1 < 11; i_1 += 4) 
        {
            {
                arr_6 [i_1] = ((/* implicit */unsigned short) (signed char)63);
                arr_7 [(signed char)6] [(signed char)6] [i_0 - 1] = ((/* implicit */long long int) min((((((/* implicit */_Bool) (unsigned char)215)) ? (min((var_4), (((/* implicit */unsigned long long int) arr_5 [i_0] [i_1 - 2] [i_0])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)63))))), (((/* implicit */unsigned long long int) (+(arr_5 [i_0 + 2] [i_0 + 1] [i_0 + 2]))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 4) 
                {
                    arr_12 [(unsigned short)9] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-64)) ? (((((/* implicit */_Bool) var_10)) ? (arr_3 [i_0] [i_2]) : (arr_3 [i_0 - 1] [i_0]))) : (((/* implicit */unsigned long long int) arr_1 [i_1]))));
                    arr_13 [10U] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)63)) ? ((~(17592186044415LL))) : (-17592186044416LL)));
                    arr_14 [i_0 - 1] [i_0] [1ULL] = ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */unsigned long long int) arr_5 [i_0] [13ULL] [i_0 + 3])) : (arr_3 [i_0 - 2] [7LL]));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 14; i_3 += 3) 
                    {
                        for (int i_4 = 0; i_4 < 14; i_4 += 1) 
                        {
                            {
                                arr_19 [(unsigned char)5] [i_3] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) arr_18 [i_0] [i_1 + 2] [i_2] [i_2] [i_4])) ? (arr_3 [i_0] [i_0]) : (((/* implicit */unsigned long long int) 2699812433U))))));
                                arr_20 [i_0] [i_0] [i_0] [i_3] [i_3] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_0] [(unsigned char)10] [i_0 - 1] [i_0 - 1] [(unsigned char)10])) ? (3894070271U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_0] [(_Bool)1] [i_0 - 1] [i_3] [i_4])))));
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (unsigned short i_5 = 0; i_5 < 14; i_5 += 4) 
                {
                    arr_23 [i_0] [i_0] [i_5] = ((/* implicit */unsigned char) arr_15 [i_0] [i_1] [i_5] [i_0]);
                    arr_24 [i_1] [i_5] = arr_3 [i_0] [13U];
                }
                arr_25 [i_0] = ((/* implicit */signed char) 4294967295U);
                arr_26 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) arr_11 [i_0] [i_0]);
            }
        } 
    } 
    var_12 = ((/* implicit */short) ((signed char) var_7));
}
