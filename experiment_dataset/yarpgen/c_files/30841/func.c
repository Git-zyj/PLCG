/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30841
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30841 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30841
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
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)245)) ? (((min((arr_1 [i_0] [(short)5]), (arr_1 [i_0] [i_0]))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_0])) | (((/* implicit */int) arr_0 [i_0]))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) ((short) (short)-3))) ^ (((/* implicit */int) arr_0 [i_0])))))));
        arr_3 [i_0] = ((/* implicit */short) (+(((/* implicit */int) arr_2 [(short)6]))));
        arr_4 [i_0] = ((/* implicit */unsigned short) var_9);
        var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) (short)2255)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)247))) : (var_12))))) ? (((((/* implicit */_Bool) ((long long int) 3847219649418802814ULL))) ? (((((/* implicit */int) var_3)) ^ (((/* implicit */int) arr_0 [i_0])))) : ((-(((/* implicit */int) (unsigned short)50860)))))) : (((/* implicit */int) min((arr_2 [i_0]), (((/* implicit */unsigned char) ((arr_1 [i_0] [(_Bool)1]) != (arr_1 [i_0] [i_0])))))))));
    }
    for (unsigned long long int i_1 = 3; i_1 < 24; i_1 += 2) 
    {
        arr_8 [19LL] = ((/* implicit */unsigned short) max((((_Bool) ((((/* implicit */int) (unsigned char)9)) + (((/* implicit */int) (unsigned short)14671))))), (arr_6 [i_1 - 1])));
        var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1 - 3])) ? (arr_5 [i_1 + 1]) : (arr_5 [i_1 - 3])))) && (((((/* implicit */_Bool) arr_7 [i_1 - 2])) && ((!(((/* implicit */_Bool) var_9))))))));
        var_22 = ((/* implicit */unsigned char) ((_Bool) max((arr_5 [i_1 - 1]), (((/* implicit */unsigned long long int) arr_6 [i_1 - 3])))));
    }
    /* LoopSeq 1 */
    for (short i_2 = 3; i_2 < 16; i_2 += 3) 
    {
        arr_11 [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) (unsigned char)112)) ? (7922645540456003442ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)30849)))))))) ? (((/* implicit */int) var_0)) : ((-(((/* implicit */int) arr_6 [i_2 - 3]))))));
        var_23 += ((/* implicit */short) var_14);
    }
}
