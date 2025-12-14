/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38583
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38583 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38583
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
    for (unsigned int i_0 = 1; i_0 < 8; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */int) min((((arr_0 [i_0]) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)8633))))) : ((~(arr_1 [i_0]))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (signed char)106)), (arr_1 [i_0])))) ? (min((1145681028), (((/* implicit */int) (signed char)126)))) : (((/* implicit */int) arr_0 [i_0])))))));
        arr_3 [i_0] = ((/* implicit */signed char) (~(((/* implicit */int) (short)(-32767 - 1)))));
        arr_4 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) -670637514)) - (13836610227775583711ULL)));
        arr_5 [i_0] = ((/* implicit */_Bool) arr_1 [i_0]);
    }
    var_12 = ((/* implicit */unsigned long long int) var_11);
    var_13 = ((/* implicit */short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) min((var_3), (((/* implicit */short) (signed char)-100)))))) == (max((((/* implicit */unsigned long long int) (_Bool)1)), (7ULL))))) ? (((/* implicit */int) ((_Bool) max((((/* implicit */unsigned int) (short)21992)), (2009271661U))))) : (min((((((/* implicit */int) (short)-2705)) ^ (((/* implicit */int) (signed char)114)))), ((-(((/* implicit */int) var_9))))))));
}
