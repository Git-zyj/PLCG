/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200880
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200880 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200880
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
    var_10 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (short)30720)) << (((-1553190593) + (1553190606)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : ((+(((6962089394826518517ULL) << (((((/* implicit */int) (short)-21273)) + (21333)))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        var_11 = ((/* implicit */int) min((var_11), (((/* implicit */int) (~(((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)219))) : (arr_0 [i_0]))))))));
        arr_2 [i_0] = ((/* implicit */unsigned char) arr_0 [i_0]);
        arr_3 [i_0] [i_0] = ((/* implicit */short) arr_1 [i_0]);
        var_12 = ((/* implicit */unsigned long long int) min((var_12), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)96)))))));
        arr_4 [(signed char)4] [(signed char)4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)32768))) / (arr_0 [i_0]))) : ((+(arr_0 [i_0])))));
    }
    for (int i_1 = 3; i_1 < 16; i_1 += 4) 
    {
        arr_7 [i_1] [12LL] |= ((/* implicit */int) (~(((((/* implicit */_Bool) min((arr_0 [i_1]), (((/* implicit */long long int) (short)4095))))) ? (arr_0 [i_1 - 2]) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) (signed char)-99)), (arr_6 [6])))))))));
        arr_8 [(short)4] |= ((/* implicit */unsigned long long int) min((((/* implicit */long long int) (unsigned short)16828)), (max((((/* implicit */long long int) arr_1 [i_1 + 1])), (max((-3890220959072848590LL), (((/* implicit */long long int) arr_6 [(unsigned short)0]))))))));
        var_13 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) arr_1 [i_1 + 2])) ? (((/* implicit */int) (short)16128)) : (((/* implicit */int) arr_1 [i_1 - 2]))))));
    }
    for (signed char i_2 = 2; i_2 < 16; i_2 += 4) 
    {
        arr_13 [(unsigned char)8] = ((/* implicit */unsigned long long int) min(((+(((((/* implicit */_Bool) arr_9 [i_2] [i_2])) ? (((/* implicit */long long int) 110676713)) : (arr_0 [i_2]))))), (((/* implicit */long long int) max((((/* implicit */unsigned int) (unsigned short)3863)), (min((((/* implicit */unsigned int) arr_5 [i_2 - 2])), (1208650039U))))))));
        var_14 |= ((/* implicit */short) min((max((((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) arr_6 [i_2])) : (((/* implicit */int) arr_1 [i_2])))), (((/* implicit */int) (short)1)))), (((/* implicit */int) (!(((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)14))) : (arr_11 [i_2])))))))));
        var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) min((max((arr_0 [i_2 + 1]), (((/* implicit */long long int) max(((short)32767), (((/* implicit */short) arr_12 [i_2]))))))), (((((/* implicit */_Bool) (unsigned char)22)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [i_2])) ? (((/* implicit */int) arr_6 [i_2])) : (((/* implicit */int) (unsigned short)511))))) : ((-9223372036854775807LL - 1LL)))))))));
    }
}
