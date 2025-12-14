/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54347
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54347 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54347
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
    var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) var_4))));
    var_15 &= (!(((/* implicit */_Bool) ((max((var_12), (16800821591715037845ULL))) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 6494924446526293422LL)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_2)))))))));
    var_16 += ((((/* implicit */unsigned int) max((((/* implicit */int) ((unsigned short) var_11))), (((((/* implicit */int) var_2)) >> (((/* implicit */int) var_13))))))) >= (min((var_6), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 16800821591715037863ULL)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (_Bool)1))))))));
    var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) (-(((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_10)))) % ((((_Bool)1) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_5)))))))))));
}
