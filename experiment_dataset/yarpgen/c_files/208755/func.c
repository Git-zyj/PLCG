/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208755
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208755 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208755
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
    var_16 += ((/* implicit */unsigned short) var_0);
    var_17 &= ((/* implicit */signed char) ((int) ((signed char) ((((/* implicit */unsigned long long int) var_15)) | (22ULL)))));
    var_18 = ((/* implicit */int) ((((/* implicit */int) (unsigned char)1)) != ((~(var_12)))));
    var_19 &= ((/* implicit */short) ((((/* implicit */_Bool) (+(min((((/* implicit */int) var_10)), (var_12)))))) || ((!(((/* implicit */_Bool) max((-1), (((/* implicit */int) (unsigned char)4)))))))));
}
