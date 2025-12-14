/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198439
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198439 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198439
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
    var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) var_13))));
    /* LoopSeq 2 */
    for (short i_0 = 1; i_0 < 10; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 9223372036854775807LL)) || (((/* implicit */_Bool) var_18))));
        var_20 *= ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-116))) & (-9223372036854775791LL)));
        /* LoopSeq 1 */
        for (signed char i_1 = 1; i_1 < 12; i_1 += 1) 
        {
            arr_6 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) max((7046514025493911186ULL), (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) 11400230048215640397ULL)) ? (((/* implicit */int) (unsigned char)129)) : (((/* implicit */int) (unsigned char)114)))), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) > (385640282646078326ULL)))))))));
            var_21 += ((/* implicit */_Bool) ((unsigned char) min((arr_1 [10LL] [10LL]), (arr_1 [(_Bool)1] [(_Bool)1]))));
            arr_7 [i_0] = ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) 11400230048215640429ULL)) ? (arr_5 [(signed char)2] [6ULL]) : (((/* implicit */unsigned long long int) -1LL)))));
            arr_8 [i_0] = max(((+(arr_5 [11ULL] [i_1]))), (((((/* implicit */_Bool) min(((short)-26467), (((/* implicit */short) (unsigned char)195))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)203))) : (((((/* implicit */_Bool) -6853737239084003021LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (9944562031408676269ULL))))));
        }
    }
    for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 1) 
    {
        arr_11 [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-107)) ? (-9223372036854775804LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)61473)))));
        var_22 = ((/* implicit */signed char) (~(((((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) arr_9 [i_2])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_8), (((/* implicit */short) arr_9 [i_2])))))) : (((((/* implicit */_Bool) (unsigned char)186)) ? (((/* implicit */unsigned long long int) -9223372036854775806LL)) : (7050899730163247744ULL)))))));
        arr_12 [i_2] = ((/* implicit */int) max(((unsigned short)4091), (((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)52))) & (2599752476619250789ULL))) > (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)121))))))));
    }
    var_23 = ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */_Bool) max((11400230048215640424ULL), (((/* implicit */unsigned long long int) var_17))))) ? (var_10) : (((/* implicit */unsigned int) var_13)))));
}
