/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229787
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229787 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229787
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
    var_10 = ((/* implicit */_Bool) (unsigned char)112);
    var_11 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (short)1369)) & (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) var_1)) : ((-(((/* implicit */int) ((_Bool) (unsigned short)65535)))))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_12 = ((/* implicit */_Bool) min((var_12), (((/* implicit */_Bool) (((~(((/* implicit */int) (!(((/* implicit */_Bool) var_7))))))) / (((((/* implicit */_Bool) (short)-25506)) ? (((((/* implicit */_Bool) (short)-23984)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) (_Bool)1)))) : ((~(((/* implicit */int) var_7)))))))))));
        var_13 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+(((/* implicit */int) (short)5959)))))));
    }
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
    {
        arr_6 [i_1] [i_1] = ((/* implicit */signed char) ((_Bool) arr_5 [i_1]));
        var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) ((unsigned long long int) ((((_Bool) (short)127)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)5508))))))));
        arr_7 [i_1] [i_1 - 1] = ((/* implicit */_Bool) (((((((_Bool)1) ? (((/* implicit */int) (short)1494)) : (((/* implicit */int) (short)-128)))) >= (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)117))) <= (arr_4 [i_1] [i_1])))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [(_Bool)1]))) > (arr_4 [i_1] [(unsigned char)9]))))) < (arr_4 [i_1 - 1] [i_1 - 1])))) : ((+(((/* implicit */int) (_Bool)1))))));
        var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) (~((-(((/* implicit */int) (_Bool)1)))))))));
    }
    var_16 = ((/* implicit */short) max((var_16), (var_7)));
    var_17 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) max(((unsigned short)1), (((/* implicit */unsigned short) (short)3))))) >> ((((((_Bool)0) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_2)))) - (5090)))))) ? (((/* implicit */int) max((var_7), (var_7)))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_1))) >= (((((/* implicit */_Bool) var_7)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))))));
}
