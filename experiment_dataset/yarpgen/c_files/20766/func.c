/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20766
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20766 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20766
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
    var_16 = min((((/* implicit */int) max((((/* implicit */short) max((var_2), (((/* implicit */unsigned char) (signed char)99))))), (max((((/* implicit */short) var_6)), ((short)-32761)))))), (min((((/* implicit */int) max((((/* implicit */short) var_8)), ((short)1984)))), (max((1032192), (((/* implicit */int) var_8)))))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        var_17 = ((/* implicit */short) max((min((((/* implicit */unsigned int) min((var_15), (((/* implicit */int) arr_0 [i_0]))))), (min((var_0), (((/* implicit */unsigned int) (_Bool)1)))))), (((/* implicit */unsigned int) max((min(((short)0), (((/* implicit */short) var_6)))), (((/* implicit */short) max((arr_0 [11ULL]), (arr_0 [i_0])))))))));
        var_18 -= ((/* implicit */signed char) max((min((((/* implicit */int) min((((/* implicit */short) arr_0 [i_0])), (arr_1 [i_0] [i_0])))), (max((((/* implicit */int) (_Bool)0)), (1032192))))), (max((((/* implicit */int) max(((short)32747), (arr_1 [i_0] [(signed char)15])))), (min((var_15), (-1032199)))))));
        var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) min((max((min((var_9), (((/* implicit */long long int) arr_1 [i_0] [i_0 + 1])))), (((/* implicit */long long int) min((((/* implicit */int) var_8)), (var_15)))))), (((/* implicit */long long int) min((max((var_11), (((/* implicit */int) (unsigned short)248)))), (((/* implicit */int) min((((/* implicit */short) (unsigned char)7)), (var_14))))))))))));
    }
    for (unsigned long long int i_1 = 4; i_1 < 20; i_1 += 3) 
    {
        var_20 = ((/* implicit */short) min((min((min((((/* implicit */int) arr_3 [i_1])), (arr_2 [i_1]))), (min((arr_2 [i_1]), (((/* implicit */int) (signed char)-96)))))), (((/* implicit */int) min((min((((/* implicit */short) var_2)), (var_1))), (max((arr_3 [(signed char)10]), (((/* implicit */short) (_Bool)1)))))))));
        arr_4 [20ULL] = ((/* implicit */short) min((((/* implicit */long long int) max((min((1032198), (arr_2 [21]))), (((/* implicit */int) max((var_12), (arr_3 [i_1 - 1]))))))), (max((((/* implicit */long long int) min((arr_2 [i_1 - 2]), (((/* implicit */int) var_2))))), (min((((/* implicit */long long int) arr_3 [i_1 - 1])), (17179836416LL)))))));
    }
    var_21 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) max((max((((/* implicit */short) (_Bool)1)), (var_1))), (max((((/* implicit */short) var_2)), ((short)0)))))), (min((((/* implicit */unsigned long long int) min((var_12), (((/* implicit */short) var_6))))), (min((((/* implicit */unsigned long long int) var_11)), (18446744073709551615ULL)))))));
}
