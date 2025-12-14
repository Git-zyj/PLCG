/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239748
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239748 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239748
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
    var_19 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) ((((((/* implicit */_Bool) 873431625U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (3421535663U))) < (((/* implicit */unsigned int) var_1))))), (min((((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))))), ((+(873431616U)))))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 1; i_0 < 14; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                for (short i_3 = 0; i_3 < 15; i_3 += 1) 
                {
                    {
                        arr_12 [i_2] [i_2] [i_2] [i_2] [i_1] [i_3] = ((/* implicit */short) min((((/* implicit */unsigned int) (!(((((/* implicit */_Bool) 873431623U)) || (((/* implicit */_Bool) 1095365500))))))), (min((((/* implicit */unsigned int) arr_5 [i_1] [i_1])), (3421535657U)))));
                        var_20 -= ((/* implicit */unsigned short) ((((/* implicit */int) ((min((((/* implicit */unsigned int) (_Bool)1)), (2U))) >= (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))) <= (((/* implicit */int) min((arr_11 [i_0 + 1] [i_0 - 1] [i_0 - 1] [i_0] [i_0 + 1]), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-19242)) || (((/* implicit */_Bool) arr_4 [i_2] [i_2]))))))))));
                        arr_13 [i_0 + 1] [i_0 + 1] [i_2] [i_1] = ((/* implicit */unsigned short) (_Bool)1);
                    }
                } 
            } 
        } 
        arr_14 [i_0 - 1] = ((/* implicit */_Bool) (short)5);
        arr_15 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [4LL] [i_0])) ? (3421535670U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */int) ((short) -1121076700))) : (((((/* implicit */_Bool) -5942856266186981104LL)) ? (2147483647) : (((/* implicit */int) (short)32767))))))) % (((((/* implicit */_Bool) (short)-32744)) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_15))) - (var_17))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (unsigned short)28070))))))))));
        arr_16 [i_0] [i_0] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_4 [(unsigned char)10] [i_0])) : (((/* implicit */int) arr_7 [8LL]))))) ? (arr_3 [(_Bool)1]) : ((~(((/* implicit */int) arr_7 [i_0])))))), (((((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (short)-25988)))) + (((/* implicit */int) ((_Bool) arr_0 [i_0 - 1])))))));
    }
    for (short i_4 = 3; i_4 < 11; i_4 += 4) 
    {
        var_21 = ((/* implicit */short) ((long long int) ((((/* implicit */_Bool) 1655557263)) ? (((/* implicit */int) arr_7 [i_4 + 3])) : (((/* implicit */int) (signed char)-108)))));
        arr_19 [i_4] = max(((((+((-9223372036854775807LL - 1LL)))) / (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_4] [10LL] [i_4] [i_4 - 2]))))), (((/* implicit */long long int) ((int) arr_1 [i_4 + 3] [i_4]))));
    }
    var_22 = ((/* implicit */unsigned int) var_2);
    var_23 = ((/* implicit */unsigned int) (_Bool)1);
    var_24 = ((/* implicit */unsigned short) ((var_9) / (((/* implicit */long long int) ((/* implicit */int) var_8)))));
}
