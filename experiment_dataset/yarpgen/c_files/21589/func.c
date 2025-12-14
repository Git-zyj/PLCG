/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21589
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21589 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21589
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
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        /* LoopSeq 4 */
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            var_17 = ((/* implicit */unsigned char) ((((/* implicit */long long int) arr_0 [i_0])) - ((((_Bool)1) ? (-731715294384426943LL) : (731715294384426953LL)))));
            var_18 = ((/* implicit */unsigned int) ((int) 4294967295U));
            var_19 = ((/* implicit */long long int) arr_3 [i_0] [i_1]);
            /* LoopNest 2 */
            for (signed char i_2 = 1; i_2 < 20; i_2 += 4) 
            {
                for (unsigned int i_3 = 0; i_3 < 23; i_3 += 4) 
                {
                    {
                        var_20 = ((/* implicit */_Bool) max((((((var_4) & (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_1] [i_2] [i_2] [i_3]))))) ^ (((/* implicit */long long int) max((arr_0 [i_3]), (((/* implicit */unsigned int) arr_7 [i_0] [i_1] [i_1] [i_2] [i_3]))))))), (((/* implicit */long long int) var_13))));
                        arr_8 [i_0] [i_1] [i_2 + 1] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) 1U)), (-731715294384426949LL)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1] [i_2 + 2] [i_3] [i_3]))) : (min((((/* implicit */long long int) arr_5 [i_2 - 1] [i_2 - 1] [i_2] [i_2])), (2091787551557733894LL)))));
                        var_21 = ((/* implicit */signed char) ((((((/* implicit */_Bool) (+(-6070190024648954649LL)))) ? (7U) : ((+(2600559949U))))) * (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-107)) - (((/* implicit */int) (unsigned char)1)))))));
                    }
                } 
            } 
        }
        for (long long int i_4 = 3; i_4 < 21; i_4 += 2) 
        {
            var_22 = ((/* implicit */signed char) min((((/* implicit */long long int) ((((/* implicit */int) var_14)) + (((((/* implicit */_Bool) arr_12 [i_0] [i_4])) ? (((/* implicit */int) arr_7 [i_0] [i_0] [i_4] [i_4] [i_4])) : (((/* implicit */int) (unsigned char)181))))))), (((((/* implicit */_Bool) 144115188042301440LL)) ? (-3710999381358470950LL) : (((((/* implicit */_Bool) -9223372036854775794LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)1))) : (731715294384426953LL)))))));
            var_23 = ((/* implicit */_Bool) ((((/* implicit */long long int) min((var_2), (((/* implicit */unsigned int) (signed char)126))))) / (var_11)));
        }
        for (unsigned int i_5 = 0; i_5 < 23; i_5 += 2) 
        {
            var_24 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (arr_10 [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)152)))))) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_0] [i_5])))))))), (var_11)));
            arr_15 [i_0] = ((/* implicit */unsigned char) max((max((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)103))) - (var_2))), (max((4294967295U), (817207489U))))), (max((1334703100U), (((/* implicit */unsigned int) (unsigned char)166))))));
        }
        for (long long int i_6 = 0; i_6 < 23; i_6 += 2) 
        {
            arr_19 [i_6] = max((min(((~(arr_6 [i_0] [i_0] [i_0] [i_6] [i_6] [i_6]))), (((/* implicit */long long int) ((((/* implicit */int) var_9)) - (((/* implicit */int) (unsigned char)38))))))), (((/* implicit */long long int) (-(((/* implicit */int) arr_5 [i_0] [i_0] [i_6] [i_6]))))));
            var_25 = ((/* implicit */signed char) ((((/* implicit */long long int) max((((arr_10 [i_0]) & (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_0] [i_6]))))), (((/* implicit */unsigned int) (~(((/* implicit */int) var_9)))))))) & (arr_17 [i_6])));
            arr_20 [i_6] = ((/* implicit */unsigned char) (-((+(var_8)))));
            var_26 = ((/* implicit */unsigned short) max((var_11), (((arr_18 [i_6]) / (((/* implicit */long long int) var_6))))));
        }
        arr_21 [i_0] = ((/* implicit */signed char) var_13);
        var_27 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) var_15)))))) ? (((/* implicit */long long int) max((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (signed char)-88)))), (((((/* implicit */_Bool) 3150565084113232838LL)) ? (((/* implicit */int) arr_4 [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0] [i_0]))))))) : ((+(arr_18 [i_0])))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_7 = 0; i_7 < 23; i_7 += 4) 
        {
            /* LoopNest 3 */
            for (unsigned char i_8 = 0; i_8 < 23; i_8 += 4) 
            {
                for (signed char i_9 = 0; i_9 < 23; i_9 += 3) 
                {
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        {
                            var_28 = ((/* implicit */signed char) var_9);
                            var_29 = ((/* implicit */signed char) var_1);
                            var_30 = ((signed char) arr_5 [i_0] [i_7] [i_8] [i_10]);
                            arr_33 [i_0] [i_7] [i_8] [i_9] [i_10] [i_9] [i_10] = ((/* implicit */signed char) var_8);
                        }
                    } 
                } 
            } 
            var_31 = ((/* implicit */_Bool) ((arr_28 [i_0] [i_0] [i_0] [i_7] [i_7]) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_0] [i_7] [i_7] [i_7])))));
        }
    }
    var_32 = ((/* implicit */unsigned int) ((signed char) 705848818734874939LL));
}
