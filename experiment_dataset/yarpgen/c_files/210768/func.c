/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210768
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210768 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210768
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
    var_10 = ((/* implicit */unsigned long long int) var_5);
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            /* LoopNest 3 */
            for (short i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                for (int i_3 = 0; i_3 < 19; i_3 += 4) 
                {
                    for (int i_4 = 0; i_4 < 19; i_4 += 3) 
                    {
                        {
                            var_11 = (unsigned char)254;
                            var_12 = ((((/* implicit */_Bool) arr_7 [i_1] [i_1] [i_1] [i_1])) ? (((/* implicit */int) arr_7 [i_1] [i_1] [i_3] [i_3])) : (((/* implicit */int) arr_7 [i_1] [i_1] [i_2] [i_3])));
                            arr_13 [i_0] [i_1] [i_2] [i_3] [i_0] |= ((/* implicit */unsigned short) (+(((/* implicit */int) ((((/* implicit */int) var_7)) <= (-1159200389))))));
                            arr_14 [i_4] [i_1] [i_1] [i_1] [i_0] = ((/* implicit */unsigned short) arr_10 [i_0] [i_1] [i_1] [i_1] [i_4]);
                        }
                    } 
                } 
            } 
            arr_15 [i_1] = ((/* implicit */unsigned int) (signed char)-110);
            arr_16 [i_1] = (~(((((/* implicit */int) (signed char)89)) % (((/* implicit */int) (signed char)-90)))));
        }
        for (long long int i_5 = 3; i_5 < 16; i_5 += 4) 
        {
            arr_20 [i_5] [i_5 + 2] = (signed char)-87;
            /* LoopNest 2 */
            for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
            {
                for (long long int i_7 = 2; i_7 < 16; i_7 += 2) 
                {
                    {
                        arr_27 [i_7] [i_5] [i_6] [i_6] [i_7 + 3] &= ((/* implicit */signed char) ((((/* implicit */_Bool) var_7)) ? (arr_1 [i_5 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) 15605067795350388012ULL))))));
                        var_13 |= ((/* implicit */int) arr_5 [i_0] [i_5] [i_6 + 1] [i_7]);
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned short i_8 = 3; i_8 < 17; i_8 += 1) 
            {
                for (short i_9 = 4; i_9 < 18; i_9 += 1) 
                {
                    {
                        arr_33 [i_5] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_11 [i_0] [i_5 + 2] [i_9 - 2])) <= (((/* implicit */int) var_2))));
                        var_14 = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_29 [i_0] [i_5 - 2] [i_8] [i_9]))));
                        var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) (-(((((/* implicit */_Bool) (signed char)90)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-87))) : (var_6))))))));
                        arr_34 [i_0] [i_0] [5] [i_5] = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_3 [i_0] [i_8 - 3] [i_8]))));
                    }
                } 
            } 
            /* LoopNest 3 */
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                for (short i_11 = 0; i_11 < 19; i_11 += 4) 
                {
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        {
                            var_16 -= ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-77))))) ? ((~(((/* implicit */int) (signed char)-110)))) : (((((/* implicit */_Bool) (unsigned char)58)) ? (((/* implicit */int) (signed char)-72)) : (((/* implicit */int) (signed char)-90)))));
                            var_17 = ((/* implicit */signed char) ((arr_40 [i_0] [i_5 - 1] [i_5 - 1] [i_5 + 3] [(_Bool)1]) ? (((/* implicit */int) arr_40 [i_0] [i_5] [i_10] [i_5 + 1] [i_12])) : (var_0)));
                            var_18 += ((/* implicit */long long int) (~(((/* implicit */int) var_7))));
                        }
                    } 
                } 
            } 
        }
        /* LoopSeq 4 */
        for (signed char i_13 = 0; i_13 < 19; i_13 += 2) 
        {
            arr_46 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_13] [i_13]))) <= (((((/* implicit */_Bool) var_5)) ? (var_1) : (var_6)))));
            var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-5)) ? (((/* implicit */int) arr_2 [i_0] [i_13])) : ((~(((/* implicit */int) arr_28 [i_0]))))));
            /* LoopNest 2 */
            for (unsigned short i_14 = 2; i_14 < 16; i_14 += 1) 
            {
                for (short i_15 = 2; i_15 < 17; i_15 += 3) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_16 = 2; i_16 < 17; i_16 += 3) 
                        {
                            var_20 *= ((/* implicit */unsigned char) arr_23 [i_0] [i_16]);
                            arr_55 [i_15] [i_13] [i_14] [i_16 + 2] = ((/* implicit */signed char) arr_7 [i_15] [i_13] [i_14 - 1] [i_15]);
                            arr_56 [i_0] [i_13] [i_0] [i_14 + 1] [i_13] [i_16 + 2] |= ((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))));
                            var_21 = ((/* implicit */short) (((_Bool)0) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-90))) : (872073122U)));
                        }
                        var_22 = ((/* implicit */unsigned char) ((int) (_Bool)1));
                    }
                } 
            } 
        }
        for (int i_17 = 0; i_17 < 19; i_17 += 4) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_18 = 0; i_18 < 19; i_18 += 2) 
            {
                for (signed char i_19 = 4; i_19 < 18; i_19 += 4) 
                {
                    {
                        var_23 = ((/* implicit */signed char) ((unsigned int) 67108863U));
                        var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_63 [i_17] [i_19 - 4] [i_19] [i_19])) ? (((/* implicit */int) arr_63 [i_17] [i_19 - 3] [i_19] [i_19 - 2])) : (((/* implicit */int) arr_29 [i_18] [i_19 - 4] [i_19] [i_19]))));
                    }
                } 
            } 
            arr_64 [i_0] [i_17] = ((/* implicit */_Bool) arr_38 [i_0] [i_0] [i_0] [i_17]);
            arr_65 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(var_0)))) ? (arr_61 [12] [i_17]) : (((/* implicit */long long int) ((/* implicit */int) arr_48 [i_0] [i_0] [i_17])))));
        }
        for (int i_20 = 0; i_20 < 19; i_20 += 4) /* same iter space */
        {
            var_25 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (arr_8 [i_0] [i_20]) : (((/* implicit */unsigned long long int) arr_61 [i_0] [i_0]))));
            var_26 = ((unsigned char) arr_24 [i_0] [i_0] [(unsigned char)1] [i_20]);
        }
        for (int i_21 = 0; i_21 < 19; i_21 += 4) /* same iter space */
        {
            var_27 *= ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (short)21315))) % (4227858432U)));
            var_28 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) var_2))) != (((long long int) var_9))));
            arr_72 [i_0] [i_21] [i_21] = ((/* implicit */unsigned short) var_6);
        }
    }
    for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) /* same iter space */
    {
        arr_75 [i_22] = ((/* implicit */int) ((unsigned char) (~((+(((/* implicit */int) (signed char)127)))))));
        var_29 = ((/* implicit */short) ((unsigned short) (-(((/* implicit */int) (unsigned char)0)))));
        var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) (~(((/* implicit */int) arr_71 [i_22] [i_22] [i_22]))))) <= (min((min((var_6), (((/* implicit */long long int) (signed char)-51)))), (((/* implicit */long long int) (~(arr_57 [i_22]))))))));
    }
    /* vectorizable */
    for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) /* same iter space */
    {
        arr_79 [i_23] = ((/* implicit */short) (~(((/* implicit */int) arr_2 [i_23] [i_23]))));
        var_31 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_41 [i_23] [i_23] [i_23] [i_23] [i_23] [i_23]))));
        arr_80 [i_23] [i_23] |= ((/* implicit */int) ((_Bool) arr_77 [i_23]));
    }
    for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) /* same iter space */
    {
        arr_84 [i_24] [i_24] = ((/* implicit */_Bool) ((unsigned short) var_6));
        arr_85 [i_24] = ((/* implicit */int) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1)))) : (-217640454441585905LL)));
    }
}
