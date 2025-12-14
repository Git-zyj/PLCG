/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47360
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47360 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47360
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
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) (-((~(((/* implicit */int) min((((/* implicit */short) var_7)), (var_0))))))));
        arr_3 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_0))))) && (((/* implicit */_Bool) ((unsigned char) var_9)))))) >> ((((~(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_2)))))) + (44)))));
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            var_10 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) ? (((((((/* implicit */int) var_4)) <= (((/* implicit */int) var_0)))) ? (((/* implicit */int) max((((/* implicit */unsigned short) arr_5 [i_0] [i_0])), (var_2)))) : (((/* implicit */int) min((((/* implicit */short) var_3)), (var_0)))))) : (((/* implicit */int) ((signed char) var_6)))));
            /* LoopSeq 1 */
            for (unsigned char i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                var_11 = ((/* implicit */unsigned long long int) max((var_11), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) var_7)))))))), (((((/* implicit */_Bool) ((((/* implicit */int) var_2)) & (((/* implicit */int) arr_0 [i_0] [16U]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : ((+(var_8))))))))));
                arr_8 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))))) : ((~((-(arr_4 [i_0] [i_1] [i_2])))))));
            }
        }
        /* LoopNest 2 */
        for (int i_3 = 2; i_3 < 19; i_3 += 2) 
        {
            for (short i_4 = 3; i_4 < 20; i_4 += 2) 
            {
                {
                    arr_15 [i_0] [i_0] [i_3] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) arr_12 [i_0] [i_3] [i_0])))) || (((/* implicit */_Bool) var_8))));
                    var_12 |= ((/* implicit */unsigned short) var_3);
                }
            } 
        } 
    }
    var_13 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) (signed char)-19)) ? (0) : (((/* implicit */int) (unsigned char)254)))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_1))))))));
    /* LoopSeq 2 */
    for (int i_5 = 0; i_5 < 25; i_5 += 3) 
    {
        var_14 += ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned long long int) ((unsigned int) var_0)))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_8))))) : (((/* implicit */int) var_4)))) : (((/* implicit */int) var_7))));
        var_15 = ((/* implicit */unsigned int) var_4);
    }
    for (short i_6 = 0; i_6 < 22; i_6 += 3) 
    {
        arr_23 [i_6] = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (arr_16 [i_6])))));
        arr_24 [i_6] = ((/* implicit */unsigned long long int) min((((/* implicit */int) min((((/* implicit */short) (!(((/* implicit */_Bool) (signed char)-44))))), (min((var_4), (((/* implicit */short) var_7))))))), (((((/* implicit */_Bool) var_5)) ? ((-(((/* implicit */int) var_2)))) : (((((/* implicit */_Bool) arr_21 [i_6] [i_6])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_7))))))));
    }
}
