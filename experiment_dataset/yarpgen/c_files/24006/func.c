/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24006
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24006 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24006
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_1 = 1; i_1 < 17; i_1 += 3) 
        {
            var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)12711))))) ? (((((/* implicit */_Bool) (short)(-32767 - 1))) ? (5635314382622763450ULL) : (15ULL))) : (((((/* implicit */_Bool) var_6)) ? (arr_0 [i_1] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1))))))));
            var_20 = ((/* implicit */short) ((unsigned short) arr_0 [i_0] [i_1 - 1]));
            arr_6 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 767488033850290815ULL)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) (short)-15391))));
        }
        var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_4 [i_0])) : ((+(((/* implicit */int) (short)(-32767 - 1)))))));
        var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) arr_5 [(short)10]))));
    }
    for (signed char i_2 = 0; i_2 < 18; i_2 += 3) 
    {
        arr_10 [i_2] = ((/* implicit */short) arr_9 [i_2]);
        var_23 -= ((/* implicit */signed char) (+(((/* implicit */int) ((_Bool) ((short) arr_2 [i_2]))))));
        var_24 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) (unsigned short)9760)))) ? (((/* implicit */int) arr_4 [i_2])) : ((+(((/* implicit */int) arr_8 [i_2] [i_2]))))));
    }
    var_25 = ((/* implicit */signed char) var_4);
    var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) (+(((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) 2147483646)) : (15ULL)))) ? (((/* implicit */int) ((unsigned short) var_14))) : (((((/* implicit */_Bool) (unsigned char)126)) ? (((/* implicit */int) (unsigned short)65510)) : (((/* implicit */int) var_13)))))))))));
}
