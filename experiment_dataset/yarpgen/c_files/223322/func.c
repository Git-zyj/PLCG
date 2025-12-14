/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223322
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223322 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223322
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
    var_18 -= ((/* implicit */int) var_5);
    var_19 = (unsigned char)126;
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        var_20 = ((unsigned char) 638329263U);
        var_21 = ((/* implicit */unsigned int) (unsigned char)137);
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) var_16);
        /* LoopSeq 2 */
        /* vectorizable */
        for (int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            arr_7 [i_1] = ((/* implicit */short) var_10);
            var_22 = ((/* implicit */short) (-(((unsigned long long int) var_11))));
        }
        /* vectorizable */
        for (unsigned int i_2 = 1; i_2 < 22; i_2 += 1) 
        {
            var_23 *= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) 4816469376112548503ULL)) ? (((/* implicit */int) (short)26147)) : (((/* implicit */int) (short)-1)))) > (-419253064)));
            arr_11 [i_0] [i_2] = ((/* implicit */long long int) ((((13630274697597003101ULL) % (((/* implicit */unsigned long long int) -1571270379886960407LL)))) / (((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)-2618)))))));
            arr_12 [i_2] [i_2] = ((/* implicit */long long int) ((unsigned int) (short)4095));
            var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)139)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)129))) : (4012202872U)));
        }
    }
    for (unsigned char i_3 = 1; i_3 < 19; i_3 += 2) 
    {
        var_25 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)35)) ? (1943607980378663762ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)219)))))) && (((/* implicit */_Bool) ((13630274697597003113ULL) >> (((/* implicit */int) var_3))))))))));
        var_26 ^= ((/* implicit */unsigned int) max((((/* implicit */unsigned char) ((signed char) (~(var_1))))), (((unsigned char) (unsigned char)210))));
        arr_15 [i_3] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (~(-1682535742)))) >= (((((var_9) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))))) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4294967295U)) ? (1333891171) : (((/* implicit */int) (unsigned char)255)))))))));
        /* LoopSeq 2 */
        for (unsigned int i_4 = 0; i_4 < 22; i_4 += 2) 
        {
            var_27 ^= ((/* implicit */unsigned int) ((signed char) (unsigned short)12856));
            var_28 = ((/* implicit */short) var_2);
        }
        for (int i_5 = 4; i_5 < 21; i_5 += 2) 
        {
            var_29 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_2) ? (var_7) : (((/* implicit */unsigned long long int) -6225582219741415865LL))))) ? (((var_14) / (((/* implicit */int) var_16)))) : (((((/* implicit */int) var_0)) | (((/* implicit */int) var_16))))));
            var_30 = ((/* implicit */short) (-(((long long int) (signed char)-16))));
            var_31 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_15))))) || (((/* implicit */_Bool) ((((/* implicit */int) (signed char)-1)) + (((/* implicit */int) var_0)))))))) == (((/* implicit */int) ((unsigned char) ((((/* implicit */int) var_15)) + (((/* implicit */int) (unsigned char)210))))))));
        }
    }
}
