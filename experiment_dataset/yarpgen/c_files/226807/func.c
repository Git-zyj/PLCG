/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226807
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226807 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226807
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
    var_14 = ((/* implicit */short) min((((((/* implicit */int) ((unsigned char) (unsigned short)25637))) & (((/* implicit */int) max((var_13), (((/* implicit */short) var_6))))))), (((/* implicit */int) ((max((3663142336U), (((/* implicit */unsigned int) var_6)))) > (((/* implicit */unsigned int) (~(((/* implicit */int) var_7))))))))));
    var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((-1904221483) | (((/* implicit */int) var_2))))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)26779))) : (var_5))) : (min((var_5), (((/* implicit */unsigned long long int) 1465286293))))))) ? (((((((/* implicit */_Bool) var_3)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_13))))) << (((1465286296) - (1465286296))))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) max((((/* implicit */short) var_6)), ((short)-8198))))))));
    var_16 = ((/* implicit */int) min((var_16), ((-(((/* implicit */int) var_4))))));
    var_17 = ((/* implicit */int) min((((((/* implicit */unsigned int) min((((/* implicit */int) var_7)), (var_0)))) ^ (max((var_10), (((/* implicit */unsigned int) (unsigned char)183)))))), (((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (var_12) : (((/* implicit */int) var_1))))) % (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)65))) : (var_10)))))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) arr_0 [i_0]))));
        arr_2 [i_0] = ((/* implicit */long long int) (((+(((((/* implicit */int) arr_1 [i_0])) | (((/* implicit */int) var_6)))))) != (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (!(((/* implicit */_Bool) 2604584998U)))))))));
        arr_3 [i_0] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) ((var_9) == (((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_0])) >> (((((/* implicit */int) arr_0 [i_0])) - (232)))))))))) > (((((/* implicit */_Bool) max((((/* implicit */long long int) arr_0 [i_0])), (var_9)))) ? (6954448975829954714LL) : (((/* implicit */long long int) ((/* implicit */int) var_13)))))));
    }
}
