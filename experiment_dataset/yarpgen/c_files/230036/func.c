/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230036
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230036 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230036
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
    for (long long int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 12; i_2 += 2) 
                {
                    for (short i_3 = 3; i_3 < 11; i_3 += 3) 
                    {
                        {
                            var_20 ^= var_0;
                            var_21 = ((/* implicit */signed char) 2147483647);
                            var_22 = ((/* implicit */long long int) (((((((~(((/* implicit */int) arr_8 [i_3] [i_3] [i_3] [i_3 - 2])))) + (2147483647))) >> ((((((_Bool)1) ? (-5296219687439254834LL) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_0] [i_0]))))) + (5296219687439254860LL))))) & (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (var_7) : (((/* implicit */int) arr_3 [i_0] [(unsigned char)2] [i_1]))))) ? (((/* implicit */int) var_1)) : (arr_6 [i_0])))));
                        }
                    } 
                } 
                var_23 = ((/* implicit */short) ((((/* implicit */int) var_9)) & ((+(((/* implicit */int) (unsigned short)53069))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (int i_4 = 1; i_4 < 11; i_4 += 4) 
                {
                    arr_11 [i_0] [i_0] [i_0] [i_4] = ((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0])) ? (((((/* implicit */_Bool) 671417585)) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [(_Bool)1] [i_1]))) : (var_13))) : (((/* implicit */long long int) (-(838895740U)))));
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 0; i_5 < 13; i_5 += 4) 
                    {
                        for (unsigned int i_6 = 0; i_6 < 13; i_6 += 3) 
                        {
                            {
                                var_24 = ((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))));
                                arr_18 [(signed char)9] [i_0] [i_0] [i_4] [i_0] [i_1] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) var_19)) && (((((/* implicit */long long int) ((/* implicit */int) var_8))) <= (-5296219687439254834LL)))));
                            }
                        } 
                    } 
                }
                arr_19 [i_0] [i_1] [i_1] = ((/* implicit */int) var_4);
                /* LoopSeq 1 */
                /* vectorizable */
                for (long long int i_7 = 3; i_7 < 11; i_7 += 4) 
                {
                    var_25 = ((/* implicit */signed char) (+(((/* implicit */int) arr_2 [i_0] [i_1] [(_Bool)1]))));
                    var_26 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483647)) ? (-671417586) : (((/* implicit */int) var_1))))) ? (((/* implicit */int) (unsigned char)84)) : (((/* implicit */int) var_11)));
                }
            }
        } 
    } 
    var_27 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)63731))))) : ((+(((/* implicit */int) var_18)))))), (((/* implicit */int) ((_Bool) (-(632963470U)))))));
    var_28 = ((/* implicit */signed char) var_14);
}
