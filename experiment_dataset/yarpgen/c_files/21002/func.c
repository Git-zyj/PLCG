/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21002
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21002 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21002
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
    var_13 = ((/* implicit */long long int) max((max((((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) | (var_9))), (((/* implicit */unsigned long long int) var_7)))), (((/* implicit */unsigned long long int) var_12))));
    var_14 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) var_2)), (18446744073709551615ULL)));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            var_15 *= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [10LL])) ? (((/* implicit */int) arr_2 [i_1 - 1])) : (arr_1 [(_Bool)1])));
            var_16 = ((((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (_Bool)1)))) < (((/* implicit */int) ((arr_0 [i_1]) < (((/* implicit */unsigned long long int) var_10))))));
            arr_5 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) 18446744073709551600ULL);
        }
        for (unsigned long long int i_2 = 3; i_2 < 8; i_2 += 1) 
        {
            var_17 -= ((/* implicit */_Bool) ((unsigned long long int) ((unsigned long long int) ((((/* implicit */unsigned long long int) 4294967295U)) / (var_9)))));
            /* LoopNest 2 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                for (signed char i_4 = 0; i_4 < 12; i_4 += 3) 
                {
                    {
                        var_18 = ((/* implicit */long long int) (_Bool)1);
                        var_19 = ((/* implicit */unsigned int) var_1);
                    }
                } 
            } 
            var_20 = ((/* implicit */int) max((var_20), (max((((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) arr_3 [(short)4] [i_0] [(short)4])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_6)))) : (((/* implicit */int) ((((/* implicit */_Bool) var_12)) && ((_Bool)1)))))), (((((/* implicit */_Bool) arr_0 [i_2 - 2])) ? (arr_9 [i_2 + 3] [i_2 - 2] [i_2] [i_2 + 1]) : (((/* implicit */int) (unsigned short)65535))))))));
            var_21 -= ((/* implicit */_Bool) ((min((((((/* implicit */_Bool) arr_6 [5ULL] [i_0])) ? (arr_12 [i_2] [(signed char)8] [(signed char)8] [i_0]) : (1247498312668542825LL))), ((((_Bool)1) ? (1247498312668542805LL) : (((/* implicit */long long int) var_5)))))) & (max((((/* implicit */long long int) min((arr_11 [0ULL] [i_2] [i_2] [i_2]), (((/* implicit */unsigned int) arr_1 [(_Bool)1]))))), (-1247498312668542791LL)))));
        }
        arr_15 [i_0] = ((/* implicit */unsigned char) ((min((4194303ULL), (((/* implicit */unsigned long long int) arr_11 [i_0] [i_0] [i_0] [i_0])))) > (((/* implicit */unsigned long long int) min((arr_14 [i_0] [i_0] [(signed char)5] [(signed char)5] [i_0]), (((/* implicit */int) (short)-3782)))))));
        var_22 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((((((/* implicit */int) (short)-3782)) + (2147483647))) >> (((((/* implicit */int) (short)-3782)) + (3812))))) << ((((((_Bool)1) ? (var_10) : (((/* implicit */int) (_Bool)1)))) + (725024946)))))), ((((~(var_2))) << (((18446744073709551615ULL) - (18446744073709551591ULL)))))));
    }
    for (signed char i_5 = 0; i_5 < 23; i_5 += 2) 
    {
        /* LoopNest 2 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            for (long long int i_7 = 0; i_7 < 23; i_7 += 1) 
            {
                {
                    var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) (((!(((/* implicit */_Bool) -1247498312668542781LL)))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)65535))))) : (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 0ULL)) || (((/* implicit */_Bool) arr_19 [i_5] [15U] [i_5]))))), (((((/* implicit */_Bool) arr_17 [i_5])) ? (6843345550434003863ULL) : (((/* implicit */unsigned long long int) 1247498312668542797LL)))))))))));
                    var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)33780)) ? (arr_18 [(unsigned short)10] [i_6] [i_5]) : (arr_18 [i_5] [i_5] [i_5])))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 1ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_5] [i_6] [i_7]))) : (var_9)))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_5]))) + (3222591099730538268ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_7]))))) : (((/* implicit */unsigned long long int) arr_18 [i_5] [8ULL] [i_7]))));
                    arr_24 [i_5] [i_5] [i_5] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) (~((((_Bool)1) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) (unsigned char)224)), (arr_17 [i_7])))) || (((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) var_8)) + (29770))))))))) : (((/* implicit */int) ((_Bool) var_2)))));
                }
            } 
        } 
        arr_25 [i_5] = ((/* implicit */unsigned short) ((((/* implicit */long long int) min((arr_19 [i_5] [i_5] [i_5]), (((/* implicit */int) arr_21 [i_5] [i_5] [i_5]))))) % (max(((+(-2591018711737369859LL))), (((/* implicit */long long int) (signed char)32))))));
    }
    var_25 = ((((/* implicit */_Bool) (+(((/* implicit */int) ((short) 955793044U)))))) ? (15224152973979013325ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))));
}
