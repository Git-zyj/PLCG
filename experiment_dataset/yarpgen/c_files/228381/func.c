/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228381
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228381 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228381
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
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned char) (short)-30228);
        arr_5 [i_0] = (+(((1054347456008238856ULL) + (((/* implicit */unsigned long long int) arr_0 [i_0] [i_0])))));
    }
    var_17 = ((/* implicit */unsigned char) (unsigned short)0);
    var_18 = ((/* implicit */unsigned char) var_10);
    var_19 = ((/* implicit */short) max((((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)65535)) + (((/* implicit */int) (unsigned short)1))))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_0)))), (((int) (unsigned short)22264))));
    var_20 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(var_12)))) && (((/* implicit */_Bool) var_12))));
}
