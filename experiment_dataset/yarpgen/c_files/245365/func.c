/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245365
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245365 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245365
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
    /* LoopSeq 4 */
    for (int i_0 = 2; i_0 < 20; i_0 += 3) /* same iter space */
    {
        var_18 = ((/* implicit */unsigned long long int) arr_0 [i_0]);
        var_19 = ((/* implicit */signed char) (((-(((var_11) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_17)))))) > ((-(((/* implicit */int) arr_1 [i_0 + 1]))))));
        var_20 = ((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */int) (_Bool)0)) == ((((_Bool)0) ? (((/* implicit */int) (short)-32757)) : (((/* implicit */int) (short)8176)))))))));
    }
    for (int i_1 = 2; i_1 < 20; i_1 += 3) /* same iter space */
    {
        var_21 = ((/* implicit */signed char) var_11);
        var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) 11)) ? (max((((/* implicit */long long int) ((var_3) <= (((/* implicit */int) var_0))))), (var_13))) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [5U] [i_1])))));
        var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)248))) : (1099511103488ULL)));
    }
    for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 3) 
    {
        var_24 = ((/* implicit */long long int) (~(((/* implicit */int) (short)21785))));
        /* LoopSeq 1 */
        for (short i_3 = 0; i_3 < 20; i_3 += 3) 
        {
            var_25 &= ((/* implicit */unsigned short) (+(((/* implicit */int) var_4))));
            var_26 = arr_9 [i_2] [i_2] [i_3];
            var_27 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_10 [i_3] [i_3])) || (((/* implicit */_Bool) var_10)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)7154)) ? (((/* implicit */long long int) ((/* implicit */int) var_15))) : (var_8))))))), (max(((unsigned char)252), (((/* implicit */unsigned char) (_Bool)1))))));
        }
        var_28 = ((/* implicit */signed char) min((((/* implicit */long long int) (+(((((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_2] [(_Bool)1]))) - (var_2)))))), (min((var_13), (((/* implicit */long long int) (_Bool)0))))));
    }
    /* vectorizable */
    for (unsigned short i_4 = 0; i_4 < 19; i_4 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            for (unsigned int i_6 = 0; i_6 < 19; i_6 += 3) 
            {
                {
                    var_29 = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_2 [(unsigned short)19] [i_6]))));
                    var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_5 [i_5])) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) arr_9 [i_4] [i_5] [i_6]))));
                    var_31 = ((/* implicit */unsigned long long int) (+(((var_17) ? (((/* implicit */int) (unsigned char)6)) : (((/* implicit */int) var_6))))));
                    var_32 = ((/* implicit */_Bool) var_10);
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned long long int i_7 = 4; i_7 < 18; i_7 += 3) 
        {
            for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
            {
                {
                    var_33 = ((/* implicit */unsigned long long int) (unsigned char)234);
                    var_34 = ((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_14)))))));
                    var_35 = ((/* implicit */_Bool) ((arr_20 [i_4] [i_7 - 1] [i_7 - 1]) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_4] [i_4] [i_4] [i_8])))));
                    var_36 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(5867771876288390922LL)))) && ((_Bool)1)));
                }
            } 
        } 
        /* LoopNest 3 */
        for (short i_9 = 1; i_9 < 17; i_9 += 3) 
        {
            for (short i_10 = 0; i_10 < 19; i_10 += 3) 
            {
                for (unsigned int i_11 = 3; i_11 < 17; i_11 += 3) 
                {
                    {
                        var_37 = ((/* implicit */unsigned long long int) max((var_37), (((/* implicit */unsigned long long int) ((arr_18 [i_4] [i_9 + 1] [(unsigned char)2]) + (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))));
                        var_38 = (signed char)127;
                        var_39 = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_29 [i_4] [i_9 - 1] [i_10])) ? (((/* implicit */int) (unsigned char)13)) : (((/* implicit */int) arr_35 [i_11] [i_4] [i_4] [i_4] [i_11 + 2])))) - (((/* implicit */int) ((var_2) >= (((/* implicit */unsigned int) var_3)))))));
                    }
                } 
            } 
        } 
    }
    var_40 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (unsigned short)59328)) : (((/* implicit */int) var_6)))), (((/* implicit */int) ((unsigned short) var_11)))))) ? (min((((/* implicit */long long int) (-(((/* implicit */int) (short)7147))))), (((((/* implicit */long long int) ((/* implicit */int) var_4))) - (var_13))))) : (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (unsigned char)248)))) == (((/* implicit */int) var_17))))))));
}
