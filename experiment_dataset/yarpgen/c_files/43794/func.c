/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43794
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43794 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43794
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
    var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) (~(((/* implicit */int) (short)27228)))))));
    var_20 = ((/* implicit */short) var_2);
    var_21 = ((/* implicit */signed char) ((unsigned int) (((+(var_7))) / (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_12))))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                for (signed char i_3 = 3; i_3 < 19; i_3 += 1) 
                {
                    {
                        arr_11 [i_3] [i_1] [i_2] [i_3 - 3] = ((/* implicit */unsigned short) ((max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_2)), (arr_4 [i_0] [i_3] [i_2])))), (max((var_7), (((/* implicit */unsigned long long int) var_16)))))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (~(((/* implicit */int) var_3)))))))));
                        var_22 = ((/* implicit */int) min((((/* implicit */unsigned int) ((_Bool) (unsigned char)254))), (arr_0 [i_0])));
                        var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)32767))) & ((+(((unsigned int) arr_8 [i_0] [i_0] [i_0])))))))));
                        var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((arr_8 [i_0] [i_0] [i_0]) % (((/* implicit */unsigned long long int) arr_6 [i_0] [i_1] [i_2] [i_3])))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -2649848224635837686LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)47902))) : (var_10))))))) ? (((((/* implicit */_Bool) (~(arr_0 [i_3])))) ? (((/* implicit */unsigned long long int) arr_9 [i_2] [i_3 - 3] [i_3 - 3] [i_3 - 1])) : ((~(arr_3 [i_3] [i_1] [i_0]))))) : (((/* implicit */unsigned long long int) (~(arr_10 [i_0] [i_0] [i_0]))))));
                    }
                } 
            } 
        } 
        var_25 = ((/* implicit */signed char) max((var_7), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_2)))) : (min((var_1), (var_1))))))));
        var_26 = ((/* implicit */long long int) var_7);
        var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((int) var_9))), (max((((/* implicit */unsigned int) arr_1 [i_0])), (var_17)))))) ? (((/* implicit */int) ((unsigned short) ((_Bool) -936008796)))) : (((/* implicit */int) ((_Bool) arr_10 [i_0] [i_0] [i_0])))));
        arr_12 [i_0] = ((/* implicit */long long int) (+(((/* implicit */int) ((short) arr_2 [i_0] [i_0])))));
    }
    for (int i_4 = 0; i_4 < 18; i_4 += 4) 
    {
        var_28 -= ((/* implicit */short) (-(max((((((/* implicit */_Bool) arr_6 [i_4] [i_4] [i_4] [i_4])) ? (arr_4 [i_4] [i_4] [i_4]) : (var_1))), (((/* implicit */unsigned int) (~(((/* implicit */int) arr_15 [i_4] [i_4])))))))));
        arr_16 [i_4] = ((/* implicit */long long int) ((((/* implicit */int) ((unsigned short) arr_6 [i_4] [i_4] [i_4] [i_4]))) <= ((-(((/* implicit */int) var_12))))));
    }
}
