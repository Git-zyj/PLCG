/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51305
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51305 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51305
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
    for (signed char i_0 = 1; i_0 < 16; i_0 += 2) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                for (int i_3 = 0; i_3 < 18; i_3 += 3) 
                {
                    {
                        var_15 = ((/* implicit */int) 3298838226U);
                        var_16 = ((/* implicit */long long int) (~((~(((/* implicit */int) var_14))))));
                    }
                } 
            } 
            /* LoopSeq 2 */
            for (int i_4 = 2; i_4 < 15; i_4 += 3) 
            {
                var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) (!(((/* implicit */_Bool) (+(((/* implicit */int) ((unsigned short) var_9)))))))))));
                var_18 = ((/* implicit */short) ((unsigned int) ((((/* implicit */_Bool) arr_7 [17LL] [i_1] [i_4] [i_4 + 1])) || (((/* implicit */_Bool) ((unsigned short) var_1))))));
                /* LoopNest 2 */
                for (int i_5 = 2; i_5 < 14; i_5 += 2) 
                {
                    for (signed char i_6 = 3; i_6 < 16; i_6 += 1) 
                    {
                        {
                            var_19 += ((/* implicit */unsigned short) arr_8 [i_1]);
                            var_20 = ((/* implicit */long long int) var_14);
                        }
                    } 
                } 
                arr_19 [i_1] [i_1] &= ((/* implicit */unsigned int) var_9);
                arr_20 [i_0] [i_1] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */int) var_14)) >> (((((((((/* implicit */_Bool) (short)4899)) ? (((/* implicit */int) (unsigned char)153)) : (((/* implicit */int) arr_11 [i_0] [i_1] [i_4])))) >> (((/* implicit */int) (_Bool)1)))) - (67)))));
            }
            for (long long int i_7 = 0; i_7 < 18; i_7 += 2) 
            {
                var_21 *= ((/* implicit */unsigned char) var_5);
                var_22 = var_2;
            }
            var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) (!((!(((/* implicit */_Bool) var_8)))))))));
            var_24 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_0))));
        }
        for (unsigned char i_8 = 1; i_8 < 15; i_8 += 4) 
        {
            arr_27 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) var_0))))) ? (((((/* implicit */int) ((unsigned short) arr_24 [i_0] [i_0] [(signed char)2]))) >> (((/* implicit */int) ((((/* implicit */int) var_14)) == (((/* implicit */int) arr_15 [(short)0] [i_8] [i_8 + 3] [i_0] [i_0] [i_0]))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))));
            var_25 ^= ((/* implicit */unsigned short) var_0);
        }
        var_26 -= ((/* implicit */long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)74)))))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned char i_9 = 1; i_9 < 16; i_9 += 2) 
        {
            arr_32 [i_9] [i_0] = ((/* implicit */unsigned int) var_3);
            var_27 = ((/* implicit */_Bool) 996129081U);
            arr_33 [i_0] [i_9] [i_9] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((short) arr_14 [i_0] [i_0] [i_9])))));
            /* LoopSeq 2 */
            for (signed char i_10 = 0; i_10 < 18; i_10 += 4) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_11 = 1; i_11 < 15; i_11 += 4) 
                {
                    for (unsigned short i_12 = 0; i_12 < 18; i_12 += 3) 
                    {
                        {
                            var_28 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_0 [i_0 - 1])) | (((/* implicit */int) arr_0 [i_0 - 1]))));
                            arr_42 [i_9] [i_9] [i_10] [(unsigned short)11] [i_0] [i_0] = ((/* implicit */_Bool) ((unsigned short) (_Bool)1));
                        }
                    } 
                } 
                var_29 = ((/* implicit */long long int) max((var_29), (((/* implicit */long long int) var_7))));
                arr_43 [i_0] [i_10] = ((/* implicit */long long int) (~(((/* implicit */int) var_6))));
                var_30 ^= ((/* implicit */unsigned short) var_13);
                /* LoopNest 2 */
                for (unsigned char i_13 = 3; i_13 < 16; i_13 += 4) 
                {
                    for (unsigned char i_14 = 0; i_14 < 18; i_14 += 3) 
                    {
                        {
                            var_31 &= ((/* implicit */signed char) var_6);
                            var_32 = ((/* implicit */unsigned char) (short)-4900);
                        }
                    } 
                } 
            }
            for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
            {
                var_33 = arr_45 [i_9] [i_0] [i_0] [i_9];
                var_34 += ((/* implicit */short) (-((~(((/* implicit */int) (unsigned char)255))))));
            }
        }
        /* vectorizable */
        for (long long int i_16 = 0; i_16 < 18; i_16 += 4) 
        {
            var_35 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_10))) & (3787901434U)));
            var_36 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_47 [i_0] [i_0] [(short)16] [i_0] [i_0] [i_0 - 1] [i_0 + 2]))));
        }
        /* vectorizable */
        for (unsigned char i_17 = 1; i_17 < 15; i_17 += 4) 
        {
            var_37 += ((/* implicit */signed char) arr_46 [(_Bool)0] [i_17 + 2] [i_17 + 2] [i_17] [i_17]);
            var_38 = ((/* implicit */int) min((var_38), (((/* implicit */int) var_9))));
            arr_56 [i_0] [i_0] = ((/* implicit */unsigned short) (-(((var_13) + (((/* implicit */int) var_10))))));
        }
    }
    var_39 = ((/* implicit */unsigned char) var_2);
    var_40 = ((/* implicit */unsigned char) var_7);
    var_41 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_14))));
}
