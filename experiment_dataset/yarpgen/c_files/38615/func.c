/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38615
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38615 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38615
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
    var_10 = ((/* implicit */int) ((var_6) / (((/* implicit */long long int) ((/* implicit */int) var_7)))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (signed char i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            for (int i_2 = 1; i_2 < 16; i_2 += 3) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        arr_12 [i_0] [(unsigned char)1] [i_3] [i_3] [(unsigned char)1] [i_0] = ((/* implicit */unsigned long long int) arr_6 [(_Bool)1] [(_Bool)1] [i_2 + 1]);
                        var_11 -= ((/* implicit */_Bool) (+(((/* implicit */int) arr_10 [i_1] [i_2] [i_2 - 1] [i_1]))));
                        var_12 = ((/* implicit */int) min((var_12), (((/* implicit */int) (!(((/* implicit */_Bool) (short)4393)))))));
                        var_13 = var_6;
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 1) 
        {
            for (signed char i_5 = 0; i_5 < 18; i_5 += 1) 
            {
                for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                {
                    {
                        arr_19 [i_6] [i_5] [i_4] [i_5] [16ULL] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_16 [i_6] [i_5] [i_5] [i_4]))));
                        arr_20 [i_0] [i_5] [i_0] [i_5] [i_0] = ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_9)))));
                        var_14 = ((/* implicit */unsigned short) (+(var_6)));
                        var_15 = ((/* implicit */_Bool) var_2);
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (unsigned char i_7 = 1; i_7 < 22; i_7 += 2) /* same iter space */
    {
        arr_23 [i_7 + 1] [i_7 + 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_21 [i_7 - 1] [21ULL])) ? (((var_5) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)29533))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))));
        arr_24 [i_7 + 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)149)) ? (((/* implicit */int) (unsigned short)9667)) : (((/* implicit */int) (unsigned char)210))));
    }
    for (unsigned char i_8 = 1; i_8 < 22; i_8 += 2) /* same iter space */
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (short i_9 = 0; i_9 < 23; i_9 += 2) 
        {
            var_16 = ((signed char) arr_27 [i_8] [i_9]);
            var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) (+(((/* implicit */int) var_3)))))));
            var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-28)) ? (((/* implicit */int) (short)27942)) : (((/* implicit */int) (unsigned short)9656))));
            var_19 -= ((/* implicit */short) (~(((/* implicit */int) arr_26 [i_9] [i_9]))));
        }
        for (unsigned char i_10 = 0; i_10 < 23; i_10 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned short i_11 = 0; i_11 < 23; i_11 += 4) 
            {
                for (unsigned long long int i_12 = 1; i_12 < 21; i_12 += 1) 
                {
                    {
                        var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) min((arr_34 [i_11]), (((/* implicit */unsigned short) arr_37 [(signed char)16] [i_11] [(signed char)16] [i_12 + 2]))))), ((-(arr_31 [i_11] [i_10] [i_10])))))) ? (((/* implicit */int) ((unsigned char) (_Bool)1))) : (max((((/* implicit */int) (unsigned char)106)), (183411992))))))));
                        var_21 ^= ((/* implicit */unsigned short) ((max((arr_31 [i_11] [(unsigned char)16] [i_8]), (((/* implicit */unsigned long long int) (unsigned short)19637)))) - (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127)))));
                    }
                } 
            } 
            arr_39 [(signed char)10] [(signed char)10] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (signed char)78)), (3174374480U)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_28 [i_8] [i_8 - 1] [i_10]))) : (var_6)));
            arr_40 [i_8] [i_8] = arr_35 [i_8] [i_8];
            var_22 = ((/* implicit */signed char) (!((_Bool)1)));
        }
        var_23 = ((/* implicit */_Bool) ((short) (~(((/* implicit */int) (short)2)))));
        var_24 *= ((/* implicit */short) (~(3410883900U)));
    }
    var_25 ^= ((/* implicit */_Bool) ((unsigned long long int) (~(((/* implicit */int) var_4)))));
    var_26 = ((/* implicit */_Bool) ((signed char) 15037023872899596773ULL));
    var_27 = ((/* implicit */signed char) (~(((/* implicit */int) var_8))));
}
