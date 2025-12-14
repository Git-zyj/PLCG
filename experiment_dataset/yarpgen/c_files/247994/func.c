/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247994
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247994 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247994
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
    var_11 = ((/* implicit */short) max((var_11), (((short) ((((/* implicit */int) min((var_2), (var_6)))) % (((/* implicit */int) max((var_7), ((short)32767)))))))));
    var_12 = max(((short)-12178), (var_0));
    var_13 = ((short) (short)8158);
}
