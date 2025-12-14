/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215203
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215203 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215203
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
    var_17 -= ((/* implicit */_Bool) max(((~(var_15))), ((~(var_6)))));
    var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) (~(min((var_8), (min((((/* implicit */long long int) (unsigned short)54890)), (var_12))))))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (unsigned char i_1 = 1; i_1 < 22; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                {
                    arr_9 [i_1] = ((/* implicit */_Bool) (~(var_13)));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 22; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 1; i_4 < 24; i_4 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned long long int) var_16);
                                arr_14 [i_1] [i_1] = ((/* implicit */int) (-(arr_12 [i_0] [i_0] [i_1] [i_2] [i_3 + 1] [i_0])));
                                arr_15 [i_0] [i_1] [i_2] [i_1] [i_4 - 1] [i_3 + 2] [i_2] = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned short)10646))));
                                arr_16 [i_1] [i_3] [i_2] [i_1] = ((/* implicit */_Bool) min((min((((/* implicit */unsigned int) (short)-28289)), (2089263274U))), (((/* implicit */unsigned int) max((((/* implicit */short) ((signed char) var_1))), (arr_8 [i_1] [i_1] [i_1 + 2]))))));
                            }
                        } 
                    } 
                    arr_17 [i_1] = ((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)54878)) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_0]))) : (arr_12 [i_2] [i_0] [5] [7LL] [i_1] [i_0])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(var_4))))) : ((~(var_7))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned int i_5 = 0; i_5 < 25; i_5 += 1) 
                    {
                        arr_20 [i_0] [i_0] [i_0] [i_0] [i_1] = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_6 [i_1 - 1] [i_1 + 2]))));
                        var_20 ^= (+((-(arr_13 [i_0] [2LL] [i_2] [i_2] [(unsigned char)24] [i_5]))));
                        var_21 = ((/* implicit */signed char) var_1);
                        var_22 = ((arr_5 [i_1 + 1] [i_1 + 1] [i_1 + 3]) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_5] [i_1] [i_1 - 1]))));
                        arr_21 [i_5] [i_1] [i_1] [i_0] = var_6;
                    }
                    for (short i_6 = 0; i_6 < 25; i_6 += 1) 
                    {
                        var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) -2081500027)))))) - (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)10651))) : (arr_23 [i_0] [10LL] [i_2] [i_6])))) ? (max((((/* implicit */unsigned int) (signed char)-113)), (var_10))) : (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_7 [i_1 + 1] [i_0] [i_6])), (var_3))))))))))));
                        var_24 += ((/* implicit */unsigned short) arr_0 [i_2]);
                        var_25 = ((/* implicit */long long int) min((max((2081500010), ((~(((/* implicit */int) (unsigned short)54895)))))), (((/* implicit */int) min((arr_4 [i_1 + 3] [i_1 + 2]), (arr_4 [i_1 + 3] [i_1 + 2]))))));
                        /* LoopSeq 3 */
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            var_26 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) (+((-(var_15)))))), (((long long int) arr_13 [(_Bool)1] [i_1 + 3] [i_2] [i_6] [i_7] [i_0]))));
                            var_27 -= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_1))));
                        }
                        /* vectorizable */
                        for (unsigned int i_8 = 0; i_8 < 25; i_8 += 1) 
                        {
                            arr_30 [i_1] [(unsigned short)18] [17ULL] [(signed char)1] [i_1 + 2] [i_1] [i_1] = ((/* implicit */unsigned char) arr_24 [(short)15] [i_6] [i_2] [i_1]);
                            var_28 = ((/* implicit */long long int) ((_Bool) (unsigned short)54877));
                            var_29 = ((/* implicit */_Bool) (short)1096);
                        }
                        for (unsigned int i_9 = 0; i_9 < 25; i_9 += 2) 
                        {
                            var_30 &= ((/* implicit */unsigned short) (~(max((var_1), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-28301)) || (((/* implicit */_Bool) (short)-6324)))))))));
                            var_31 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */long long int) max((((/* implicit */unsigned int) ((unsigned short) arr_28 [i_2]))), (max((var_6), (arr_32 [i_0] [i_0] [i_2] [i_2] [21U] [i_1] [i_9])))))) : (var_12)));
                        }
                        var_32 -= ((/* implicit */unsigned short) min((((/* implicit */long long int) ((((unsigned int) var_10)) + (((/* implicit */unsigned int) var_5))))), (min((((long long int) (short)-287)), (((/* implicit */long long int) arr_19 [i_1 + 1] [i_1] [18U] [i_1] [i_0]))))));
                    }
                }
            } 
        } 
    } 
    var_33 ^= ((/* implicit */short) ((((/* implicit */int) (unsigned short)54906)) * (((/* implicit */int) (!(((/* implicit */_Bool) var_16)))))));
}
