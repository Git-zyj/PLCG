/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31223
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31223 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31223
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
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 21; i_0 += 3) 
    {
        for (int i_1 = 3; i_1 < 20; i_1 += 3) 
        {
            {
                arr_4 [i_0] [i_0] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) 72057576858058752LL)) ? (min((min((10219250518380200440ULL), (18232620643389927374ULL))), (((/* implicit */unsigned long long int) (+(-1700525867)))))) : (((/* implicit */unsigned long long int) min((var_0), (((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_0])) / (-1832759151)))))))));
                var_14 -= ((/* implicit */int) ((_Bool) min((((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_1 [i_0])), (-9089973180358390673LL)))), (max((13928561220705265411ULL), (((/* implicit */unsigned long long int) var_8)))))));
                arr_5 [i_0 - 1] [i_0] = ((/* implicit */int) ((unsigned long long int) ((int) ((((/* implicit */_Bool) arr_1 [i_1])) ? (8227493555329351176ULL) : (((/* implicit */unsigned long long int) arr_2 [i_0]))))));
            }
        } 
    } 
    var_15 *= min((var_12), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((1410819401085024973LL) + (var_5))))))));
}
