/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211372
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211372 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211372
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
    var_19 &= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (var_6)))))));
    var_20 -= ((/* implicit */int) ((unsigned short) (-(((/* implicit */int) var_0)))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 4; i_0 < 23; i_0 += 2) 
    {
        var_21 ^= ((/* implicit */unsigned int) ((unsigned short) var_10));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 20; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_3 = 1; i_3 < 21; i_3 += 3) 
                    {
                        arr_10 [i_0 - 2] [i_1 + 3] [i_2] [i_1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_15))));
                        arr_11 [i_1] [i_2] [i_1] [i_1] [i_1 + 4] [i_1] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) var_4)))) ? (((((((/* implicit */int) var_2)) + (2147483647))) << (((5649108829826388272LL) - (5649108829826388272LL))))) : (((/* implicit */int) var_2))));
                    }
                    arr_12 [i_1] [10] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_12))));
                    arr_13 [i_0] [i_0 + 1] [i_0 - 2] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) 16171226837115658244ULL))) ? (((((/* implicit */_Bool) var_6)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-20))))) : (((/* implicit */unsigned long long int) ((long long int) var_16)))));
                    /* LoopNest 2 */
                    for (short i_4 = 2; i_4 < 21; i_4 += 2) 
                    {
                        for (unsigned long long int i_5 = 0; i_5 < 24; i_5 += 2) 
                        {
                            {
                                arr_19 [i_0] [i_1 + 3] [i_1 + 3] [i_2] [i_2] [i_1 + 3] [i_1] = ((((/* implicit */_Bool) ((unsigned char) var_12))) ? (2519841086U) : (((/* implicit */unsigned int) ((int) 1775126208U))));
                                arr_20 [i_1] [i_1 + 4] [i_1 + 4] [i_1] [i_1] = ((/* implicit */signed char) (+(var_6)));
                                arr_21 [i_1] [i_1] [i_1] [i_4 + 2] = ((/* implicit */long long int) (+(1775126209U)));
                                arr_22 [i_0 - 1] [i_1] [i_1] [i_2] [i_1] [i_1] = ((/* implicit */unsigned int) var_16);
                                var_22 -= ((/* implicit */unsigned int) ((short) ((int) (short)32767)));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
}
