/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206660
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206660 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206660
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
    for (unsigned long long int i_0 = 3; i_0 < 20; i_0 += 4) 
    {
        arr_3 [i_0] = min((((/* implicit */unsigned long long int) min((((int) 2670028056570270831ULL)), (((((/* implicit */int) (unsigned char)154)) >> (0U)))))), (((((/* implicit */_Bool) -5241279760953698739LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)0))) > (-5241279760953698751LL))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)80))) ^ (8866289698844952694ULL))))));
        var_16 = ((/* implicit */_Bool) var_8);
        var_17 = ((/* implicit */unsigned int) max((var_9), (((/* implicit */long long int) ((((/* implicit */int) arr_2 [i_0 + 2])) | (((/* implicit */int) var_11)))))));
    }
    var_18 = ((/* implicit */unsigned short) ((17515683938226980953ULL) <= (((/* implicit */unsigned long long int) -5241279760953698739LL))));
}
