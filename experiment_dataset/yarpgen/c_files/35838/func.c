/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35838
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35838 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35838
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
    var_12 = ((/* implicit */signed char) var_2);
    var_13 = ((/* implicit */unsigned int) ((int) (!(((/* implicit */_Bool) 33553920)))));
    var_14 = ((/* implicit */long long int) (unsigned char)80);
    /* LoopSeq 1 */
    for (int i_0 = 3; i_0 < 19; i_0 += 2) 
    {
        var_15 = ((/* implicit */int) (-(((((/* implicit */_Bool) (~(var_2)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)76))) : (arr_1 [(_Bool)1] [i_0])))));
        /* LoopSeq 2 */
        for (short i_1 = 3; i_1 < 20; i_1 += 3) 
        {
            var_16 += ((/* implicit */signed char) ((int) ((((((/* implicit */_Bool) arr_5 [i_0] [(_Bool)1] [i_1])) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) arr_2 [i_1] [i_1])))) & ((-(((/* implicit */int) (signed char)0)))))));
            arr_6 [i_0] [i_0 - 2] [i_0] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_5 [i_0 + 2] [i_0] [i_0 + 1])) ? (arr_5 [i_0 + 3] [i_0] [i_0 + 1]) : (arr_5 [i_0 + 1] [i_0] [i_0 - 2]))), (((/* implicit */unsigned long long int) ((long long int) arr_5 [i_0 - 3] [i_0] [i_0 + 4])))));
            var_17 -= ((/* implicit */signed char) (-(((arr_1 [i_0 + 1] [i_1 - 2]) * (arr_1 [i_0 - 1] [i_1 + 3])))));
        }
        for (signed char i_2 = 3; i_2 < 19; i_2 += 2) 
        {
            arr_11 [i_0 + 4] [i_0] [15] = ((/* implicit */long long int) (+(((/* implicit */int) arr_3 [i_0 - 1]))));
            arr_12 [i_0] = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [(signed char)13] [i_2 + 4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-127))) : (var_7)))) ? ((~(((/* implicit */int) var_1)))) : (((/* implicit */int) ((unsigned char) arr_8 [i_2 + 1] [i_0]))))) >= (((/* implicit */int) var_9))));
            arr_13 [i_0] [i_0] = ((/* implicit */_Bool) arr_1 [i_2 + 1] [i_0 - 3]);
        }
        /* LoopNest 3 */
        for (unsigned char i_3 = 3; i_3 < 22; i_3 += 2) 
        {
            for (signed char i_4 = 1; i_4 < 21; i_4 += 2) 
            {
                for (short i_5 = 2; i_5 < 22; i_5 += 3) 
                {
                    {
                        arr_23 [i_5] [i_0] [i_3 - 2] = ((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0 - 1] [i_4 + 1])) || (((/* implicit */_Bool) ((signed char) -2859515309803898219LL))))))));
                        var_18 = min(((-(min((14U), (((/* implicit */unsigned int) (_Bool)1)))))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_9 [i_0] [i_5 + 1])) != (((/* implicit */int) ((((/* implicit */_Bool) (signed char)-28)) && (arr_16 [i_0 - 2]))))))));
                        arr_24 [i_0] [i_0] = ((/* implicit */signed char) ((((arr_5 [i_5 - 1] [i_0] [i_3 + 1]) * (((/* implicit */unsigned long long int) 4294967287U)))) == ((+(arr_5 [i_0 + 3] [i_0] [i_0 + 1])))));
                        var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_4] [i_4 + 2])) ? (arr_20 [i_4] [i_4 + 1]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)191)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_20 [i_4] [i_4 - 1])))) : (((((/* implicit */_Bool) arr_20 [i_4 - 1] [i_4 - 1])) ? (arr_20 [i_4] [i_4 - 1]) : (arr_20 [i_4] [i_4 - 1])))));
                    }
                } 
            } 
        } 
    }
}
