/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50657
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50657 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50657
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
    var_14 = (short)-27146;
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            var_15 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0])) ? (((/* implicit */int) (short)27134)) : (((/* implicit */int) (short)-32752))))) ? (((/* implicit */int) arr_4 [i_0] [i_1])) : (((var_4) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_3))))));
            /* LoopSeq 4 */
            for (unsigned int i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) arr_6 [i_0] [i_1] [i_1]))));
                var_17 = ((/* implicit */short) (-(arr_6 [i_0] [i_1] [i_1])));
                var_18 = ((/* implicit */short) (~(((/* implicit */int) arr_0 [i_0] [i_1]))));
                /* LoopNest 2 */
                for (unsigned short i_3 = 2; i_3 < 16; i_3 += 3) 
                {
                    for (unsigned short i_4 = 0; i_4 < 19; i_4 += 1) 
                    {
                        {
                            var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) var_0))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (((var_5) + (var_12)))));
                            var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)27119)) || (arr_2 [i_3 + 3])));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_5 = 1; i_5 < 18; i_5 += 4) 
                {
                    for (unsigned char i_6 = 0; i_6 < 19; i_6 += 3) 
                    {
                        {
                            var_21 = ((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)237))));
                            var_22 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_5 - 1] [i_2]))) <= (((((/* implicit */_Bool) (unsigned short)49152)) ? (var_10) : (((/* implicit */long long int) 134217727U))))));
                            var_23 = ((/* implicit */short) arr_3 [i_6]);
                            var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_5 - 1] [i_5 + 1] [i_5 + 1] [i_5 - 1] [(short)6])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [(short)13] [i_5 + 1] [i_5 + 1] [i_6] [i_6] [i_6]))) : (((var_2) + (((/* implicit */unsigned int) ((/* implicit */int) var_4))))))))));
                        }
                    } 
                } 
            }
            for (long long int i_7 = 0; i_7 < 19; i_7 += 4) 
            {
                var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)27145))))) || (((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)28674)) << (((/* implicit */int) (_Bool)1))))))))));
                var_26 = ((/* implicit */long long int) max((var_26), (((/* implicit */long long int) (~((~(((/* implicit */int) arr_23 [(unsigned short)7] [i_1])))))))));
                var_27 = ((/* implicit */unsigned char) 134217726U);
                var_28 -= ((/* implicit */short) ((unsigned int) (unsigned char)42));
                var_29 = ((/* implicit */long long int) (((~(((/* implicit */int) (unsigned short)2044)))) & (((((/* implicit */int) var_6)) | (((/* implicit */int) var_4))))));
            }
            for (short i_8 = 0; i_8 < 19; i_8 += 4) /* same iter space */
            {
                var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0])))))) ? (((/* implicit */int) ((short) (unsigned short)49136))) : (((/* implicit */int) (short)27152))));
                var_31 = ((/* implicit */short) (+(((((/* implicit */long long int) ((/* implicit */int) var_3))) / (var_10)))));
                var_32 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_8 [i_0] [i_0] [i_0])) * (((/* implicit */int) arr_19 [i_0] [i_0] [(unsigned short)16] [i_8]))));
                var_33 &= ((/* implicit */short) ((((/* implicit */int) (unsigned short)65510)) < (((/* implicit */int) (unsigned short)65192))));
            }
            for (short i_9 = 0; i_9 < 19; i_9 += 4) /* same iter space */
            {
                var_34 = ((/* implicit */unsigned short) (short)27149);
                var_35 = ((/* implicit */unsigned short) max((var_35), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_0 [i_0] [(short)10])))))));
                /* LoopNest 2 */
                for (unsigned char i_10 = 0; i_10 < 19; i_10 += 4) 
                {
                    for (short i_11 = 0; i_11 < 19; i_11 += 3) 
                    {
                        {
                            var_36 = ((/* implicit */unsigned char) (((-(((/* implicit */int) (unsigned char)137)))) & (((/* implicit */int) (_Bool)1))));
                            var_37 = (!(((((/* implicit */_Bool) (unsigned short)49121)) && (((/* implicit */_Bool) (unsigned short)15)))));
                            var_38 = var_2;
                        }
                    } 
                } 
                var_39 = ((/* implicit */_Bool) max((var_39), (((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_27 [15U]))) ^ (var_5))))));
            }
        }
        var_40 = (unsigned char)116;
    }
    var_41 = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)-27119)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))));
}
