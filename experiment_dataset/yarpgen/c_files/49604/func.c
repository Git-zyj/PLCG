/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49604
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49604 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49604
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
    var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (signed char)0)))))))) : (((/* implicit */int) ((var_12) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))))));
    var_14 = ((/* implicit */unsigned char) (+(max((((/* implicit */unsigned long long int) var_4)), (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-75))) + (var_12)))))));
    var_15 = ((/* implicit */unsigned char) min(((~(((var_12) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)18992)) && (((/* implicit */_Bool) (unsigned short)18992)))))));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            for (unsigned int i_2 = 2; i_2 < 13; i_2 += 2) 
            {
                {
                    var_16 = ((/* implicit */unsigned long long int) (+(((max((4294967272U), (((/* implicit */unsigned int) arr_6 [(signed char)4])))) + (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_1])) && (((/* implicit */_Bool) var_2))))))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned char i_3 = 1; i_3 < 10; i_3 += 4) 
                    {
                        var_17 = ((((var_12) / (arr_0 [i_0]))) << (((9260786182599732311ULL) - (9260786182599732307ULL))));
                        var_18 = ((/* implicit */unsigned char) arr_2 [i_0] [i_3]);
                    }
                }
            } 
        } 
        var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)65530)) ? (2147483648U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-32)))))), (max((3923901720579542712ULL), (((/* implicit */unsigned long long int) arr_8 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [6U]))) : (max((max((4146542474U), (((/* implicit */unsigned int) (signed char)12)))), (((/* implicit */unsigned int) max((var_8), (var_6))))))));
        var_20 = ((/* implicit */signed char) ((((/* implicit */int) min(((!(((/* implicit */_Bool) (signed char)37)))), (((var_12) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)27)))))))) == (min((((((/* implicit */int) (unsigned char)113)) + (((/* implicit */int) (signed char)36)))), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) >= (var_12))))))));
    }
    for (signed char i_4 = 0; i_4 < 23; i_4 += 1) 
    {
        var_21 = ((/* implicit */unsigned long long int) arr_13 [i_4]);
        /* LoopNest 3 */
        for (signed char i_5 = 0; i_5 < 23; i_5 += 4) 
        {
            for (unsigned long long int i_6 = 3; i_6 < 21; i_6 += 2) 
            {
                for (unsigned char i_7 = 3; i_7 < 20; i_7 += 2) 
                {
                    {
                        /* LoopSeq 1 */
                        for (signed char i_8 = 4; i_8 < 22; i_8 += 2) 
                        {
                            var_22 &= ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)3)) << (((((/* implicit */int) var_1)) - (127)))));
                            var_23 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_2))));
                            var_24 = ((/* implicit */signed char) (((-((-(((/* implicit */int) (unsigned char)7)))))) + (((/* implicit */int) var_6))));
                            var_25 = min(((~(arr_20 [8U] [(signed char)14] [i_8 - 1] [i_8 - 3] [i_8 - 4] [i_7] [i_7 + 2]))), ((+(839455271U))));
                            var_26 = ((/* implicit */signed char) var_1);
                        }
                        var_27 = ((/* implicit */unsigned int) (+(((/* implicit */int) ((arr_18 [i_4] [i_5] [i_5] [i_5] [i_6] [i_7]) == (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))))))));
                        var_28 = ((/* implicit */unsigned long long int) arr_17 [i_4] [i_4] [i_6]);
                        var_29 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)65525))));
                    }
                } 
            } 
        } 
    }
}
