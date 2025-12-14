/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234238
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234238 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234238
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 20; i_3 += 2) 
                    {
                        for (short i_4 = 3; i_4 < 18; i_4 += 4) 
                        {
                            {
                                arr_12 [i_0] [i_1] [i_2] [i_0] [i_4] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */int) arr_1 [i_4 - 1])) + (((/* implicit */int) arr_1 [i_4 + 1]))));
                                var_18 = ((/* implicit */signed char) var_10);
                                var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) ((unsigned long long int) var_5)))));
                                arr_13 [i_0] [0] [i_2] [i_1] [i_0] = ((/* implicit */unsigned char) (+(-1630888807)));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */unsigned long long int) var_16);
                }
            } 
        } 
        /* LoopNest 3 */
        for (long long int i_5 = 0; i_5 < 20; i_5 += 3) 
        {
            for (short i_6 = 4; i_6 < 19; i_6 += 2) 
            {
                for (short i_7 = 0; i_7 < 20; i_7 += 3) 
                {
                    {
                        var_21 &= ((/* implicit */unsigned int) (-(arr_20 [9] [3ULL] [9] [i_6] [i_7] [i_7])));
                        var_22 &= var_6;
                        var_23 = ((/* implicit */unsigned short) -1630888807);
                    }
                } 
            } 
        } 
    }
    for (short i_8 = 0; i_8 < 23; i_8 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_9 = 0; i_9 < 23; i_9 += 3) 
        {
            for (short i_10 = 0; i_10 < 23; i_10 += 2) 
            {
                {
                    arr_30 [i_8] [i_9] [i_8] = (+((-(-1630888807))));
                    arr_31 [i_8] [i_8] = ((/* implicit */unsigned int) var_3);
                }
            } 
        } 
        var_24 = ((/* implicit */unsigned int) min((((((/* implicit */int) arr_26 [i_8] [i_8] [i_8])) ^ (((/* implicit */int) arr_23 [i_8])))), (((/* implicit */int) ((short) arr_24 [i_8] [i_8])))));
    }
    for (unsigned char i_11 = 0; i_11 < 25; i_11 += 3) 
    {
        /* LoopSeq 1 */
        for (short i_12 = 0; i_12 < 25; i_12 += 2) 
        {
            var_25 = ((((/* implicit */int) arr_34 [i_11] [i_12] [i_11])) < (min((1630888807), (((/* implicit */int) arr_36 [i_11])))));
            var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_34 [i_11] [i_11] [23ULL]))) ^ (((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_35 [i_12]))) % (var_5))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_13)) == (((/* implicit */int) arr_36 [i_11])))))))))))));
        }
        var_27 -= min(((short)511), ((short)32767));
    }
    /* vectorizable */
    for (int i_13 = 0; i_13 < 18; i_13 += 2) 
    {
        var_28 = ((/* implicit */unsigned short) ((long long int) var_12));
        var_29 = ((/* implicit */short) var_16);
        /* LoopNest 2 */
        for (int i_14 = 0; i_14 < 18; i_14 += 2) 
        {
            for (_Bool i_15 = 1; i_15 < 1; i_15 += 1) 
            {
                {
                    arr_43 [i_15] [i_15] [i_15] [i_13] = (_Bool)1;
                    var_30 = ((/* implicit */int) max((var_30), (((/* implicit */int) ((signed char) arr_21 [i_15 - 1] [i_15 - 1] [i_15 - 1] [i_15 - 1])))));
                    var_31 -= ((/* implicit */signed char) ((((/* implicit */int) arr_29 [0] [i_14] [i_13] [i_14])) / (var_14)));
                }
            } 
        } 
    }
    /* LoopSeq 1 */
    for (unsigned char i_16 = 0; i_16 < 10; i_16 += 2) 
    {
        var_32 = ((/* implicit */unsigned char) (+(((int) arr_35 [i_16]))));
        var_33 = ((/* implicit */unsigned long long int) ((unsigned short) arr_20 [i_16] [i_16] [i_16] [i_16] [i_16] [i_16]));
    }
}
