/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228647
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228647 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228647
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
    /* vectorizable */
    for (int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) ((unsigned short) arr_0 [i_0])))));
        /* LoopNest 2 */
        for (signed char i_1 = 2; i_1 < 15; i_1 += 2) 
        {
            for (unsigned short i_2 = 1; i_2 < 14; i_2 += 2) 
            {
                {
                    arr_6 [(unsigned char)0] = ((/* implicit */int) arr_1 [i_0]);
                    var_17 += ((/* implicit */unsigned char) (~(-8262025842468446727LL)));
                }
            } 
        } 
        var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0] [i_0])) ? (arr_4 [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0])))));
    }
    var_19 = ((unsigned short) min((((/* implicit */unsigned char) var_15)), (min((var_0), (var_12)))));
    var_20 = ((/* implicit */unsigned char) min((min((((/* implicit */unsigned int) (short)10672)), (((((/* implicit */_Bool) (unsigned short)46762)) ? (((/* implicit */unsigned int) (-2147483647 - 1))) : (4177653115U))))), (min((((((/* implicit */_Bool) var_13)) ? (var_6) : (((/* implicit */unsigned int) var_4)))), (((/* implicit */unsigned int) (+(var_4))))))));
}
