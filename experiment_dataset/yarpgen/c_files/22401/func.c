/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22401
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22401 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22401
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
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        var_12 = ((/* implicit */int) ((((/* implicit */long long int) arr_1 [i_0] [i_0])) <= ((((+(-13LL))) + (((/* implicit */long long int) ((/* implicit */int) (unsigned char)122)))))));
        var_13 *= ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)0)) ? (arr_0 [i_0] [i_0]) : (((/* implicit */unsigned int) 2147483630))))))))) > ((((!(((/* implicit */_Bool) -13LL)))) ? (((/* implicit */long long int) arr_0 [i_0] [i_0])) : (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (8628832028570212110LL) : (((/* implicit */long long int) arr_0 [i_0] [i_0]))))))));
        var_14 = ((/* implicit */int) -18LL);
        var_15 = arr_1 [i_0] [i_0];
    }
    for (long long int i_1 = 1; i_1 < 14; i_1 += 2) 
    {
        var_16 = ((((/* implicit */int) arr_3 [i_1] [i_1 + 2])) - ((+(((/* implicit */int) arr_3 [i_1] [i_1 - 1])))));
        /* LoopSeq 1 */
        for (long long int i_2 = 0; i_2 < 17; i_2 += 4) 
        {
            /* LoopNest 2 */
            for (long long int i_3 = 0; i_3 < 17; i_3 += 4) 
            {
                for (unsigned char i_4 = 2; i_4 < 13; i_4 += 3) 
                {
                    {
                        var_17 = ((/* implicit */int) 17LL);
                        var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) ((int) max((arr_4 [i_3] [i_3] [i_4]), (((/* implicit */int) arr_3 [i_3] [i_1 + 1]))))))));
                    }
                } 
            } 
            var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(var_2)))) ? (((/* implicit */long long int) ((/* implicit */int) min(((unsigned char)122), ((unsigned char)0))))) : (((long long int) arr_8 [i_1] [i_2] [i_2]))));
            var_20 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1 + 1] [i_1 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) min(((unsigned char)239), ((unsigned char)138))))) : (arr_2 [i_1] [i_2]))))));
        }
        var_21 = ((/* implicit */int) (+(((((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_1] [i_1 - 1])) / (((/* implicit */int) arr_3 [i_1] [i_1 + 1]))))) ? (-8857220068308059839LL) : (((/* implicit */long long int) (-(arr_8 [i_1] [i_1 + 1] [i_1 + 2]))))))));
        var_22 = ((/* implicit */int) var_6);
    }
    var_23 = ((/* implicit */long long int) var_6);
    var_24 = ((/* implicit */long long int) (!(((/* implicit */_Bool) min((var_3), (((/* implicit */long long int) ((((/* implicit */_Bool) -8LL)) ? (var_4) : (-1082123203)))))))));
}
