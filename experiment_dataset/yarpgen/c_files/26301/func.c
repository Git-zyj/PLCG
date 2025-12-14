/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26301
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26301 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26301
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
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 2) /* same iter space */
    {
        var_11 = ((/* implicit */_Bool) ((((arr_0 [i_0]) + (9223372036854775807LL))) << (((((((/* implicit */int) var_2)) + (3970))) - (42)))));
        arr_3 [i_0] = ((/* implicit */signed char) ((unsigned char) 681370843U));
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                {
                    arr_10 [i_0] [i_0] [i_1] [i_2] = ((/* implicit */long long int) ((unsigned char) arr_9 [i_0] [3LL] [i_0] [3LL]));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 3; i_3 < 8; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 10; i_4 += 4) 
                        {
                            {
                                arr_16 [i_0] [(unsigned char)9] [i_2] [i_3 - 3] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) >= (3613596453U)));
                                var_12 = (+(1125899905794048LL));
                            }
                        } 
                    } 
                    var_13 = ((/* implicit */unsigned long long int) max((var_13), (((/* implicit */unsigned long long int) ((unsigned char) (~(((/* implicit */int) arr_12 [i_1] [i_1]))))))));
                    var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_14 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (unsigned char)209)))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [0ULL]))) - (7580168527130309017ULL)))));
                }
            } 
        } 
        var_15 = ((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)0))));
    }
    /* vectorizable */
    for (unsigned char i_5 = 0; i_5 < 10; i_5 += 2) /* same iter space */
    {
        var_16 *= ((/* implicit */signed char) ((unsigned char) arr_15 [i_5] [i_5]));
        var_17 -= ((/* implicit */signed char) ((((/* implicit */int) ((unsigned short) arr_15 [i_5] [i_5]))) << (((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))));
    }
    /* LoopSeq 3 */
    for (int i_6 = 0; i_6 < 21; i_6 += 4) 
    {
        var_18 = min((((((/* implicit */_Bool) 3774518364U)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)6))) : (var_4))), (((/* implicit */long long int) 10U)));
        arr_23 [i_6] = ((/* implicit */_Bool) min((((/* implicit */long long int) 681370861U)), (-148416896973789141LL)));
    }
    for (unsigned int i_7 = 0; i_7 < 23; i_7 += 1) 
    {
        var_19 *= ((/* implicit */_Bool) (+(7580168527130309037ULL)));
        arr_27 [i_7] [i_7] = ((/* implicit */unsigned int) min((((/* implicit */long long int) var_9)), (min((((((/* implicit */long long int) ((/* implicit */int) (unsigned short)1920))) % (371038206819747387LL))), (((/* implicit */long long int) ((((/* implicit */int) var_9)) * (((/* implicit */int) var_2)))))))));
        arr_28 [i_7] [i_7] = ((/* implicit */long long int) (~(((((/* implicit */_Bool) (-(((/* implicit */int) var_5))))) ? (((10866575546579242589ULL) << (((((/* implicit */int) var_1)) - (166))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)62432))) >= (var_8)))))))));
        var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) var_7))));
    }
    for (unsigned char i_8 = 0; i_8 < 16; i_8 += 2) 
    {
        arr_31 [i_8] = ((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) ((unsigned short) var_2)))));
        /* LoopSeq 2 */
        for (unsigned char i_9 = 2; i_9 < 14; i_9 += 3) 
        {
            var_21 = ((/* implicit */unsigned int) var_6);
            var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_8] [14]))) ^ (3613596446U)))))) ? (max((((/* implicit */unsigned long long int) ((_Bool) arr_25 [i_8] [i_8]))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)113))) ^ (4330538106657138312ULL))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (var_4)))) ? (((/* implicit */int) (unsigned char)192)) : (((((/* implicit */int) var_5)) - (((/* implicit */int) (unsigned char)247)))))))));
            var_23 = ((_Bool) ((((/* implicit */int) arr_32 [i_8] [i_9 + 1])) / (((/* implicit */int) arr_20 [i_9 + 2] [3]))));
        }
        for (unsigned char i_10 = 0; i_10 < 16; i_10 += 3) 
        {
            var_24 = ((/* implicit */unsigned short) var_5);
            /* LoopNest 3 */
            for (unsigned char i_11 = 0; i_11 < 16; i_11 += 4) 
            {
                for (signed char i_12 = 1; i_12 < 15; i_12 += 4) 
                {
                    for (_Bool i_13 = 0; i_13 < 0; i_13 += 1) 
                    {
                        {
                            var_25 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_39 [i_10])))))) * (10866575546579242578ULL)));
                            var_26 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) arr_47 [i_10] [i_10] [i_12 + 1] [i_13] [3U])) >= (((/* implicit */int) arr_47 [i_8] [i_8] [i_12 + 1] [i_13] [i_13 + 1]))))) >> (((/* implicit */int) ((((((/* implicit */_Bool) var_4)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) var_5))))) <= (((/* implicit */long long int) ((/* implicit */int) max((var_9), (arr_45 [(_Bool)1] [i_10]))))))))));
                        }
                    } 
                } 
            } 
            var_27 = ((/* implicit */unsigned int) max((((/* implicit */long long int) ((((/* implicit */_Bool) 10866575546579242594ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned char)6), ((unsigned char)249))))) : (336768870U)))), (max((min((148416896973789165LL), (-5680229875894251131LL))), (((/* implicit */long long int) (+(var_0))))))));
        }
        var_28 = ((/* implicit */signed char) ((((/* implicit */int) min((((/* implicit */unsigned char) arr_37 [i_8])), (var_9)))) + (((/* implicit */int) ((((/* implicit */int) (unsigned char)47)) == (((/* implicit */int) (unsigned char)185)))))));
    }
    var_29 = ((long long int) var_5);
}
