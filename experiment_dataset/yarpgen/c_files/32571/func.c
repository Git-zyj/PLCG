/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32571
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32571 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32571
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
    var_10 = ((/* implicit */unsigned int) var_6);
    var_11 = ((/* implicit */int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-15))) : (((var_4) >> (((min((var_0), (var_4))) - (299204662682407128ULL)))))));
    var_12 = ((/* implicit */unsigned int) var_2);
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) 3083264406715392274ULL))));
        var_14 = ((/* implicit */short) ((((((((/* implicit */_Bool) (short)-1)) && (((/* implicit */_Bool) arr_0 [i_0] [i_0])))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_4))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 4518594896252910002LL)) && (((/* implicit */_Bool) 6580423856592681446LL)))))))) + (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((arr_1 [(unsigned short)4]) > (((/* implicit */long long int) ((/* implicit */int) var_8))))))) - (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)246))) : (arr_1 [i_0]))))))));
        arr_2 [i_0] = ((/* implicit */unsigned int) min((7350612433700629472ULL), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)114)))))));
        var_15 += ((signed char) min((arr_1 [i_0]), (arr_1 [i_0])));
    }
    for (signed char i_1 = 0; i_1 < 19; i_1 += 4) 
    {
        arr_5 [i_1] = ((/* implicit */unsigned short) min((arr_4 [i_1]), (((/* implicit */unsigned long long int) var_5))));
        arr_6 [i_1] |= (~(((arr_3 [i_1]) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) (signed char)6)))));
        var_16 += ((/* implicit */unsigned long long int) (unsigned short)58592);
    }
    for (signed char i_2 = 1; i_2 < 14; i_2 += 3) 
    {
        var_17 = ((((/* implicit */int) arr_7 [i_2 - 1])) | ((~(1741346841))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 2) 
        {
            var_18 = ((/* implicit */signed char) ((unsigned int) arr_3 [i_2 + 1]));
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 15; i_4 += 3) 
            {
                for (signed char i_5 = 0; i_5 < 15; i_5 += 3) 
                {
                    {
                        var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 72057594037927935ULL)) ? (((/* implicit */int) arr_10 [i_2] [i_4])) : (((/* implicit */int) arr_10 [i_3] [i_4])))))));
                        var_20 += ((/* implicit */short) (((~(arr_12 [i_3] [(_Bool)1]))) % (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_2] [i_3] [i_2] [i_2 + 1])))));
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (unsigned char i_6 = 0; i_6 < 15; i_6 += 4) 
            {
                var_21 *= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) arr_20 [i_2] [i_2 - 1])) - (arr_11 [i_2] [i_2 + 1])));
                var_22 += ((/* implicit */unsigned long long int) arr_11 [i_2] [i_2 + 1]);
                arr_21 [i_2] [i_2] = ((/* implicit */signed char) ((arr_17 [i_2 - 1] [i_2 + 1] [i_2 + 1] [i_2 + 1]) ? (((/* implicit */unsigned long long int) arr_8 [i_2 + 1] [i_2 + 1])) : (18446744073709551611ULL)));
                var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) ((((/* implicit */_Bool) 18374686479671623680ULL)) ? (((/* implicit */int) arr_9 [i_2])) : (((/* implicit */int) arr_3 [i_2])))))));
            }
        }
        for (short i_7 = 3; i_7 < 14; i_7 += 4) 
        {
            arr_25 [i_2] = (signed char)-63;
            arr_26 [i_2] [i_7 - 3] = ((/* implicit */int) arr_23 [i_2]);
        }
    }
    var_24 = ((/* implicit */signed char) var_9);
}
