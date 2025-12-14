/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27853
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27853 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27853
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                arr_6 [i_1] = ((/* implicit */long long int) arr_5 [i_1] [i_1] [i_0]);
                arr_7 [i_0] [(_Bool)1] = ((/* implicit */short) (_Bool)1);
                /* LoopSeq 1 */
                for (signed char i_2 = 0; i_2 < 15; i_2 += 2) 
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (short i_4 = 1; i_4 < 13; i_4 += 4) 
                        {
                            {
                                arr_15 [i_0] [i_0] [i_3] [i_2] [i_3] [i_4] [9ULL] = ((/* implicit */unsigned short) ((((var_0) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1]))))) + (var_3)));
                                var_10 += ((/* implicit */_Bool) ((unsigned char) var_1));
                            }
                        } 
                    } 
                    arr_16 [(unsigned char)9] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) (unsigned char)12)) : (((/* implicit */int) (unsigned char)141))))) ? (((var_7) ^ (var_8))) : (((/* implicit */unsigned long long int) (-(arr_10 [i_0] [i_1] [i_1] [i_1] [i_1])))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 15; i_5 += 1) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 15; i_6 += 3) 
                        {
                            {
                                arr_21 [(signed char)3] [i_5] = ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */_Bool) var_3)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)18))))));
                                arr_22 [i_0] [i_0] [i_0] [i_5] = ((/* implicit */short) var_8);
                            }
                        } 
                    } 
                    var_11 = ((/* implicit */long long int) (short)-18964);
                }
            }
        } 
    } 
    /* LoopSeq 3 */
    for (signed char i_7 = 3; i_7 < 19; i_7 += 1) 
    {
        arr_25 [i_7] [i_7] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)62)) ? (((/* implicit */unsigned long long int) max((((/* implicit */int) var_4)), (var_6)))) : (((((/* implicit */_Bool) var_9)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)56)) != (((/* implicit */int) var_9))))))))));
        arr_26 [i_7] |= ((/* implicit */signed char) var_8);
    }
    for (unsigned char i_8 = 0; i_8 < 25; i_8 += 4) 
    {
        arr_30 [(signed char)10] [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) ((((/* implicit */int) var_4)) + (((/* implicit */int) (_Bool)0))))))) : (((((_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) 2251799813685232ULL)))))) : (var_7)))));
        var_12 = ((/* implicit */signed char) arr_28 [i_8] [i_8]);
        var_13 = ((/* implicit */short) min((var_13), (((/* implicit */short) ((((((/* implicit */int) (signed char)-57)) % (((/* implicit */int) (signed char)-114)))) / (((/* implicit */int) ((((var_0) ^ (var_3))) != (((/* implicit */unsigned long long int) var_6))))))))));
        arr_31 [i_8] = ((/* implicit */long long int) var_5);
    }
    for (unsigned int i_9 = 1; i_9 < 12; i_9 += 2) 
    {
        arr_34 [i_9] = var_6;
        /* LoopNest 2 */
        for (long long int i_10 = 3; i_10 < 10; i_10 += 2) 
        {
            for (unsigned short i_11 = 0; i_11 < 13; i_11 += 3) 
            {
                {
                    arr_43 [i_9] [i_10 + 2] [i_11] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_9])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_6) >> (((var_0) - (15159462792516062472ULL)))))) ? (((((/* implicit */_Bool) var_2)) ? (var_6) : (((/* implicit */int) (short)-4440)))) : (((/* implicit */int) (unsigned short)4))))) : (((((/* implicit */_Bool) ((18269041326614671543ULL) >> (((var_0) - (15159462792516062449ULL)))))) ? (((((/* implicit */_Bool) var_6)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [(_Bool)1] [8ULL] [i_11])))))));
                    var_14 *= ((/* implicit */unsigned char) var_9);
                    arr_44 [i_9] [(unsigned char)5] [(short)0] [i_11] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */long long int) -1)), (-5838201412090775441LL)))) ? (((((/* implicit */_Bool) ((unsigned short) 18446744073709551615ULL))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) var_2)))))) : (var_8))) : (((((var_8) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_9] [12] [i_9]))))) * (((((/* implicit */_Bool) arr_18 [i_9] [i_9])) ? (var_7) : (((/* implicit */unsigned long long int) var_6))))))));
                }
            } 
        } 
        var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) var_2))));
    }
    var_16 -= ((/* implicit */int) var_5);
}
