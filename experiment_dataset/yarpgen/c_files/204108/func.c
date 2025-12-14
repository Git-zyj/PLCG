/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204108
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204108 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204108
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
    var_12 = ((/* implicit */unsigned short) var_8);
    /* LoopSeq 2 */
    for (unsigned short i_0 = 2; i_0 < 12; i_0 += 2) 
    {
        var_13 = ((/* implicit */signed char) var_5);
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                {
                    var_14 = ((/* implicit */unsigned int) var_0);
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 14; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 14; i_4 += 1) 
                        {
                            {
                                var_15 ^= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_8))));
                                var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) 4930003676487441360ULL)))))));
                                arr_16 [i_2] = ((/* implicit */unsigned int) (((-(((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_1 [i_0] [i_1])) : (((/* implicit */int) (unsigned char)61)))))) <= (((/* implicit */int) var_11))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (unsigned short i_5 = 0; i_5 < 10; i_5 += 1) 
    {
        arr_19 [i_5] = ((/* implicit */unsigned long long int) min(((-(((/* implicit */int) arr_2 [i_5] [i_5] [i_5])))), (((((/* implicit */int) arr_8 [i_5])) >> (((/* implicit */int) arr_8 [i_5]))))));
        /* LoopNest 3 */
        for (unsigned char i_6 = 0; i_6 < 10; i_6 += 4) 
        {
            for (long long int i_7 = 0; i_7 < 10; i_7 += 1) 
            {
                for (unsigned long long int i_8 = 0; i_8 < 10; i_8 += 1) 
                {
                    {
                        arr_27 [i_5] [i_5] [i_7] = ((/* implicit */unsigned int) min((((/* implicit */unsigned short) ((var_8) <= (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))), (var_3)));
                        var_17 = ((/* implicit */unsigned int) var_7);
                        var_18 += ((/* implicit */unsigned char) var_10);
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (signed char i_9 = 0; i_9 < 10; i_9 += 3) 
        {
            for (unsigned char i_10 = 0; i_10 < 10; i_10 += 2) 
            {
                for (unsigned int i_11 = 0; i_11 < 10; i_11 += 1) 
                {
                    {
                        var_19 = ((/* implicit */unsigned int) var_7);
                        var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+((+(((/* implicit */int) (_Bool)1))))))) ? (min((2172404069U), ((+(3452012497U))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))));
                    }
                } 
            } 
        } 
        var_21 = ((/* implicit */unsigned int) max((var_21), (min((((((/* implicit */_Bool) 12597936335891212117ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (2172404048U))), (min((3452012504U), (((/* implicit */unsigned int) (unsigned char)18))))))));
    }
}
