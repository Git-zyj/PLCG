/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49697
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49697 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49697
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
    var_15 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~((+(4294967282U)))))) ? (((((/* implicit */_Bool) (short)8774)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)26628))) : (4294967282U))) : (((/* implicit */unsigned int) (~((-(((/* implicit */int) (unsigned short)26628)))))))));
    var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) var_6))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 16; i_1 += 3) 
        {
            {
                arr_6 [i_0] [i_1 + 1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2711417139U)) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)65512))))) : (((((/* implicit */_Bool) arr_2 [i_0])) ? (2711417139U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-3927)))))))) ? (((/* implicit */int) arr_5 [i_0] [(short)6] [i_0])) : ((-(((/* implicit */int) (signed char)-79))))));
                var_17 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [(_Bool)1] [(_Bool)1])) ? (((((/* implicit */_Bool) arr_3 [i_0] [i_1])) ? (((/* implicit */int) arr_5 [i_0] [i_1] [i_0])) : (((/* implicit */int) (short)9)))) : ((+(((/* implicit */int) (_Bool)1))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (long long int i_2 = 2; i_2 < 17; i_2 += 2) 
                {
                    arr_10 [i_0] [i_1] [(_Bool)0] = ((((/* implicit */_Bool) (unsigned short)26628)) ? (((/* implicit */int) arr_1 [i_0])) : (((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) arr_4 [i_0] [i_1])) : (((/* implicit */int) arr_2 [i_0])))));
                    var_18 -= ((/* implicit */signed char) 0LL);
                    var_19 = ((/* implicit */short) ((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0])) ? (((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_0 [i_0] [i_2])) : (((/* implicit */int) arr_8 [(unsigned short)8])))) : (((/* implicit */int) (signed char)125))));
                }
                arr_11 [i_0] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [(unsigned short)8] [(unsigned short)8] [i_1 - 1])) ? (594234132U) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)28350)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)39284))) : (8435195933363940174ULL)))) ? (((((/* implicit */_Bool) (short)6692)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) arr_0 [(short)16] [(unsigned short)10])))))));
            }
        } 
    } 
}
