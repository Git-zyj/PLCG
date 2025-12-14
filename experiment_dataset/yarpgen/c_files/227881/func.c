/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227881
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227881 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227881
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
    var_13 = ((/* implicit */long long int) (!(((/* implicit */_Bool) max(((+((-2147483647 - 1)))), (((2147483647) ^ (((/* implicit */int) var_4)))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (long long int i_0 = 2; i_0 < 17; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 1; i_1 < 18; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned char i_3 = 1; i_3 < 17; i_3 += 3) 
                    {
                        var_14 = ((/* implicit */_Bool) (~((+((-2147483647 - 1))))));
                        arr_9 [i_0 + 2] [i_1 - 1] [i_2] [(signed char)14] [i_3] = ((/* implicit */signed char) ((((/* implicit */int) arr_4 [i_0] [i_1 + 1])) ^ ((-2147483647 - 1))));
                        var_15 -= var_9;
                    }
                    for (int i_4 = 0; i_4 < 19; i_4 += 3) 
                    {
                        /* LoopSeq 2 */
                        for (signed char i_5 = 2; i_5 < 16; i_5 += 3) 
                        {
                            arr_15 [i_0] [i_0] [i_2] [i_4] [i_5] = ((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)66))));
                            arr_16 [i_0] [i_0] [i_0] [(unsigned char)7] [i_0 - 2] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+((-2147483647 - 1))))) ? (((/* implicit */int) arr_12 [i_0] [i_1] [14] [(signed char)13] [i_0])) : ((-(((/* implicit */int) var_4))))));
                            arr_17 [i_0] [i_2] [i_4] = ((/* implicit */unsigned short) arr_6 [(_Bool)1] [i_1] [i_0 - 2] [i_1]);
                            arr_18 [(signed char)6] [(signed char)6] [i_1 - 1] [i_2] [10U] [i_5 + 2] = ((/* implicit */unsigned long long int) var_12);
                            arr_19 [i_0 + 2] [i_1 + 1] [i_2] [i_4] [i_4] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) -1768118359))));
                        }
                        for (signed char i_6 = 0; i_6 < 19; i_6 += 4) 
                        {
                            var_16 &= ((/* implicit */unsigned long long int) 2147483647);
                            var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) (~(((/* implicit */int) arr_5 [(_Bool)1] [(_Bool)1] [(unsigned short)5] [0])))))));
                        }
                        arr_23 [i_0] [i_1 + 1] [i_0] [i_1 + 1] [i_0] = arr_7 [i_0 + 1] [i_4];
                        var_18 -= ((/* implicit */signed char) -2147483647);
                    }
                    for (signed char i_7 = 4; i_7 < 16; i_7 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_8 = 4; i_8 < 17; i_8 += 4) 
                        {
                            var_19 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_25 [i_0 - 2] [i_1 - 1] [i_7 - 3] [i_8 - 4] [i_8]))));
                            var_20 -= ((/* implicit */signed char) (~(((/* implicit */int) (unsigned char)9))));
                            var_21 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)9)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (524287))))));
                            var_22 = ((/* implicit */signed char) var_7);
                        }
                        var_23 = ((((/* implicit */int) var_8)) * (((/* implicit */int) arr_27 [i_7 - 3] [i_1 - 1] [i_0 + 1] [i_0] [i_0] [i_0 + 2] [i_0])));
                        var_24 ^= ((/* implicit */short) (!(var_2)));
                    }
                    var_25 = ((/* implicit */_Bool) (-(((/* implicit */int) arr_28 [(short)9] [i_1 - 1] [i_1 - 1] [i_1] [i_1] [(unsigned char)9] [i_1]))));
                    arr_30 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) var_4);
                    var_26 = (short)25048;
                    arr_31 [i_2] [i_1] [i_0] = arr_10 [i_0] [i_0] [i_0] [i_1 + 1] [i_2] [i_2];
                }
            } 
        } 
        var_27 |= (-(-2147483627));
        var_28 = ((/* implicit */long long int) var_2);
        /* LoopSeq 4 */
        for (unsigned short i_9 = 2; i_9 < 18; i_9 += 2) 
        {
            arr_34 [18] [i_9 + 1] = ((/* implicit */signed char) (+(((2147483626) % (arr_25 [i_0] [i_0 - 1] [4U] [i_0] [i_0])))));
            var_29 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 2147483626)) ? ((-2147483647 - 1)) : (2147483647)));
            var_30 = ((/* implicit */signed char) 2130706432);
            var_31 = ((/* implicit */int) var_4);
        }
        for (signed char i_10 = 0; i_10 < 19; i_10 += 4) 
        {
            arr_37 [17] [i_10] [17] = ((/* implicit */long long int) ((((/* implicit */_Bool) 8U)) ? (((/* implicit */int) (_Bool)1)) : (-1435915274)));
            arr_38 [i_10] = ((/* implicit */unsigned long long int) (unsigned char)9);
            var_32 = (~((~(((/* implicit */int) (unsigned short)49772)))));
            var_33 = ((/* implicit */unsigned int) (+(((/* implicit */int) ((arr_35 [i_0] [i_0]) <= (((/* implicit */long long int) ((/* implicit */int) (signed char)62))))))));
        }
        for (unsigned long long int i_11 = 2; i_11 < 18; i_11 += 3) 
        {
            var_34 &= ((/* implicit */short) ((((arr_11 [i_0] [i_0]) == (((/* implicit */long long int) ((/* implicit */int) (unsigned char)253))))) ? (arr_8 [(unsigned char)14] [i_11 - 2]) : (arr_22 [i_0] [i_11 + 1] [i_0] [i_0 - 1] [i_11 - 1] [i_11 + 1] [i_0])));
            var_35 = ((/* implicit */signed char) (-(((((/* implicit */int) (unsigned char)237)) & (((/* implicit */int) (signed char)63))))));
        }
        for (signed char i_12 = 0; i_12 < 19; i_12 += 4) 
        {
            var_36 = ((/* implicit */unsigned char) (unsigned short)65535);
            /* LoopNest 3 */
            for (unsigned int i_13 = 0; i_13 < 19; i_13 += 3) 
            {
                for (int i_14 = 0; i_14 < 19; i_14 += 4) 
                {
                    for (unsigned char i_15 = 3; i_15 < 17; i_15 += 3) 
                    {
                        {
                            var_37 += ((/* implicit */signed char) (~(((/* implicit */int) (signed char)62))));
                            var_38 ^= ((/* implicit */unsigned int) (-(((/* implicit */int) arr_40 [i_0 + 2] [i_0 - 2] [i_15 + 1]))));
                        }
                    } 
                } 
            } 
            /* LoopSeq 1 */
            for (short i_16 = 1; i_16 < 15; i_16 += 3) 
            {
                var_39 = (-(-2147483626));
                arr_56 [i_16] [14ULL] [i_12] [i_16 + 1] = ((/* implicit */long long int) (+(((/* implicit */int) var_2))));
                var_40 -= ((/* implicit */long long int) var_3);
            }
            var_41 = ((/* implicit */short) (~((+((-2147483647 - 1))))));
        }
    }
    for (signed char i_17 = 1; i_17 < 14; i_17 += 3) 
    {
        /* LoopNest 3 */
        for (signed char i_18 = 0; i_18 < 17; i_18 += 3) 
        {
            for (unsigned int i_19 = 0; i_19 < 17; i_19 += 4) 
            {
                for (unsigned short i_20 = 1; i_20 < 15; i_20 += 2) 
                {
                    {
                        arr_69 [i_18] [i_19] [i_18] = ((/* implicit */_Bool) var_6);
                        var_42 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(arr_11 [i_17 + 3] [i_18])))) ? ((~(((/* implicit */int) (signed char)-123)))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) == (898131934U))))));
                        arr_70 [i_17 + 3] [i_18] [i_19] [i_18] [i_17 + 3] = ((((/* implicit */int) (signed char)-62)) + (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)253))))));
                        var_43 |= ((/* implicit */signed char) (~((-(((((/* implicit */_Bool) arr_28 [i_17] [i_18] [(unsigned char)12] [i_18] [i_19] [i_19] [(unsigned char)3])) ? (var_6) : (-7028690336927635469LL)))))));
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (int i_21 = 0; i_21 < 17; i_21 += 4) 
        {
            var_44 = ((/* implicit */unsigned char) (_Bool)1);
            var_45 &= ((/* implicit */short) (-((~(((((/* implicit */_Bool) arr_13 [i_17] [i_17] [i_17] [i_17] [i_21] [i_17] [i_21])) ? (-8464598748018827922LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))));
        }
        var_46 = ((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)62))));
        var_47 -= ((((((/* implicit */_Bool) (unsigned char)142)) ? (((/* implicit */int) arr_12 [i_17] [i_17] [i_17 + 1] [8LL] [i_17 + 1])) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)32757))))))) % ((((-(1768118358))) | ((+((-2147483647 - 1)))))));
        /* LoopNest 2 */
        for (signed char i_22 = 0; i_22 < 17; i_22 += 3) 
        {
            for (signed char i_23 = 0; i_23 < 17; i_23 += 3) 
            {
                {
                    var_48 = ((/* implicit */short) (-(max(((~(15275633692288786396ULL))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_72 [i_17 + 3] [i_22] [(unsigned char)15])))))))));
                    var_49 = ((/* implicit */int) (!(((/* implicit */_Bool) (((_Bool)1) ? ((~(7028690336927635457LL))) : (((/* implicit */long long int) ((/* implicit */int) var_7))))))));
                    var_50 = ((/* implicit */int) (+((~(arr_11 [i_17 + 2] [i_22])))));
                    var_51 = ((/* implicit */unsigned char) min((((/* implicit */int) (!(((/* implicit */_Bool) var_7))))), (((-1768118358) * (((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned int i_24 = 1; i_24 < 11; i_24 += 3) 
    {
        arr_82 [i_24] [i_24] = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_62 [i_24] [i_24 - 1] [i_24 - 1]))));
        var_52 = ((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_62 [i_24] [i_24] [i_24])))))));
    }
}
