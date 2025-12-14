/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196465
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196465 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196465
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
    for (unsigned short i_0 = 1; i_0 < 8; i_0 += 1) /* same iter space */
    {
        var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)236)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)51))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_1 = 1; i_1 < 10; i_1 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_2 = 3; i_2 < 10; i_2 += 3) 
            {
                arr_6 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((var_5) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_4))))));
                var_13 *= ((/* implicit */short) (+(((/* implicit */int) var_2))));
                var_14 = ((/* implicit */signed char) ((unsigned char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_2)))));
            }
            arr_7 [i_0] [i_0] [i_0 + 2] = ((/* implicit */unsigned int) var_4);
        }
        var_15 = ((/* implicit */short) (+(((/* implicit */int) ((((var_3) / (((/* implicit */long long int) ((/* implicit */int) var_0))))) == (((/* implicit */long long int) ((/* implicit */int) max((var_6), (var_7))))))))));
    }
    for (unsigned short i_3 = 1; i_3 < 8; i_3 += 1) /* same iter space */
    {
        var_16 = max((((((/* implicit */int) var_6)) | (((/* implicit */int) min((var_2), (var_2)))))), ((~(((/* implicit */int) var_11)))));
        arr_10 [i_3 - 1] = ((/* implicit */unsigned short) (+(((/* implicit */int) max((var_2), (var_11))))));
    }
    var_17 = max((((/* implicit */int) max(((short)19868), (((/* implicit */short) (unsigned char)192))))), ((+(((/* implicit */int) ((unsigned char) var_4))))));
    var_18 = ((/* implicit */int) (-(36028522141057024LL)));
    /* LoopSeq 1 */
    for (long long int i_4 = 3; i_4 < 22; i_4 += 3) 
    {
        var_19 = ((/* implicit */signed char) ((((/* implicit */int) var_4)) << (((((/* implicit */int) var_8)) - (61)))));
        arr_13 [i_4] = ((/* implicit */int) ((max((((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) == (var_5)))), (((unsigned int) var_11)))) < (((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */int) var_6)) != (((/* implicit */int) var_6))))))))));
        arr_14 [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) var_5))) ? (((/* implicit */unsigned int) ((((((/* implicit */int) var_7)) + (2147483647))) >> (((((6354641840229580563ULL) << (((2059496504) - (2059496500))))) - (9440549075125530917ULL)))))) : (max((((/* implicit */unsigned int) max((((/* implicit */unsigned short) (signed char)0)), ((unsigned short)64843)))), (((unsigned int) var_10))))));
        var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned int) var_5))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((4042744060980593826ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-109))))))) : (min((((unsigned int) var_7)), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_7)))))))));
    }
    /* LoopNest 2 */
    for (long long int i_5 = 1; i_5 < 19; i_5 += 1) 
    {
        for (unsigned int i_6 = 1; i_6 < 18; i_6 += 1) 
        {
            {
                arr_21 [i_5] = max((((/* implicit */long long int) ((unsigned char) var_4))), (((((/* implicit */_Bool) var_4)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) var_4))))));
                var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) ((((((/* implicit */_Bool) ((signed char) var_9))) ? (((((/* implicit */int) var_7)) & (((/* implicit */int) var_8)))) : (((/* implicit */int) var_2)))) << (((((/* implicit */int) var_4)) - (11298))))))));
                /* LoopNest 2 */
                for (unsigned int i_7 = 0; i_7 < 20; i_7 += 1) 
                {
                    for (signed char i_8 = 0; i_8 < 20; i_8 += 1) 
                    {
                        {
                            var_22 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_2)))) > (min((var_5), (((/* implicit */unsigned long long int) var_10))))))), (((((/* implicit */long long int) ((var_9) + (((/* implicit */unsigned int) var_10))))) + (var_3)))));
                            var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) max((((/* implicit */unsigned int) var_0)), (((unsigned int) max((((/* implicit */long long int) var_7)), (var_1)))))))));
                            var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) ((short) max((min((var_10), (var_10))), (((/* implicit */int) var_11))))))));
                        }
                    } 
                } 
                arr_28 [i_5] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) max((var_9), (var_9)))) ? (((((((/* implicit */_Bool) var_9)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))) * (((var_9) - (((/* implicit */unsigned int) ((/* implicit */int) var_8))))))) : (var_9)));
            }
        } 
    } 
}
