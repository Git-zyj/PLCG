/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208030
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208030 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208030
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
    var_12 = ((/* implicit */unsigned long long int) (short)-13);
    var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)31))) : (var_5)));
    var_14 = ((/* implicit */_Bool) var_3);
    /* LoopSeq 1 */
    for (short i_0 = 2; i_0 < 11; i_0 += 3) 
    {
        var_15 &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_1 [i_0 - 1]) << (((arr_1 [i_0 - 2]) - (11779599717010167480ULL)))))) ? (((arr_1 [i_0 - 1]) - (arr_1 [i_0 + 1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0 + 1]))))))));
        /* LoopNest 3 */
        for (long long int i_1 = 1; i_1 < 11; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                for (unsigned char i_3 = 2; i_3 < 11; i_3 += 4) 
                {
                    {
                        arr_11 [i_0] [i_0] [i_2] [i_3] = ((/* implicit */long long int) ((unsigned char) (-(((/* implicit */int) ((_Bool) -4183732406997712585LL))))));
                        var_16 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_8 [i_1 + 1] [i_1] [i_0 + 1] [i_3 + 1])) ? (max((((/* implicit */unsigned int) arr_8 [i_1 + 1] [i_1 + 1] [i_0 - 2] [i_3 + 1])), (arr_7 [i_1 - 1]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_1 - 1] [i_1 - 1] [i_0 - 2] [i_3 + 1])))));
                        arr_12 [(short)0] [i_1] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) (~(min((((/* implicit */unsigned long long int) -4183732406997712565LL)), (arr_9 [(unsigned short)1] [i_1] [i_3 - 1] [i_1]))))))));
                        arr_13 [i_2] [i_2] = ((/* implicit */long long int) (_Bool)1);
                        arr_14 [i_0] = ((/* implicit */signed char) min((((((/* implicit */int) arr_4 [i_0 - 1] [i_1])) * (((/* implicit */int) (!(((/* implicit */_Bool) var_9))))))), (((/* implicit */int) ((((/* implicit */_Bool) (~(arr_10 [i_0] [i_0])))) && (((/* implicit */_Bool) (+(var_9)))))))));
                    }
                } 
            } 
        } 
    }
}
