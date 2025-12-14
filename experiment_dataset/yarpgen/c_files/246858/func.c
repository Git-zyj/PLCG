/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246858
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246858 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246858
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
    var_12 = ((/* implicit */_Bool) 18446744073709551595ULL);
    var_13 = ((/* implicit */int) (unsigned short)0);
    var_14 = ((/* implicit */unsigned int) var_7);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */unsigned long long int) var_1);
                /* LoopSeq 3 */
                for (unsigned long long int i_2 = 1; i_2 < 16; i_2 += 3) 
                {
                    arr_10 [(unsigned short)8] [(unsigned short)8] [(unsigned short)8] [(unsigned short)8] = ((/* implicit */unsigned int) (unsigned short)22173);
                    /* LoopSeq 2 */
                    for (unsigned int i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        var_16 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)-74))));
                        var_17 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) ((unsigned short) (unsigned short)43623))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) (signed char)-8)), (arr_7 [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2 + 1]))))) : (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [i_1] [i_1] [i_2] [i_3])) ? (var_1) : (((/* implicit */int) arr_3 [i_3]))))), (((((/* implicit */unsigned int) ((/* implicit */int) var_10))) + (1316723306U)))))));
                        arr_14 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */signed char) var_9);
                    }
                    for (short i_4 = 0; i_4 < 17; i_4 += 1) 
                    {
                        arr_17 [i_0] [i_1] [i_2] [i_4] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) 8423511577209284973LL)) && (((/* implicit */_Bool) var_1)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (((((/* implicit */_Bool) arr_6 [i_1 - 1] [i_1 - 1] [i_2 + 1] [i_2 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1 - 1] [i_1 - 1] [i_2 - 1] [i_2 + 1]))) : (33ULL)))));
                        var_18 = ((/* implicit */short) (!(((/* implicit */_Bool) 20ULL))));
                        var_19 += ((/* implicit */short) (((!(arr_12 [i_2] [i_2] [i_2 - 1] [i_2 + 1]))) && (((/* implicit */_Bool) min((9ULL), (((/* implicit */unsigned long long int) var_2)))))));
                    }
                }
                for (long long int i_5 = 0; i_5 < 17; i_5 += 2) 
                {
                    var_20 = ((((((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_0])) + (var_1)))) ? (((/* implicit */long long int) arr_11 [i_1 - 1] [i_5])) : (max((((/* implicit */long long int) var_3)), (arr_8 [(_Bool)1] [i_1] [i_1] [i_1]))))) - (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551588ULL)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_2))))) ? ((((_Bool)1) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) max((((/* implicit */unsigned short) var_2)), ((unsigned short)35748))))))));
                    var_21 -= ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (short)12754)), (max((((/* implicit */unsigned long long int) (unsigned char)0)), (18446744073709551587ULL)))));
                }
                for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
                {
                    var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */int) arr_18 [i_6 + 1] [i_6] [i_1 - 1] [i_1 - 1])), ((~(((/* implicit */int) (unsigned short)15928))))))) ? (((/* implicit */int) (unsigned short)20518)) : (((/* implicit */int) (signed char)-126)))))));
                    arr_23 [i_0] [i_6] = ((/* implicit */long long int) var_4);
                    arr_24 [i_6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_6) - (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_6] [i_6 + 1] [i_6 + 1])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_19 [i_1 - 1])))) : (var_6)));
                }
                var_23 = ((/* implicit */signed char) ((29ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4))))))));
            }
        } 
    } 
}
