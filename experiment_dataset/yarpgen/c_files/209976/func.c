/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209976
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209976 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209976
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
    for (int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) -8710310966272821421LL))));
                var_16 ^= ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [(_Bool)1]))) <= ((+(var_2)))))) >= (((/* implicit */int) var_14))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned short i_2 = 3; i_2 < 12; i_2 += 3) 
    {
        var_17 = ((/* implicit */int) var_4);
        var_18 = ((/* implicit */unsigned short) min((((/* implicit */long long int) (-(max((((/* implicit */unsigned int) arr_1 [i_2])), (var_4)))))), (((var_5) ^ (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6))))))))));
    }
    for (unsigned short i_3 = 0; i_3 < 14; i_3 += 4) 
    {
        arr_8 [i_3] [i_3] &= (((~(((/* implicit */int) arr_3 [i_3] [i_3])))) % (((/* implicit */int) arr_3 [i_3] [i_3])));
        /* LoopSeq 2 */
        /* vectorizable */
        for (long long int i_4 = 4; i_4 < 11; i_4 += 1) 
        {
            /* LoopNest 2 */
            for (signed char i_5 = 1; i_5 < 12; i_5 += 3) 
            {
                for (long long int i_6 = 1; i_6 < 11; i_6 += 1) 
                {
                    {
                        var_19 ^= 0;
                        var_20 = ((/* implicit */long long int) (-(((/* implicit */int) arr_10 [i_3] [i_3] [i_3]))));
                    }
                } 
            } 
            /* LoopSeq 2 */
            for (unsigned short i_7 = 3; i_7 < 13; i_7 += 1) 
            {
                var_21 |= ((/* implicit */_Bool) var_14);
                arr_17 [i_3] [i_4] [i_3] = ((/* implicit */signed char) -8710310966272821421LL);
                var_22 -= (~(arr_9 [i_3] [i_7 - 2]));
            }
            for (unsigned int i_8 = 0; i_8 < 14; i_8 += 4) 
            {
                /* LoopNest 2 */
                for (unsigned short i_9 = 0; i_9 < 14; i_9 += 4) 
                {
                    for (long long int i_10 = 0; i_10 < 14; i_10 += 1) 
                    {
                        {
                            var_23 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) -760793916)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) var_12)))))) : ((~(-8710310966272821421LL)))));
                            var_24 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)62035))) % (var_2)));
                            var_25 = ((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_4 - 1]))) <= (var_9));
                        }
                    } 
                } 
                /* LoopSeq 3 */
                for (unsigned short i_11 = 0; i_11 < 14; i_11 += 1) 
                {
                    var_26 = ((/* implicit */unsigned char) ((unsigned long long int) var_13));
                    var_27 = ((/* implicit */signed char) var_6);
                }
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) /* same iter space */
                {
                    var_28 ^= ((/* implicit */long long int) ((((/* implicit */int) arr_28 [i_3] [i_4 + 1] [i_8] [i_4 + 1] [i_4] [i_8])) ^ (((/* implicit */int) arr_18 [i_4 + 2]))));
                    arr_31 [1LL] [i_4 - 1] [i_8] [i_4] = ((/* implicit */signed char) (~(7070522050917994163LL)));
                }
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) /* same iter space */
                {
                    var_29 = ((/* implicit */short) max((var_29), (((/* implicit */short) (!(((/* implicit */_Bool) ((unsigned long long int) arr_30 [i_13] [i_13] [i_8] [i_4] [i_3]))))))));
                    arr_35 [i_4] = arr_10 [i_3] [i_3] [i_13];
                }
            }
        }
        for (unsigned char i_14 = 0; i_14 < 14; i_14 += 2) 
        {
            /* LoopNest 3 */
            for (unsigned char i_15 = 1; i_15 < 12; i_15 += 4) 
            {
                for (unsigned short i_16 = 0; i_16 < 14; i_16 += 1) 
                {
                    for (int i_17 = 3; i_17 < 13; i_17 += 1) 
                    {
                        {
                            var_30 = ((/* implicit */unsigned int) arr_42 [i_14]);
                            arr_46 [i_16] [i_16] &= ((/* implicit */signed char) var_9);
                        }
                    } 
                } 
            } 
            var_31 = ((/* implicit */unsigned long long int) ((min((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_41 [i_14] [i_3])) : (((/* implicit */int) arr_38 [i_14] [i_14] [i_3] [i_3])))), (((((/* implicit */int) arr_29 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3])) - (160664001))))) <= (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_40 [i_3] [i_14]))) ^ (6767839755329693154LL)))) && (((/* implicit */_Bool) arr_40 [i_3] [i_14])))))));
            var_32 = ((/* implicit */unsigned short) ((((/* implicit */long long int) (~(((/* implicit */int) var_7))))) | (7714476467956840440LL)));
            var_33 = ((/* implicit */unsigned short) (((~(arr_23 [i_3]))) == (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)62056)))));
        }
    }
    var_34 -= ((/* implicit */long long int) var_4);
    var_35 = ((/* implicit */signed char) (_Bool)1);
}
