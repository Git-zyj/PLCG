/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19310
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19310 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19310
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
    var_14 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-55)) ? (max((((((/* implicit */int) var_11)) ^ (((/* implicit */int) (_Bool)0)))), (((/* implicit */int) var_10)))) : ((~(((/* implicit */int) var_9))))));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 4; i_0 < 13; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_8 [i_1] [i_2] [i_1] [i_0 - 2] = ((/* implicit */short) (+(((((/* implicit */unsigned long long int) 3302051376U)) - (arr_4 [i_0])))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 2; i_3 < 13; i_3 += 2) 
                    {
                        for (short i_4 = 0; i_4 < 15; i_4 += 2) 
                        {
                            {
                                var_15 = ((/* implicit */short) ((((((/* implicit */_Bool) ((long long int) arr_3 [i_4]))) && (((/* implicit */_Bool) (~(var_1)))))) ? (((((/* implicit */_Bool) (unsigned char)46)) ? (65535) : (((/* implicit */int) (unsigned short)19255)))) : (((/* implicit */int) arr_1 [i_0 - 3]))));
                                arr_17 [(signed char)12] [i_4] [i_3] [i_2] [i_1] [i_0] [i_0] = ((/* implicit */int) arr_14 [i_4] [i_4] [i_3] [i_0] [i_1] [i_0] [i_0]);
                            }
                        } 
                    } 
                }
            } 
        } 
        var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_12 [i_0 - 3] [i_0] [0U] [i_0 - 3] [i_0] [i_0])) ? (arr_4 [i_0 - 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-7))))), (((/* implicit */unsigned long long int) ((int) (_Bool)1)))))) && ((!(((/* implicit */_Bool) (~(12703602130758935144ULL))))))));
        /* LoopNest 3 */
        for (int i_5 = 1; i_5 < 14; i_5 += 4) 
        {
            for (long long int i_6 = 0; i_6 < 15; i_6 += 1) 
            {
                for (unsigned long long int i_7 = 0; i_7 < 15; i_7 += 1) 
                {
                    {
                        var_17 = 12703602130758935144ULL;
                        var_18 = ((/* implicit */signed char) (-(max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_16 [i_7] [i_6] [i_6] [i_0] [i_0] [i_0])) < (((/* implicit */int) arr_6 [i_7] [i_6] [i_0]))))), (((unsigned long long int) arr_23 [i_7] [i_6] [i_5] [i_0]))))));
                    }
                } 
            } 
        } 
    }
    for (signed char i_8 = 0; i_8 < 25; i_8 += 2) 
    {
        var_19 &= ((/* implicit */short) (unsigned char)128);
        var_20 &= (!(((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_27 [i_8])) ? (((/* implicit */int) (signed char)114)) : (((/* implicit */int) var_4))))))));
    }
    /* vectorizable */
    for (int i_9 = 1; i_9 < 18; i_9 += 4) 
    {
        arr_31 [i_9] = ((/* implicit */signed char) (-(12440475536782061250ULL)));
        arr_32 [i_9] [i_9] = ((/* implicit */unsigned int) var_7);
        var_21 = ((/* implicit */int) ((((/* implicit */_Bool) arr_29 [i_9] [i_9])) ? (arr_29 [i_9] [i_9]) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_13))))));
    }
    var_22 -= ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((unsigned char) ((var_6) ? (var_3) : (var_3)))))));
    var_23 = ((((((/* implicit */_Bool) max((var_1), (((/* implicit */unsigned long long int) var_13))))) ? (var_3) : (((var_13) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)19255))) : (var_12))))) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))));
}
