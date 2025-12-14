/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53244
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53244 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53244
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
    var_19 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) (+(((/* implicit */int) var_12))))) ? (max((var_0), (((/* implicit */unsigned long long int) (signed char)-55)))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)8176)) / (((/* implicit */int) var_8))))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_10)) | (((/* implicit */int) ((((/* implicit */int) var_13)) >= (((/* implicit */int) var_2))))))))));
    var_20 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_0)) ? (var_17) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-8176)))))))) ? (4294967295U) : (((/* implicit */unsigned int) ((((/* implicit */int) (!(var_13)))) & (((/* implicit */int) var_7)))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((var_17), (18446744073709551615ULL)))) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_11)) ^ (((/* implicit */int) var_11))))) : (max((var_15), (var_1)))));
                arr_4 [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) (((+(((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) * (0ULL))))) != (((/* implicit */unsigned long long int) 16777215U))));
                var_22 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((unsigned int) var_2))) | (var_4)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) var_9)) << (((var_1) - (62803976U)))))) < (((((/* implicit */_Bool) var_16)) ? (var_14) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))))))) : (((var_1) & (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))));
                /* LoopSeq 3 */
                for (unsigned short i_2 = 4; i_2 < 16; i_2 += 3) 
                {
                    var_23 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-((+(((/* implicit */int) var_16))))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) var_10)) ^ (((/* implicit */int) var_2))))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) ((((/* implicit */int) var_7)) > (((/* implicit */int) var_10))))))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned char)43), (var_9))))) == (((((/* implicit */_Bool) var_8)) ? (var_4) : (16383ULL))))))));
                    var_24 = ((/* implicit */unsigned int) (~((-(((/* implicit */int) max((((/* implicit */unsigned char) var_3)), (var_9))))))));
                    arr_8 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_6)), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (var_5)))))) ? (((/* implicit */int) ((unsigned short) (~(var_5))))) : (((/* implicit */int) ((((((/* implicit */int) (_Bool)0)) < (((/* implicit */int) (_Bool)1)))) || (((/* implicit */_Bool) ((((/* implicit */int) var_3)) % (((/* implicit */int) var_11))))))))));
                    var_25 = ((/* implicit */unsigned int) var_6);
                }
                /* vectorizable */
                for (unsigned char i_3 = 0; i_3 < 20; i_3 += 4) /* same iter space */
                {
                    var_26 = ((/* implicit */unsigned int) var_12);
                    var_27 *= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_13))) <= (((var_15) / (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))));
                    var_28 = ((/* implicit */short) max((var_28), (((/* implicit */short) (+(((((/* implicit */_Bool) var_0)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))))))))));
                }
                for (unsigned char i_4 = 0; i_4 < 20; i_4 += 4) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 0; i_5 < 20; i_5 += 2) 
                    {
                        for (unsigned char i_6 = 1; i_6 < 16; i_6 += 2) 
                        {
                            {
                                arr_21 [i_0] [i_1] [i_4] [i_1] [i_0] = ((/* implicit */unsigned int) (!((!(((var_0) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))))));
                                var_29 = ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */_Bool) 0ULL)) ? ((~(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-35))) == (5516016893564269192ULL)))))));
                            }
                        } 
                    } 
                    var_30 = ((/* implicit */unsigned int) ((min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)0)))), (((((/* implicit */_Bool) var_1)) ? (var_17) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_18))))))) & (max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_15))))), (var_0)))));
                    var_31 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (0U)));
                    var_32 += ((/* implicit */unsigned short) (-(((/* implicit */int) (_Bool)1))));
                    var_33 = ((/* implicit */_Bool) min((((unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) + (var_17)))), (((/* implicit */unsigned int) var_2))));
                }
                arr_22 [i_0] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-8169))) * (4294967279U)))) ? (((((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) >> (((((/* implicit */int) max(((unsigned char)254), (((/* implicit */unsigned char) (signed char)78))))) - (232))))) : ((~((-(((/* implicit */int) var_6))))))));
            }
        } 
    } 
}
