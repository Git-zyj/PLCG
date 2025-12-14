/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30856
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30856 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30856
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
    var_19 = ((/* implicit */unsigned char) ((((/* implicit */int) var_15)) + ((~(((/* implicit */int) ((var_1) != (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))))));
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(var_3)))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0))));
    var_21 *= ((/* implicit */unsigned short) (_Bool)1);
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((max((((/* implicit */int) (unsigned short)36940)), (((((/* implicit */int) (unsigned short)36914)) + (((/* implicit */int) (unsigned short)28578)))))) << (((var_7) + (2015635454)))));
        arr_3 [i_0] = ((((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) (unsigned short)36914)))) ? ((-(((/* implicit */int) (unsigned short)1911)))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((long long int) (unsigned short)5495)))))));
        arr_4 [i_0] = ((/* implicit */unsigned long long int) ((min(((-(((/* implicit */int) arr_1 [19U])))), (((/* implicit */int) ((((/* implicit */int) var_9)) >= (((/* implicit */int) arr_1 [i_0]))))))) ^ ((-(((/* implicit */int) arr_1 [i_0]))))));
    }
}
