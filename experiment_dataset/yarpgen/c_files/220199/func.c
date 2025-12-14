/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220199
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220199 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220199
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
    var_16 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_7))));
    var_17 = ((/* implicit */short) (!(((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (4230785361U) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))), (var_3))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_18 = ((/* implicit */unsigned char) ((unsigned int) arr_0 [i_0 - 1] [i_0 - 1]));
        var_19 ^= ((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0 - 1] [i_0])) ^ (((/* implicit */int) arr_0 [i_0 - 1] [5ULL]))));
        var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [15] [15])) ? (((/* implicit */int) arr_1 [i_0 - 1] [i_0])) : (((/* implicit */int) arr_1 [i_0] [i_0]))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                {
                    arr_10 [i_2] = ((/* implicit */long long int) ((_Bool) (+(((/* implicit */int) arr_7 [i_1])))));
                    arr_11 [i_2] [i_2] = ((/* implicit */short) max((((((/* implicit */_Bool) arr_9 [i_2] [i_2] [i_2] [i_3])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (4230785361U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [3])))))) : ((-(15584313533697785801ULL))))), (((/* implicit */unsigned long long int) min((((unsigned short) -5362503073572207394LL)), (min((arr_2 [i_1] [i_2]), (((/* implicit */unsigned short) (signed char)64)))))))));
                    var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_1] [i_3])) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_2] [i_2])) ? (5362503073572207419LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)142)))))) ? (((((/* implicit */_Bool) 536870911LL)) ? (281474976710655ULL) : (((/* implicit */unsigned long long int) 1121318096U)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_3] [i_2]))))) : (((/* implicit */unsigned long long int) max((min((5362503073572207393LL), (((/* implicit */long long int) (unsigned short)14941)))), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)55))) < (var_14)))))))));
                }
            } 
        } 
        arr_12 [i_1] [i_1] = min((max((min((12088453841779218425ULL), (((/* implicit */unsigned long long int) (short)127)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 15584313533697785801ULL)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_1 [i_1] [i_1]))))))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_12)), (min((6951288101555677454LL), (((/* implicit */long long int) (unsigned short)32397))))))));
        arr_13 [i_1] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) (unsigned short)39691)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1] [i_1]))) : (6358290231930333182ULL))), (((/* implicit */unsigned long long int) arr_2 [i_1] [i_1]))));
        var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) (~(((((/* implicit */int) ((unsigned short) 6358290231930333156ULL))) ^ ((~(((/* implicit */int) (unsigned short)10689)))))))))));
        arr_14 [i_1] = (-(max((((/* implicit */unsigned long long int) min((((/* implicit */long long int) (signed char)64)), (var_3)))), (6358290231930333156ULL))));
    }
    /* vectorizable */
    for (long long int i_4 = 1; i_4 < 11; i_4 += 1) 
    {
        arr_18 [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 12088453841779218468ULL)) ? (((/* implicit */int) arr_1 [i_4 + 1] [i_4 - 1])) : (((/* implicit */int) (_Bool)0))))) || (((/* implicit */_Bool) (short)31494))));
        arr_19 [i_4 - 1] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_7 [i_4 - 1])) << (((arr_9 [(_Bool)1] [i_4 - 1] [i_4 + 1] [i_4 - 1]) + (3714889378765563578LL)))));
        arr_20 [i_4 + 1] = ((/* implicit */short) (+(((/* implicit */int) arr_17 [i_4 - 1]))));
        var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) ((unsigned short) ((unsigned int) 0U))))));
        var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) ((((/* implicit */int) (signed char)-68)) < (((/* implicit */int) arr_2 [i_4 + 1] [i_4 - 1])))))));
    }
    /* LoopSeq 1 */
    for (long long int i_5 = 4; i_5 < 17; i_5 += 3) 
    {
        /* LoopSeq 1 */
        for (short i_6 = 3; i_6 < 19; i_6 += 1) 
        {
            arr_25 [i_5] = ((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)181)) || (((/* implicit */_Bool) max((2147483647U), (((/* implicit */unsigned int) -1936246011))))))))));
            arr_26 [i_5] [i_5] = ((/* implicit */int) ((long long int) (+(((/* implicit */int) max(((short)31494), (((/* implicit */short) (signed char)-68))))))));
            var_25 -= ((/* implicit */unsigned int) (-(((/* implicit */int) max(((unsigned char)0), ((unsigned char)181))))));
        }
        var_26 = ((/* implicit */long long int) max((var_26), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)0)) >> (((arr_22 [(unsigned short)6] [i_5]) - (1872357603717701902ULL)))))) | ((~(arr_22 [(_Bool)1] [i_5]))))))));
    }
}
