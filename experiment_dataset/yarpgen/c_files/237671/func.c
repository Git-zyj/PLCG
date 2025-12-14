/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237671
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237671 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237671
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
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) max((((arr_2 [i_0] [(unsigned char)4]) >= (arr_2 [i_0] [6ULL]))), (((((/* implicit */unsigned int) arr_2 [i_0] [(signed char)4])) >= (arr_4 [i_0] [i_1]))))))));
            var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(arr_4 [i_1] [i_0])))) ? (((/* implicit */int) min((arr_5 [i_1] [(unsigned char)7] [i_0]), (arr_5 [i_0] [i_1] [i_1])))) : (((/* implicit */int) (unsigned char)13)))))));
            var_19 -= ((/* implicit */long long int) ((15354377549030606063ULL) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3092366524678945552ULL)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (unsigned short)0)))))));
        }
        for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 4) 
        {
            var_20 -= ((/* implicit */unsigned char) (~(min((((/* implicit */unsigned int) (unsigned char)242)), (146251902U)))));
            var_21 -= ((/* implicit */unsigned long long int) (+(((/* implicit */int) min(((!(((/* implicit */_Bool) (short)14171)))), (((((/* implicit */_Bool) 308924487)) && (((/* implicit */_Bool) var_16)))))))));
            var_22 -= ((/* implicit */signed char) ((min((15354377549030606063ULL), (((/* implicit */unsigned long long int) min(((unsigned char)13), ((unsigned char)7)))))) != (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((((/* implicit */_Bool) var_13)) && (((/* implicit */_Bool) arr_2 [i_2] [i_2]))))))))));
        }
        var_23 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_1 [i_0]), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [4LL] [i_0])) || (((/* implicit */_Bool) (unsigned char)243)))))))) && (((/* implicit */_Bool) (short)-26061))));
        var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) var_0))));
        var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) max((((/* implicit */int) var_0)), (arr_2 [i_0] [4LL])))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_7)) && ((_Bool)1)))) : (((/* implicit */int) ((7493710994710218064ULL) > (((/* implicit */unsigned long long int) var_15))))))))))));
    }
    for (int i_3 = 0; i_3 < 24; i_3 += 1) 
    {
        var_26 = ((/* implicit */int) arr_11 [10U]);
        var_27 -= (((((-(((/* implicit */int) (_Bool)1)))) % (((/* implicit */int) ((((/* implicit */int) (unsigned char)13)) > (((/* implicit */int) (_Bool)1))))))) >> (((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) / (576460735123554304LL))));
        var_28 -= ((/* implicit */_Bool) (+(arr_10 [(_Bool)1])));
    }
    /* LoopSeq 1 */
    for (int i_4 = 3; i_4 < 24; i_4 += 2) 
    {
        var_29 -= ((/* implicit */unsigned long long int) var_3);
        var_30 -= ((/* implicit */signed char) var_12);
    }
}
