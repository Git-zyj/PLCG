/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53831
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53831 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53831
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
    /* vectorizable */
    for (unsigned short i_0 = 1; i_0 < 22; i_0 += 4) 
    {
        var_19 = arr_0 [i_0] [i_0 - 1];
        arr_3 [i_0] = ((/* implicit */_Bool) var_15);
    }
    for (unsigned long long int i_1 = 1; i_1 < 14; i_1 += 4) 
    {
        /* LoopSeq 4 */
        for (unsigned int i_2 = 0; i_2 < 16; i_2 += 4) 
        {
            var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_4 [i_1]), (((/* implicit */long long int) (short)-32756))))) ? (((/* implicit */int) ((((/* implicit */int) (short)32762)) > (((/* implicit */int) arr_1 [i_1] [i_2]))))) : ((-(((/* implicit */int) arr_1 [i_1] [i_2]))))))) ? (((/* implicit */unsigned int) max((arr_9 [i_1] [i_1 - 1]), ((+(((/* implicit */int) (unsigned short)0))))))) : (((((/* implicit */unsigned int) ((/* implicit */int) (short)32760))) / (arr_10 [i_2] [i_1 + 2] [i_2]))))))));
            var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) (unsigned short)33467)) : (((/* implicit */int) (short)32766))));
        }
        for (unsigned short i_3 = 1; i_3 < 14; i_3 += 4) 
        {
            var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_3 + 1] [(_Bool)1])))))) - (min((((/* implicit */long long int) (signed char)121)), (arr_5 [i_3 + 1] [(short)10]))))))));
            arr_15 [i_3] [i_3] [i_1] = ((/* implicit */short) arr_1 [i_1] [i_3 + 1]);
            var_23 += min(((!(((/* implicit */_Bool) arr_6 [i_1] [i_3 + 2])))), (((arr_9 [i_1 - 1] [i_3 + 1]) >= (((/* implicit */int) arr_6 [i_1 - 1] [i_3 + 1])))));
        }
        for (short i_4 = 4; i_4 < 13; i_4 += 3) 
        {
            var_24 -= ((/* implicit */unsigned long long int) min((((/* implicit */long long int) max((min((((/* implicit */int) arr_18 [6] [6])), (var_2))), (((/* implicit */int) max((((/* implicit */short) (_Bool)1)), ((short)-32762))))))), (-9223372036854775805LL)));
            var_25 -= ((/* implicit */_Bool) (short)32756);
            var_26 |= ((/* implicit */unsigned int) ((short) (~(((((/* implicit */_Bool) (short)(-32767 - 1))) ? (var_14) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_1]))))))));
        }
        for (unsigned int i_5 = 0; i_5 < 16; i_5 += 3) 
        {
            var_27 = ((/* implicit */long long int) min(((+(1128115125))), (((((/* implicit */_Bool) ((arr_11 [i_1 - 1] [i_1 + 1] [i_5]) - (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))) ? (((/* implicit */int) (signed char)(-127 - 1))) : (arr_14 [i_1 + 2])))));
            var_28 = ((/* implicit */int) 8817459417014132532ULL);
            var_29 = ((/* implicit */long long int) max((var_29), (((/* implicit */long long int) arr_10 [i_1] [i_1] [i_5]))));
        }
        arr_22 [(signed char)10] |= ((unsigned int) arr_13 [i_1] [i_1] [i_1]);
    }
    var_30 = ((/* implicit */short) (!(((/* implicit */_Bool) (+(max((((/* implicit */int) (signed char)-74)), (var_2))))))));
    var_31 = ((/* implicit */unsigned short) max((var_31), (((/* implicit */unsigned short) ((((((/* implicit */long long int) ((17U) - (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))) | (1492293921198964300LL))) + (((/* implicit */long long int) ((/* implicit */int) var_5))))))));
}
