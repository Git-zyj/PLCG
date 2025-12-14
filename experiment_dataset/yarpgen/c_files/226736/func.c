/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226736
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226736 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226736
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
    var_15 = ((/* implicit */signed char) ((((/* implicit */unsigned int) min(((~(var_0))), (((/* implicit */int) var_10))))) & (((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-32745))) : (var_8))) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))));
    /* LoopSeq 2 */
    for (int i_0 = 2; i_0 < 11; i_0 += 1) /* same iter space */
    {
        arr_3 [i_0 - 2] = ((/* implicit */int) var_1);
        arr_4 [(_Bool)1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)32592))))) ? (3167364194U) : (3167364194U)));
        /* LoopNest 2 */
        for (unsigned char i_1 = 2; i_1 < 10; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                {
                    var_16 = ((/* implicit */_Bool) (~((~((~(((/* implicit */int) var_14))))))));
                    arr_9 [i_0] [i_1 + 2] [i_1] = ((/* implicit */int) (~(((((/* implicit */_Bool) arr_5 [i_0 - 1])) ? (((/* implicit */unsigned int) var_0)) : (arr_5 [i_0 - 2])))));
                    arr_10 [i_1] = ((/* implicit */signed char) (_Bool)1);
                    var_17 = ((/* implicit */unsigned long long int) min((max((((/* implicit */int) arr_2 [i_0])), ((+(((/* implicit */int) var_4)))))), (((/* implicit */int) arr_8 [i_0] [(_Bool)1]))));
                }
            } 
        } 
    }
    for (int i_3 = 2; i_3 < 11; i_3 += 1) /* same iter space */
    {
        var_18 = ((/* implicit */long long int) ((unsigned char) arr_1 [i_3] [i_3]));
        var_19 = ((/* implicit */unsigned int) var_10);
        arr_13 [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_12 [i_3])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_12 [(unsigned short)1])) / (((/* implicit */int) var_3))))) ? (((/* implicit */int) arr_12 [i_3 - 1])) : (((/* implicit */int) ((unsigned short) var_5)))))) : (max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) arr_11 [(unsigned char)2])) <= (arr_5 [i_3 - 2])))), (((unsigned long long int) arr_2 [(signed char)4]))))));
    }
    var_20 = ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (var_8) : (((/* implicit */unsigned int) var_0))));
}
