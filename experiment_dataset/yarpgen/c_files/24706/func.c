/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24706
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24706 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24706
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
    var_20 = ((((/* implicit */_Bool) 10861588873932529372ULL)) ? ((((-(var_9))) >> (((var_19) - (4662578723965744741ULL))))) : (min((var_13), (var_7))));
    var_21 = ((/* implicit */unsigned long long int) ((var_7) <= (var_6)));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        var_22 = arr_1 [i_0] [i_0];
        var_23 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (arr_0 [i_0] [i_0]) : (var_18)))) ? ((-(8409754744373672269ULL))) : (((2502012091914997122ULL) | (1329695580031921335ULL))));
        var_24 = min((((((/* implicit */_Bool) 12084316399331555442ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_8) >= (12103763684400643441ULL))))) : (var_10))), (18446744073709551603ULL));
        var_25 = ((/* implicit */unsigned long long int) min((var_25), (((((/* implicit */_Bool) 22ULL)) ? (1755740738254032793ULL) : (11774347105069949144ULL)))));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 2; i_1 < 20; i_1 += 4) 
    {
        var_26 += ((/* implicit */unsigned long long int) ((var_11) == (((arr_5 [i_1] [i_1]) << (((12084316399331555441ULL) - (12084316399331555391ULL)))))));
        arr_6 [i_1] = var_3;
        var_27 = (+((-(var_14))));
    }
}
