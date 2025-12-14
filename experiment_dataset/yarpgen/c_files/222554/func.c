/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222554
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222554 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222554
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
    var_20 = ((/* implicit */unsigned long long int) var_13);
    var_21 ^= ((/* implicit */unsigned long long int) var_8);
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        var_22 = ((/* implicit */signed char) 7727026331706012722ULL);
        var_23 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_1 [i_0] [i_0]) % (var_19)))) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_0] [i_0]))));
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            /* LoopNest 2 */
            for (short i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        /* LoopSeq 3 */
                        for (unsigned int i_4 = 0; i_4 < 21; i_4 += 3) 
                        {
                            var_24 += ((/* implicit */signed char) arr_2 [i_0]);
                            var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_19)) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_2] [i_2]))) : (arr_9 [i_2] [i_3])));
                            var_26 &= ((/* implicit */unsigned char) arr_10 [i_4] [i_2] [i_0]);
                        }
                        for (unsigned long long int i_5 = 2; i_5 < 20; i_5 += 2) 
                        {
                            var_27 = ((/* implicit */unsigned short) arr_8 [i_3] [i_1] [i_2] [i_2] [i_3]);
                            var_28 = var_11;
                        }
                        for (int i_6 = 0; i_6 < 21; i_6 += 3) 
                        {
                            var_29 = ((((var_18) || (((/* implicit */_Bool) arr_6 [i_0] [i_0])))) ? (((/* implicit */int) arr_2 [i_0])) : ((~(((/* implicit */int) var_10)))));
                            var_30 += ((/* implicit */short) (+(((((/* implicit */_Bool) arr_11 [i_2] [i_1] [i_2] [8])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_17))))));
                            var_31 = ((/* implicit */unsigned short) ((((arr_14 [i_0] [4ULL] [i_3] [i_0] [i_0]) % (((/* implicit */unsigned long long int) 1838329783)))) % (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_17)))))));
                        }
                        var_32 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_6 [i_0] [i_0])) / (((/* implicit */int) arr_6 [i_0] [i_0]))));
                        var_33 = ((/* implicit */long long int) arr_1 [i_3] [i_3]);
                        /* LoopSeq 1 */
                        for (short i_7 = 3; i_7 < 20; i_7 += 4) 
                        {
                            var_34 &= ((/* implicit */long long int) (((-(((/* implicit */int) var_18)))) == ((~(-1838329783)))));
                            var_35 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_7 [i_0] [i_7 - 2] [13ULL] [(short)19] [i_7 + 1])) ^ (((/* implicit */int) var_16))));
                            var_36 = ((/* implicit */short) var_17);
                            var_37 *= ((/* implicit */unsigned long long int) (+(((((-1059255194) + (2147483647))) << (((((((/* implicit */int) (short)-2908)) + (2932))) - (24)))))));
                        }
                    }
                } 
            } 
            var_38 = ((/* implicit */long long int) arr_5 [i_0] [i_0] [7ULL] [i_0]);
            /* LoopNest 2 */
            for (unsigned long long int i_8 = 1; i_8 < 20; i_8 += 4) 
            {
                for (short i_9 = 2; i_9 < 19; i_9 += 4) 
                {
                    {
                        var_39 = ((/* implicit */long long int) min((var_39), (((/* implicit */long long int) arr_19 [i_9] [i_8] [i_8]))));
                        var_40 = ((/* implicit */unsigned int) min((var_40), (((/* implicit */unsigned int) (~(((/* implicit */int) var_5)))))));
                        var_41 = ((/* implicit */_Bool) (unsigned char)224);
                    }
                } 
            } 
            var_42 = ((/* implicit */short) ((arr_1 [i_0] [i_1]) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))));
            var_43 -= ((/* implicit */int) ((var_1) * (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_0 [i_0] [16LL])) > (((/* implicit */int) var_17))))))));
        }
        var_44 = ((/* implicit */unsigned char) ((short) ((arr_5 [i_0] [i_0] [i_0] [i_0]) ? (((/* implicit */int) arr_7 [i_0] [3U] [i_0] [i_0] [i_0])) : (((/* implicit */int) var_17)))));
        var_45 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_19 [4U] [i_0] [i_0])) ? (((/* implicit */unsigned int) arr_19 [20] [(unsigned char)20] [i_0])) : (arr_8 [(short)10] [i_0] [i_0] [i_0] [i_0])));
    }
}
