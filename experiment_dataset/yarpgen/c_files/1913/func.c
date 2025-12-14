/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1913
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1913 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1913
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
    var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)16300)) ? (((/* implicit */unsigned long long int) -797634069038681577LL)) : (4701503352155870741ULL)))) ? (((min((var_1), (((/* implicit */unsigned long long int) -797634069038681577LL)))) + (((/* implicit */unsigned long long int) var_11)))) : (((/* implicit */unsigned long long int) var_17))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 2) /* same iter space */
    {
        /* LoopSeq 3 */
        for (int i_1 = 4; i_1 < 10; i_1 += 4) /* same iter space */
        {
            var_19 = ((((_Bool) (short)32767)) ? (((/* implicit */long long int) min((1356400392), (0)))) : (((arr_1 [i_1 - 2]) + (arr_3 [i_1 - 4] [i_1 + 1]))));
            var_20 ^= ((/* implicit */unsigned int) 0ULL);
            /* LoopSeq 2 */
            for (unsigned char i_2 = 2; i_2 < 10; i_2 += 4) 
            {
                var_21 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) -18502798)) ? (5472617890277067332LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)38529)))));
                arr_9 [i_2] [8] [i_0] [(short)0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1630356393U)) ? (((/* implicit */int) arr_4 [i_0] [(short)10] [i_2 + 1])) : (((/* implicit */int) arr_4 [i_0] [i_1] [i_2 - 2]))))) ? (((/* implicit */int) (unsigned short)30239)) : (((/* implicit */int) min((arr_5 [i_0] [(unsigned char)6] [i_0]), (arr_5 [i_0] [9U] [(signed char)9])))));
            }
            for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 2) 
            {
                var_22 = ((/* implicit */unsigned short) min((9186429485209695814ULL), (((/* implicit */unsigned long long int) (~(arr_3 [i_0] [i_0]))))));
                arr_14 [i_0] [i_0] [(signed char)1] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) max(((short)-4004), (((/* implicit */short) (_Bool)0))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_1 - 4] [(unsigned char)7] [10LL]))) : (8767860494905386099ULL))), (((/* implicit */unsigned long long int) ((arr_2 [i_1 - 1]) | (arr_2 [i_1 - 3]))))));
                arr_15 [i_3] [i_1] [i_1 - 3] [(unsigned char)0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (short)28242))));
            }
            arr_16 [i_0] [i_0] = ((/* implicit */unsigned char) ((unsigned long long int) ((((long long int) arr_4 [i_1] [i_1] [i_1])) + (arr_1 [i_0]))));
        }
        for (int i_4 = 4; i_4 < 10; i_4 += 4) /* same iter space */
        {
            arr_19 [7LL] [i_4] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned char)0)), (64700055U)))) ? ((~(arr_12 [i_0] [i_4 - 3] [i_4]))) : (((((/* implicit */_Bool) (unsigned short)37329)) ? (((/* implicit */int) (signed char)120)) : (((/* implicit */int) (signed char)48))))));
            arr_20 [(_Bool)1] [i_4] = var_17;
        }
        for (long long int i_5 = 0; i_5 < 11; i_5 += 4) 
        {
            var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_5] [i_5])) ? (((/* implicit */int) arr_13 [i_0] [i_5] [i_5] [i_0])) : (((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_0]))))), (4507248276537477057LL))))));
            var_24 -= ((/* implicit */long long int) ((((/* implicit */_Bool) min((((((/* implicit */int) (_Bool)0)) << (((arr_10 [(signed char)5] [i_5] [i_0]) - (5205611945326088437LL))))), (((/* implicit */int) arr_21 [i_0] [i_0]))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) -1627901163)) > (arr_17 [i_0] [i_5])))) : (((/* implicit */int) arr_4 [i_0] [i_5] [i_5]))));
            var_25 = ((/* implicit */short) max(((+(((/* implicit */int) arr_0 [i_0] [i_5])))), (((((/* implicit */_Bool) (signed char)119)) ? (((/* implicit */int) arr_0 [i_5] [i_0])) : (((/* implicit */int) arr_0 [i_0] [i_5]))))));
        }
        arr_24 [i_0] = ((/* implicit */unsigned char) min((min((((/* implicit */long long int) arr_5 [i_0] [i_0] [i_0])), (((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_0] [i_0]))) : (arr_2 [i_0]))))), (((/* implicit */long long int) arr_21 [i_0] [i_0]))));
        var_26 += ((/* implicit */unsigned int) max((min((((/* implicit */unsigned long long int) arr_21 [i_0] [i_0])), (0ULL))), (((((2393274583893867704ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_0]))))) / (((/* implicit */unsigned long long int) arr_3 [i_0] [(signed char)5]))))));
    }
    for (unsigned long long int i_6 = 0; i_6 < 11; i_6 += 2) /* same iter space */
    {
        var_27 = ((/* implicit */unsigned short) max((var_27), (((/* implicit */unsigned short) max((arr_22 [i_6]), (((((/* implicit */_Bool) ((unsigned long long int) arr_5 [i_6] [i_6] [i_6]))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_6])) ? (((/* implicit */int) arr_8 [i_6] [i_6] [i_6])) : (((/* implicit */int) var_13))))) : (arr_22 [i_6]))))))));
        var_28 = ((/* implicit */unsigned int) arr_0 [i_6] [i_6]);
        var_29 = ((/* implicit */short) min((var_29), (((/* implicit */short) max((min((((/* implicit */unsigned long long int) max((arr_22 [i_6]), (arr_3 [i_6] [i_6])))), (((((/* implicit */_Bool) 23)) ? (15674449802325913434ULL) : (var_2))))), (((/* implicit */unsigned long long int) ((unsigned int) arr_23 [i_6]))))))));
        var_30 = ((/* implicit */short) max((var_30), (((/* implicit */short) max((((((/* implicit */int) arr_0 [i_6] [i_6])) & (((/* implicit */int) (_Bool)0)))), (((/* implicit */int) arr_0 [i_6] [i_6])))))));
        var_31 = ((/* implicit */unsigned long long int) arr_13 [i_6] [i_6] [i_6] [i_6]);
    }
    var_32 = ((/* implicit */unsigned short) min((var_32), (((/* implicit */unsigned short) ((18446744073709551611ULL) / (((((/* implicit */_Bool) 2178672693U)) ? (((((/* implicit */_Bool) (signed char)-101)) ? (18446744073709551615ULL) : (1098424679683740478ULL))) : (((((/* implicit */_Bool) 3286121935U)) ? (18446744073709551615ULL) : (1692801462421407319ULL))))))))));
}
