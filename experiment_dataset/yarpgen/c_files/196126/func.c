/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196126
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196126 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196126
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
    for (int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)21930)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)5106))) : (4205115024U)));
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            arr_6 [i_0] [i_1] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) -3618440289739575271LL)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1]))))) <= (((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_2 [i_1]))))));
            arr_7 [i_0] [i_0] [i_1] = ((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_1])) * (((/* implicit */int) arr_0 [i_0]))))) & (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) -3618440289739575280LL)) ? (((/* implicit */int) (unsigned short)40020)) : (((/* implicit */int) (unsigned short)5844))))), (max((var_1), (((/* implicit */unsigned int) (unsigned char)75))))))));
        }
        arr_8 [9U] &= ((/* implicit */signed char) (unsigned short)5846);
        var_17 -= ((/* implicit */unsigned int) min(((unsigned char)255), ((unsigned char)214)));
        arr_9 [i_0] = ((/* implicit */long long int) ((((/* implicit */int) ((unsigned short) (unsigned short)5106))) | (((/* implicit */int) ((((/* implicit */int) arr_1 [i_0])) <= (((/* implicit */int) arr_1 [i_0])))))));
    }
    var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)59684))) | (-3618440289739575271LL)))) ? (((min((607477392U), (((/* implicit */unsigned int) (unsigned char)240)))) ^ (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)59688)) ^ (((/* implicit */int) var_11))))))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)40020)))));
}
