/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249651
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249651 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249651
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
    for (signed char i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        var_18 = ((/* implicit */signed char) (-((+(((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (unsigned char)97)) : (((/* implicit */int) arr_2 [i_0]))))))));
        /* LoopNest 2 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                {
                    var_19 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (_Bool)1)))) % (((((/* implicit */_Bool) arr_4 [i_1 - 1] [i_1] [(_Bool)1])) ? (arr_4 [i_1 - 1] [9] [10]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)33)))))));
                    var_20 *= (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_3 [i_1 - 1] [i_1 - 1] [i_1 - 1]))))));
                }
            } 
        } 
        var_21 = ((/* implicit */_Bool) ((((max((((/* implicit */unsigned long long int) (signed char)-35)), (65535ULL))) == (((unsigned long long int) 7953481009892309636LL)))) ? (((/* implicit */long long int) (((~(var_11))) * (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))) : (((((-2961290672380762421LL) <= (((/* implicit */long long int) ((/* implicit */int) arr_0 [(unsigned short)13]))))) ? (((((/* implicit */_Bool) (signed char)-57)) ? (arr_4 [8] [8] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_17))))) : (((/* implicit */long long int) ((/* implicit */int) ((var_13) > (7953481009892309631LL)))))))));
    }
    for (signed char i_3 = 0; i_3 < 24; i_3 += 4) 
    {
        var_22 = ((/* implicit */short) max((((/* implicit */unsigned short) max(((signed char)-35), (((/* implicit */signed char) arr_7 [i_3] [i_3]))))), (arr_10 [i_3])));
        var_23 = ((/* implicit */unsigned char) ((((((/* implicit */int) ((arr_7 [i_3] [i_3]) || ((_Bool)1)))) << (((((/* implicit */long long int) ((/* implicit */int) arr_7 [i_3] [i_3]))) % (var_13))))) & (((/* implicit */int) arr_10 [(signed char)2]))));
    }
    var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_8)), (((((/* implicit */_Bool) (signed char)-50)) ? (((/* implicit */long long int) -1606389363)) : (var_10)))))) ? (((/* implicit */long long int) min((max((((/* implicit */int) var_0)), (var_8))), (((/* implicit */int) var_0))))) : (var_3)));
    /* LoopSeq 1 */
    for (unsigned short i_4 = 0; i_4 < 18; i_4 += 4) 
    {
        var_25 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) -723727737)) ? (((/* implicit */int) (short)-18518)) : (((/* implicit */int) arr_8 [i_4])))), (((/* implicit */int) (_Bool)0))));
        var_26 = ((/* implicit */int) max((var_26), (((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */int) arr_7 [i_4] [(signed char)12])), (((((/* implicit */_Bool) 3905438472804379967LL)) ? (((/* implicit */int) arr_12 [i_4])) : (((/* implicit */int) (signed char)41))))))) ? (((/* implicit */unsigned int) ((arr_8 [1ULL]) ? (((((/* implicit */_Bool) (signed char)34)) ? (((/* implicit */int) arr_7 [(_Bool)1] [(_Bool)1])) : (((/* implicit */int) arr_7 [i_4] [i_4])))) : ((~(((/* implicit */int) arr_9 [i_4]))))))) : (2295713719U))))));
        arr_13 [i_4] [i_4] = ((/* implicit */short) ((min((1855535974U), (((/* implicit */unsigned int) (signed char)-22)))) >= (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_10 [i_4]))) <= (var_13)))))));
    }
}
