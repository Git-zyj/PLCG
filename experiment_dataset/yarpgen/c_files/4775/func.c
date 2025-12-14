/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4775
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4775 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4775
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
    var_10 = ((/* implicit */unsigned int) min((((/* implicit */int) var_6)), (var_5)));
    var_11 = ((/* implicit */long long int) ((((((/* implicit */_Bool) min((var_5), (((/* implicit */int) (unsigned char)24))))) && (((/* implicit */_Bool) ((var_8) ? (1752514579U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))) || (((/* implicit */_Bool) 18446744073709551589ULL))));
    var_12 = ((/* implicit */unsigned char) min((((((((/* implicit */_Bool) 2542452717U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (1752514563U))) + (((/* implicit */unsigned int) ((/* implicit */int) min(((_Bool)1), (var_8))))))), (((/* implicit */unsigned int) var_4))));
    var_13 = ((/* implicit */int) (((((_Bool)1) ? (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) % (1565201037941028058LL))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) 1U)))))) >= (((/* implicit */long long int) (~(((2542452717U) % (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_14 = ((/* implicit */_Bool) ((((/* implicit */int) ((unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)162))) >= (576460614864470016ULL))))) << (min(((~(1U))), (((/* implicit */unsigned int) arr_1 [i_0]))))));
        var_15 &= ((/* implicit */unsigned char) (~(min((((/* implicit */unsigned long long int) arr_1 [i_0])), (((((/* implicit */_Bool) 2013483635888736634ULL)) ? (17870283458845081606ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0])))))))));
    }
}
