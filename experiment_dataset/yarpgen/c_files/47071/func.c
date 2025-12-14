/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47071
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47071 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47071
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
    var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)20)) ? (var_6) : (((/* implicit */long long int) min((min((((/* implicit */int) (signed char)20)), (-1732667012))), (((/* implicit */int) ((((/* implicit */int) (unsigned char)251)) < (((/* implicit */int) (signed char)26))))))))));
    var_18 = ((/* implicit */signed char) min((((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 196046224226553545LL)))))) * (var_13))), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((unsigned short) var_1))))))));
    var_19 ^= ((/* implicit */int) min((min((var_13), (((/* implicit */long long int) var_9)))), (((/* implicit */long long int) var_9))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_0 [i_0] [i_0])) + (2147483647))) << (((min((1732667012), (1732667002))) - (1732667002)))));
        var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_0 [i_0] [8ULL])))))));
        arr_3 [12LL] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(min((((/* implicit */unsigned int) (_Bool)1)), (3U)))))) ? (min((((/* implicit */long long int) arr_1 [i_0])), (var_6))) : (((/* implicit */long long int) ((((/* implicit */_Bool) min((var_8), (((/* implicit */unsigned short) (signed char)-112))))) ? ((~(((/* implicit */int) (unsigned char)56)))) : (((((/* implicit */_Bool) 2904909186U)) ? (-2147483633) : (1732667011))))))));
        var_21 ^= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) < (281457796841472ULL)));
    }
}
