/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44175
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44175 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44175
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
    for (int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 4 */
                    for (short i_3 = 1; i_3 < 17; i_3 += 2) 
                    {
                        var_19 = ((/* implicit */unsigned short) 125926880114230127LL);
                        var_20 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) (signed char)13)) : (((/* implicit */int) (signed char)-1))))), (arr_9 [10U] [i_1] [19ULL] [1U])));
                    }
                    for (signed char i_4 = 1; i_4 < 19; i_4 += 1) 
                    {
                        var_21 = ((/* implicit */short) 1152921504606846976LL);
                        arr_12 [i_4 + 1] [i_4] [i_2] [i_2] [i_1] [i_0] = min((2500137368U), (((/* implicit */unsigned int) (signed char)0)));
                    }
                    /* vectorizable */
                    for (long long int i_5 = 0; i_5 < 20; i_5 += 1) 
                    {
                        var_22 = ((/* implicit */unsigned char) ((arr_10 [i_0]) / ((~(((/* implicit */int) arr_16 [i_0]))))));
                        arr_17 [i_0] [i_0] = (unsigned char)2;
                        arr_18 [i_5] = ((/* implicit */unsigned long long int) ((signed char) arr_11 [i_0] [i_0]));
                    }
                    for (unsigned short i_6 = 2; i_6 < 19; i_6 += 2) 
                    {
                        var_23 += ((((/* implicit */_Bool) (short)22586)) ? (2500137368U) : (((/* implicit */unsigned int) (-2147483647 - 1))));
                        arr_22 [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) -831572786)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_11 [i_2] [i_0])))) : (((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))) : (arr_1 [i_6 - 2])))));
                    }
                    arr_23 [19ULL] [19ULL] [i_2] [i_2] = ((/* implicit */unsigned int) ((long long int) ((((/* implicit */_Bool) 9223372036854775793LL)) ? (((9223372036854775793LL) / (((/* implicit */long long int) ((/* implicit */int) (short)-19638))))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)147))))));
                    arr_24 [i_0] [i_0] [i_2] = ((/* implicit */long long int) (short)-22586);
                    arr_25 [i_0] [i_0] [19] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) -989478441)) ? (((/* implicit */unsigned long long int) (-2147483647 - 1))) : (14137440616901040797ULL)));
                    arr_26 [i_0] [8U] = ((/* implicit */unsigned short) arr_5 [i_1] [i_1] [i_1]);
                }
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned int i_7 = 0; i_7 < 20; i_7 += 3) 
        {
            var_24 = ((/* implicit */int) ((unsigned char) ((((((/* implicit */_Bool) (signed char)0)) ? (15510486870061980273ULL) : (8568118751729832074ULL))) == (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (short)29454)) : (989478440)))))));
            /* LoopNest 2 */
            for (unsigned int i_8 = 0; i_8 < 20; i_8 += 2) 
            {
                for (int i_9 = 0; i_9 < 20; i_9 += 1) 
                {
                    {
                        var_25 = ((/* implicit */int) var_6);
                        arr_35 [i_0] [17U] [17U] [i_7] [i_0] [i_9] = ((/* implicit */int) (unsigned short)0);
                        arr_36 [i_0] [19U] [i_7] [19U] [i_7] = ((/* implicit */unsigned short) (unsigned char)28);
                    }
                } 
            } 
        }
        var_26 = ((/* implicit */long long int) ((unsigned long long int) min((((/* implicit */long long int) min((arr_6 [i_0] [i_0] [i_0] [i_0]), (((/* implicit */unsigned int) (unsigned short)65531))))), (((((/* implicit */_Bool) (unsigned char)64)) ? (((/* implicit */long long int) arr_9 [19U] [i_0] [i_0] [i_0])) : (var_14))))));
    }
    for (int i_10 = 0; i_10 < 15; i_10 += 3) 
    {
        var_27 = ((/* implicit */int) (~(((unsigned int) (unsigned short)65535))));
        var_28 = ((/* implicit */long long int) (signed char)126);
    }
    var_29 = min((((/* implicit */int) (!(((/* implicit */_Bool) (-(var_3))))))), (max((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (unsigned char)227)) : (var_11))), (((/* implicit */int) var_5)))));
    var_30 = ((/* implicit */int) max((((/* implicit */short) ((((/* implicit */_Bool) -9223372036854775793LL)) || (((/* implicit */_Bool) 9223372036854775793LL))))), (((short) min(((unsigned char)96), (((/* implicit */unsigned char) var_5)))))));
    var_31 = ((/* implicit */signed char) max((max((-8454352210248332719LL), (((/* implicit */long long int) max((var_16), (2447012987U)))))), (var_7)));
}
