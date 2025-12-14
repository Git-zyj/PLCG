/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34206
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34206 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34206
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
    var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) min((((/* implicit */unsigned short) var_8)), (var_3)))) <= (((/* implicit */int) ((((/* implicit */int) var_6)) < (((/* implicit */int) var_11)))))))) + (((/* implicit */int) ((((((/* implicit */int) (_Bool)0)) % (((/* implicit */int) (_Bool)1)))) < (((/* implicit */int) ((((/* implicit */int) var_0)) <= (((/* implicit */int) var_4)))))))))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */long long int) ((min((max((((/* implicit */unsigned long long int) arr_2 [i_0] [i_0])), (16870580875830915464ULL))), (((arr_0 [(unsigned short)19]) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))))) * (min((((2125299758987060501ULL) * (arr_0 [i_0]))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_4)) * (var_15))))))));
        var_17 = ((/* implicit */short) min((max((((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-17295)) * (((/* implicit */int) (short)-17305))))), (max((arr_0 [(unsigned char)4]), (((/* implicit */unsigned long long int) var_3)))))), (((min((((/* implicit */unsigned long long int) arr_1 [i_0] [i_0])), (arr_0 [12ULL]))) * (((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned short)65374), (((/* implicit */unsigned short) arr_1 [i_0] [i_0]))))))))));
        var_18 = ((/* implicit */short) min((((/* implicit */unsigned long long int) max((((/* implicit */int) ((((/* implicit */int) (unsigned char)75)) <= (((/* implicit */int) (signed char)96))))), (((((/* implicit */int) (short)17295)) * (((/* implicit */int) (unsigned char)182))))))), (max((((arr_0 [i_0]) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) / (15527423822935025227ULL)))))));
    }
    var_19 = ((/* implicit */signed char) min((((/* implicit */int) ((min((18446744073709551615ULL), (0ULL))) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) < (18446744073709551597ULL)))))))), (((((/* implicit */int) min((var_8), (((/* implicit */signed char) var_5))))) + (((((/* implicit */int) (short)-24206)) % (((/* implicit */int) (short)-17325))))))));
}
