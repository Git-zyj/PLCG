/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4499
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4499 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4499
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
    for (unsigned int i_0 = 1; i_0 < 11; i_0 += 1) 
    {
        var_17 = min((((/* implicit */short) var_12)), (min(((short)-7523), ((short)-7523))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) ((short) var_11))), ((+(var_16)))))) || (((/* implicit */_Bool) var_3))));
                    arr_9 [i_0] [i_0] = var_2;
                    var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) min((((/* implicit */unsigned int) ((signed char) ((int) var_2)))), ((+(var_16))))))));
                    arr_10 [i_2] [i_2] [i_0] [i_0] = ((/* implicit */short) var_9);
                }
            } 
        } 
    }
    for (short i_3 = 0; i_3 < 16; i_3 += 2) 
    {
        var_19 *= ((/* implicit */unsigned long long int) ((unsigned char) (((~(var_8))) != (min((var_8), (var_8))))));
        arr_13 [i_3] = var_9;
        var_20 ^= ((/* implicit */short) ((((/* implicit */int) (((+(3163068832U))) <= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)252)))))) + (-1665028073)));
        var_21 -= ((/* implicit */int) var_3);
    }
    var_22 = ((/* implicit */long long int) (+(((/* implicit */int) min((min((((/* implicit */short) var_14)), (var_10))), (((/* implicit */short) var_12)))))));
    var_23 = ((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) min((var_8), (((/* implicit */unsigned int) var_3))))) || (((/* implicit */_Bool) (+(((/* implicit */int) var_1))))))))));
    var_24 = ((/* implicit */short) (~(((int) min((var_0), (var_0))))));
    var_25 = ((/* implicit */unsigned short) ((((min((((/* implicit */unsigned int) var_15)), (var_2))) | ((+(var_16))))) == (((min((((/* implicit */unsigned int) var_14)), (var_16))) >> (((/* implicit */int) ((((/* implicit */_Bool) 16402357298494935529ULL)) && (((/* implicit */_Bool) var_4)))))))));
}
