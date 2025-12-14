/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225545
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225545 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225545
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
    var_19 = ((/* implicit */int) var_14);
    var_20 = (-(((/* implicit */int) (_Bool)1)));
    var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)11))));
    /* LoopSeq 1 */
    for (int i_0 = 1; i_0 < 9; i_0 += 1) 
    {
        var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */signed char) var_10)), (var_6)))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */_Bool) (signed char)48)) ? (((/* implicit */long long int) ((/* implicit */int) (!(var_10))))) : (((((/* implicit */_Bool) (unsigned char)93)) ? (var_17) : (((/* implicit */long long int) ((/* implicit */int) var_7))))))))))));
        var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_10)) / (1657233842)))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) min((((/* implicit */short) (_Bool)1)), ((short)-20606)))))))));
        var_24 = ((/* implicit */unsigned int) min((var_24), ((((!(((/* implicit */_Bool) var_12)))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (var_12) : (((/* implicit */unsigned long long int) var_16))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_4)) & (((/* implicit */int) var_18))))) : (var_16))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_7))))) ? (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)255)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_16))))))))))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 1; i_1 < 8; i_1 += 2) 
        {
            for (unsigned short i_2 = 1; i_2 < 6; i_2 += 4) 
            {
                {
                    var_25 = ((/* implicit */_Bool) min((var_25), (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_1))))) ? ((+(924281769))) : (((((/* implicit */int) var_0)) & (((/* implicit */int) var_10))))))) > (((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-11))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_1)), (var_5)))) : ((+(var_3)))))))));
                    var_26 = ((/* implicit */signed char) ((((/* implicit */unsigned int) max((((/* implicit */int) var_15)), ((~(((/* implicit */int) var_14))))))) | (max((3126703471U), (((/* implicit */unsigned int) var_18))))));
                }
            } 
        } 
        var_27 = ((/* implicit */long long int) max(((+(((((/* implicit */int) var_4)) & (((/* implicit */int) var_1)))))), (((/* implicit */int) var_4))));
    }
}
