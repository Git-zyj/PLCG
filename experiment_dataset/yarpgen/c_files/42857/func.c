/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42857
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42857 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42857
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
    var_16 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-16149)) ? (18264839119202190921ULL) : (((((/* implicit */_Bool) 2800843988U)) ? (18264839119202190921ULL) : (18264839119202190891ULL))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                var_17 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_1])) ? (arr_4 [i_1] [i_0] [i_0]) : (arr_4 [i_1] [i_1] [i_0])))), ((+(181904954507360694ULL)))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 13; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 13; i_3 += 1) 
                    {
                        {
                            arr_10 [i_1] [i_2] = ((/* implicit */long long int) ((max((((((/* implicit */_Bool) arr_5 [i_0] [i_0])) ? (18264839119202190922ULL) : (181904954507360690ULL))), (((/* implicit */unsigned long long int) ((arr_8 [i_2] [i_2]) ? (4228967718U) : (((/* implicit */unsigned int) var_4))))))) | (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_3 [i_0])))))));
                            var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */unsigned long long int) 9223372036854775805LL)) : (18264839119202190920ULL)));
                            arr_11 [i_3] [i_2] [i_1] [i_0] = ((/* implicit */long long int) ((signed char) 13LL));
                            var_19 ^= ((/* implicit */short) min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_2 [i_0] [i_1]) > (((/* implicit */unsigned int) ((/* implicit */int) var_8))))))) > (((var_10) + (arr_0 [i_2] [i_0])))))), (max((max((((/* implicit */unsigned long long int) arr_4 [i_0] [i_1] [i_3])), (18264839119202190920ULL))), (((/* implicit */unsigned long long int) arr_7 [i_2] [i_2] [(signed char)1] [i_1] [i_0]))))));
                        }
                    } 
                } 
                arr_12 [i_1] = ((/* implicit */short) ((((/* implicit */unsigned int) 162108241)) ^ (1354421225U)));
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 13; i_4 += 2) 
                {
                    for (unsigned char i_5 = 0; i_5 < 13; i_5 += 3) 
                    {
                        for (long long int i_6 = 0; i_6 < 13; i_6 += 1) 
                        {
                            {
                                var_20 = arr_0 [i_1] [i_1];
                                var_21 *= ((/* implicit */_Bool) var_1);
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_7 = 0; i_7 < 13; i_7 += 1) 
                {
                    for (unsigned long long int i_8 = 0; i_8 < 13; i_8 += 1) 
                    {
                        {
                            arr_27 [i_8] &= ((/* implicit */long long int) (-((-(arr_17 [i_7] [i_7] [i_0] [i_0])))));
                            arr_28 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) 18264839119202190922ULL)) ? (18264839119202190923ULL) : (18264839119202190912ULL)))));
                        }
                    } 
                } 
            }
        } 
    } 
}
