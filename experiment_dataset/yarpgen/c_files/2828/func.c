/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2828
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2828 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2828
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
    var_12 = ((/* implicit */unsigned int) max((((((/* implicit */long long int) var_9)) & (min((-1722916835658928210LL), (((/* implicit */long long int) (unsigned char)255)))))), (((/* implicit */long long int) (unsigned char)167))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_13 = ((/* implicit */int) max((var_13), (((/* implicit */int) min(((!(((/* implicit */_Bool) 1721205631U)))), (((130944U) != (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))))));
        var_14 = ((/* implicit */unsigned short) max((((/* implicit */int) (!((!(((/* implicit */_Bool) (unsigned char)65))))))), (((((/* implicit */_Bool) (-(1721205640U)))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0])) && (((/* implicit */_Bool) (signed char)(-127 - 1)))))) : (((/* implicit */int) arr_2 [i_0]))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            var_15 = ((/* implicit */int) arr_2 [i_0]);
            var_16 |= ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)179))));
        }
        var_17 = ((/* implicit */long long int) arr_4 [i_0] [i_0]);
        /* LoopNest 2 */
        for (int i_2 = 3; i_2 < 21; i_2 += 1) 
        {
            for (unsigned int i_3 = 1; i_3 < 21; i_3 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        var_18 = min((((((unsigned int) (_Bool)1)) & (((unsigned int) arr_5 [i_4] [i_4] [i_4])))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_13 [i_3] [i_4])) ? (arr_1 [i_0] [i_0]) : (2105926240)))));
                        var_19 = ((/* implicit */unsigned int) ((1949236774) >= (max(((-2147483647 - 1)), ((+(2147483647)))))));
                        var_20 = ((/* implicit */int) min((1564383109U), (((/* implicit */unsigned int) -370633200))));
                    }
                    for (int i_5 = 0; i_5 < 23; i_5 += 1) 
                    {
                        var_21 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((unsigned int) arr_0 [i_5]))) ^ (min((212014236344959032LL), (((/* implicit */long long int) arr_12 [i_0] [i_2] [i_0] [i_5] [i_5])))))))));
                        var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_2)) : (((((/* implicit */_Bool) (signed char)-48)) ? ((-2147483647 - 1)) : (2147483645)))))) ? (var_1) : (((/* implicit */long long int) min((((/* implicit */unsigned int) arr_6 [i_2 + 1])), (1956752594U))))));
                        var_23 += ((/* implicit */_Bool) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned char)12))))), (487122595U)));
                    }
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (long long int i_6 = 0; i_6 < 23; i_6 += 4) 
                    {
                        var_24 = ((/* implicit */int) arr_8 [i_6]);
                        var_25 |= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_7 [i_0] [i_2]))));
                    }
                    for (unsigned int i_7 = 0; i_7 < 23; i_7 += 3) 
                    {
                        var_26 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */_Bool) 3U)) && (((/* implicit */_Bool) arr_4 [i_2] [i_2 + 2])))))));
                        /* LoopSeq 3 */
                        for (unsigned int i_8 = 2; i_8 < 22; i_8 += 3) 
                        {
                            var_27 = ((/* implicit */int) max((((/* implicit */unsigned int) var_4)), ((-(arr_9 [i_3 + 2] [i_3 + 2])))));
                            var_28 = ((/* implicit */unsigned int) arr_5 [i_2] [i_2] [15]);
                            var_29 = ((/* implicit */unsigned int) ((((/* implicit */int) (!(var_0)))) > (((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_8 + 1] [i_2 + 2])) || (((/* implicit */_Bool) 2591721952U)))))));
                            var_30 = ((/* implicit */_Bool) -212014236344959042LL);
                        }
                        for (unsigned short i_9 = 0; i_9 < 23; i_9 += 2) 
                        {
                            var_31 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((((/* implicit */unsigned int) ((/* implicit */int) var_8))) ^ (var_7))), (1703245343U)))) || (((_Bool) arr_3 [i_3 + 1] [i_2 + 1] [i_2 - 3]))));
                            var_32 = ((/* implicit */int) min((var_32), (((/* implicit */int) (+(max((((/* implicit */long long int) (~(-1)))), (((((/* implicit */_Bool) 2909831616U)) ? (var_1) : (((/* implicit */long long int) var_6)))))))))));
                        }
                        for (long long int i_10 = 3; i_10 < 21; i_10 += 1) 
                        {
                            var_33 = ((/* implicit */unsigned char) min((var_33), (((/* implicit */unsigned char) max((4294967295U), (((/* implicit */unsigned int) -177709638)))))));
                            var_34 = ((/* implicit */int) arr_28 [i_2] [i_2 - 1] [i_10 + 2] [i_3 + 2]);
                            var_35 -= ((/* implicit */unsigned int) arr_6 [i_0]);
                        }
                        var_36 = ((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) 1721205631U)) ? (((int) (unsigned short)58481)) : (((((/* implicit */int) var_0)) << ((((((-2147483647 - 1)) - (-2147483617))) + (49))))))));
                        var_37 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) min((((/* implicit */unsigned int) var_2)), (arr_29 [i_7] [i_3] [i_3 + 2] [i_2] [i_0] [i_0] [i_0]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-1))) : (((((/* implicit */_Bool) arr_9 [i_3 + 2] [i_2 - 2])) ? (((/* implicit */unsigned int) arr_18 [i_3 - 1] [i_2 - 2] [i_2 - 2])) : (arr_9 [i_3 + 2] [i_2 + 1])))));
                    }
                    /* vectorizable */
                    for (int i_11 = 1; i_11 < 21; i_11 += 2) 
                    {
                        var_38 = ((((/* implicit */int) (!(((/* implicit */_Bool) -1440601762))))) < (arr_1 [i_2 - 1] [i_2 + 1]));
                        /* LoopSeq 2 */
                        for (unsigned char i_12 = 1; i_12 < 21; i_12 += 2) 
                        {
                            var_39 = ((/* implicit */int) ((((/* implicit */_Bool) arr_15 [i_2 - 3] [i_2 - 1] [3LL])) && (((/* implicit */_Bool) 1U))));
                            var_40 = ((/* implicit */unsigned char) max((var_40), (((/* implicit */unsigned char) (-(((((/* implicit */_Bool) var_11)) ? (var_7) : (2134488295U))))))));
                        }
                        for (unsigned int i_13 = 0; i_13 < 23; i_13 += 1) 
                        {
                            var_41 = arr_0 [i_2];
                            var_42 = (-(arr_5 [i_3 + 2] [i_0] [i_0]));
                        }
                    }
                    for (unsigned short i_14 = 0; i_14 < 23; i_14 += 1) 
                    {
                        var_43 = ((/* implicit */unsigned int) max((var_43), (arr_28 [i_0] [i_0] [2U] [i_0])));
                        var_44 = ((/* implicit */unsigned char) min((var_44), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)91)) ? (((/* implicit */int) ((signed char) var_2))) : (((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_2))) < (9223372036854775807LL)))))))))));
                    }
                    var_45 = ((/* implicit */unsigned short) (signed char)115);
                }
            } 
        } 
    }
    for (_Bool i_15 = 0; i_15 < 0; i_15 += 1) 
    {
        var_46 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) var_0)) >= (((/* implicit */int) var_3))))) <= (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (_Bool)1)) : (847585999)))))) ^ (((/* implicit */int) ((unsigned short) var_6)))));
        var_47 = ((/* implicit */unsigned short) var_3);
        var_48 = max((((/* implicit */int) min((((3914735308U) == (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_15 + 1] [i_15] [i_15] [i_15]))))), (arr_33 [i_15 + 1])))), (var_4));
    }
}
