/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192991
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192991 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192991
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
    var_19 += ((/* implicit */unsigned int) (~(((/* implicit */int) ((min((var_16), (((/* implicit */unsigned int) var_5)))) <= (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))))))));
    var_20 += ((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) (~(var_17)))))))));
    var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) (-(((/* implicit */int) (!(((/* implicit */_Bool) (+(8388096))))))))))));
    var_22 += ((/* implicit */signed char) (-((~((+(var_14)))))));
    /* LoopNest 3 */
    for (long long int i_0 = 2; i_0 < 21; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    var_23 *= ((/* implicit */long long int) (-((-(min((((/* implicit */unsigned int) var_8)), (2690056213U)))))));
                    var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_3 [i_0 - 1])))))))) - (((8388096) % (((/* implicit */int) (unsigned char)255)))))))));
                    var_25 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */int) (signed char)91)) >> (((var_0) - (12589015895930587446ULL)))))) < (max((((/* implicit */long long int) var_18)), (arr_6 [i_0] [9ULL] [(unsigned char)0]))))))));
                    var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((((/* implicit */int) arr_3 [i_2])) >> (((((/* implicit */int) (signed char)48)) - (39))))), ((+(((/* implicit */int) arr_0 [i_0] [16U]))))))) || (((/* implicit */_Bool) ((((/* implicit */int) max((arr_0 [i_2 - 1] [i_0]), (((/* implicit */short) (unsigned char)18))))) & (((((/* implicit */int) (short)25814)) & (-8388097))))))));
                }
            } 
        } 
    } 
}
