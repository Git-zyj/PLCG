/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39691
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39691 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39691
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
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)-28842))))) ? (((/* implicit */unsigned long long int) ((var_5) ^ (((/* implicit */unsigned int) ((/* implicit */int) (short)28842)))))) : ((~(var_7)))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 2; i_2 < 19; i_2 += 4) 
            {
                {
                    var_11 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-28842)) ? (((/* implicit */int) (unsigned short)58052)) : (641084886)));
                    /* LoopSeq 1 */
                    for (signed char i_3 = 0; i_3 < 21; i_3 += 1) 
                    {
                        var_12 = ((/* implicit */int) ((var_4) * (var_4)));
                        var_13 = ((/* implicit */signed char) min((var_13), (((signed char) var_10))));
                    }
                    var_14 |= ((/* implicit */unsigned long long int) ((((_Bool) arr_12 [i_0] [(_Bool)1] [i_1] [i_2])) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0] [i_2])) && (((/* implicit */_Bool) arr_6 [i_2] [i_1] [i_2]))))) : (((((/* implicit */int) (signed char)95)) * (((/* implicit */int) arr_5 [i_1]))))));
                    /* LoopNest 2 */
                    for (long long int i_4 = 1; i_4 < 20; i_4 += 2) 
                    {
                        for (unsigned short i_5 = 0; i_5 < 21; i_5 += 3) 
                        {
                            {
                                arr_19 [i_1] [(short)11] [i_0] [i_5] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned short)7478))));
                                var_15 = ((/* implicit */short) (+(((/* implicit */int) (_Bool)1))));
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)7484)) ? (((/* implicit */long long int) -641084914)) : (6152322049736454479LL)));
                }
            } 
        } 
        var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) (-(9106735923096189337ULL))))));
        var_18 = ((/* implicit */short) (!(((_Bool) arr_14 [i_0] [i_0] [4] [i_0]))));
    }
    for (unsigned int i_6 = 0; i_6 < 21; i_6 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (signed char i_7 = 0; i_7 < 21; i_7 += 3) 
        {
            for (unsigned long long int i_8 = 0; i_8 < 21; i_8 += 4) 
            {
                {
                    var_19 = ((/* implicit */signed char) max(((~(((/* implicit */int) (signed char)-61)))), (((/* implicit */int) (!(((/* implicit */_Bool) ((14863406125030688690ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))))));
                    arr_26 [i_6] [i_6] = ((/* implicit */_Bool) ((signed char) max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_11 [i_6] [i_7] [i_8] [i_8])), (var_5)))), (127779900262654249ULL))));
                }
            } 
        } 
        var_20 = ((/* implicit */long long int) min((min((var_4), (((/* implicit */unsigned long long int) var_10)))), (((/* implicit */unsigned long long int) ((((/* implicit */int) min((((/* implicit */unsigned short) arr_10 [i_6] [i_6] [i_6] [i_6])), (var_9)))) - (((/* implicit */int) (unsigned short)4480)))))));
        /* LoopNest 3 */
        for (short i_9 = 0; i_9 < 21; i_9 += 2) 
        {
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                for (long long int i_11 = 3; i_11 < 20; i_11 += 3) 
                {
                    {
                        arr_34 [i_6] [i_6] [i_10] [i_6] [i_6] = ((/* implicit */_Bool) (+((~(max((var_10), (((/* implicit */long long int) -1))))))));
                        var_21 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) (+(-1))))) ? ((+(((((/* implicit */long long int) ((/* implicit */int) var_1))) * (var_10))))) : (((/* implicit */long long int) (-(((/* implicit */int) min((((/* implicit */unsigned short) arr_13 [i_6] [i_6] [i_9] [i_10] [i_11])), (arr_29 [i_9])))))))));
                        arr_35 [i_6] [i_10] [i_10] [i_6] = ((/* implicit */int) ((short) max((((/* implicit */unsigned long long int) min((var_5), (((/* implicit */unsigned int) var_1))))), (max((((/* implicit */unsigned long long int) 641084913)), (arr_18 [i_6] [i_6] [i_10] [i_10] [i_10] [i_10] [i_11]))))));
                    }
                } 
            } 
        } 
    }
    var_22 = ((/* implicit */int) (-(var_10)));
}
