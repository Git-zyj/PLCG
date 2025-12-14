/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5257
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5257 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5257
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                var_10 = ((/* implicit */unsigned short) (short)-9060);
                var_11 -= ((/* implicit */unsigned short) min((((max((662516152U), (((/* implicit */unsigned int) var_6)))) + (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_0] [i_0])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_4))))))), (((/* implicit */unsigned int) (-(((/* implicit */int) arr_1 [i_0])))))));
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 15; i_2 += 1) 
                {
                    for (unsigned short i_3 = 0; i_3 < 15; i_3 += 1) 
                    {
                        {
                            var_12 = ((/* implicit */unsigned int) max((var_12), (((/* implicit */unsigned int) arr_12 [i_0] [i_0] [i_2] [i_3]))));
                            var_13 *= ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((long long int) arr_13 [i_0] [(signed char)11] [i_3]))) && (((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_1] [i_2] [i_3])))) ? (((/* implicit */int) min((((short) (signed char)-108)), (var_6)))) : (((/* implicit */int) var_7))));
                            var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [14U])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 2893948375U)))))) : (((unsigned long long int) (signed char)-22))))) ? (((/* implicit */long long int) (~(2078572672U)))) : (min((((/* implicit */long long int) max((arr_1 [i_1]), (((/* implicit */unsigned short) var_7))))), ((-(var_1)))))));
                        }
                    } 
                } 
                arr_14 [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) (-((~(((/* implicit */int) (short)-9080))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_4 = 0; i_4 < 20; i_4 += 1) 
    {
        var_15 *= ((unsigned short) arr_15 [i_4]);
        var_16 = ((/* implicit */long long int) (+(var_5)));
        /* LoopNest 2 */
        for (long long int i_5 = 0; i_5 < 20; i_5 += 1) 
        {
            for (int i_6 = 1; i_6 < 18; i_6 += 1) 
            {
                {
                    var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -1111261392)) ? (((/* implicit */int) (short)-32761)) : (((/* implicit */int) (_Bool)0))));
                    var_18 -= ((/* implicit */unsigned long long int) (unsigned char)0);
                }
            } 
        } 
    }
    /* LoopNest 3 */
    for (int i_7 = 1; i_7 < 22; i_7 += 1) 
    {
        for (long long int i_8 = 1; i_8 < 20; i_8 += 1) 
        {
            for (unsigned short i_9 = 1; i_9 < 21; i_9 += 1) 
            {
                {
                    var_19 -= ((/* implicit */signed char) ((unsigned short) (~(((/* implicit */int) arr_28 [(unsigned char)6] [i_9 + 3] [i_8 + 1] [(unsigned char)6])))));
                    arr_30 [(_Bool)1] [i_8] [i_9] [i_9] = ((((/* implicit */_Bool) ((max((arr_22 [i_7]), ((_Bool)1))) ? (((/* implicit */int) (_Bool)1)) : (((-1) - (((/* implicit */int) var_3))))))) ? (((/* implicit */int) (short)-32761)) : (((/* implicit */int) min((((/* implicit */unsigned char) arr_27 [i_7 - 1])), (arr_28 [i_7] [(signed char)2] [i_9] [i_8])))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_10 = 2; i_10 < 23; i_10 += 1) 
    {
        /* LoopNest 3 */
        for (int i_11 = 1; i_11 < 24; i_11 += 1) 
        {
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
            {
                for (short i_13 = 0; i_13 < 25; i_13 += 1) 
                {
                    {
                        arr_44 [i_10] [i_11] [i_13] [17U] [i_13] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_31 [(signed char)5] [i_11]))));
                        var_20 ^= ((/* implicit */unsigned short) ((unsigned char) 7884463129313358648LL));
                    }
                } 
            } 
        } 
        var_21 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) 524287U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-3293))) : (544540070U)));
        /* LoopNest 3 */
        for (int i_14 = 0; i_14 < 25; i_14 += 1) 
        {
            for (short i_15 = 2; i_15 < 24; i_15 += 1) 
            {
                for (int i_16 = 0; i_16 < 25; i_16 += 1) 
                {
                    {
                        arr_54 [19LL] [6LL] [i_14] = arr_35 [i_10] [i_16];
                        var_22 = ((/* implicit */_Bool) (+(arr_43 [i_10] [i_14] [i_15] [i_10 - 1])));
                        arr_55 [i_14] [i_14] [i_14] [i_16] = ((/* implicit */long long int) ((((((/* implicit */int) (_Bool)0)) + (((/* implicit */int) (_Bool)1)))) + (((((/* implicit */int) var_4)) - (((/* implicit */int) arr_35 [i_10] [i_14]))))));
                    }
                } 
            } 
        } 
    }
    var_23 = ((/* implicit */unsigned int) (~(((/* implicit */int) var_4))));
}
