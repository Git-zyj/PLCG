/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21655
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21655 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21655
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
    /* LoopSeq 1 */
    for (short i_0 = 1; i_0 < 16; i_0 += 1) 
    {
        var_16 = ((/* implicit */int) 17135194455588131833ULL);
        arr_2 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) 16589830670326233475ULL)) ? ((~(3653034913127271126ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14)))));
        var_17 = ((/* implicit */unsigned long long int) (+(min((arr_0 [i_0] [i_0 + 1]), (arr_0 [i_0] [i_0 + 2])))));
    }
    /* LoopNest 2 */
    for (unsigned long long int i_1 = 1; i_1 < 15; i_1 += 2) 
    {
        for (short i_2 = 2; i_2 < 15; i_2 += 1) 
        {
            {
                var_18 = ((/* implicit */long long int) (!(((/* implicit */_Bool) max((11899453508352554253ULL), (((/* implicit */unsigned long long int) var_0)))))));
                var_19 = ((((/* implicit */int) ((((((/* implicit */_Bool) arr_8 [i_1 + 2] [i_1 + 2])) ? (arr_7 [i_2] [i_2 - 2]) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1] [i_1 - 1]))))) >= (((var_15) >> (((((/* implicit */int) arr_4 [i_1] [3ULL])) - (24762)))))))) >= (((/* implicit */int) ((unsigned char) arr_4 [i_1 + 2] [i_2 - 1]))));
                var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) var_11))));
                arr_9 [i_1] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1 + 1] [i_2 + 2])) ? (arr_3 [i_1 + 1] [i_2 + 1]) : (arr_3 [i_1 + 1] [i_2 - 1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (unsigned char)255)))) : ((((!(((/* implicit */_Bool) 1856913403383318128ULL)))) ? (max((((/* implicit */unsigned long long int) var_11)), (6547290565356997362ULL))) : (((((/* implicit */_Bool) (unsigned short)5563)) ? (var_5) : (((/* implicit */unsigned long long int) arr_7 [i_2] [i_2]))))))));
                arr_10 [(unsigned char)7] [i_2] [(unsigned char)7] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_2] [i_2 + 1])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (unsigned char)249)))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned char i_3 = 0; i_3 < 20; i_3 += 4) 
    {
        var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((min((((/* implicit */unsigned long long int) arr_12 [(unsigned char)0])), (arr_11 [1LL]))), (((/* implicit */unsigned long long int) min((arr_12 [i_3]), (arr_12 [i_3]))))))) ? (((((var_1) >= (((/* implicit */unsigned long long int) -1731002721726612396LL)))) ? ((~(arr_11 [i_3]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_7))) < (arr_12 [i_3]))))))) : (((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_4)), (1334530072U)))) & (arr_11 [i_3])))));
        var_22 = ((/* implicit */_Bool) max(((unsigned char)241), ((unsigned char)251)));
        arr_13 [i_3] [i_3] = ((/* implicit */unsigned char) max((min((max((((/* implicit */long long int) (unsigned short)45722)), (arr_12 [i_3]))), (min((arr_12 [i_3]), (((/* implicit */long long int) var_12)))))), (arr_12 [i_3])));
    }
    var_23 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) -1646499695)) || (((/* implicit */_Bool) 11899453508352554253ULL)))))) >= (var_5)));
}
