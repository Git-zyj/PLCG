/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42383
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42383 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42383
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
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            for (signed char i_2 = 1; i_2 < 10; i_2 += 1) 
            {
                {
                    var_13 = ((/* implicit */unsigned int) (_Bool)0);
                    var_14 = ((/* implicit */short) max((max((((/* implicit */unsigned int) arr_6 [i_2 + 2] [i_2 + 3] [i_2 + 2] [i_2 + 2])), (var_1))), (max((((/* implicit */unsigned int) (_Bool)1)), (2490887802U)))));
                    arr_9 [i_2] [i_0] [i_1] [(unsigned char)10] = ((/* implicit */unsigned int) max((min((((/* implicit */unsigned long long int) (+(arr_7 [i_0] [i_1] [i_2] [i_2])))), (min((4431649953677929423ULL), (var_4))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((18446744073709551613ULL), (((/* implicit */unsigned long long int) 1342036240))))) ? (((/* implicit */int) arr_3 [i_0] [12U])) : (((/* implicit */int) max((((/* implicit */short) (_Bool)1)), ((short)22212)))))))));
                    var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) max((-2147483641), (((/* implicit */int) (unsigned short)15)))))));
                    arr_10 [i_2] [i_1] [i_2] = ((/* implicit */signed char) 13379640746469991051ULL);
                }
            } 
        } 
        arr_11 [i_0] = ((/* implicit */unsigned long long int) min(((-2147483647 - 1)), (((min(((_Bool)1), (var_11))) ? (((/* implicit */int) min((((/* implicit */short) var_11)), (var_10)))) : ((-2147483647 - 1))))));
        var_16 = ((/* implicit */unsigned short) arr_0 [i_0]);
        /* LoopNest 3 */
        for (unsigned int i_3 = 4; i_3 < 12; i_3 += 2) 
        {
            for (long long int i_4 = 1; i_4 < 11; i_4 += 1) 
            {
                for (short i_5 = 2; i_5 < 9; i_5 += 1) 
                {
                    {
                        var_17 = ((/* implicit */unsigned int) (short)-17825);
                        arr_18 [i_4] [i_3 - 1] = ((/* implicit */short) arr_4 [i_0] [i_0]);
                        var_18 += ((/* implicit */short) arr_12 [i_4] [i_5 + 2]);
                        var_19 = ((/* implicit */long long int) min((var_19), (((((/* implicit */_Bool) 14015094120031622192ULL)) ? (((((/* implicit */_Bool) min((arr_6 [i_0] [i_3] [i_4] [i_5]), (((/* implicit */int) arr_12 [i_3 - 2] [i_3]))))) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (max((arr_5 [10ULL] [i_3 - 2] [i_3 - 3] [11ULL]), (((/* implicit */long long int) var_2)))))) : (((/* implicit */long long int) var_1))))));
                    }
                } 
            } 
        } 
    }
    /* LoopSeq 2 */
    for (unsigned long long int i_6 = 0; i_6 < 19; i_6 += 3) 
    {
        var_20 = (signed char)-1;
        arr_21 [i_6] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) var_0))) & ((+(arr_19 [i_6])))));
    }
    for (signed char i_7 = 0; i_7 < 20; i_7 += 4) 
    {
        arr_24 [i_7] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((max((((/* implicit */unsigned long long int) arr_23 [i_7])), (var_4))), (((/* implicit */unsigned long long int) arr_23 [7U]))))) ? (max((((/* implicit */long long int) var_5)), (min((-9066601491338359739LL), (((/* implicit */long long int) (unsigned short)65530)))))) : (((/* implicit */long long int) max((((var_11) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (signed char)-1)))), (((/* implicit */int) arr_22 [15U])))))));
        var_21 = ((/* implicit */short) ((var_7) != (((/* implicit */unsigned long long int) ((/* implicit */int) (short)610)))));
    }
}
