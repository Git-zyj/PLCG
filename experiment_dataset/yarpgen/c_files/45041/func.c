/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45041
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45041 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45041
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
    var_20 ^= ((/* implicit */unsigned char) var_19);
    var_21 ^= 5293933876200649621ULL;
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        var_22 = ((/* implicit */int) ((((/* implicit */_Bool) ((signed char) 2128828679U))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (((unsigned long long int) ((_Bool) arr_1 [i_0] [i_0])))));
        var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_18)) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) var_19)) ? (((/* implicit */unsigned long long int) arr_0 [i_0] [i_0])) : (arr_2 [(_Bool)1]))) <= (((/* implicit */unsigned long long int) ((unsigned int) (unsigned char)90)))))))));
        /* LoopNest 3 */
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (unsigned int i_2 = 3; i_2 < 22; i_2 += 4) 
            {
                for (unsigned int i_3 = 0; i_3 < 24; i_3 += 1) 
                {
                    {
                        arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) var_16);
                        var_24 = ((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) < (arr_8 [i_0] [i_1] [i_2 - 3]))) ? (((/* implicit */unsigned long long int) var_3)) : (min((((/* implicit */unsigned long long int) (signed char)66)), (arr_2 [i_2 + 2]))));
                        var_25 = ((/* implicit */_Bool) arr_7 [(signed char)5]);
                    }
                } 
            } 
        } 
    }
    /* LoopSeq 1 */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) -820361123)) : (var_9)));
        var_27 = var_3;
    }
    var_28 -= ((/* implicit */_Bool) var_10);
}
