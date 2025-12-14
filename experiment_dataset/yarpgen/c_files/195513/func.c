/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195513
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195513 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195513
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
    var_12 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_10))));
    var_13 = ((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((var_0) >> (((((/* implicit */int) var_9)) + (130)))))) ? (((int) var_9)) : ((~(((/* implicit */int) var_7))))))) < (min((4026113342560823545LL), (((/* implicit */long long int) (!(((/* implicit */_Bool) 3525420707U)))))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 3; i_0 < 23; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 23; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                {
                    var_14 = ((/* implicit */signed char) (+(((/* implicit */int) ((_Bool) arr_1 [i_0 - 1])))));
                    arr_7 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1934862930477192122LL)) ? (((/* implicit */int) arr_6 [i_0 - 2] [i_0] [i_0 - 3])) : (((/* implicit */int) var_5))))) ? (((((-4026113342560823546LL) + (9223372036854775807LL))) >> (((/* implicit */int) (signed char)14)))) : (((/* implicit */long long int) ((769546589U) * (((/* implicit */unsigned int) ((/* implicit */int) var_5))))))))) ? ((-(var_3))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1 - 3] [i_1 - 3])))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (signed char i_3 = 0; i_3 < 24; i_3 += 1) /* same iter space */
                    {
                        var_15 = (unsigned short)3300;
                        arr_10 [i_0] [i_2] [(unsigned char)22] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_3] [i_3] [i_3]))))) ? (((arr_6 [i_0] [i_1] [i_1]) ? (-4026113342560823534LL) : (((/* implicit */long long int) var_0)))) : (arr_5 [i_0 - 2] [i_0 - 3] [i_0 - 3])));
                    }
                    for (signed char i_4 = 0; i_4 < 24; i_4 += 1) /* same iter space */
                    {
                        arr_14 [i_0] [i_1 - 3] [i_2] [i_2] [i_0] = ((arr_4 [i_1 - 3]) * (min((((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_2] [i_0] [i_4])) ? (3525420710U) : (((/* implicit */unsigned int) var_8)))), (((/* implicit */unsigned int) arr_1 [i_0 - 2])))));
                        var_16 += ((/* implicit */long long int) (((~(arr_12 [i_2] [i_0 + 1]))) * (((/* implicit */unsigned int) ((/* implicit */int) var_5)))));
                        arr_15 [18U] [18U] [i_1 + 1] [i_1 - 1] [i_2] |= ((((/* implicit */int) ((_Bool) ((((/* implicit */int) (_Bool)1)) >> (((var_8) - (1279537177))))))) * (min((-1615282201), (((((/* implicit */_Bool) (signed char)126)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_1)))))));
                        var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) (((~(((/* implicit */int) (signed char)-93)))) < (((/* implicit */int) ((arr_4 [i_1 - 3]) < (arr_4 [i_1 - 1])))))))));
                    }
                    /* vectorizable */
                    for (signed char i_5 = 0; i_5 < 24; i_5 += 1) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (unsigned int i_6 = 0; i_6 < 24; i_6 += 3) 
                        {
                            var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_1 - 2] [i_1 - 2] [i_1 - 2] [i_5] [i_0] [i_5])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (((((/* implicit */_Bool) var_5)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))));
                            var_19 = ((/* implicit */_Bool) var_5);
                            var_20 = (~(((/* implicit */int) arr_0 [i_0 - 3] [i_1 - 3])));
                        }
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            var_21 = ((/* implicit */_Bool) (~(-8469759060395507960LL)));
                            var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) ((((/* implicit */int) arr_18 [(_Bool)1] [(_Bool)1] [i_0] [15LL] [i_0] [i_0 - 2] [i_0 - 1])) >> (((/* implicit */int) var_11)))))));
                            var_23 = ((/* implicit */_Bool) -9167906945392607454LL);
                            var_24 = ((/* implicit */unsigned short) arr_4 [i_2]);
                        }
                        var_25 = ((/* implicit */signed char) ((((unsigned int) 2579532708U)) >> (((var_3) - (3904420884568561315ULL)))));
                        var_26 ^= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (signed char)80)) : (((/* implicit */int) arr_20 [i_0] [19] [(unsigned short)5] [i_2] [i_2])))) / (arr_16 [i_2] [i_0] [i_2])));
                        var_27 &= ((/* implicit */signed char) arr_8 [i_2] [i_2] [i_2] [i_1 - 1] [i_0] [i_2]);
                    }
                }
            } 
        } 
        var_28 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_13 [i_0] [10U] [i_0])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned short)50138)))), (((/* implicit */int) min(((unsigned short)18203), (((/* implicit */unsigned short) (_Bool)1)))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_0))))) : (((/* implicit */int) ((signed char) (-(((/* implicit */int) arr_20 [i_0] [i_0] [i_0] [i_0] [i_0]))))))));
        var_29 = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)15)) ? (1983195474) : (((/* implicit */int) (unsigned char)64))));
    }
}
