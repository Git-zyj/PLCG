/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212592
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212592 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212592
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
    var_11 = var_7;
    var_12 -= ((/* implicit */unsigned int) (!(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (17158814790613082150ULL) : (var_7)))) && ((!(((/* implicit */_Bool) var_7))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                arr_4 [i_0] = (~(min((((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_3)), (9223372036854775807LL)))), (max((((/* implicit */unsigned long long int) arr_1 [i_0] [i_0])), (var_7))))));
                arr_5 [i_0] [i_0] = ((/* implicit */int) ((((unsigned int) (unsigned short)37289)) - (((((/* implicit */_Bool) 17158814790613082150ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (arr_3 [i_0] [i_1] [i_1])))));
                var_13 -= ((/* implicit */unsigned short) arr_0 [i_0]);
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_2))));
    /* LoopSeq 2 */
    for (unsigned int i_2 = 0; i_2 < 17; i_2 += 1) 
    {
        arr_8 [i_2] = ((max((var_3), (((((/* implicit */int) var_10)) <= (465423778))))) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned char)192)), (var_0)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_2]))) : (max((16086349880470350952ULL), (((/* implicit */unsigned long long int) arr_6 [i_2])))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) arr_6 [i_2])), (((short) (unsigned char)250)))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_3 = 0; i_3 < 17; i_3 += 2) 
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_4 = 0; i_4 < 17; i_4 += 2) 
            {
                /* LoopNest 2 */
                for (unsigned char i_5 = 0; i_5 < 17; i_5 += 1) 
                {
                    for (long long int i_6 = 0; i_6 < 17; i_6 += 1) 
                    {
                        {
                            arr_22 [15ULL] [i_3] [i_4] [i_5] [i_5] [i_5] [i_6] = ((/* implicit */int) ((((unsigned long long int) min((arr_16 [i_2] [i_3] [i_4] [i_4]), (((/* implicit */long long int) var_8))))) >= (((unsigned long long int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) 18446744073709551615ULL)))))));
                            arr_23 [i_2] [i_3] [(_Bool)1] [i_5] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_8)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_6] [i_5] [i_3]))))) <= (((/* implicit */unsigned long long int) ((arr_15 [i_2] [i_3] [i_4]) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)128))))))))), (min((((/* implicit */unsigned long long int) ((-465423779) & (2147418112)))), (((var_7) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [(_Bool)1])))))))));
                            arr_24 [i_2] [i_5] [i_4] [i_4] [3LL] [i_5] [11ULL] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) max((((8884796646131977643LL) >> (((arr_9 [13LL] [i_3] [i_4]) - (5036877450255891508ULL))))), (((/* implicit */long long int) var_10))))), (min((((((/* implicit */_Bool) (unsigned short)3968)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (var_0))), (((/* implicit */unsigned long long int) var_1))))));
                            var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) max((5968941923484723587LL), (((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) arr_18 [i_2] [i_3] [i_4] [i_4] [i_5] [i_4]))) ? (((/* implicit */int) ((unsigned short) arr_14 [i_2] [i_2] [i_2]))) : (((/* implicit */int) ((((/* implicit */int) arr_14 [i_2] [1U] [i_6])) <= (((/* implicit */int) var_10)))))))))))));
                        }
                    } 
                } 
                var_16 ^= ((/* implicit */int) (!(((/* implicit */_Bool) 2069609110U))));
                var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) max((max((((18446744073709551615ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))), (((/* implicit */unsigned long long int) ((-4045367083342277180LL) - (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_3] [i_3])))))))), (((/* implicit */unsigned long long int) min((((/* implicit */int) var_3)), (((int) 1228205301))))))))));
            }
            var_18 = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_9 [i_2] [i_2] [4])) ? (-1612554455) : (((/* implicit */int) (short)8425)))), ((~(var_8)))));
            var_19 ^= ((/* implicit */int) max((((/* implicit */unsigned long long int) 4045367083342277179LL)), (max((arr_20 [i_2] [i_2] [i_2] [i_3] [i_3]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3291059909U)) ? (arr_15 [i_3] [i_2] [i_2]) : (((/* implicit */long long int) arr_7 [i_2] [i_2])))))))));
        }
        arr_25 [i_2] [i_2] = ((/* implicit */unsigned int) ((((unsigned long long int) min((var_0), (((/* implicit */unsigned long long int) arr_21 [i_2] [i_2] [16] [i_2] [i_2]))))) | (((((/* implicit */_Bool) arr_21 [i_2] [13U] [i_2] [i_2] [i_2])) ? (((((/* implicit */unsigned long long int) 4294967295U)) % (arr_9 [i_2] [(short)16] [i_2]))) : ((-(arr_20 [i_2] [i_2] [6ULL] [(unsigned short)16] [i_2])))))));
        arr_26 [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 1228205301)) ? (((((/* implicit */_Bool) arr_20 [i_2] [i_2] [i_2] [6LL] [i_2])) ? (arr_20 [i_2] [i_2] [i_2] [(signed char)14] [12U]) : (((/* implicit */unsigned long long int) arr_7 [i_2] [i_2])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))));
        var_20 = ((/* implicit */_Bool) max((0U), (((/* implicit */unsigned int) -2147483623))));
    }
    for (signed char i_7 = 0; i_7 < 14; i_7 += 4) 
    {
        arr_29 [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) arr_3 [i_7] [i_7] [i_7])) ? (var_7) : (((var_0) * (((((/* implicit */_Bool) arr_19 [i_7] [4] [i_7] [i_7] [i_7] [4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (var_0)))))));
        var_21 *= ((/* implicit */short) ((((/* implicit */int) (signed char)-47)) <= (min((((/* implicit */int) arr_21 [i_7] [i_7] [i_7] [i_7] [3ULL])), ((~(((/* implicit */int) var_2))))))));
    }
}
