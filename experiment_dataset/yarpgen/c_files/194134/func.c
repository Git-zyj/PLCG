/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194134
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194134 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194134
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
    var_10 &= ((/* implicit */unsigned long long int) ((((/* implicit */int) var_3)) + (((/* implicit */int) min((var_5), (((/* implicit */unsigned char) var_3)))))));
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (short i_1 = 0; i_1 < 13; i_1 += 4) /* same iter space */
        {
            var_11 |= ((((var_8) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_0)))) == (((/* implicit */int) var_0)));
            arr_6 [7LL] [(short)9] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_1) << (((/* implicit */int) var_8))))) && (((/* implicit */_Bool) var_4))));
        }
        for (short i_2 = 0; i_2 < 13; i_2 += 4) /* same iter space */
        {
            arr_9 [i_0] [(short)11] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) min((((/* implicit */int) var_0)), ((~(((/* implicit */int) (_Bool)1))))))) <= (min((min((((/* implicit */unsigned int) var_6)), (var_1))), (((/* implicit */unsigned int) ((((((/* implicit */int) var_3)) + (2147483647))) << (((((((/* implicit */int) var_2)) + (31919))) - (7))))))))));
            arr_10 [i_0] = ((/* implicit */_Bool) min((((/* implicit */unsigned int) min((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_2)))), (((/* implicit */int) min((var_5), (((/* implicit */unsigned char) var_3)))))))), (var_1)));
        }
        var_12 ^= ((/* implicit */signed char) min((((min((134081180695174294ULL), (((/* implicit */unsigned long long int) (_Bool)1)))) | (((/* implicit */unsigned long long int) min((var_1), (((/* implicit */unsigned int) var_0))))))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))) == (((((/* implicit */_Bool) (short)-21904)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (1763411838U))))))));
    }
    for (unsigned int i_3 = 2; i_3 < 21; i_3 += 4) 
    {
        arr_13 [i_3 - 1] = ((/* implicit */long long int) (~(min((((var_8) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_0)))), (((/* implicit */int) min((((/* implicit */unsigned short) var_7)), (var_4))))))));
        var_13 = ((/* implicit */signed char) min((var_13), (((/* implicit */signed char) (+(((/* implicit */int) min((min((((/* implicit */short) (_Bool)1)), ((short)0))), (((/* implicit */short) ((((/* implicit */int) (unsigned char)0)) != (2032705615))))))))))));
        /* LoopNest 2 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            for (long long int i_5 = 3; i_5 < 19; i_5 += 4) 
            {
                {
                    arr_19 [15LL] [i_5] [(unsigned short)21] [(_Bool)1] = ((/* implicit */long long int) var_5);
                    var_14 = var_9;
                }
            } 
        } 
        var_15 = ((/* implicit */int) min((((/* implicit */unsigned int) min((((/* implicit */int) var_2)), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_7))))))), (((((/* implicit */_Bool) var_4)) ? (var_1) : (min((((/* implicit */unsigned int) var_6)), (var_1)))))));
        arr_20 [i_3] [i_3] = ((/* implicit */signed char) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_1))))), (min((((/* implicit */unsigned int) min((((/* implicit */unsigned short) var_3)), (var_4)))), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (var_1)))))));
    }
    for (short i_6 = 1; i_6 < 21; i_6 += 4) 
    {
        var_16 = ((/* implicit */_Bool) min((((/* implicit */int) (!(((/* implicit */_Bool) var_4))))), ((+(((/* implicit */int) var_8))))));
        var_17 = ((((/* implicit */_Bool) min((min((var_7), (var_7))), (min((((/* implicit */short) var_3)), (var_9)))))) ? (min((((/* implicit */unsigned int) min((var_4), (((/* implicit */unsigned short) var_8))))), ((-(var_1))))) : (((/* implicit */unsigned int) (-(((/* implicit */int) min((var_7), (var_2))))))));
        var_18 ^= ((/* implicit */unsigned char) (+(min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) 2203493164U))))), ((+(var_1)))))));
    }
}
