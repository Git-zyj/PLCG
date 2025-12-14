/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199163
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199163 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199163
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
    var_15 = ((/* implicit */long long int) var_2);
    var_16 += ((/* implicit */short) var_5);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 17; i_1 += 3) 
        {
            {
                var_17 = (-(((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_0 + 1] [i_1 - 1])) || (arr_6 [i_0] [i_0])))));
                var_18 = ((/* implicit */short) (~(((((((/* implicit */int) arr_6 [i_0] [i_0])) + (((/* implicit */int) (unsigned short)26824)))) * ((+(((/* implicit */int) arr_7 [i_0]))))))));
                var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 626892973)) ? (127LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)38723)) ? (((/* implicit */int) (unsigned short)26834)) : (((/* implicit */int) (unsigned short)26834)))))));
                arr_8 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) min((((int) arr_7 [i_0])), (((((/* implicit */_Bool) arr_4 [i_0] [i_1 + 1])) ? (((/* implicit */int) arr_3 [i_0] [i_1])) : (((/* implicit */int) arr_3 [(_Bool)1] [12]))))))) ? (((((/* implicit */_Bool) arr_7 [i_0])) ? (((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)38692))))) : (((arr_0 [i_0]) | (((/* implicit */long long int) ((/* implicit */int) var_10))))))) : (((/* implicit */long long int) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned short)38723)) : (((/* implicit */int) (unsigned short)26813)))) + (((/* implicit */int) arr_3 [i_0 + 1] [i_1 - 1])))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 4) 
    {
        var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max(((-(var_4))), (((/* implicit */int) arr_1 [i_2]))))) ? ((~(((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)26813)) || (arr_6 [i_2] [i_2])))))) : (((((/* implicit */_Bool) (+(var_14)))) ? (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (unsigned char)151)) : (((/* implicit */int) arr_1 [i_2])))) : (((((/* implicit */int) var_0)) & (((/* implicit */int) arr_9 [i_2]))))))));
        var_21 = ((/* implicit */long long int) (((-(((((/* implicit */_Bool) (unsigned short)26841)) ? (var_8) : (((/* implicit */int) arr_9 [i_2])))))) - (((/* implicit */int) (unsigned short)38711))));
        var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) ((((/* implicit */long long int) ((int) var_1))) != (((((/* implicit */_Bool) (~(1058988570U)))) ? (((arr_0 [i_2]) * (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_2] [i_2]))))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_12)))))))))));
        arr_12 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_9)) ? ((~(((/* implicit */int) min((((/* implicit */unsigned short) var_7)), ((unsigned short)26813)))))) : (((/* implicit */int) ((((/* implicit */_Bool) 67108863ULL)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (arr_11 [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_2])))))))))));
    }
}
