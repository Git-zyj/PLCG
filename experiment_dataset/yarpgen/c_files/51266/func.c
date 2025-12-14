/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51266
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51266 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51266
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
    var_12 = ((/* implicit */unsigned int) ((((((/* implicit */int) (unsigned short)24576)) < (((/* implicit */int) var_6)))) ? (((((/* implicit */_Bool) var_2)) ? (((((/* implicit */int) (unsigned short)24560)) | (((/* implicit */int) var_9)))) : (((/* implicit */int) max(((unsigned short)40960), (((/* implicit */unsigned short) var_10))))))) : (((/* implicit */int) ((unsigned short) (~(((/* implicit */int) (unsigned char)128))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                var_13 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)238)) < (((/* implicit */int) (unsigned short)40960))))), (max((((/* implicit */unsigned long long int) var_11)), (var_3)))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 23; i_3 += 2) 
                    {
                        {
                            arr_12 [i_0] [i_0] [(unsigned short)11] [(unsigned short)11] = ((/* implicit */unsigned short) (+((-(((/* implicit */int) (!(((/* implicit */_Bool) 389773247)))))))));
                            /* LoopSeq 4 */
                            /* vectorizable */
                            for (int i_4 = 0; i_4 < 23; i_4 += 3) /* same iter space */
                            {
                                var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)24571)) >= (((/* implicit */int) (!(((/* implicit */_Bool) 2147483647)))))));
                                var_15 *= ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)65535)) >> (((((/* implicit */int) (unsigned short)24576)) - (24574)))));
                                arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */unsigned char) (+(((/* implicit */int) var_5))));
                            }
                            for (int i_5 = 0; i_5 < 23; i_5 += 3) /* same iter space */
                            {
                                arr_21 [i_0] [i_1] [i_2] [i_3] [i_5] = ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned short)40960))))) <= (max((((/* implicit */unsigned long long int) var_5)), (var_4))))) ? (((((/* implicit */_Bool) -1870381910)) ? (((/* implicit */int) (unsigned char)95)) : (((/* implicit */int) (_Bool)1)))) : ((~(((/* implicit */int) ((((/* implicit */int) (unsigned short)31200)) < (((/* implicit */int) (_Bool)1)))))))));
                                var_16 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) max(((_Bool)1), (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)40965))) >= (var_3))))))) < (max(((~(var_4))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)179)) << (((((/* implicit */int) var_5)) - (111))))))))));
                            }
                            for (int i_6 = 0; i_6 < 23; i_6 += 3) /* same iter space */
                            {
                                var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)36707)) ? (((((/* implicit */int) (unsigned short)24562)) << (((var_7) - (1109870171U))))) : (((/* implicit */int) var_10))));
                                var_18 = ((/* implicit */unsigned short) max((((/* implicit */int) max((max(((unsigned short)58915), (((/* implicit */unsigned short) (unsigned char)31)))), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) var_0)) >= (var_3))))))), (((((/* implicit */int) (unsigned short)24571)) << (((((/* implicit */int) (unsigned char)160)) - (157)))))));
                                var_19 += ((/* implicit */unsigned short) ((((7685265988510054329ULL) + (18446744073709551608ULL))) < (((/* implicit */unsigned long long int) (~(-4863651607096652766LL))))));
                                var_20 = ((/* implicit */unsigned long long int) max((var_20), (max((((/* implicit */unsigned long long int) (_Bool)1)), ((+(var_3)))))));
                            }
                            for (unsigned int i_7 = 0; i_7 < 23; i_7 += 3) 
                            {
                                arr_26 [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (~(var_3)))) ? (((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)95)), ((unsigned short)1)))) : (((/* implicit */int) ((316836857) == (((/* implicit */int) (signed char)-73))))))) + (((/* implicit */int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) (signed char)(-127 - 1))))))));
                                arr_27 [i_0] [i_1] [i_2] [i_3] [i_0] = ((/* implicit */unsigned short) (-(((/* implicit */int) (_Bool)1))));
                            }
                            /* LoopSeq 1 */
                            for (unsigned short i_8 = 0; i_8 < 23; i_8 += 3) 
                            {
                                var_21 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((((((/* implicit */int) (signed char)-73)) | (((/* implicit */int) var_8)))) + (2147483647))) >> (((var_3) - (3386675864683085562ULL)))))) >= (max((0ULL), (7257179021342741593ULL)))));
                                var_22 += ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+(719917961U))))));
                            }
                        }
                    } 
                } 
                arr_32 [i_1] [i_1] [i_0] = var_0;
                var_23 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) var_5)) < (((/* implicit */int) var_6))))) * (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)135)) && (((/* implicit */_Bool) 18446744073709551608ULL)))))))) >= (((((/* implicit */unsigned int) ((/* implicit */int) (!((_Bool)1))))) + (3575049349U)))));
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned short) (unsigned char)152);
}
