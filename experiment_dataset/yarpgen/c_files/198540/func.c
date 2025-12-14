/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198540
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198540 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198540
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
    var_15 = ((/* implicit */int) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_5)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535)))))))) ? ((~(var_10))) : (((/* implicit */unsigned long long int) var_9))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned int) 0ULL);
        var_16 = ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)47449))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)41585)) ? (((/* implicit */int) (unsigned short)53833)) : (((/* implicit */int) (unsigned short)39078))))) : (max((((/* implicit */unsigned int) (unsigned short)26449)), (arr_3 [(unsigned char)2] [i_0])))));
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            var_17 = ((((/* implicit */int) (unsigned short)39065)) | ((-(((/* implicit */int) (unsigned short)39067)))));
            arr_8 [i_0] = ((/* implicit */int) ((((/* implicit */int) (unsigned short)39069)) >= (((/* implicit */int) (unsigned short)26442))));
            arr_9 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_0 [i_0]), (arr_0 [i_0])))) ? (((/* implicit */int) ((unsigned short) var_6))) : ((+(arr_0 [i_0])))));
        }
    }
    var_18 = ((/* implicit */unsigned short) -16);
}
