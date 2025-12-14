/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205817
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205817 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205817
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
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((arr_1 [i_0]) << (((((/* implicit */int) (unsigned short)55772)) - (55769))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)6144))) >= (arr_0 [i_0] [i_0])))))));
        var_21 += ((/* implicit */signed char) arr_0 [i_0] [i_0]);
    }
    for (signed char i_1 = 1; i_1 < 10; i_1 += 2) 
    {
        var_22 = var_10;
        arr_4 [i_1] = ((/* implicit */unsigned long long int) (+((+(arr_2 [i_1] [i_1 - 1])))));
    }
    var_23 = ((/* implicit */unsigned short) var_8);
    var_24 = ((/* implicit */unsigned int) max((((/* implicit */long long int) ((int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned short)65530)))))), (((long long int) ((((/* implicit */_Bool) 17598471287692124902ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (var_3))))));
    var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((min((var_4), (((/* implicit */unsigned long long int) var_11)))) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))))) ? (max((min((var_16), (((/* implicit */int) var_10)))), (((/* implicit */int) var_19)))) : (((((/* implicit */int) (unsigned short)55772)) - (max((var_14), (((/* implicit */int) (signed char)115))))))));
    /* LoopSeq 2 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
    {
        var_26 ^= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) (_Bool)1)), ((short)0))))) / (((unsigned long long int) arr_2 [i_2] [i_2]))));
        arr_7 [i_2] = ((/* implicit */unsigned char) max((max((((/* implicit */long long int) (_Bool)1)), (var_5))), (((((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_2]))) != (var_5))) ? (((((/* implicit */_Bool) (signed char)91)) ? (arr_0 [i_2] [i_2]) : (((/* implicit */long long int) arr_2 [i_2] [i_2])))) : (arr_0 [i_2] [4U])))));
        var_27 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_6 [6LL] [i_2])) || (((/* implicit */_Bool) arr_5 [i_2] [i_2])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_2])) && (((/* implicit */_Bool) (unsigned short)9763)))))) : (arr_5 [i_2] [i_2])));
    }
    /* vectorizable */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned int i_4 = 3; i_4 < 8; i_4 += 4) 
        {
            for (unsigned long long int i_5 = 2; i_5 < 9; i_5 += 1) 
            {
                {
                    var_28 = ((/* implicit */unsigned long long int) arr_9 [i_5]);
                    /* LoopNest 2 */
                    for (unsigned short i_6 = 0; i_6 < 10; i_6 += 4) 
                    {
                        for (unsigned long long int i_7 = 0; i_7 < 10; i_7 += 1) 
                        {
                            {
                                var_29 = ((/* implicit */unsigned int) (~(arr_16 [i_7] [i_4 + 1] [i_4] [2U] [i_4] [i_4])));
                                var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 3516581882U)) ? (((((/* implicit */int) var_19)) << (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (!((_Bool)1))))));
                            }
                        } 
                    } 
                    arr_18 [i_4] = ((/* implicit */unsigned int) (((-(arr_0 [i_3] [0]))) < (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_3] [i_5])))));
                }
            } 
        } 
        var_31 = ((/* implicit */long long int) min((var_31), (((/* implicit */long long int) arr_12 [i_3]))));
    }
}
