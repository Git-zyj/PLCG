/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200182
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200182 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200182
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
    var_12 = ((/* implicit */unsigned long long int) var_8);
    var_13 &= ((/* implicit */short) var_6);
    var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) 846987739))));
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_0] [i_0]))))) && (((/* implicit */_Bool) (-(((/* implicit */int) var_11)))))))) & (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_1 [i_0] [i_0])), (9801681606115375215ULL)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)0))))) : ((-(((/* implicit */int) (unsigned char)215))))))));
        arr_3 [i_0] = ((/* implicit */signed char) ((max((arr_1 [i_0] [i_0]), (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)40)) + (((/* implicit */int) (short)32750))))))) == (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_0])))));
    }
    for (unsigned int i_1 = 3; i_1 < 12; i_1 += 1) 
    {
        var_15 = ((/* implicit */unsigned short) (short)-32751);
        arr_6 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_1 - 1] [i_1 - 3]))))) ? (((((/* implicit */int) arr_0 [i_1 - 2] [i_1 - 3])) | (((/* implicit */int) arr_0 [i_1 + 1] [i_1 + 1])))) : (((/* implicit */int) arr_0 [i_1 - 1] [i_1 - 1]))));
    }
    for (long long int i_2 = 0; i_2 < 18; i_2 += 1) 
    {
        var_16 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */int) (unsigned short)44431)) - (((/* implicit */int) (unsigned char)215))))) - (((((/* implicit */_Bool) arr_7 [i_2])) ? (9223372036854775785LL) : (((/* implicit */long long int) arr_8 [i_2]))))))) ? (((/* implicit */unsigned long long int) 0U)) : ((((+(var_7))) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)15527)) ? (((/* implicit */int) arr_7 [i_2])) : (((/* implicit */int) var_8)))))))));
        var_17 = ((/* implicit */_Bool) min((((((((/* implicit */int) arr_7 [i_2])) * (((/* implicit */int) arr_7 [i_2])))) / (arr_8 [i_2]))), (((/* implicit */int) (short)32749))));
        var_18 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) arr_7 [i_2])))) && (((((/* implicit */int) (unsigned short)32714)) == (min((((/* implicit */int) arr_9 [i_2])), (arr_8 [i_2])))))));
        arr_10 [i_2] [i_2] = ((/* implicit */signed char) (-(((((4740671319290630496LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)215))))) >> (((((((/* implicit */_Bool) arr_9 [(short)15])) ? (2035386108737675562ULL) : (((/* implicit */unsigned long long int) arr_8 [i_2])))) - (2035386108737675555ULL)))))));
    }
    for (short i_3 = 0; i_3 < 25; i_3 += 2) 
    {
        var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) (~(((4294967287U) >> (((((/* implicit */int) arr_11 [i_3])) + (5563))))))))));
        var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) ((((/* implicit */unsigned int) max((((((/* implicit */int) arr_11 [i_3])) + (((/* implicit */int) arr_12 [i_3])))), (((((/* implicit */int) arr_11 [i_3])) + (((/* implicit */int) (signed char)86))))))) - (max((((((/* implicit */_Bool) arr_12 [i_3])) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_3]))))), (((/* implicit */unsigned int) arr_12 [i_3])))))))));
        arr_13 [i_3] = ((/* implicit */int) (unsigned short)12421);
    }
}
