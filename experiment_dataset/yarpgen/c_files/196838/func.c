/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196838
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196838 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196838
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 19; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                {
                    var_18 = var_6;
                    var_19 += ((/* implicit */unsigned short) ((4781880641789456973ULL) < (0ULL)));
                    arr_7 [i_0] [i_0] [i_2] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) -1627133308297058466LL)) ? (536870911U) : (3758096384U)))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned short) var_15);
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_3 = 0; i_3 < 24; i_3 += 2) 
    {
        var_21 = ((/* implicit */unsigned long long int) (((+(((/* implicit */int) var_6)))) <= (((/* implicit */int) var_2))));
        /* LoopSeq 2 */
        for (unsigned long long int i_4 = 3; i_4 < 23; i_4 += 1) /* same iter space */
        {
            var_22 = ((/* implicit */unsigned int) (((((-(((/* implicit */int) var_12)))) + (2147483647))) >> (((((((/* implicit */int) var_12)) + (((/* implicit */int) var_4)))) - (27672)))));
            var_23 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_13))));
        }
        for (unsigned long long int i_5 = 3; i_5 < 23; i_5 += 1) /* same iter space */
        {
            /* LoopSeq 1 */
            for (unsigned int i_6 = 0; i_6 < 24; i_6 += 2) 
            {
                var_24 = (!(((/* implicit */_Bool) var_7)));
                var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_4))));
            }
            var_26 = ((/* implicit */signed char) (~(((/* implicit */int) var_15))));
        }
    }
    /* LoopSeq 3 */
    for (long long int i_7 = 4; i_7 < 12; i_7 += 1) 
    {
        var_27 ^= ((/* implicit */unsigned char) var_15);
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned short i_8 = 0; i_8 < 14; i_8 += 2) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_9 = 0; i_9 < 14; i_9 += 3) 
            {
                var_28 += ((/* implicit */unsigned short) var_17);
                var_29 = ((/* implicit */signed char) (-(var_7)));
            }
            var_30 |= ((/* implicit */short) ((((/* implicit */_Bool) var_3)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))));
        }
        /* vectorizable */
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
        {
            var_31 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? ((-(var_7))) : (((/* implicit */unsigned long long int) var_17))));
            var_32 ^= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_14))));
        }
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) /* same iter space */
        {
            var_33 = ((/* implicit */unsigned char) min((var_33), (((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_14)) ? (var_7) : (((/* implicit */unsigned long long int) var_13)))), (((/* implicit */unsigned long long int) var_4))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_15)) != ((~(((/* implicit */int) var_2)))))))) : (min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_3))))), (var_0))))))));
            var_34 = ((/* implicit */unsigned char) var_6);
        }
        var_35 ^= ((/* implicit */int) var_3);
        arr_32 [i_7] [i_7] = ((/* implicit */unsigned short) var_11);
    }
    /* vectorizable */
    for (unsigned char i_12 = 0; i_12 < 14; i_12 += 1) 
    {
        var_36 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_5))));
        arr_35 [i_12] = ((/* implicit */short) ((var_15) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_5))));
        arr_36 [i_12] [i_12] = ((/* implicit */long long int) (~(((/* implicit */int) var_3))));
    }
    /* vectorizable */
    for (signed char i_13 = 1; i_13 < 20; i_13 += 2) 
    {
        /* LoopNest 3 */
        for (short i_14 = 3; i_14 < 18; i_14 += 2) 
        {
            for (long long int i_15 = 1; i_15 < 18; i_15 += 2) 
            {
                for (short i_16 = 1; i_16 < 19; i_16 += 2) 
                {
                    {
                        var_37 += ((/* implicit */unsigned short) var_6);
                        var_38 = ((/* implicit */long long int) ((var_13) - (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)54196)))))));
                        var_39 = ((/* implicit */unsigned char) var_7);
                    }
                } 
            } 
        } 
        var_40 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_8)) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))));
        var_41 = ((/* implicit */_Bool) ((((/* implicit */int) var_15)) * (((/* implicit */int) var_15))));
        /* LoopNest 2 */
        for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
        {
            for (signed char i_18 = 0; i_18 < 21; i_18 += 2) 
            {
                {
                    arr_53 [i_13] [i_13] [i_13] [i_17] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_0)));
                    var_42 = ((/* implicit */unsigned char) max((var_42), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_12)))))));
                }
            } 
        } 
    }
}
