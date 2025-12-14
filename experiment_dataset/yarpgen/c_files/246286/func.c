/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246286
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246286 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246286
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
    var_12 -= ((/* implicit */int) min((min((min((var_0), (((/* implicit */long long int) var_10)))), (((/* implicit */long long int) min(((-2147483647 - 1)), (((/* implicit */int) var_9))))))), (((/* implicit */long long int) ((((/* implicit */int) max((var_3), (((/* implicit */unsigned short) var_2))))) >> (((((var_8) | (((/* implicit */unsigned int) ((/* implicit */int) var_2))))) - (2210963802U))))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        arr_2 [17] [i_0] |= ((/* implicit */unsigned long long int) max((min((min(((-2147483647 - 1)), (((/* implicit */int) var_3)))), (((/* implicit */int) max((((/* implicit */short) arr_0 [i_0])), (arr_1 [i_0])))))), (((((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0])) || (((/* implicit */_Bool) arr_0 [i_0]))))) ^ (((/* implicit */int) min(((unsigned short)8191), (((/* implicit */unsigned short) var_11)))))))));
        /* LoopSeq 1 */
        for (unsigned short i_1 = 2; i_1 < 17; i_1 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned short i_2 = 1; i_2 < 19; i_2 += 3) 
            {
                for (unsigned short i_3 = 2; i_3 < 19; i_3 += 1) 
                {
                    {
                        var_13 -= ((/* implicit */unsigned int) max((min((((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_1]))))), (min((arr_6 [(unsigned char)1] [i_1 - 2] [i_2 - 1] [i_2 - 1]), (((/* implicit */long long int) var_5)))))), (((/* implicit */long long int) ((((/* implicit */int) min((((/* implicit */unsigned short) arr_1 [i_0])), (arr_5 [4U] [i_1] [(short)15])))) == (((/* implicit */int) min((arr_5 [(signed char)11] [(signed char)11] [i_0]), (((/* implicit */unsigned short) var_11))))))))));
                        var_14 = ((/* implicit */unsigned long long int) max((((max((((/* implicit */unsigned int) (signed char)-113)), (3439658657U))) % (((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned short)30600), ((unsigned short)45912))))))), (((min((var_10), (((/* implicit */unsigned int) (unsigned short)45912)))) << (((max((((/* implicit */unsigned long long int) (unsigned short)8605)), (var_4))) - (16733346840687768044ULL)))))));
                    }
                } 
            } 
            var_15 += ((/* implicit */long long int) min((((/* implicit */unsigned long long int) max((min((72057589742960640LL), (((/* implicit */long long int) arr_4 [i_1 + 1] [i_0])))), (((/* implicit */long long int) min((((/* implicit */unsigned int) (unsigned short)10841)), (855308639U))))))), (((((var_4) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)1))))) * (((/* implicit */unsigned long long int) max((9223372036854775807LL), (((/* implicit */long long int) arr_4 [i_0] [i_0])))))))));
        }
        var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) max((((((min((var_6), (((/* implicit */int) var_1)))) + (2147483647))) << (((((9223372036854775807LL) ^ (((/* implicit */long long int) var_10)))) - (9223372032857416190LL))))), (((((((/* implicit */int) arr_0 [i_0])) / (((/* implicit */int) var_5)))) >> (((max((((/* implicit */unsigned int) (unsigned char)192)), (3292347336U))) - (3292347317U))))))))));
    }
    var_17 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) max((var_5), (((/* implicit */signed char) (_Bool)0)))))) | (((855308638U) | (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))) ^ (((((((/* implicit */unsigned long long int) 3439658670U)) & (var_7))) | (((/* implicit */unsigned long long int) min((855308639U), (((/* implicit */unsigned int) var_2)))))))));
    var_18 = ((/* implicit */long long int) ((min((((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_10)), (var_0)))), (max((((/* implicit */unsigned long long int) var_8)), (var_7))))) < (((/* implicit */unsigned long long int) max((((/* implicit */long long int) max((var_5), (((/* implicit */signed char) var_11))))), (max((((/* implicit */long long int) var_1)), (var_0))))))));
}
