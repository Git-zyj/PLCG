/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54833
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54833 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54833
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
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned char) max((((/* implicit */long long int) arr_2 [i_0])), (var_2)));
        arr_4 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) var_0))))) ? (((((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1))))) & (arr_2 [i_0]))) : (max((((((/* implicit */_Bool) var_4)) ? (arr_2 [i_0]) : (((/* implicit */unsigned int) -2037858678)))), (((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1)))))))));
        var_20 -= ((/* implicit */int) arr_0 [i_0] [i_0]);
        arr_5 [i_0] = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) 2251799780130816ULL)) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) ((unsigned char) (_Bool)1)))))), (((((/* implicit */_Bool) var_15)) ? (arr_2 [i_0]) : (((/* implicit */unsigned int) 1154794880))))));
    }
    var_21 = ((/* implicit */signed char) var_14);
    var_22 = ((/* implicit */unsigned char) -803669434);
    var_23 = ((/* implicit */unsigned long long int) max(((_Bool)0), ((((-(((/* implicit */int) var_14)))) != (max((1773513661), (((/* implicit */int) var_9))))))));
    var_24 = ((/* implicit */unsigned int) (~(((/* implicit */int) var_15))));
}
