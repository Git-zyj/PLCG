/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201959
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201959 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201959
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
    for (short i_0 = 1; i_0 < 22; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 22; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 4) 
                    {
                        for (long long int i_4 = 2; i_4 < 22; i_4 += 1) 
                        {
                            {
                                var_14 *= ((/* implicit */short) (((!(((/* implicit */_Bool) arr_4 [i_2] [i_2 - 2] [i_0 - 1])))) ? (min((((/* implicit */int) (!((_Bool)1)))), ((+(((/* implicit */int) (unsigned char)66)))))) : (((max((((/* implicit */int) arr_12 [i_1] [i_2] [i_3] [i_4])), (-4))) / ((~(965743224)))))));
                                arr_16 [i_4] [i_0] [i_1] = ((/* implicit */unsigned long long int) (!(((_Bool) arr_1 [i_0]))));
                            }
                        } 
                    } 
                } 
                var_15 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0 - 1])) ? (((/* implicit */int) max((((/* implicit */unsigned char) arr_7 [i_1])), (arr_0 [i_0])))) : (((/* implicit */int) max((((/* implicit */short) var_8)), (var_9))))))) ? (((/* implicit */unsigned int) ((((((/* implicit */int) arr_6 [i_1] [i_1] [(_Bool)1])) - (((/* implicit */int) (unsigned char)228)))) - (((/* implicit */int) ((_Bool) arr_3 [i_0 + 1])))))) : (min((((unsigned int) (unsigned char)248)), (((/* implicit */unsigned int) ((short) arr_14 [i_0] [i_0] [i_0] [i_0] [i_1])))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (long long int i_5 = 1; i_5 < 14; i_5 += 1) 
    {
        var_16 = ((/* implicit */signed char) (+(((/* implicit */int) ((unsigned char) arr_6 [i_5] [i_5] [i_5])))));
        arr_19 [i_5 - 1] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)243)) + (((/* implicit */int) (short)-681))));
        arr_20 [i_5] [i_5] = ((/* implicit */_Bool) (~((+(((/* implicit */int) (!(((/* implicit */_Bool) 2299083849U)))))))));
    }
    for (int i_6 = 0; i_6 < 12; i_6 += 1) 
    {
        /* LoopSeq 3 */
        for (unsigned int i_7 = 0; i_7 < 12; i_7 += 1) /* same iter space */
        {
            var_17 = ((/* implicit */signed char) (-((~(((/* implicit */int) arr_12 [i_6] [i_6] [i_6] [i_6]))))));
            arr_26 [i_6] [i_6] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 2299083849U))));
            arr_27 [i_6] [i_6] = ((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) (short)205)))))));
            arr_28 [i_6] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */int) (unsigned char)27)), (((((/* implicit */int) (unsigned char)253)) & (((/* implicit */int) (short)4306))))))) ? (((/* implicit */unsigned int) min(((+(((/* implicit */int) arr_5 [i_7] [i_7] [(short)0])))), (((((/* implicit */int) (signed char)-55)) - (((/* implicit */int) (short)27719))))))) : (max((((/* implicit */unsigned int) ((var_11) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-84)))))), (min((((/* implicit */unsigned int) arr_6 [(signed char)10] [i_6] [i_6])), (2299083849U)))))));
        }
        for (unsigned int i_8 = 0; i_8 < 12; i_8 += 1) /* same iter space */
        {
            arr_31 [i_6] = ((/* implicit */short) (-(((long long int) max(((signed char)-4), (arr_1 [i_8]))))));
            /* LoopNest 2 */
            for (short i_9 = 0; i_9 < 12; i_9 += 2) 
            {
                for (long long int i_10 = 2; i_10 < 11; i_10 += 4) 
                {
                    {
                        var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_4)) - (((/* implicit */int) arr_6 [i_10 + 1] [i_10 - 2] [i_10]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_6 [i_10 + 1] [i_10 - 1] [i_10])))) : (min((((/* implicit */long long int) (_Bool)1)), (arr_10 [i_10 - 2] [i_10] [i_10 - 2] [i_10 - 2])))));
                        arr_40 [i_6] [i_8] [i_8] [i_6] [i_9] [i_6] = ((/* implicit */_Bool) (~((+(min((arr_3 [i_6]), (((/* implicit */long long int) var_0))))))));
                    }
                } 
            } 
            var_19 ^= ((/* implicit */unsigned char) (+((~(var_11)))));
            var_20 -= ((/* implicit */unsigned char) ((short) (_Bool)1));
        }
        for (int i_11 = 0; i_11 < 12; i_11 += 2) 
        {
            var_21 = ((/* implicit */unsigned short) (+(((long long int) arr_15 [i_6]))));
            var_22 = max((((((/* implicit */_Bool) 1995883446U)) ? (((/* implicit */unsigned long long int) 28U)) : (9098961507181118275ULL))), (((/* implicit */unsigned long long int) (short)683)));
            /* LoopNest 2 */
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
            {
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                {
                    {
                        arr_48 [i_6] [i_6] [i_12] [i_6] = ((/* implicit */signed char) (~((~(((/* implicit */int) arr_35 [i_11] [i_11]))))));
                        arr_49 [i_6] [i_6] [i_12] [i_6] = ((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_14 [i_13] [i_11] [i_11] [i_6] [i_6])), ((-(627694697U)))));
                        var_23 = ((/* implicit */int) ((((/* implicit */_Bool) max((arr_29 [i_6] [i_6] [i_6]), (arr_29 [i_6] [i_11] [i_13])))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_1 [i_13]))))) : (max((min((arr_38 [i_11] [i_11] [i_11] [i_6]), (((/* implicit */unsigned long long int) (short)-7635)))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) - (var_11)))))));
                    }
                } 
            } 
        }
        var_24 -= ((/* implicit */long long int) min((((/* implicit */short) (unsigned char)228)), (var_6)));
        var_25 = (~((~(((/* implicit */int) var_13)))));
        var_26 *= ((/* implicit */unsigned int) var_2);
    }
}
