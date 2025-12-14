/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219657
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219657 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219657
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
    for (signed char i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        var_19 ^= ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (short)-6456)))))))) >> (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))) >= ((-(arr_1 [(short)8]))))))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) (~((-(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_16))) <= (arr_0 [i_0]))))))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 3; i_1 < 12; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                {
                    arr_10 [2] [i_1] [i_2] = ((/* implicit */signed char) (+(((((((/* implicit */int) arr_5 [i_1 - 2] [i_0])) / (((/* implicit */int) (signed char)-47)))) ^ ((-(arr_2 [i_2] [(short)9])))))));
                    var_20 = ((/* implicit */unsigned short) (-(((((((/* implicit */int) var_0)) + (((/* implicit */int) var_13)))) - (((((/* implicit */int) var_13)) + (((/* implicit */int) arr_6 [1ULL] [i_1] [i_2]))))))));
                    arr_11 [i_0] [i_2] = ((/* implicit */unsigned int) (-((+((~(((/* implicit */int) (signed char)-124))))))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (int i_3 = 2; i_3 < 10; i_3 += 3) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                for (long long int i_5 = 0; i_5 < 13; i_5 += 3) 
                {
                    {
                        arr_20 [i_4] [i_4] [i_4] [i_5] [(short)4] = ((/* implicit */unsigned int) (((~(((var_8) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))))) ^ (((/* implicit */unsigned long long int) (((+(((/* implicit */int) var_0)))) * (((/* implicit */int) (!(((/* implicit */_Bool) var_5))))))))));
                        arr_21 [i_4] [i_4] [i_3 + 1] [i_4] = (!(((/* implicit */_Bool) ((((((((/* implicit */int) arr_13 [(unsigned char)0])) | (((/* implicit */int) (signed char)41)))) + (2147483647))) << ((((((+(((/* implicit */int) var_5)))) + (10104))) - (13)))))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (int i_6 = 2; i_6 < 11; i_6 += 4) 
        {
            for (unsigned char i_7 = 0; i_7 < 13; i_7 += 4) 
            {
                {
                    var_21 *= ((/* implicit */unsigned short) (-(((/* implicit */int) (((+(((/* implicit */int) arr_24 [i_0] [i_0] [i_7] [i_0])))) <= ((~(((/* implicit */int) arr_22 [i_0] [i_7] [(unsigned char)3])))))))));
                    var_22 = ((/* implicit */signed char) (((((+(1680385149))) >> (((((((/* implicit */unsigned int) ((/* implicit */int) var_7))) - (arr_0 [i_0]))) - (2560374843U))))) << ((-(((/* implicit */int) ((((/* implicit */int) arr_14 [i_6] [i_6] [i_6 + 1])) >= (arr_2 [i_0] [i_7]))))))));
                    var_23 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((4149737195U) >> (((/* implicit */int) arr_16 [i_0] [i_0] [6U])))) << (((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) * (3123535686U))) - (1932650149U))))))));
                    arr_27 [(short)1] [i_7] [i_6] [5U] = ((/* implicit */unsigned char) (~((~((~(((/* implicit */int) (signed char)-47))))))));
                }
            } 
        } 
    }
    for (signed char i_8 = 1; i_8 < 17; i_8 += 1) 
    {
        var_24 = ((/* implicit */long long int) (((~((~(((/* implicit */int) (signed char)64)))))) >= (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)100))) / (var_11)))))))));
        var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) (-((((-(((/* implicit */int) var_18)))) - ((+(((/* implicit */int) var_17)))))))))));
        var_26 ^= ((/* implicit */signed char) (((!(((((/* implicit */_Bool) arr_29 [i_8])) || (((/* implicit */_Bool) arr_28 [9U])))))) || ((!(((var_0) || ((_Bool)1)))))));
    }
    var_27 = ((/* implicit */short) (-((+(((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (short)13831)))))))));
}
