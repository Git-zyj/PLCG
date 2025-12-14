/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202320
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202320 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202320
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
    var_14 *= ((/* implicit */unsigned int) (_Bool)1);
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (arr_0 [i_0] [i_0])))) : (((/* implicit */int) min((var_12), (((/* implicit */unsigned char) arr_0 [i_0] [i_0])))))))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) ((((/* implicit */int) arr_0 [i_0] [i_0])) == (((/* implicit */int) ((arr_0 [i_0] [i_0]) && (((/* implicit */_Bool) 803005321U))))))))));
        var_15 ^= ((/* implicit */long long int) var_10);
        /* LoopSeq 1 */
        for (long long int i_1 = 1; i_1 < 8; i_1 += 4) 
        {
            arr_6 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_0 [i_0] [i_1])))), (((arr_0 [i_1] [i_0]) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_2))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [7] [i_1 + 2])) ? (((/* implicit */int) arr_0 [(short)2] [i_1])) : (((/* implicit */int) arr_4 [i_1 + 1] [i_1 + 1]))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_2)) - (((/* implicit */int) var_5))))) : (((106819039U) * (((/* implicit */unsigned int) var_9)))))) : (((/* implicit */unsigned int) min((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (short)-2547)) : (((/* implicit */int) arr_0 [i_0] [i_1 + 1])))), (((/* implicit */int) arr_3 [i_0] [8ULL] [i_1])))))));
            var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) arr_1 [i_0]))));
            arr_7 [i_1] = ((/* implicit */_Bool) max((((min((var_2), (arr_0 [i_0] [i_0]))) ? (((arr_0 [i_0] [i_0]) ? (var_0) : (((/* implicit */long long int) arr_1 [i_0])))) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [(short)8] [i_1]))))), (((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */int) var_11)), (arr_1 [i_1])))) ? (var_9) : (((/* implicit */int) arr_4 [i_0] [i_1 + 2])))))));
            arr_8 [i_1] = ((/* implicit */_Bool) ((min((((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) / (1655947550576995118ULL))), (((/* implicit */unsigned long long int) ((arr_0 [i_1] [i_1]) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (var_4)))))) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_7) ? (((/* implicit */long long int) -621655274)) : (1696105727846634075LL)))) ? (((/* implicit */int) min((arr_0 [i_0] [(unsigned short)0]), (var_5)))) : (((/* implicit */int) arr_4 [(unsigned short)3] [i_1])))))));
        }
        /* LoopNest 3 */
        for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 1) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 1) 
            {
                for (unsigned int i_4 = 0; i_4 < 10; i_4 += 3) 
                {
                    {
                        arr_17 [i_3] [i_2] [i_3] [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)52884)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_10 [i_0]))))) ? (((13934241143244999723ULL) << (((arr_1 [i_0]) + (921026333))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((4182676882U) != (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_2])))))))))) ? (((((/* implicit */_Bool) var_3)) ? (((((/* implicit */unsigned long long int) 3472952710U)) - (16790796523132556514ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_15 [i_0] [(_Bool)1]), (arr_3 [i_0] [i_3] [i_3]))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) 4226847923U))))) / (((((/* implicit */_Bool) arr_10 [4ULL])) ? (((/* implicit */int) arr_4 [i_0] [i_0])) : (((/* implicit */int) arr_9 [i_2] [i_2])))))))));
                        arr_18 [i_0] [i_0] [i_3] = ((/* implicit */unsigned char) max((((((((/* implicit */long long int) ((/* implicit */int) arr_15 [i_4] [i_0]))) - (var_0))) - (max((((/* implicit */long long int) arr_13 [i_0] [i_0] [i_3] [i_3])), (var_0))))), (((/* implicit */long long int) max((arr_0 [i_3] [i_2]), (var_7))))));
                        arr_19 [i_3] [i_3] [i_3] = ((/* implicit */int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) -5676729785824265427LL)) ? (((/* implicit */int) arr_4 [i_0] [i_2])) : (((/* implicit */int) (short)6832))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 8974714328260478995LL)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_10 [(_Bool)1]))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) arr_13 [i_0] [i_2] [i_3] [i_4])) <= (arr_12 [i_3] [i_2] [i_2]))))) : (((((/* implicit */unsigned long long int) ((arr_5 [(short)7] [(short)7]) ? (123444331) : (((/* implicit */int) (short)-29376))))) - (((((/* implicit */_Bool) var_0)) ? (1655947550576995118ULL) : (((/* implicit */unsigned long long int) var_0))))))));
                    }
                } 
            } 
        } 
    }
}
