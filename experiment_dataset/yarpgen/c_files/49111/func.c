/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49111
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49111 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49111
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
    for (signed char i_0 = 1; i_0 < 11; i_0 += 1) 
    {
        var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) var_17))));
        var_20 = ((/* implicit */int) max((var_20), (((arr_0 [i_0 - 1] [i_0 + 1]) / (((/* implicit */int) (signed char)-92))))));
        var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) var_9))));
    }
    for (int i_1 = 0; i_1 < 19; i_1 += 3) 
    {
        arr_6 [i_1] [i_1] = ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_1])) && (((/* implicit */_Bool) (signed char)-92))))) % (min((var_13), (((/* implicit */int) var_5)))))) : ((+(max((((/* implicit */int) var_18)), (-1997721607))))));
        var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_3 [i_1]))))), ((+(97396072313471375ULL)))))) ? (((/* implicit */int) min(((signed char)92), ((signed char)30)))) : (((/* implicit */int) arr_3 [i_1]))));
        var_23 = ((/* implicit */short) ((((/* implicit */int) (signed char)88)) % ((-((+(((/* implicit */int) (signed char)85))))))));
    }
    /* LoopNest 2 */
    for (int i_2 = 4; i_2 < 14; i_2 += 4) 
    {
        for (signed char i_3 = 1; i_3 < 13; i_3 += 3) 
        {
            {
                /* LoopSeq 4 */
                /* vectorizable */
                for (unsigned short i_4 = 2; i_4 < 13; i_4 += 3) 
                {
                    /* LoopNest 2 */
                    for (signed char i_5 = 0; i_5 < 15; i_5 += 3) 
                    {
                        for (int i_6 = 2; i_6 < 13; i_6 += 3) 
                        {
                            {
                                arr_20 [i_2 - 1] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)125)) ? (((((/* implicit */int) var_16)) % (((/* implicit */int) (signed char)-92)))) : (-272166156)));
                                var_24 = ((/* implicit */unsigned char) var_14);
                                var_25 += ((/* implicit */signed char) var_14);
                            }
                        } 
                    } 
                    arr_21 [i_2] [i_3] [i_4] [i_4] = ((/* implicit */unsigned char) (signed char)80);
                    /* LoopNest 2 */
                    for (signed char i_7 = 3; i_7 < 14; i_7 += 4) 
                    {
                        for (unsigned short i_8 = 0; i_8 < 15; i_8 += 1) 
                        {
                            {
                                arr_28 [i_2] [i_3] [i_3] [i_7] [i_8] = ((/* implicit */unsigned char) var_13);
                                var_26 = ((/* implicit */unsigned long long int) max((var_26), (((/* implicit */unsigned long long int) arr_22 [i_2] [i_3] [i_2] [i_7] [i_8]))));
                                arr_29 [i_2] [i_2] [i_2] [i_4] [i_7] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_2 - 1])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_26 [i_2] [i_3] [i_3] [i_7] [i_4 - 2] [i_4] [i_2]))));
                            }
                        } 
                    } 
                    arr_30 [i_2 - 2] [i_3] = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) (unsigned char)7))))) >> (((/* implicit */int) (!(((/* implicit */_Bool) var_15)))))));
                    var_27 = ((/* implicit */unsigned char) (+(arr_10 [i_2 - 1] [i_4 + 1])));
                }
                /* vectorizable */
                for (unsigned char i_9 = 2; i_9 < 13; i_9 += 3) 
                {
                    arr_34 [i_9] [i_9] [i_9] [i_9 + 1] = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_27 [i_9] [i_3] [i_9] [i_2] [i_2] [i_3 - 1]))));
                    var_28 -= ((/* implicit */short) (+((~(((/* implicit */int) arr_13 [i_2] [i_3] [i_3] [i_9 + 1]))))));
                }
                for (unsigned short i_10 = 0; i_10 < 15; i_10 += 1) 
                {
                    arr_37 [i_2] [i_2] [i_3] [i_10] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) (unsigned char)4)) == (((/* implicit */int) (signed char)89))))) << (((((/* implicit */int) (unsigned char)237)) - (211)))))) ? (((((/* implicit */_Bool) min((arr_9 [i_2] [i_3] [i_10]), (((/* implicit */unsigned long long int) arr_4 [i_2] [i_3]))))) ? (((((/* implicit */int) (signed char)-88)) & (((/* implicit */int) (signed char)88)))) : (((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) arr_7 [i_2] [i_3])) : (((/* implicit */int) var_15)))))) : (((((/* implicit */int) var_7)) << (((/* implicit */int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) (short)(-32767 - 1))))))))));
                    var_29 -= ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) arr_36 [i_2] [i_2 + 1] [i_3 - 1])) ? (var_10) : (((/* implicit */int) arr_36 [i_2 - 3] [i_2 + 1] [i_3 - 1]))))));
                    var_30 = ((/* implicit */unsigned char) max((((/* implicit */int) (unsigned short)31693)), ((+(((((/* implicit */int) var_17)) >> (((-1997721622) + (1997721636)))))))));
                }
                for (signed char i_11 = 1; i_11 < 13; i_11 += 1) 
                {
                    arr_42 [i_2] [i_3] [i_11] [i_11] &= ((/* implicit */unsigned short) -1326764169);
                    var_31 = ((/* implicit */signed char) ((((((/* implicit */unsigned int) ((/* implicit */int) var_16))) > (arr_10 [i_3] [i_11]))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) min((var_12), (arr_17 [i_2] [i_2] [i_3] [i_11] [i_11]))))))) : (min((((/* implicit */unsigned long long int) arr_40 [i_2] [i_3] [i_11])), ((~(97396072313471370ULL)))))));
                    var_32 = ((/* implicit */unsigned char) max((var_32), (((/* implicit */unsigned char) ((((int) (unsigned char)69)) == (((/* implicit */int) var_17)))))));
                    arr_43 [i_2] [i_3] [i_11] = (+((+(((/* implicit */int) arr_14 [i_3] [i_3 - 1] [i_2 - 3] [i_2])))));
                }
                var_33 ^= ((/* implicit */unsigned int) arr_3 [i_2 - 2]);
            }
        } 
    } 
}
