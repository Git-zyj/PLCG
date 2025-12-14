/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45774
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45774 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45774
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
    var_19 = ((/* implicit */long long int) (~(var_0)));
    var_20 += ((11509158896601792907ULL) * (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) var_10)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 4801705716920907079ULL))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)(-32767 - 1))))))))));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */long long int) ((10751718177202728200ULL) & (8969234069574505252ULL)));
        var_21 = ((((((((/* implicit */_Bool) 12231875785161089349ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) : (9007199254732800ULL))) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [1]))) : ((-(10751718177202728216ULL))));
    }
    for (short i_1 = 0; i_1 < 24; i_1 += 2) 
    {
        arr_6 [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(((((/* implicit */_Bool) 15175826011538296935ULL)) ? (var_15) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_18))))))))));
        arr_7 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_4 [i_1] [i_1]) << (((-5728655945848581528LL) + (5728655945848581563LL)))))) ? (((arr_4 [(short)0] [i_1]) << (((/* implicit */int) var_9)))) : (((10751718177202728228ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
    }
    for (int i_2 = 1; i_2 < 10; i_2 += 2) 
    {
        arr_10 [i_2] = ((/* implicit */short) max((255ULL), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((18446744073709551615ULL) < (18446744073709551615ULL)))) <= (-1035638159))))));
        arr_11 [i_2 - 1] [i_2 - 1] = ((/* implicit */unsigned long long int) min(((+(((/* implicit */int) var_9)))), (((((/* implicit */_Bool) 9477510004135046366ULL)) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) > (7065356905856688441ULL)))) : (((int) arr_0 [11ULL]))))));
    }
}
