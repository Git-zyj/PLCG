/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48212
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48212 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48212
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
    var_10 = var_2;
    var_11 = ((/* implicit */short) ((((/* implicit */unsigned int) min((2050755774), (((/* implicit */int) min((var_5), (((/* implicit */unsigned short) (_Bool)1)))))))) % ((-((-(2429787559U)))))));
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) var_9);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                {
                    arr_7 [i_0] [i_1] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(max((((/* implicit */unsigned int) var_7)), (arr_0 [i_1])))))) ? (((/* implicit */int) (unsigned short)36353)) : (((((/* implicit */_Bool) (unsigned char)233)) ? (((/* implicit */int) (signed char)45)) : (((/* implicit */int) (signed char)-15))))));
                    arr_8 [i_0] [i_1] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(arr_0 [i_1])))) ? (((/* implicit */int) (unsigned char)23)) : (((/* implicit */int) arr_6 [i_2]))))) & (max((943465321U), (((/* implicit */unsigned int) (+(((/* implicit */int) var_5)))))))));
                    var_12 = ((/* implicit */unsigned char) ((signed char) (short)32767));
                }
            } 
        } 
        var_13 = max(((+(7009005782039016649ULL))), (((/* implicit */unsigned long long int) (-(min((arr_3 [i_0]), (((/* implicit */unsigned int) (unsigned short)23046))))))));
    }
    for (signed char i_3 = 0; i_3 < 15; i_3 += 3) 
    {
        arr_12 [i_3] = ((/* implicit */long long int) ((2572832137U) - ((-(610826056U)))));
        var_14 &= ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [10]))))) >= ((~(((/* implicit */int) var_5))))));
        var_15 = ((/* implicit */unsigned int) var_4);
    }
    for (unsigned long long int i_4 = 0; i_4 < 17; i_4 += 2) 
    {
        var_16 = ((/* implicit */int) arr_15 [i_4]);
        /* LoopNest 3 */
        for (unsigned long long int i_5 = 4; i_5 < 14; i_5 += 3) 
        {
            for (signed char i_6 = 0; i_6 < 17; i_6 += 2) 
            {
                for (unsigned int i_7 = 0; i_7 < 17; i_7 += 1) 
                {
                    {
                        var_17 = ((/* implicit */signed char) ((unsigned short) 14577298572137635705ULL));
                        var_18 *= ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (signed char)16)), (arr_18 [i_4])));
                    }
                } 
            } 
        } 
    }
    for (unsigned char i_8 = 2; i_8 < 9; i_8 += 2) 
    {
        var_19 |= ((/* implicit */long long int) max((((((/* implicit */_Bool) arr_19 [i_8 - 1])) ? (((((/* implicit */_Bool) var_3)) ? (var_1) : (((/* implicit */unsigned long long int) arr_13 [i_8])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))), (((/* implicit */unsigned long long int) (~(arr_0 [i_8 - 2]))))));
        var_20 = ((/* implicit */unsigned long long int) var_7);
    }
}
