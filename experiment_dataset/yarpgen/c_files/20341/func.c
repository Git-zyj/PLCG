/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20341
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20341 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20341
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
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned char i_1 = 3; i_1 < 14; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                for (unsigned long long int i_3 = 2; i_3 < 14; i_3 += 4) 
                {
                    {
                        var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) (-(((/* implicit */int) (signed char)87)))))));
                        var_21 ^= ((/* implicit */unsigned short) min((((/* implicit */long long int) (~(((/* implicit */int) arr_5 [i_0] [i_0 + 1] [i_3] [i_3 + 1]))))), (arr_0 [i_1])));
                    }
                } 
            } 
        } 
        var_22 -= ((/* implicit */short) ((arr_0 [(unsigned char)4]) % (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
        var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) var_17))));
        var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) ((short) (+(((/* implicit */int) (_Bool)1))))))));
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) (+(((/* implicit */int) max((arr_10 [i_4] [i_4]), (arr_10 [i_4] [i_4])))))))));
        var_26 = ((/* implicit */long long int) min((var_26), (((/* implicit */long long int) (+(((/* implicit */int) arr_10 [i_4] [i_4])))))));
        var_27 += ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_4] [(signed char)14] [(signed char)12]))) - ((+(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_4] [i_4] [i_4] [i_4]))) + (arr_4 [i_4])))))));
    }
    for (unsigned short i_5 = 0; i_5 < 16; i_5 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned int i_6 = 0; i_6 < 16; i_6 += 1) 
        {
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                {
                    var_28 *= ((/* implicit */signed char) (~(((/* implicit */int) (unsigned short)58224))));
                    /* LoopSeq 1 */
                    for (unsigned short i_8 = 3; i_8 < 14; i_8 += 1) 
                    {
                        var_29 |= ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (short)25987)) : (((/* implicit */int) (short)17185))))) - (((((/* implicit */_Bool) arr_11 [i_5])) ? (arr_11 [i_6]) : (arr_11 [i_8])))));
                        var_30 = ((/* implicit */_Bool) min((var_30), (((/* implicit */_Bool) 908823164U))));
                        var_31 ^= ((/* implicit */unsigned long long int) 3264425616U);
                        var_32 += ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_19 [i_7] [i_6] [i_5] [i_8 - 1] [i_5] [i_7])) || ((_Bool)1))) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_5] [i_5])) ? (arr_20 [i_5] [i_6] [i_5] [i_8]) : (((/* implicit */unsigned long long int) arr_12 [i_7] [i_6])))))))))));
                    }
                    var_33 = ((/* implicit */_Bool) min((var_33), (((/* implicit */_Bool) var_18))));
                }
            } 
        } 
        var_34 = ((/* implicit */signed char) min((var_34), (((/* implicit */signed char) 3386144132U))));
    }
    var_35 = ((/* implicit */_Bool) min((var_35), (((/* implicit */_Bool) var_5))));
    var_36 |= ((/* implicit */unsigned short) var_1);
    var_37 = ((/* implicit */unsigned int) min((var_37), (((/* implicit */unsigned int) ((long long int) -7581899077034869642LL)))));
}
