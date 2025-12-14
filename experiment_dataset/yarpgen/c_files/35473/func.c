/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35473
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35473 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35473
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
    var_10 = ((/* implicit */_Bool) max((var_10), (((/* implicit */_Bool) 10928320337003522855ULL))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 1; i_0 < 14; i_0 += 2) 
    {
        var_11 = ((/* implicit */signed char) ((unsigned long long int) (unsigned short)56640));
        var_12 += ((/* implicit */signed char) -1051693569);
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            arr_7 [7U] [7U] [7U] = ((/* implicit */short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_0] [i_1])))))) : (4239787219U)));
            arr_8 [i_0] = ((/* implicit */long long int) arr_3 [i_1]);
            arr_9 [12U] |= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_6 [i_0 + 2] [i_1]))));
        }
    }
    /* vectorizable */
    for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
    {
        /* LoopSeq 3 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned int i_4 = 3; i_4 < 9; i_4 += 1) 
            {
                for (unsigned int i_5 = 1; i_5 < 6; i_5 += 1) 
                {
                    {
                        var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) (~(1048574))))));
                        var_14 *= ((/* implicit */_Bool) var_5);
                        var_15 = ((/* implicit */_Bool) (unsigned short)27041);
                        arr_21 [i_2] [i_2] [i_4] [i_3] = ((/* implicit */unsigned int) ((unsigned short) 8LL));
                    }
                } 
            } 
            arr_22 [i_2] [i_3] [i_2] = ((/* implicit */_Bool) 1174282050);
            var_16 = 55180077U;
        }
        for (unsigned char i_6 = 2; i_6 < 8; i_6 += 1) 
        {
            var_17 -= ((/* implicit */long long int) ((short) arr_16 [i_6] [i_2] [i_2 - 1]));
            var_18 |= ((/* implicit */unsigned char) ((int) arr_17 [i_2 - 1] [i_2 - 1] [i_6]));
            /* LoopNest 3 */
            for (signed char i_7 = 3; i_7 < 8; i_7 += 1) 
            {
                for (int i_8 = 2; i_8 < 9; i_8 += 1) 
                {
                    for (unsigned int i_9 = 1; i_9 < 9; i_9 += 1) 
                    {
                        {
                            var_19 ^= ((/* implicit */short) ((long long int) arr_14 [i_2] [i_7] [i_2]));
                            arr_36 [i_2] [i_6] [i_7 - 1] [i_6] [i_9] = ((/* implicit */unsigned char) ((_Bool) arr_10 [i_6 - 1] [i_7 + 2]));
                        }
                    } 
                } 
            } 
            var_20 = var_8;
            arr_37 [i_6] [i_6] [i_2 - 1] = ((int) 71916856549572608LL);
        }
        for (signed char i_10 = 0; i_10 < 10; i_10 += 2) 
        {
            var_21 -= ((/* implicit */_Bool) (short)24354);
            /* LoopSeq 4 */
            for (unsigned short i_11 = 0; i_11 < 10; i_11 += 1) 
            {
                arr_45 [i_2] = ((/* implicit */unsigned long long int) 20LL);
                var_22 = ((/* implicit */int) arr_23 [i_11]);
                /* LoopNest 2 */
                for (unsigned int i_12 = 2; i_12 < 7; i_12 += 1) 
                {
                    for (long long int i_13 = 1; i_13 < 6; i_13 += 1) 
                    {
                        {
                            var_23 = ((/* implicit */unsigned int) ((_Bool) var_5));
                            arr_52 [i_10] [i_10] [i_11] [i_12 - 1] [i_2] [i_11] &= ((/* implicit */unsigned short) var_5);
                            var_24 = ((/* implicit */unsigned int) max((var_24), (((var_0) ? (42674188U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_39 [i_2 - 1] [i_12 + 3])))))));
                        }
                    } 
                } 
            }
            for (short i_14 = 0; i_14 < 10; i_14 += 1) 
            {
                var_25 = ((/* implicit */_Bool) var_5);
                var_26 = ((/* implicit */_Bool) ((signed char) 2676227794U));
                arr_55 [i_14] [i_10] [i_10] [i_2 - 1] = ((/* implicit */signed char) var_0);
            }
            for (unsigned long long int i_15 = 0; i_15 < 10; i_15 += 1) 
            {
                var_27 = ((/* implicit */unsigned short) max((var_27), (((/* implicit */unsigned short) -8823654065792263209LL))));
                var_28 -= ((/* implicit */_Bool) (+(4239787204U)));
                arr_58 [(unsigned char)0] [i_10] [i_10] = ((/* implicit */_Bool) 7518423736706028760ULL);
            }
            for (short i_16 = 0; i_16 < 10; i_16 += 2) 
            {
                /* LoopSeq 2 */
                for (unsigned long long int i_17 = 2; i_17 < 8; i_17 += 1) 
                {
                    arr_64 [i_16] [i_16] [i_16] = var_5;
                    var_29 = ((/* implicit */_Bool) (short)-13309);
                }
                for (unsigned int i_18 = 0; i_18 < 10; i_18 += 2) 
                {
                    var_30 = ((/* implicit */unsigned char) (unsigned short)57350);
                    var_31 ^= ((/* implicit */int) arr_23 [i_2 - 1]);
                    arr_67 [5] [7ULL] [i_10] [i_2 - 1] = var_0;
                }
                var_32 += ((/* implicit */unsigned short) arr_56 [i_2]);
                arr_68 [i_2] [i_10] = ((/* implicit */unsigned short) ((_Bool) arr_62 [i_16] [i_2 - 1] [i_10]));
                var_33 &= ((/* implicit */_Bool) arr_53 [i_16] [i_10] [i_2 - 1] [i_2]);
                var_34 = ((/* implicit */unsigned short) 0ULL);
            }
            var_35 = ((/* implicit */signed char) var_4);
        }
        var_36 &= ((/* implicit */unsigned long long int) ((var_0) ? (4U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_26 [i_2] [i_2 - 1] [i_2 - 1])))));
        var_37 = ((/* implicit */int) ((unsigned long long int) 14466032171675615966ULL));
    }
    var_38 = ((/* implicit */unsigned short) min((min((((/* implicit */unsigned long long int) var_0)), ((+(0ULL))))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) min((((/* implicit */short) var_1)), ((short)9857)))))))));
}
