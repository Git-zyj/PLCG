/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223404
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223404 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223404
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
    var_18 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) (-(((/* implicit */int) var_10))))) ? (-1421803612040490393LL) : (((/* implicit */long long int) ((/* implicit */int) max((var_8), (((/* implicit */short) var_13)))))))), (((/* implicit */long long int) (+(((/* implicit */int) var_13)))))));
    var_19 *= ((/* implicit */unsigned char) var_8);
    var_20 = ((/* implicit */_Bool) 1421803612040490393LL);
    var_21 = ((/* implicit */short) min(((-(32767LL))), (((/* implicit */long long int) ((var_4) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))))))));
    var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) ((((/* implicit */_Bool) 1370959278)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((min((var_7), (((/* implicit */unsigned int) var_3)))) > (((/* implicit */unsigned int) ((((/* implicit */_Bool) 1370959278)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (short)32704))))))))) : (((((/* implicit */unsigned int) 1370959296)) | (min((var_7), (var_4))))))))));
}
