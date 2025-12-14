/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205636
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205636 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205636
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
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        var_20 = var_19;
        arr_3 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) ((_Bool) arr_0 [i_0]))) >> (((/* implicit */int) max(((!(((/* implicit */_Bool) (short)31284)))), (((_Bool) arr_1 [i_0] [i_0])))))));
        var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) min((((/* implicit */unsigned long long int) arr_0 [i_0])), ((+(min((((/* implicit */unsigned long long int) (signed char)-77)), (14159164339150031108ULL))))))))));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_6 [i_1] [i_1] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_5 [i_1])))) ? (((((/* implicit */_Bool) arr_4 [i_1])) ? (arr_4 [i_1]) : (var_12))) : (arr_4 [i_1])));
        var_22 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_4 [i_1]))));
    }
    /* LoopNest 2 */
    for (unsigned char i_2 = 0; i_2 < 22; i_2 += 4) 
    {
        for (unsigned int i_3 = 0; i_3 < 22; i_3 += 4) 
        {
            {
                var_23 += ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((arr_4 [i_3]) | (arr_4 [i_2]))))));
                /* LoopNest 3 */
                for (signed char i_4 = 0; i_4 < 22; i_4 += 4) 
                {
                    for (unsigned short i_5 = 0; i_5 < 22; i_5 += 4) 
                    {
                        for (signed char i_6 = 0; i_6 < 22; i_6 += 4) 
                        {
                            {
                                arr_18 [i_5] [i_3] [i_4] [i_5] [i_3] = ((/* implicit */signed char) (((~(arr_5 [i_2]))) & (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 9139501439676498248LL))))))));
                                var_24 = ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)70))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned char i_7 = 0; i_7 < 15; i_7 += 3) /* same iter space */
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_8 = 0; i_8 < 15; i_8 += 1) 
        {
            /* LoopSeq 1 */
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                arr_28 [i_8] [i_8] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned char) var_4))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) -9139501439676498229LL)))) : (((((/* implicit */long long int) var_13)) ^ (arr_9 [i_7] [i_7])))));
                arr_29 [i_7] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) var_13))) ? (((/* implicit */int) arr_19 [i_7] [i_8])) : ((+(((/* implicit */int) arr_2 [i_9]))))));
            }
            var_25 = ((/* implicit */int) ((((/* implicit */_Bool) arr_21 [i_7] [i_7])) ? (arr_21 [i_8] [i_8]) : (arr_21 [i_7] [i_8])));
        }
        var_26 = ((/* implicit */long long int) ((_Bool) (+(((/* implicit */int) (unsigned char)80)))));
        var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(max((var_12), (((/* implicit */long long int) arr_7 [i_7]))))))) ? (((((/* implicit */int) (!(((/* implicit */_Bool) 9139501439676498259LL))))) << (((min((var_13), (var_19))) - (904422900U))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))));
        var_28 = ((/* implicit */unsigned char) (~(arr_15 [i_7] [13U] [i_7] [i_7] [i_7] [i_7])));
        var_29 = ((/* implicit */unsigned int) max((var_29), (var_19)));
    }
    for (unsigned char i_10 = 0; i_10 < 15; i_10 += 3) /* same iter space */
    {
        var_30 = ((/* implicit */unsigned short) arr_24 [i_10] [i_10]);
        var_31 = ((/* implicit */_Bool) ((unsigned short) (-(var_10))));
        arr_32 [i_10] = (i_10 % 2 == zero) ? (((/* implicit */unsigned char) ((unsigned int) ((((unsigned long long int) arr_14 [i_10] [i_10] [i_10] [i_10])) >> (((arr_5 [i_10]) - (739977806U))))))) : (((/* implicit */unsigned char) ((unsigned int) ((((unsigned long long int) arr_14 [i_10] [i_10] [i_10] [i_10])) >> (((((arr_5 [i_10]) - (739977806U))) - (3217595941U)))))));
    }
    var_32 = ((/* implicit */signed char) max((var_32), (((/* implicit */signed char) ((((((/* implicit */_Bool) var_2)) ? (min((((/* implicit */unsigned int) var_15)), (var_10))) : (((/* implicit */unsigned int) ((/* implicit */int) var_18))))) / (((/* implicit */unsigned int) ((/* implicit */int) var_16))))))));
}
