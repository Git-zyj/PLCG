/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34077
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34077 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34077
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
    var_13 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) - (var_2)));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                arr_4 [i_1] |= ((/* implicit */unsigned long long int) min((((signed char) (_Bool)1)), (((/* implicit */signed char) (((~(((/* implicit */int) var_6)))) >= (((/* implicit */int) ((_Bool) 2303591209400008704ULL))))))));
                var_14 *= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [9] [i_1]))) - (((unsigned int) max((2094338001), (((/* implicit */int) arr_3 [0ULL] [0ULL] [i_1])))))));
                var_15 *= max((((((2303591209400008704ULL) * (((/* implicit */unsigned long long int) -2094338001)))) <= (((((/* implicit */_Bool) 16143152864309542922ULL)) ? (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))) : (0ULL))))), (((min((-2074273990), (((/* implicit */int) (short)2322)))) == (((/* implicit */int) (!(((/* implicit */_Bool) 16143152864309542931ULL))))))));
            }
        } 
    } 
    var_16 = ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 2303591209400008704ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)125))) : (2303591209400008704ULL)))) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_1)))))) % (((/* implicit */unsigned int) (((!(((/* implicit */_Bool) 2303591209400008704ULL)))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) ((short) var_4)))))));
    /* LoopSeq 2 */
    for (short i_2 = 0; i_2 < 22; i_2 += 1) 
    {
        var_17 = ((/* implicit */unsigned long long int) ((short) ((int) (signed char)9)));
        arr_9 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((arr_1 [i_2]) <= (var_1))))) == (max(((~(9223372036854775807LL))), (((/* implicit */long long int) ((int) -2074274012)))))));
    }
    for (unsigned int i_3 = 2; i_3 < 19; i_3 += 3) 
    {
        var_18 ^= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) 16143152864309542922ULL)) ? (((((/* implicit */int) (_Bool)0)) ^ (((/* implicit */int) var_12)))) : (-2022134353))) % (-2094337987)));
        var_19 &= ((/* implicit */short) max(((unsigned short)57844), (((/* implicit */unsigned short) (unsigned char)239))));
        var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((min((((/* implicit */int) (short)-15924)), (var_0))) + (2147483647))) >> (min((((/* implicit */int) (signed char)9)), (2094337991)))))) ? (max((((/* implicit */unsigned long long int) ((unsigned short) (_Bool)1))), (16143152864309542922ULL))) : (((/* implicit */unsigned long long int) ((((((/* implicit */int) var_3)) + (2147483647))) << (((((/* implicit */int) arr_3 [i_3] [i_3] [(short)0])) - (223)))))))))));
        var_21 *= ((/* implicit */unsigned long long int) arr_0 [(_Bool)1]);
    }
}
