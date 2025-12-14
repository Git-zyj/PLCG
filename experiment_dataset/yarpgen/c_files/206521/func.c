/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206521
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206521 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206521
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 4; i_0 < 20; i_0 += 2) 
    {
        var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) var_10))));
        var_16 = ((/* implicit */signed char) (-(var_6)));
        arr_2 [4] = ((/* implicit */_Bool) var_9);
    }
    var_17 = ((/* implicit */short) min((((int) -1812422148646499650LL)), (var_13)));
    /* LoopSeq 1 */
    for (unsigned int i_1 = 0; i_1 < 16; i_1 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 2) 
        {
            for (unsigned char i_3 = 0; i_3 < 16; i_3 += 2) 
            {
                for (unsigned char i_4 = 0; i_4 < 16; i_4 += 4) 
                {
                    {
                        /* LoopSeq 3 */
                        for (unsigned short i_5 = 0; i_5 < 16; i_5 += 1) /* same iter space */
                        {
                            var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~((~(-1812422148646499650LL)))))) ? (((((/* implicit */_Bool) ((signed char) var_1))) ? (((/* implicit */int) ((short) var_6))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_11))))))) : (((/* implicit */int) var_10))));
                            var_19 = ((/* implicit */signed char) (!(((/* implicit */_Bool) min((((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)27236))) : (141840826U))), (((/* implicit */unsigned int) (short)7)))))));
                            var_20 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) 141840823U)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (signed char)-42))))));
                            var_21 = ((/* implicit */unsigned short) arr_15 [i_1] [i_1] [i_3] [i_1] [i_5]);
                            var_22 = ((/* implicit */_Bool) (-(max((((/* implicit */long long int) (signed char)46)), (-4782471848781589867LL)))));
                        }
                        for (unsigned short i_6 = 0; i_6 < 16; i_6 += 1) /* same iter space */
                        {
                            arr_19 [i_6] [i_4] [i_1] [i_1] [i_1] = ((/* implicit */signed char) (-(((int) var_2))));
                            arr_20 [i_1] [i_2] [i_3] [i_4] [i_6] = ((/* implicit */short) var_10);
                            arr_21 [i_1] [(short)7] [i_3] [(short)12] [i_4] [i_6] [(_Bool)1] = ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)34256))));
                            var_23 = ((/* implicit */long long int) max((-99892842), (((/* implicit */int) (unsigned char)160))));
                        }
                        /* vectorizable */
                        for (unsigned short i_7 = 0; i_7 < 16; i_7 += 1) /* same iter space */
                        {
                            var_24 ^= ((/* implicit */unsigned short) ((((/* implicit */int) var_0)) - (((/* implicit */int) var_2))));
                            arr_24 [i_1] [i_2] [i_3] [i_4] [i_7] [i_2] = var_12;
                        }
                        var_25 = ((/* implicit */unsigned short) ((max((((unsigned int) -1LL)), (((/* implicit */unsigned int) var_11)))) | (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)52338)) < (((/* implicit */int) (unsigned short)19113))))))));
                        var_26 = ((/* implicit */int) ((((/* implicit */int) (unsigned short)11885)) > (((/* implicit */int) (_Bool)0))));
                        arr_25 [9LL] [i_3] [9LL] [9LL] = ((/* implicit */unsigned int) (short)32767);
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (signed char i_8 = 3; i_8 < 14; i_8 += 2) 
        {
            for (long long int i_9 = 0; i_9 < 16; i_9 += 2) 
            {
                for (unsigned int i_10 = 3; i_10 < 15; i_10 += 3) 
                {
                    {
                        var_27 |= ((/* implicit */_Bool) ((long long int) arr_31 [9LL] [i_10 - 3] [i_10 - 1] [i_10 + 1]));
                        arr_34 [i_1] [i_8] [i_1] [i_10] = ((/* implicit */unsigned long long int) (_Bool)0);
                        var_28 = ((/* implicit */_Bool) min((var_28), (((/* implicit */_Bool) arr_6 [i_1] [i_1] [i_1]))));
                        arr_35 [i_1] [i_1] [(unsigned char)4] [i_9] [i_10 - 3] = ((/* implicit */int) var_2);
                    }
                } 
            } 
        } 
        arr_36 [14LL] = ((/* implicit */_Bool) ((((/* implicit */int) ((4533947000787511632LL) > (((/* implicit */long long int) ((/* implicit */int) (unsigned short)11885)))))) - ((-(((/* implicit */int) (unsigned short)13198))))));
    }
    /* LoopNest 2 */
    for (signed char i_11 = 0; i_11 < 24; i_11 += 1) 
    {
        for (short i_12 = 1; i_12 < 23; i_12 += 2) 
        {
            {
                arr_43 [i_11] = ((/* implicit */unsigned short) 141840826U);
                arr_44 [i_11] [i_11] [i_11] |= ((/* implicit */long long int) max((((/* implicit */int) ((unsigned char) min((((/* implicit */unsigned long long int) -1812422148646499637LL)), (var_4))))), ((~(2024690562)))));
                arr_45 [i_12] = ((/* implicit */signed char) max((min((-4533947000787511632LL), (((/* implicit */long long int) (short)15255)))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_40 [(_Bool)1] [i_11])) ? (((/* implicit */int) var_14)) : ((-(((/* implicit */int) (_Bool)1)))))))));
            }
        } 
    } 
}
