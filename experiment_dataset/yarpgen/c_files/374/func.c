/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 374
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=374 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/374
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
    var_19 = ((/* implicit */signed char) min((var_16), ((~(max((var_4), (var_11)))))));
    var_20 = ((/* implicit */unsigned long long int) (((~(((((/* implicit */_Bool) var_3)) ? (-1841572976974608230LL) : (((/* implicit */long long int) ((/* implicit */int) var_10))))))) / (((/* implicit */long long int) (-(min((1448751786U), (((/* implicit */unsigned int) 16383)))))))));
    var_21 = ((/* implicit */long long int) max((var_21), (max((((/* implicit */long long int) -16373)), (max((min((var_4), (((/* implicit */long long int) (unsigned char)229)))), (var_3)))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (unsigned short i_1 = 1; i_1 < 17; i_1 += 4) 
        {
            for (long long int i_2 = 4; i_2 < 17; i_2 += 3) 
            {
                {
                    var_22 ^= ((/* implicit */signed char) -769007241);
                    arr_8 [i_0] [i_1 + 2] [i_1] [(unsigned char)0] = ((((/* implicit */long long int) 769007251)) ^ (max((min((var_8), (((/* implicit */long long int) (short)-32753)))), (((/* implicit */long long int) max(((short)-32749), (((/* implicit */short) arr_1 [i_0] [i_1 + 4]))))))));
                    var_23 = ((/* implicit */short) ((((/* implicit */_Bool) (+(var_5)))) ? (((long long int) max((arr_4 [i_2]), (((/* implicit */unsigned long long int) -769007245))))) : (((((/* implicit */_Bool) min((var_11), (((/* implicit */long long int) var_7))))) ? (((/* implicit */long long int) max((255), (((/* implicit */int) var_14))))) : ((+(var_13)))))));
                    arr_9 [i_0] [i_1 + 3] [0] [i_2] = ((/* implicit */unsigned short) (+(var_16)));
                }
            } 
        } 
    } 
    var_24 &= ((/* implicit */unsigned long long int) var_4);
}
