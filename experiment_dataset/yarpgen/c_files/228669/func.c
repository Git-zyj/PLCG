/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228669
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228669 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228669
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
    var_12 = ((/* implicit */int) var_1);
    /* LoopSeq 2 */
    for (long long int i_0 = 2; i_0 < 13; i_0 += 3) 
    {
        var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_10)), (min((((/* implicit */unsigned long long int) (unsigned char)7)), (var_1)))))) ? (((((((/* implicit */int) (unsigned char)236)) | (((/* implicit */int) (unsigned short)53878)))) * (((/* implicit */int) arr_3 [10LL] [i_0])))) : (min(((-(((/* implicit */int) arr_2 [i_0])))), ((+(((/* implicit */int) arr_0 [i_0]))))))));
        var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) ((((((/* implicit */_Bool) (+(var_6)))) ? (((((/* implicit */int) (unsigned short)11653)) * (((/* implicit */int) (_Bool)0)))) : (((((/* implicit */int) (unsigned short)45351)) + (((/* implicit */int) (_Bool)1)))))) != (((/* implicit */int) (!(((/* implicit */_Bool) ((arr_0 [i_0]) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_0 [i_0 - 2])))))))))))));
        arr_4 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)53878)) && (((((/* implicit */_Bool) (unsigned short)11658)) && (((/* implicit */_Bool) (signed char)-111))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_7 [i_1] [i_1] = ((/* implicit */unsigned long long int) arr_5 [i_1]);
        arr_8 [22U] &= ((/* implicit */int) var_0);
        var_15 = ((/* implicit */unsigned char) var_10);
    }
    var_16 = ((/* implicit */unsigned char) ((unsigned int) var_10));
    var_17 = ((/* implicit */unsigned char) ((var_4) % (((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)248))))))))));
    var_18 = ((/* implicit */unsigned short) var_7);
}
