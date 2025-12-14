/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32490
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32490 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32490
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
    var_12 = ((/* implicit */long long int) ((((((((/* implicit */_Bool) 728687948512406494ULL)) ? (1215736652886358550ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)81))))) % (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) var_3)) : (var_6)))))) << (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned long long int) -156153937))))))));
    var_13 += (+(var_0));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        var_14 -= ((/* implicit */unsigned long long int) arr_1 [i_0]);
        arr_2 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */long long int) ((/* implicit */int) var_4))) / (arr_1 [i_0]))) : (((/* implicit */long long int) (+(((/* implicit */int) var_4)))))))) ? ((+(arr_1 [i_0]))) : (((((/* implicit */_Bool) ((arr_1 [i_0]) / (var_6)))) ? (min((((/* implicit */long long int) var_9)), (var_2))) : ((-(arr_1 [i_0])))))));
        var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) (!(((/* implicit */_Bool) (~(1253383687133175900LL)))))))));
    }
    /* vectorizable */
    for (long long int i_1 = 1; i_1 < 19; i_1 += 2) 
    {
        var_16 = ((/* implicit */unsigned long long int) ((signed char) arr_4 [i_1 - 1]));
        var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_1 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)125))) : (((unsigned int) var_6)))))));
    }
    for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_3 = 1; i_3 < 16; i_3 += 1) 
        {
            for (long long int i_4 = 1; i_4 < 15; i_4 += 1) 
            {
                for (unsigned char i_5 = 0; i_5 < 18; i_5 += 2) 
                {
                    {
                        var_18 = ((/* implicit */unsigned long long int) max((arr_12 [i_4] [i_4 + 3] [i_4]), (((((/* implicit */_Bool) var_11)) ? (arr_11 [i_3] [i_4] [17LL]) : (arr_11 [i_4] [i_4] [i_5])))));
                        arr_15 [i_4] [(unsigned char)4] [(unsigned char)4] [4LL] [i_3] [i_4] = ((/* implicit */signed char) max((((/* implicit */long long int) ((signed char) ((unsigned long long int) arr_13 [i_4])))), (((var_0) / (((-1253383687133175900LL) + (((/* implicit */long long int) ((/* implicit */int) var_11)))))))));
                        var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(max((1824033350484977453ULL), (((/* implicit */unsigned long long int) arr_6 [9ULL]))))))) ? ((~(((((/* implicit */_Bool) arr_3 [7LL])) ? (arr_8 [i_2] [i_2]) : (((/* implicit */long long int) var_1)))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (~(arr_12 [i_4] [i_3] [9ULL])))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)164))) : (arr_13 [i_4]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_2]))))))));
                        var_20 = ((((/* implicit */int) arr_6 [i_5])) >> (((((/* implicit */_Bool) 1253383687133175900LL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_12 [i_4] [i_3 + 1] [i_4]))));
                        var_21 = ((/* implicit */int) (((~((~(15605972943678113793ULL))))) << (((((long long int) ((1824033350484977453ULL) << (((((/* implicit */int) (unsigned char)183)) - (149)))))) - (2917660430513995738LL)))));
                    }
                } 
            } 
        } 
        var_22 ^= ((/* implicit */unsigned char) min((((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)81))))), (((arr_1 [i_2]) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned char)88)))))));
        var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) (unsigned char)3)) ? (2901472466382348993LL) : (((/* implicit */long long int) ((/* implicit */int) var_11))))), (var_2)))) ? (max((((/* implicit */unsigned long long int) (unsigned char)253)), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) arr_11 [i_2] [i_2] [(signed char)2])) : (2840771130031437819ULL))))) : (((/* implicit */unsigned long long int) ((arr_3 [i_2]) * (((/* implicit */int) (!(((/* implicit */_Bool) -2901472466382348993LL))))))))));
        arr_16 [i_2] |= ((/* implicit */unsigned char) var_1);
    }
}
