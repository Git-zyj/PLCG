/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241025
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241025 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241025
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
    var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */int) var_3)) * (((/* implicit */int) var_11)))) >> (((((/* implicit */int) var_12)) - (41725)))))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) ((((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) var_6)))) >= (((/* implicit */int) var_4)))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 2; i_0 < 13; i_0 += 3) 
    {
        for (unsigned short i_1 = 3; i_1 < 13; i_1 += 4) 
        {
            for (unsigned short i_2 = 3; i_2 < 13; i_2 += 2) 
            {
                {
                    var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */int) arr_5 [i_0] [i_1] [(unsigned short)4])) & (((/* implicit */int) (unsigned short)4)))) : (((/* implicit */int) var_3))))) ? (((((/* implicit */_Bool) (unsigned short)32370)) ? (((/* implicit */int) (unsigned short)1)) : (((/* implicit */int) (unsigned short)32363)))) : (((/* implicit */int) ((((/* implicit */int) var_5)) != (((/* implicit */int) (unsigned short)32370)))))));
                    arr_6 [i_0] [i_0 + 3] |= ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) var_4))))) & (((((/* implicit */_Bool) var_5)) ? (((((/* implicit */int) (unsigned short)7)) | (((/* implicit */int) arr_5 [i_0] [i_1] [(unsigned short)3])))) : (((((/* implicit */_Bool) arr_1 [(unsigned short)13] [i_1 + 1])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_4))))))));
                    var_16 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_5 [i_0 + 1] [i_1 + 1] [i_1 - 3])) ? (((/* implicit */int) (unsigned short)57161)) : (((/* implicit */int) arr_5 [i_0 + 1] [i_1 + 1] [i_1 - 1])))) ^ (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)13226)) || (((/* implicit */_Bool) arr_4 [i_0 - 1])))))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 16; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 16; i_4 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned short) ((((((((/* implicit */_Bool) (unsigned short)18178)) ? (((/* implicit */int) (unsigned short)13226)) : (((/* implicit */int) (unsigned short)65533)))) * (((/* implicit */int) arr_4 [i_0 - 1])))) > (((((/* implicit */_Bool) arr_7 [i_1 - 1] [i_3] [i_1 + 3] [i_1 + 3])) ? (((/* implicit */int) arr_7 [i_1 - 2] [i_3] [i_1 + 3] [i_1 + 1])) : (((/* implicit */int) var_4))))));
                                arr_13 [i_0] [i_0] [i_0] [i_3] [(unsigned short)15] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)1023)) ? (((/* implicit */int) (unsigned short)24445)) : (((/* implicit */int) (unsigned short)9430))));
                            }
                        } 
                    } 
                    arr_14 [i_0 - 1] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)28602)) ? (((/* implicit */int) arr_11 [i_0] [i_1] [(unsigned short)0] [i_2 + 1] [i_2])) : (((/* implicit */int) var_8))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)14935)) ? (((/* implicit */int) (unsigned short)256)) : (((/* implicit */int) (unsigned short)1252)))))));
                }
            } 
        } 
    } 
}
