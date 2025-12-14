/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246073
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246073 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246073
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
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (short i_1 = 1; i_1 < 9; i_1 += 3) 
        {
            {
                var_18 = ((/* implicit */long long int) arr_2 [i_1] [i_0]);
                arr_5 [i_1] [i_1] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) (+(13144258816792047563ULL)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_1 - 1])) ? (((/* implicit */unsigned long long int) 3970873287U)) : (var_5)))))))));
                arr_6 [i_1] [i_1] = ((/* implicit */unsigned long long int) arr_3 [(_Bool)1] [i_1]);
            }
        } 
    } 
    /* LoopSeq 3 */
    for (unsigned int i_2 = 2; i_2 < 21; i_2 += 3) 
    {
        arr_9 [i_2] = ((/* implicit */signed char) arr_8 [i_2] [i_2]);
        var_19 = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_2] [3ULL])) ? (((/* implicit */int) arr_7 [i_2] [i_2 + 1])) : (((/* implicit */int) arr_7 [i_2] [i_2]))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_2] [i_2]))) >= (var_4)))) : (var_16)))), (((((unsigned long long int) var_12)) << (((((/* implicit */int) arr_8 [i_2 - 1] [i_2 - 1])) - (7067)))))));
        arr_10 [i_2] = ((/* implicit */short) arr_7 [i_2] [i_2]);
        var_20 = max((((/* implicit */long long int) (short)-32753)), (max((-8005311596236555764LL), (((/* implicit */long long int) (short)-32748)))));
    }
    for (int i_3 = 3; i_3 < 10; i_3 += 3) 
    {
        arr_13 [i_3] [i_3] = ((/* implicit */unsigned long long int) var_3);
        var_21 ^= var_5;
        var_22 ^= ((/* implicit */unsigned int) ((unsigned char) ((short) ((((/* implicit */_Bool) arr_11 [i_3 - 2] [(short)8])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_12 [i_3] [i_3]))))));
        var_23 += ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_3] [i_3]))) >= (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32752)) ? (((/* implicit */int) (unsigned short)25584)) : (((/* implicit */int) (short)32753))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_3] [i_3]))) : (((((/* implicit */_Bool) arr_8 [(unsigned char)1] [i_3])) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_3] [i_3])))))))));
        arr_14 [(signed char)4] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)65529)) || (((/* implicit */_Bool) (short)18375))));
    }
    for (long long int i_4 = 0; i_4 < 18; i_4 += 4) 
    {
        arr_17 [16LL] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_4] [i_4])) ? (min((((long long int) (unsigned short)21201)), (arr_15 [12] [i_4]))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_16 [i_4] [i_4])) == (((/* implicit */int) arr_16 [i_4] [i_4]))))))));
        /* LoopNest 2 */
        for (short i_5 = 1; i_5 < 17; i_5 += 3) 
        {
            for (unsigned long long int i_6 = 3; i_6 < 15; i_6 += 3) 
            {
                {
                    var_24 = ((/* implicit */unsigned long long int) arr_20 [i_4]);
                    /* LoopNest 2 */
                    for (unsigned int i_7 = 3; i_7 < 17; i_7 += 4) 
                    {
                        for (unsigned char i_8 = 3; i_8 < 16; i_8 += 4) 
                        {
                            {
                                var_25 = ((/* implicit */unsigned short) (-((~(((/* implicit */int) (_Bool)1))))));
                                arr_28 [i_8] [i_7] [i_6] [i_5] [i_4] |= ((/* implicit */unsigned long long int) arr_19 [i_5] [i_4] [i_5]);
                            }
                        } 
                    } 
                }
            } 
        } 
        var_26 = ((/* implicit */unsigned int) min((((int) min((((/* implicit */unsigned long long int) (short)32761)), (17973706783879750845ULL)))), (((/* implicit */int) var_17))));
    }
    var_27 = ((/* implicit */unsigned long long int) var_7);
    var_28 = ((/* implicit */signed char) var_14);
}
