/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20658
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20658 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20658
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
    /* LoopSeq 2 */
    for (unsigned int i_0 = 1; i_0 < 12; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) max((((/* implicit */int) ((((/* implicit */long long int) 2043019607U)) <= (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (var_0) : (((/* implicit */long long int) var_11))))))), ((~(((/* implicit */int) var_17))))));
        arr_3 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) max((((/* implicit */unsigned short) arr_0 [i_0 + 2])), ((unsigned short)8840)))) | (((/* implicit */int) max((arr_0 [i_0 - 1]), (arr_0 [i_0 + 2]))))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (unsigned long long int i_3 = 2; i_3 < 12; i_3 += 4) 
                {
                    {
                        arr_14 [i_0] [i_1] [i_2] [i_2] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (min((arr_12 [i_1] [i_3 + 2] [i_0 + 2] [i_3] [i_1]), (((/* implicit */long long int) max((((/* implicit */unsigned short) var_10)), ((unsigned short)52037)))))) : (((/* implicit */long long int) var_15))));
                        arr_15 [i_0] [i_0] &= (+(((((/* implicit */_Bool) arr_7 [i_3 - 2] [i_0 + 1] [i_0 + 2])) ? (((/* implicit */int) arr_4 [i_3 - 1] [i_3])) : (((/* implicit */int) arr_4 [i_3 - 2] [i_3])))));
                    }
                } 
            } 
        } 
    }
    for (signed char i_4 = 0; i_4 < 19; i_4 += 1) 
    {
        arr_20 [i_4] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_10))));
        /* LoopNest 2 */
        for (signed char i_5 = 0; i_5 < 19; i_5 += 2) 
        {
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                {
                    var_19 = ((/* implicit */unsigned long long int) max((var_4), (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_6)) / (arr_16 [i_4] [i_4])))) ? (((/* implicit */int) ((signed char) var_7))) : (max((((/* implicit */int) (signed char)-123)), (var_16)))))));
                    /* LoopNest 2 */
                    for (int i_7 = 2; i_7 < 16; i_7 += 2) 
                    {
                        for (signed char i_8 = 0; i_8 < 19; i_8 += 2) 
                        {
                            {
                                var_20 = max((max((((/* implicit */int) (unsigned short)8825)), (((((/* implicit */int) (signed char)-109)) * (((/* implicit */int) (unsigned char)10)))))), (((/* implicit */int) ((unsigned short) var_4))));
                                arr_32 [i_4] [i_5] [i_7] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((unsigned long long int) (unsigned short)2032)), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)8840))) / (var_0))))))) ? ((~((~(((/* implicit */int) var_17)))))) : ((-((+(((/* implicit */int) var_13))))))));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */unsigned short) (+(((unsigned int) var_9))));
                    var_22 = min((var_3), ((~(((/* implicit */int) arr_22 [i_4])))));
                }
            } 
        } 
    }
    var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((min((((/* implicit */long long int) 2754697942U)), (var_0))), (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (unsigned short)3968)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((unsigned short) var_6)), (((/* implicit */unsigned short) max((var_12), (var_12)))))))) : (((unsigned long long int) (((_Bool)1) ? (var_11) : (((/* implicit */int) var_18)))))));
    var_24 |= ((/* implicit */short) ((((/* implicit */_Bool) var_17)) ? (var_0) : (((/* implicit */long long int) (-(((/* implicit */int) var_13)))))));
    var_25 ^= ((/* implicit */unsigned short) ((long long int) ((((/* implicit */int) (unsigned short)65535)) ^ (((/* implicit */int) (unsigned short)8840)))));
    var_26 = ((/* implicit */long long int) var_9);
}
