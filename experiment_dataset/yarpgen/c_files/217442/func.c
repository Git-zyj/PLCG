/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217442
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217442 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217442
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
    for (short i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) ((((/* implicit */_Bool) min((min((((/* implicit */unsigned int) var_2)), (var_4))), (((/* implicit */unsigned int) (_Bool)1))))) ? (((/* implicit */int) ((((((/* implicit */_Bool) (unsigned char)161)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_5)))) > (((/* implicit */int) ((var_0) && (((/* implicit */_Bool) var_4)))))))) : (max((max((var_3), (((/* implicit */int) (_Bool)1)))), (((((/* implicit */_Bool) (unsigned char)177)) ? (var_3) : (((/* implicit */int) (unsigned char)75)))))))))));
            arr_6 [i_0] [i_0] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) 3118300632187465504LL)) : (5634041128769666262ULL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)152)) - (1240555369)))) : (max((var_10), (((/* implicit */unsigned long long int) -1240555377))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3118300632187465504LL)) ? (var_3) : (var_3)))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) -1240555394)))))))) : (((((((/* implicit */int) (short)29773)) == (((/* implicit */int) (_Bool)1)))) ? (((/* implicit */unsigned long long int) (((((((-2147483647 - 1)) + (2147483647))) + (2147483647))) >> (((1240555362) - (1240555346)))))) : (3454297706394912268ULL)))));
        }
        arr_7 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_13)) ? (var_3) : (((/* implicit */int) var_6)))), (((((/* implicit */_Bool) var_8)) ? (var_13) : (var_3)))))) ? (((/* implicit */int) (unsigned char)251)) : (max((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_5)) : (0))), (var_13)))));
    }
    var_15 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (4294967273U)))) ? (((((/* implicit */_Bool) var_9)) ? (var_3) : (var_13))) : ((-(((/* implicit */int) var_8))))))) && ((!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)103)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)103))) : (4351479992375277063ULL))))))));
}
