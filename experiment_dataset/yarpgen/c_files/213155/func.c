/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213155
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213155 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213155
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        var_10 = ((/* implicit */unsigned char) ((((/* implicit */int) (short)6525)) < (((/* implicit */int) (short)7))));
        var_11 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32736)) ? (((unsigned long long int) 2485196067U)) : (((/* implicit */unsigned long long int) -6050682023730156008LL))))) ? (arr_1 [i_0]) : (((/* implicit */long long int) max((1809771229U), (1809771234U))))));
        arr_3 [i_0] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0 + 1])) ? (min((var_5), (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) var_9))))) == (((0ULL) % (((/* implicit */unsigned long long int) -898612422))))));
        arr_4 [0ULL] &= ((/* implicit */signed char) ((int) max((((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) arr_2 [i_0])))), (((((/* implicit */_Bool) 2600945716U)) && (((/* implicit */_Bool) arr_2 [i_0 + 1])))))));
    }
    var_12 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (((!(((/* implicit */_Bool) (unsigned char)80)))) || (((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) ^ (var_5)))))))) % (((((/* implicit */_Bool) var_9)) ? (min((6665582407560326930ULL), (((/* implicit */unsigned long long int) (unsigned short)57220)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))));
}
