/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20805
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20805 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20805
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
    /* LoopSeq 4 */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        var_11 &= ((/* implicit */unsigned long long int) (((+(((/* implicit */int) arr_2 [i_0] [i_0])))) * (((((/* implicit */int) (signed char)-110)) * (((/* implicit */int) arr_2 [i_0] [1ULL]))))));
        var_12 &= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (signed char)120))));
        var_13 *= ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (!((!(((/* implicit */_Bool) (signed char)-111)))))))) >= (min((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_0]))) : (arr_1 [i_0]))), (((/* implicit */long long int) ((((/* implicit */int) var_9)) / (((/* implicit */int) (signed char)120)))))))));
        var_14 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0])) | (((((/* implicit */int) (signed char)-116)) & (((/* implicit */int) (signed char)-79))))))) ? (((arr_1 [i_0]) ^ (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_0]))))) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0])))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_15 = ((/* implicit */signed char) max((((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-116)) ? (((/* implicit */int) arr_2 [i_1] [i_1])) : (((/* implicit */int) arr_0 [i_1])))))))), (min((((((/* implicit */long long int) ((/* implicit */int) (signed char)-14))) % (var_7))), (((/* implicit */long long int) ((-507317387) / (((/* implicit */int) (signed char)-6)))))))));
        var_16 = ((/* implicit */int) min((var_16), ((((((((~(((/* implicit */int) (_Bool)1)))) % (-507317387))) + (2147483647))) << (((((arr_1 [i_1]) / (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)78)) ? (((/* implicit */int) (unsigned short)26681)) : (((/* implicit */int) arr_0 [(_Bool)1]))))))) - (167668554413514LL)))))));
    }
    for (long long int i_2 = 0; i_2 < 15; i_2 += 1) 
    {
        arr_9 [i_2] = ((/* implicit */_Bool) ((((((/* implicit */int) arr_7 [i_2])) != (((/* implicit */int) arr_7 [i_2])))) ? (((((/* implicit */_Bool) arr_7 [i_2])) ? (((/* implicit */int) arr_7 [i_2])) : (((/* implicit */int) arr_6 [i_2])))) : (((((/* implicit */_Bool) 507317369)) ? (((/* implicit */int) (signed char)115)) : (((/* implicit */int) (signed char)-110))))));
        var_17 += ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_8 [i_2]))));
        var_18 = ((/* implicit */unsigned long long int) ((_Bool) (!(((/* implicit */_Bool) arr_8 [i_2])))));
    }
    for (unsigned int i_3 = 0; i_3 < 14; i_3 += 4) 
    {
        var_19 |= ((/* implicit */unsigned long long int) (signed char)116);
        var_20 = ((/* implicit */unsigned int) ((int) max(((!(((/* implicit */_Bool) arr_7 [i_3])))), ((!(((/* implicit */_Bool) arr_6 [i_3])))))));
    }
    var_21 |= ((/* implicit */unsigned char) ((min((((((/* implicit */_Bool) (short)-32337)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)27))) : (var_4))), (((/* implicit */unsigned long long int) ((signed char) (signed char)-111))))) % (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (short)15313)) >> (((/* implicit */int) var_9))))) ? (((/* implicit */long long int) ((unsigned int) (unsigned short)38855))) : (var_7))))));
}
