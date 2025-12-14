/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214620
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214620 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214620
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
    var_13 *= ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) var_8)) ? ((~(((/* implicit */int) var_9)))) : (var_5)))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        var_14 &= ((/* implicit */unsigned long long int) ((unsigned char) arr_0 [i_0] [i_0]));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_0 [i_0] [i_0]))));
        arr_3 [i_0] &= ((/* implicit */unsigned short) (~(((/* implicit */int) arr_0 [i_0] [i_0]))));
    }
    /* LoopSeq 3 */
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 24; i_1 += 4) 
    {
        var_15 = ((/* implicit */signed char) ((long long int) -295072289727639332LL));
        var_16 *= ((/* implicit */unsigned short) ((arr_4 [i_1]) - (arr_4 [i_1])));
    }
    /* vectorizable */
    for (signed char i_2 = 0; i_2 < 22; i_2 += 1) 
    {
        arr_10 [i_2] [i_2] = ((/* implicit */signed char) ((long long int) 12839032173574266822ULL));
        arr_11 [i_2] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_5 [i_2]))));
        var_17 = arr_8 [i_2];
        var_18 -= ((/* implicit */unsigned char) ((arr_4 [i_2]) <= (17179607040ULL)));
    }
    /* vectorizable */
    for (signed char i_3 = 0; i_3 < 12; i_3 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_4 = 0; i_4 < 12; i_4 += 4) 
        {
            arr_17 [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned short) arr_9 [i_3]))) << ((((+(((/* implicit */int) arr_13 [(signed char)4])))) - (111)))));
            var_19 = ((/* implicit */unsigned long long int) arr_8 [i_4]);
        }
        /* LoopNest 3 */
        for (long long int i_5 = 0; i_5 < 12; i_5 += 4) 
        {
            for (unsigned short i_6 = 0; i_6 < 12; i_6 += 4) 
            {
                for (unsigned short i_7 = 0; i_7 < 12; i_7 += 2) 
                {
                    {
                        var_20 |= ((/* implicit */unsigned short) ((unsigned char) (unsigned short)11971));
                        var_21 -= ((/* implicit */signed char) ((int) (unsigned short)25));
                        var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) ((arr_20 [i_7]) >= (arr_12 [i_6]))))));
                        var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)511)) || (((/* implicit */_Bool) -4157948018840035496LL))));
                        var_24 = ((/* implicit */signed char) (~(((/* implicit */int) arr_0 [i_3] [i_6]))));
                    }
                } 
            } 
        } 
        var_25 *= ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)18)) ? (1327820207551062557LL) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_3])))));
        var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) -7074640037727826378LL)) ? (((/* implicit */int) arr_1 [i_3])) : (((/* implicit */int) arr_1 [i_3]))));
        arr_25 [i_3] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)53553))));
    }
}
