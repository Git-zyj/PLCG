/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19369
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19369 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19369
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
    var_12 = ((((/* implicit */_Bool) ((((((/* implicit */int) var_7)) << (((((((/* implicit */int) var_5)) + (92))) - (21))))) | (((/* implicit */int) ((unsigned char) var_3)))))) ? (109578189) : (var_0));
    var_13 = ((/* implicit */unsigned long long int) ((((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned char)211)) : (var_0))) >> ((((~(((/* implicit */int) var_11)))) + (56789))))) <= ((-(var_8)))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 19; i_0 += 4) /* same iter space */
    {
        var_14 = ((/* implicit */unsigned long long int) 962887760);
        var_15 = ((/* implicit */unsigned short) arr_0 [i_0] [i_0]);
        var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) ((((((/* implicit */unsigned int) arr_0 [i_0] [i_0])) * (arr_1 [i_0] [i_0]))) >= (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)1))))))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 19; i_1 += 4) /* same iter space */
    {
        var_17 |= ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_1] [i_1]))));
        /* LoopSeq 1 */
        for (int i_2 = 1; i_2 < 17; i_2 += 2) 
        {
            var_18 = ((/* implicit */unsigned long long int) ((short) 2985312097U));
            arr_7 [i_1] [i_2] = ((/* implicit */unsigned long long int) (!(((((/* implicit */int) (unsigned char)254)) < (((/* implicit */int) (unsigned char)12))))));
            var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) arr_0 [i_1] [10U])) ? (((/* implicit */int) (short)31663)) : (((/* implicit */int) arr_2 [i_2]))))))));
        }
        arr_8 [i_1] = ((/* implicit */int) ((unsigned int) (unsigned short)17432));
    }
    for (int i_3 = 0; i_3 < 19; i_3 += 4) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_3 [14U]))));
        var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(1450127002)))) ? (((((/* implicit */_Bool) ((((-1086762505) + (2147483647))) >> (((var_3) - (253543842)))))) ? (((109578212) | (((/* implicit */int) arr_9 [i_3])))) : ((~(var_0))))) : (((/* implicit */int) var_4)))))));
        var_22 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */_Bool) (+(arr_12 [i_3])))) ? (((/* implicit */int) min((var_1), (((/* implicit */unsigned short) (signed char)116))))) : (((((/* implicit */_Bool) (short)1536)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_4))))))) < (((long long int) ((int) arr_9 [i_3])))));
    }
}
