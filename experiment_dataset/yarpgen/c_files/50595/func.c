/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50595
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50595 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50595
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
    var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) (+(min((((/* implicit */unsigned int) max((((/* implicit */short) var_6)), ((short)-29423)))), (min((var_17), (((/* implicit */unsigned int) var_0)))))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (short i_1 = 1; i_1 < 19; i_1 += 4) 
        {
            {
                var_19 = ((/* implicit */int) ((var_17) ^ (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_0] [i_1 - 1])) ? (arr_2 [i_0] [i_1 - 1]) : (((/* implicit */int) arr_3 [12] [i_1 + 1] [(short)10])))))));
                var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) var_4))));
                /* LoopNest 3 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned char i_3 = 0; i_3 < 20; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 4) 
                        {
                            {
                                var_21 = max((((/* implicit */unsigned char) var_10)), (((unsigned char) arr_9 [i_2 - 1] [i_1] [i_2 - 1] [i_1 - 1] [i_4])));
                                arr_12 [i_4] [i_1] [i_2 - 1] [i_1] [i_0] = ((/* implicit */unsigned int) var_8);
                            }
                        } 
                    } 
                } 
                var_22 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (short)(-32767 - 1))), ((+(2251799276814336ULL)))));
            }
        } 
    } 
    /* LoopSeq 4 */
    for (unsigned char i_5 = 1; i_5 < 9; i_5 += 1) /* same iter space */
    {
        arr_16 [(_Bool)1] [i_5] |= ((/* implicit */long long int) var_13);
        /* LoopSeq 1 */
        for (short i_6 = 1; i_6 < 9; i_6 += 3) 
        {
            var_23 = ((/* implicit */unsigned int) 2251799276814346ULL);
            arr_21 [i_5] = max(((short)-8055), (((/* implicit */short) (signed char)118)));
        }
        var_24 = ((/* implicit */long long int) min(((+(var_2))), (((/* implicit */int) ((arr_18 [i_5]) <= (arr_18 [i_5]))))));
    }
    for (unsigned char i_7 = 1; i_7 < 9; i_7 += 1) /* same iter space */
    {
        arr_24 [i_7] = ((/* implicit */short) (+(((/* implicit */int) ((var_2) == (((/* implicit */int) arr_4 [i_7 - 1] [i_7])))))));
        var_25 |= ((/* implicit */int) var_1);
    }
    for (unsigned char i_8 = 1; i_8 < 9; i_8 += 1) /* same iter space */
    {
        var_26 |= ((/* implicit */long long int) (-(((/* implicit */int) (short)-8055))));
        var_27 = ((/* implicit */long long int) (((((-(1507566593))) + (2147483647))) << (((var_12) - (1545048)))));
        arr_27 [i_8] [i_8] = ((/* implicit */signed char) (~(((arr_2 [i_8 + 1] [i_8 + 1]) / (var_2)))));
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 10; i_9 += 3) 
        {
            for (short i_10 = 0; i_10 < 10; i_10 += 2) 
            {
                {
                    var_28 = ((/* implicit */_Bool) ((((/* implicit */int) var_7)) * ((-(((((/* implicit */int) (signed char)118)) * (((/* implicit */int) var_13))))))));
                    arr_34 [i_8] [i_8] [i_8] [i_8 - 1] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (signed char)118)), (arr_18 [i_10])));
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned char i_11 = 1; i_11 < 9; i_11 += 1) /* same iter space */
    {
        var_29 = ((/* implicit */unsigned char) (+(((/* implicit */int) var_10))));
        var_30 = ((-1931233460) | (var_12));
        arr_38 [i_11] = ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_11 - 1])) || (((/* implicit */_Bool) arr_0 [i_11 - 1]))));
    }
    var_31 = ((/* implicit */short) ((min((4294967278U), (((/* implicit */unsigned int) min((((/* implicit */int) (_Bool)0)), (var_5)))))) ^ (var_17)));
}
