/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2670
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2670 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2670
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
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (int i_1 = 4; i_1 < 7; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                {
                    var_15 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) var_0))) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_1 + 2])))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 4137022534U)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-8))) : (-1LL)))) ? (((/* implicit */long long int) ((int) -1LL))) : (4847239862513794783LL))) : (((/* implicit */long long int) ((/* implicit */int) var_5)))));
                    var_16 = ((/* implicit */unsigned char) ((((unsigned long long int) arr_1 [i_1 + 3] [i_1 + 2])) + (((/* implicit */unsigned long long int) ((arr_1 [i_1 + 3] [i_1 - 3]) * (((/* implicit */long long int) ((/* implicit */int) var_7))))))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_3 = 0; i_3 < 16; i_3 += 3) 
    {
        /* LoopNest 2 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            for (unsigned short i_5 = 2; i_5 < 13; i_5 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 16; i_6 += 3) 
                    {
                        for (signed char i_7 = 0; i_7 < 16; i_7 += 3) 
                        {
                            {
                                var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned int) var_8))) ? (((/* implicit */long long int) ((/* implicit */int) ((3650117692806223279LL) < (((/* implicit */long long int) ((/* implicit */int) var_5))))))) : (var_13))))));
                                var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (arr_19 [i_3] [i_3] [i_5] [i_7]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-126)))))) && (((/* implicit */_Bool) var_0)))))));
                                var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_20 [i_5 - 1] [i_5 + 3] [i_5] [i_5 + 3])))))));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */int) (signed char)-115);
                }
            } 
        } 
        /* LoopNest 2 */
        for (long long int i_8 = 2; i_8 < 15; i_8 += 3) 
        {
            for (int i_9 = 2; i_9 < 15; i_9 += 3) 
            {
                {
                    var_21 &= ((int) (signed char)-126);
                    var_22 = ((/* implicit */unsigned long long int) 9158130964435184002LL);
                    var_23 = ((/* implicit */signed char) var_13);
                }
            } 
        } 
        /* LoopNest 3 */
        for (int i_10 = 0; i_10 < 16; i_10 += 3) 
        {
            for (int i_11 = 0; i_11 < 16; i_11 += 3) 
            {
                for (unsigned char i_12 = 0; i_12 < 16; i_12 += 3) 
                {
                    {
                        var_24 = ((int) var_13);
                        var_25 = ((/* implicit */signed char) ((int) var_0));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (long long int i_13 = 0; i_13 < 16; i_13 += 3) 
        {
            for (long long int i_14 = 0; i_14 < 16; i_14 += 3) 
            {
                {
                    var_26 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_13 [i_3] [i_13])) & (arr_24 [5LL] [i_13] [5LL] [i_13])));
                    var_27 = ((/* implicit */signed char) ((unsigned short) var_1));
                }
            } 
        } 
    }
}
