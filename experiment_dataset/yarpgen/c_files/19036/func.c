/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19036
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19036 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19036
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
    var_20 = ((/* implicit */unsigned short) ((((_Bool) var_7)) ? (((((/* implicit */_Bool) max((((/* implicit */signed char) var_6)), (var_14)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_10), (var_19))))) : ((~(var_16))))) : ((+(var_16)))));
    var_21 = ((/* implicit */unsigned char) (+((-(var_4)))));
    var_22 = ((/* implicit */short) max((var_12), (0ULL)));
    /* LoopSeq 1 */
    for (signed char i_0 = 1; i_0 < 14; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            var_23 += ((/* implicit */unsigned char) min(((short)-8099), (((/* implicit */short) var_9))));
            arr_4 [i_1] = ((/* implicit */unsigned short) ((unsigned char) var_8));
            var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) * ((-(((/* implicit */int) arr_0 [i_0 + 2])))))))));
            var_25 = ((/* implicit */unsigned int) ((min(((_Bool)1), ((_Bool)1))) ? (arr_3 [i_1] [i_1] [i_1]) : (((/* implicit */unsigned long long int) arr_2 [i_0] [i_0] [i_0]))));
        }
        /* LoopSeq 1 */
        for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 2) 
        {
            var_26 |= ((/* implicit */long long int) max((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_2] [i_2] [i_2])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_1 [i_0]))))), (arr_3 [i_0 + 1] [i_2] [i_0 + 1]))), (((0ULL) | (3183813753554239510ULL)))));
            var_27 = ((/* implicit */unsigned char) max((var_27), (((/* implicit */unsigned char) ((unsigned long long int) max((((/* implicit */long long int) (_Bool)1)), (var_13)))))));
            arr_7 [i_0] [i_0] = 16058722430946228864ULL;
            var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(arr_3 [i_0 + 2] [i_2] [i_0])))) ? (min((min((((/* implicit */unsigned int) arr_1 [i_0 - 1])), (arr_2 [i_2] [i_2] [i_2]))), (((/* implicit */unsigned int) arr_1 [i_0 + 2])))) : (min((((/* implicit */unsigned int) arr_5 [i_2] [i_2] [i_2])), (arr_2 [i_0] [i_2] [i_0 + 3])))));
        }
    }
}
