/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48014
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48014 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48014
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
    var_14 &= ((((/* implicit */_Bool) ((signed char) var_11))) ? ((~(((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)7))) : (0LL))))) : (((/* implicit */long long int) ((/* implicit */int) var_10))));
    var_15 = ((/* implicit */signed char) ((var_12) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((var_6) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) var_7))))))))) : (((/* implicit */int) var_10))));
    var_16 &= min((((/* implicit */unsigned char) (_Bool)0)), (min((((/* implicit */unsigned char) var_13)), (var_8))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (signed char i_1 = 1; i_1 < 13; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        arr_15 [i_0] [i_0] [i_0] [i_2] = ((/* implicit */unsigned char) var_6);
                        var_17 -= ((/* implicit */unsigned char) max((((/* implicit */long long int) (~((((_Bool)0) ? (((/* implicit */int) arr_14 [i_0])) : (((/* implicit */int) (signed char)72))))))), (min((7074239446259646488LL), (((/* implicit */long long int) (unsigned char)215))))));
                        var_18 = ((/* implicit */signed char) ((_Bool) (+(((/* implicit */int) arr_2 [(signed char)6])))));
                    }
                    for (unsigned char i_4 = 1; i_4 < 14; i_4 += 3) 
                    {
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (long long int i_5 = 3; i_5 < 12; i_5 += 2) /* same iter space */
                        {
                            var_19 &= ((/* implicit */unsigned char) (+(((/* implicit */int) (signed char)0))));
                            arr_23 [3LL] [9LL] [i_2] [(unsigned char)11] [i_2] [(_Bool)0] [i_2] = ((/* implicit */_Bool) (((!((_Bool)0))) ? (3829328884733870412LL) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_2] [i_2] [i_2] [i_2])))));
                        }
                        for (long long int i_6 = 3; i_6 < 12; i_6 += 2) /* same iter space */
                        {
                            var_20 = ((/* implicit */_Bool) (+(((/* implicit */int) (signed char)109))));
                            arr_26 [i_0] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~((~(((/* implicit */int) var_5))))))) ? (((((/* implicit */_Bool) (unsigned char)98)) ? (max((-5254297027550967233LL), (-7562387670426043795LL))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)87))))) : (((((/* implicit */_Bool) max((var_4), ((signed char)127)))) ? (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned char) arr_4 [i_0] [i_0])), (var_8))))) : (min((((/* implicit */long long int) (signed char)-127)), (0LL)))))));
                            var_21 = ((/* implicit */signed char) min((((var_11) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)1)))), (((/* implicit */int) min((var_8), (((/* implicit */unsigned char) var_6)))))));
                            var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) (+(-1382323184008854786LL))))));
                        }
                        for (long long int i_7 = 3; i_7 < 12; i_7 += 2) /* same iter space */
                        {
                            var_23 = ((/* implicit */unsigned char) min((var_23), (max((max((((/* implicit */unsigned char) ((signed char) (_Bool)0))), ((unsigned char)179))), (((/* implicit */unsigned char) ((signed char) ((((/* implicit */_Bool) (unsigned char)179)) ? (((/* implicit */int) (signed char)-38)) : (((/* implicit */int) (_Bool)1))))))))));
                            var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((min((((/* implicit */long long int) arr_6 [7LL] [7LL])), (-955421684152352273LL))), (min((((/* implicit */long long int) (_Bool)1)), (-6186007190002599656LL)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [(unsigned char)5])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (signed char)127))))) ? (((/* implicit */long long int) (-(((/* implicit */int) var_12))))) : ((~(-194879903073554115LL))))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) (-(((/* implicit */int) arr_9 [i_2] [i_1] [i_1 + 1] [i_1 - 1])))))))));
                        }
                        for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
                        {
                            var_25 = ((/* implicit */_Bool) (((~(((/* implicit */int) var_6)))) + (((/* implicit */int) min((((/* implicit */signed char) arr_18 [i_2])), (var_4))))));
                            arr_32 [i_0] [i_2] [(_Bool)1] [9LL] [i_0] = ((long long int) (!(((/* implicit */_Bool) min((-964496149393721928LL), (((/* implicit */long long int) (signed char)97)))))));
                            arr_33 [i_0] [i_0] [i_2] [i_0] [(unsigned char)0] = ((/* implicit */signed char) min(((~(((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */int) arr_18 [i_2])) : (((/* implicit */int) (_Bool)0)))))), (((/* implicit */int) ((unsigned char) var_1)))));
                            var_26 = ((/* implicit */long long int) min((var_26), ((~(((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_11))))) ? (((/* implicit */long long int) ((/* implicit */int) max(((_Bool)0), ((_Bool)0))))) : (min(((-9223372036854775807LL - 1LL)), (9223372036854775807LL)))))))));
                        }
                        arr_34 [i_2] = ((/* implicit */_Bool) (-(((/* implicit */int) min((arr_5 [i_1 - 1] [i_1 + 1] [i_1]), (arr_5 [i_1] [i_1 - 1] [i_1]))))));
                        var_27 = ((/* implicit */unsigned char) min((var_27), (((/* implicit */unsigned char) var_1))));
                        arr_35 [i_0] [i_0] [i_0] [i_4] [i_2] = ((/* implicit */_Bool) (+(max((((/* implicit */long long int) max((((/* implicit */signed char) (_Bool)1)), (var_2)))), (min((var_3), (((/* implicit */long long int) (unsigned char)246))))))));
                        var_28 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_6 [(unsigned char)6] [4LL])) & (((/* implicit */int) (((((_Bool)0) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (-4128255310302805038LL))) <= (((/* implicit */long long int) ((/* implicit */int) var_10))))))));
                    }
                    var_29 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : ((-(arr_12 [i_0] [i_0] [i_2] [(_Bool)1] [i_0])))))) ? (min((((/* implicit */long long int) (+(((/* implicit */int) var_5))))), (max((((/* implicit */long long int) (_Bool)1)), (var_9))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2091172975184279301LL)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) (unsigned char)147)) ? (((/* implicit */int) (unsigned char)243)) : (((/* implicit */int) (unsigned char)27)))) : (((/* implicit */int) arr_2 [i_1 + 2])))))));
                }
            } 
        } 
    } 
    var_30 ^= (~(((((/* implicit */_Bool) min((((/* implicit */long long int) var_7)), (-5413726617123207600LL)))) ? (((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))))) : (min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) var_5)))))));
}
