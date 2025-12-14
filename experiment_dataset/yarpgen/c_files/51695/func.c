/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51695
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51695 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51695
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
    var_20 = max((((((var_10) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))))) ^ (((/* implicit */unsigned long long int) max((var_13), (((/* implicit */long long int) -2047185076))))))), (((/* implicit */unsigned long long int) var_2)));
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 16; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                arr_5 [i_0] = ((/* implicit */unsigned char) ((long long int) ((((-3382259771974600340LL) / (((/* implicit */long long int) 530103697)))) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)20))))));
                arr_6 [(unsigned char)8] = (((!(((((/* implicit */int) (unsigned short)65535)) <= (((/* implicit */int) var_0)))))) ? (arr_4 [i_1]) : (arr_1 [i_0]));
            }
        } 
    } 
    var_21 = ((/* implicit */int) (+(((((/* implicit */_Bool) (unsigned short)43913)) ? (((((/* implicit */_Bool) 15095691233949298085ULL)) ? (-3414281548982469710LL) : (-3414281548982469710LL))) : (((/* implicit */long long int) ((/* implicit */int) var_15)))))));
    /* LoopNest 3 */
    for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 1) 
    {
        for (long long int i_3 = 0; i_3 < 18; i_3 += 3) 
        {
            for (short i_4 = 0; i_4 < 18; i_4 += 1) 
            {
                {
                    arr_14 [i_2] [i_2] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_8 [i_2]))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 1; i_5 < 16; i_5 += 4) 
                    {
                        for (long long int i_6 = 4; i_6 < 17; i_6 += 1) 
                        {
                            {
                                arr_19 [i_6] [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 3414281548982469710LL)))))) | (-3414281548982469734LL)))) + (arr_12 [i_2] [i_3] [7LL])));
                                arr_20 [i_2] [(unsigned char)4] [i_4] [i_2] [i_6] = ((/* implicit */unsigned char) 3414281548982469708LL);
                            }
                        } 
                    } 
                    arr_21 [i_2] [i_2] [i_4] = ((/* implicit */signed char) ((unsigned long long int) (~(3414281548982469699LL))));
                    arr_22 [i_2] [5] [(unsigned short)16] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_3])) ? ((((+(arr_12 [i_2] [i_2] [i_4]))) * (((/* implicit */unsigned long long int) -3414281548982469687LL)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_2] [14U])) ? (((((/* implicit */long long int) arr_8 [(unsigned char)5])) - (3414281548982469709LL))) : (((/* implicit */long long int) max((((/* implicit */unsigned int) arr_9 [13ULL])), (arr_8 [i_2])))))))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned long long int) (+((-(((long long int) 0LL))))));
}
