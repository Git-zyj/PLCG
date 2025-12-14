/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230315
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230315 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230315
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
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 1; i_1 < 19; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                {
                    var_17 = ((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned short)24618)) : (arr_3 [i_0] [i_1 + 1] [i_1 + 1])))) ? (((/* implicit */int) ((unsigned short) arr_2 [i_0] [i_1] [i_2]))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0])))))))) != (((((/* implicit */long long int) (~(((/* implicit */int) var_9))))) | ((+(1044632509211193787LL)))))));
                    var_18 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */signed char) var_15)), (arr_2 [i_0] [i_1] [i_2]))))) : (var_4)))) ? (var_0) : (((/* implicit */int) var_10))));
                    var_19 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)12604)) > (((/* implicit */int) (((~(((/* implicit */int) arr_0 [i_2] [i_1])))) >= (((/* implicit */int) arr_0 [i_0] [i_1])))))));
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 2; i_3 < 19; i_3 += 4) 
                    {
                        var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((-3760620051244616720LL), (((/* implicit */long long int) -1679475778))))) ? (((/* implicit */int) ((signed char) max((var_10), (((/* implicit */unsigned char) (signed char)23)))))) : (((((((/* implicit */int) arr_2 [i_0] [i_2] [i_1])) < (((/* implicit */int) var_11)))) ? (((/* implicit */int) (signed char)-24)) : (((/* implicit */int) ((var_16) < (((/* implicit */unsigned int) ((/* implicit */int) var_12))))))))));
                        var_21 = ((/* implicit */unsigned int) var_1);
                    }
                }
            } 
        } 
        var_22 = ((/* implicit */unsigned short) min(((signed char)-24), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_2 [i_0] [i_0] [i_0])) : (((/* implicit */int) var_10))))) && (((/* implicit */_Bool) ((var_3) ? (var_2) : (((/* implicit */int) var_5))))))))));
        var_23 = ((/* implicit */_Bool) (signed char)23);
    }
    for (unsigned long long int i_4 = 2; i_4 < 10; i_4 += 2) 
    {
        var_24 = ((/* implicit */unsigned char) ((((min((((/* implicit */int) var_15)), (arr_1 [i_4] [i_4]))) + ((~(((/* implicit */int) (signed char)19)))))) >= (((/* implicit */int) ((short) var_16)))));
        var_25 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) min((max((((/* implicit */int) var_10)), (var_1))), (((((/* implicit */_Bool) (unsigned short)28443)) ? (((/* implicit */int) (signed char)-7)) : (((/* implicit */int) var_14))))))), ((+(arr_7 [i_4 - 1] [i_4] [i_4 - 2] [i_4 + 1] [i_4 - 2])))));
        var_26 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (!(var_3)))) : (((((/* implicit */_Bool) arr_1 [i_4 - 2] [i_4 - 1])) ? (var_0) : (var_2)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_11))))) : ((((!(((/* implicit */_Bool) var_5)))) ? (((/* implicit */int) (signed char)-24)) : (((/* implicit */int) ((unsigned short) arr_0 [i_4 - 2] [i_4]))))));
    }
    var_27 = ((/* implicit */long long int) max((var_9), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((var_6) ? (3113770808U) : (((/* implicit */unsigned int) ((/* implicit */int) var_14)))))))))));
    var_28 = ((/* implicit */unsigned int) var_0);
}
