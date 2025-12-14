/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52125
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52125 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52125
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
    var_15 &= ((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned char)224))));
    var_16 *= ((/* implicit */short) (~((~(((-1419190476762377373LL) ^ (-1419190476762377385LL)))))));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] &= ((/* implicit */int) ((((/* implicit */_Bool) min(((unsigned short)11586), (((/* implicit */unsigned short) (unsigned char)0))))) && (((/* implicit */_Bool) arr_1 [(unsigned char)2]))));
        var_17 = ((/* implicit */long long int) min((var_17), (((((/* implicit */_Bool) max((arr_1 [i_0]), (((((/* implicit */_Bool) arr_1 [i_0])) ? (1634752656U) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((arr_0 [i_0]) < (((/* implicit */long long int) 2660214656U)))))) : (min((arr_0 [i_0]), (min((8473660896167517163LL), (((/* implicit */long long int) arr_1 [3ULL]))))))))));
        var_18 += ((/* implicit */short) arr_0 [i_0]);
    }
    for (unsigned char i_1 = 2; i_1 < 17; i_1 += 2) 
    {
        var_19 ^= ((/* implicit */unsigned short) arr_4 [i_1]);
        arr_5 [i_1 - 1] = ((/* implicit */unsigned char) ((((/* implicit */int) max((min((var_11), (((/* implicit */short) arr_4 [i_1])))), (((/* implicit */short) max((arr_3 [i_1 - 2]), (arr_4 [i_1]))))))) >> (((/* implicit */int) (((!(((/* implicit */_Bool) var_8)))) || (((/* implicit */_Bool) ((short) (unsigned short)35786))))))));
    }
}
