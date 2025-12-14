/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200710
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200710 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200710
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
    var_11 = ((/* implicit */_Bool) var_0);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 10; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 13; i_2 += 1) 
                {
                    for (unsigned int i_3 = 3; i_3 < 12; i_3 += 2) 
                    {
                        {
                            arr_10 [i_0] [i_0] [i_0] [i_3] = ((((/* implicit */_Bool) (short)-5970)) ? (((/* implicit */int) arr_2 [i_0] [i_1])) : (((/* implicit */int) (short)15801)));
                            var_12 = ((/* implicit */_Bool) ((unsigned short) ((short) var_6)));
                        }
                    } 
                } 
                var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) var_3))));
                var_14 -= ((/* implicit */unsigned char) min((((/* implicit */int) ((arr_6 [i_0]) < (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0])))))), ((((((-(((/* implicit */int) (signed char)83)))) + (2147483647))) >> (((((((/* implicit */_Bool) arr_8 [i_0] [(short)2] [6ULL])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_7 [i_0] [i_1] [i_1 + 3] [i_1 + 3] [i_1 - 1])))) + (3358)))))));
                arr_11 [i_0] [i_0] |= ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_6 [i_0])) ? ((+(((/* implicit */int) (unsigned char)241)))) : (((/* implicit */int) ((((/* implicit */int) (signed char)-31)) <= (((/* implicit */int) (unsigned char)0))))))), ((-(((/* implicit */int) (unsigned short)13650))))));
            }
        } 
    } 
    var_15 ^= ((/* implicit */long long int) ((short) (unsigned short)30));
    var_16 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_8))))) ? (((/* implicit */int) var_1)) : (var_4)))), (min((((((/* implicit */_Bool) -8874396931083214745LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)8))) : (4294967290U))), (((/* implicit */unsigned int) var_1))))));
}
