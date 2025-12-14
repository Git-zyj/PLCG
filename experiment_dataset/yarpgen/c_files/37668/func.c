/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37668
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37668 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37668
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
    var_20 = ((/* implicit */short) max((((((/* implicit */_Bool) (unsigned char)111)) ? (((unsigned long long int) (signed char)4)) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (1692389955U)))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)17))) / (((((/* implicit */_Bool) (unsigned char)81)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)53)))))))));
    /* LoopSeq 3 */
    for (short i_0 = 1; i_0 < 17; i_0 += 2) 
    {
        var_21 &= ((unsigned char) (unsigned short)8);
        var_22 = ((/* implicit */unsigned long long int) arr_0 [i_0 - 1]);
        arr_2 [i_0] = ((/* implicit */_Bool) 665910084);
        var_23 = ((/* implicit */unsigned int) ((unsigned long long int) (+(((((/* implicit */_Bool) (unsigned char)197)) ? (((/* implicit */int) (signed char)-69)) : (((/* implicit */int) (unsigned short)48035)))))));
    }
    for (unsigned short i_1 = 0; i_1 < 13; i_1 += 1) 
    {
        arr_5 [i_1] = ((((/* implicit */_Bool) 3402358037U)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (_Bool)1)));
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_2 = 0; i_2 < 13; i_2 += 2) 
        {
            arr_9 [i_1] [i_1] [i_2] = (-(arr_4 [i_1]));
            var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned short) (unsigned char)119))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)36470))) > (1249959189U)))) : (((((/* implicit */_Bool) (short)-28998)) ? (((/* implicit */int) (unsigned char)186)) : (2147483647)))));
        }
    }
    for (unsigned char i_3 = 4; i_3 < 18; i_3 += 4) 
    {
        var_25 = ((/* implicit */_Bool) (unsigned char)69);
        var_26 = ((/* implicit */unsigned long long int) (_Bool)0);
    }
}
