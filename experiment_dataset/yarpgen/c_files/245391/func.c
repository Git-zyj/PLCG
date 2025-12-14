/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245391
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245391 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245391
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
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */int) ((signed char) ((((((/* implicit */_Bool) 10048443079346200488ULL)) ? (77715210) : (((/* implicit */int) (signed char)0)))) <= ((~(((/* implicit */int) (short)8699)))))));
        var_16 = ((/* implicit */short) ((max((max((((/* implicit */long long int) arr_0 [i_0])), (6948442086822039169LL))), (((/* implicit */long long int) ((var_10) != (((/* implicit */long long int) ((/* implicit */int) (unsigned short)9828)))))))) < (((/* implicit */long long int) ((/* implicit */int) max((((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) arr_1 [i_0])))), (((((/* implicit */int) (signed char)-110)) > (((/* implicit */int) (unsigned short)65520))))))))));
        arr_3 [i_0] = ((/* implicit */unsigned int) min((min((((/* implicit */long long int) (short)24223)), (-1LL))), (((((/* implicit */_Bool) -1LL)) ? (max((((/* implicit */long long int) (_Bool)1)), (var_0))) : (((/* implicit */long long int) ((/* implicit */int) var_1)))))));
    }
    for (signed char i_1 = 2; i_1 < 9; i_1 += 3) 
    {
        arr_7 [i_1] = max((((max((arr_5 [i_1]), (((/* implicit */long long int) 3040761173U)))) - (min((((/* implicit */long long int) var_4)), (arr_5 [(unsigned char)0]))))), (max((((/* implicit */long long int) max((((/* implicit */unsigned int) (_Bool)1)), (2015169672U)))), (arr_5 [i_1]))));
        arr_8 [i_1 + 2] = ((/* implicit */unsigned char) (+(((/* implicit */int) (signed char)0))));
    }
    var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) 4870678194828445912LL)) ? (((/* implicit */int) ((((/* implicit */_Bool) (+(var_13)))) && (((/* implicit */_Bool) var_0))))) : (((/* implicit */int) (unsigned short)55708))));
}
