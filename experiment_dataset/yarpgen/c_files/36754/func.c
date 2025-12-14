/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36754
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36754 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36754
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
    var_11 = ((/* implicit */_Bool) var_2);
    var_12 = ((/* implicit */unsigned short) var_2);
    var_13 = ((/* implicit */_Bool) var_3);
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        arr_3 [17] = ((/* implicit */unsigned long long int) ((int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) 17472416794245550465ULL)) && (((/* implicit */_Bool) var_1))))), (arr_1 [i_0]))));
        var_14 &= ((/* implicit */unsigned short) ((min((max((((/* implicit */unsigned long long int) var_2)), (13974441555901537480ULL))), (((/* implicit */unsigned long long int) (+(arr_2 [i_0])))))) > (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((13974441555901537480ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))))))))));
        var_15 = ((long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [14]))) > (arr_2 [i_0]))) ? (var_7) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (signed char)-91)) : (((/* implicit */int) arr_0 [i_0])))))));
        var_16 = ((/* implicit */int) ((unsigned char) ((_Bool) min((((/* implicit */long long int) (signed char)-91)), (-5028378142869579898LL)))));
    }
    for (unsigned int i_1 = 0; i_1 < 21; i_1 += 4) 
    {
        arr_6 [i_1] [i_1] = (((+(5765901101930528814LL))) >= (var_6));
        arr_7 [i_1] [5U] = ((/* implicit */signed char) (~((-(((((/* implicit */int) arr_5 [(unsigned char)7] [i_1])) >> (((/* implicit */int) arr_0 [i_1]))))))));
        /* LoopNest 3 */
        for (unsigned char i_2 = 1; i_2 < 19; i_2 += 3) 
        {
            for (int i_3 = 0; i_3 < 21; i_3 += 1) 
            {
                for (signed char i_4 = 0; i_4 < 21; i_4 += 1) 
                {
                    {
                        arr_14 [i_1] [i_3] = ((/* implicit */int) -4858997197656658472LL);
                        arr_15 [i_3] [i_3] [i_2] [i_3] [3ULL] [3ULL] = ((/* implicit */unsigned short) (~((-(arr_12 [i_2] [i_2 + 2] [i_2 + 1] [i_2 + 1])))));
                        arr_16 [i_3] [i_2] [i_4] = ((/* implicit */_Bool) (-(max((arr_12 [i_2] [i_2] [i_2 - 1] [i_2 - 1]), (((/* implicit */int) arr_8 [i_4] [i_2 - 1] [i_4]))))));
                    }
                } 
            } 
        } 
    }
}
