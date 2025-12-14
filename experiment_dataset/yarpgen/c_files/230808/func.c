/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230808
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230808 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230808
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
    var_11 = ((/* implicit */short) max((var_11), (((/* implicit */short) var_4))));
    var_12 = ((/* implicit */_Bool) var_10);
    var_13 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (-(var_9)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) -1106743406)) ? (var_8) : (((/* implicit */int) var_0))))))) ? (((/* implicit */int) min((max((var_0), (var_0))), (((/* implicit */signed char) var_1))))) : (((((/* implicit */_Bool) min((var_8), (var_10)))) ? (((/* implicit */int) min((((/* implicit */unsigned short) var_1)), ((unsigned short)65535)))) : (var_7)))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 3; i_0 < 16; i_0 += 1) 
    {
        arr_2 [i_0 - 1] = ((unsigned char) (!(((/* implicit */_Bool) var_2))));
        var_14 *= ((/* implicit */unsigned int) arr_1 [i_0]);
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                {
                    arr_8 [(unsigned char)3] [(unsigned char)7] [i_2] = (!(((((/* implicit */_Bool) min((arr_0 [i_0 - 1]), (-1)))) && (((/* implicit */_Bool) var_9)))));
                    arr_9 [5ULL] [i_1] [i_1] = ((/* implicit */short) 1106743428);
                    arr_10 [i_0] = ((/* implicit */unsigned int) max((var_2), (arr_0 [i_0 - 3])));
                    var_15 = ((/* implicit */int) ((((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)65522))))) | (var_4)));
                }
            } 
        } 
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_3 = 1; i_3 < 15; i_3 += 1) 
    {
        /* LoopNest 2 */
        for (long long int i_4 = 0; i_4 < 18; i_4 += 4) 
        {
            for (unsigned short i_5 = 1; i_5 < 17; i_5 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (short i_7 = 0; i_7 < 18; i_7 += 3) 
                        {
                            var_16 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_23 [i_3 + 2] [i_4] [i_4] [i_6] [i_3 + 1]))));
                            arr_25 [i_3] [i_4] [i_7] [i_7] [i_7] = ((/* implicit */signed char) (unsigned short)48455);
                        }
                        var_17 = ((/* implicit */signed char) (~(((/* implicit */int) ((_Bool) var_1)))));
                    }
                    arr_26 [13U] [1LL] [1LL] = 1106743405;
                }
            } 
        } 
        arr_27 [i_3] = ((/* implicit */signed char) (!(var_1)));
        /* LoopNest 3 */
        for (short i_8 = 0; i_8 < 18; i_8 += 3) 
        {
            for (unsigned long long int i_9 = 0; i_9 < 18; i_9 += 3) 
            {
                for (int i_10 = 0; i_10 < 18; i_10 += 1) 
                {
                    {
                        arr_37 [i_3 + 1] [i_8] [i_8] [i_10] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) -1106743438)) < (arr_36 [i_3 + 1] [14ULL] [i_3 + 3] [i_3 - 1])));
                        /* LoopSeq 4 */
                        for (unsigned short i_11 = 0; i_11 < 18; i_11 += 3) 
                        {
                            arr_40 [i_3] [i_8] [i_3] [i_8] [i_11] = ((/* implicit */int) (signed char)-38);
                            var_18 ^= (~(3042380334U));
                            var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) (-(var_2))))));
                            arr_41 [i_8] [i_8] = ((/* implicit */signed char) (-(-2147483634)));
                        }
                        for (unsigned int i_12 = 3; i_12 < 17; i_12 += 1) /* same iter space */
                        {
                            arr_44 [(unsigned short)8] [i_9] |= ((/* implicit */signed char) (~(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned short)41815))))));
                            var_20 = ((/* implicit */long long int) min((var_20), ((~(-377901586554703421LL)))));
                            var_21 ^= ((/* implicit */unsigned long long int) ((var_1) ? (var_7) : (((/* implicit */int) arr_17 [i_3] [i_8]))));
                        }
                        for (unsigned int i_13 = 3; i_13 < 17; i_13 += 1) /* same iter space */
                        {
                            var_22 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_34 [6ULL] [i_10])) ? (arr_42 [i_3 - 1] [i_3 + 2] [i_3 + 2] [16LL]) : (((/* implicit */unsigned long long int) arr_28 [i_3 + 3]))));
                            arr_47 [i_3] [i_8] [i_9] [i_9] [i_9] [12] &= ((/* implicit */signed char) ((short) arr_42 [i_3 + 3] [i_3 + 2] [i_10] [0]));
                            arr_48 [i_8] [i_8] [(unsigned char)10] [i_8] [i_8] = ((/* implicit */int) ((((/* implicit */int) (signed char)-48)) >= (((/* implicit */int) arr_24 [i_3 + 1] [i_13] [i_13] [i_13 + 1] [i_3 + 1]))));
                            arr_49 [i_8] = ((/* implicit */int) var_4);
                            arr_50 [(signed char)4] [(signed char)16] [i_8] [i_3 - 1] [i_13] = ((/* implicit */unsigned int) ((unsigned char) (+(var_3))));
                        }
                        for (unsigned int i_14 = 3; i_14 < 17; i_14 += 1) /* same iter space */
                        {
                            arr_53 [i_3 + 2] [i_3 + 3] [i_3 + 2] [i_8] [i_3 + 2] = ((/* implicit */long long int) (~((~(((/* implicit */int) arr_29 [i_8] [(short)15]))))));
                            arr_54 [i_3] [i_8] [i_9] [i_10] [i_3] [i_8] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) -1106743429)) && (((/* implicit */_Bool) 1106743406)))))) ^ ((~(3830734578650770675LL)))));
                            arr_55 [i_3] [i_8] [i_3] [i_8] [i_14] [i_8] = ((/* implicit */int) var_1);
                            var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) var_8)))))))));
                            var_24 = ((/* implicit */long long int) (-(((/* implicit */int) var_5))));
                        }
                    }
                } 
            } 
        } 
    }
    for (int i_15 = 0; i_15 < 25; i_15 += 3) 
    {
        var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) (~(((/* implicit */int) ((_Bool) ((15151239913021731708ULL) + (((/* implicit */unsigned long long int) 1106743418)))))))))));
        var_26 = ((/* implicit */long long int) min((var_26), (((/* implicit */long long int) var_9))));
        arr_58 [i_15] = ((((/* implicit */_Bool) min((((((/* implicit */long long int) ((/* implicit */int) (short)32767))) % (arr_56 [i_15]))), (((/* implicit */long long int) (~(var_9))))))) ? (((((/* implicit */_Bool) ((unsigned char) var_3))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_5)))) : (arr_56 [i_15]))) : (((arr_57 [i_15]) - (((/* implicit */long long int) ((unsigned int) arr_56 [i_15]))))));
    }
}
