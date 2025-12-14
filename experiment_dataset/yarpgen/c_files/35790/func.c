/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35790
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35790 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35790
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_0 = 1; i_0 < 11; i_0 += 2) /* same iter space */
    {
        var_18 *= (_Bool)1;
        /* LoopSeq 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
        {
            var_19 *= ((/* implicit */_Bool) arr_0 [i_0 + 1]);
            var_20 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_1 [i_0]))));
            /* LoopNest 2 */
            for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                for (int i_3 = 0; i_3 < 12; i_3 += 3) 
                {
                    {
                        var_21 = ((/* implicit */unsigned char) ((arr_4 [i_0] [i_1] [i_0] [i_1]) ^ (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (unsigned short)54884))))));
                        arr_10 [i_0] [i_0] = ((/* implicit */unsigned int) ((arr_7 [i_1] [i_0] [i_1]) & (arr_7 [i_0] [i_0] [(unsigned short)7])));
                    }
                } 
            } 
        }
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
        {
            var_22 &= ((/* implicit */_Bool) var_13);
            var_23 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [(signed char)6] [i_4])) || (((/* implicit */_Bool) arr_4 [10U] [(unsigned short)4] [(unsigned short)2] [i_0 + 1]))));
            var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) arr_5 [i_0] [(short)8] [i_0] [i_0]))));
        }
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
        {
            var_25 &= ((/* implicit */_Bool) ((int) arr_6 [i_0 + 1]));
            var_26 = ((((/* implicit */_Bool) ((signed char) -1327601084156182357LL))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (1327601084156182368LL) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_0 + 1])))))));
        }
    }
    for (unsigned short i_6 = 1; i_6 < 11; i_6 += 2) /* same iter space */
    {
        var_27 = ((/* implicit */_Bool) ((min((((/* implicit */long long int) (-(((/* implicit */int) var_13))))), (((1327601084156182356LL) % (1327601084156182363LL))))) % (((/* implicit */long long int) ((((/* implicit */int) ((signed char) 1327601084156182367LL))) << (((/* implicit */int) ((((/* implicit */_Bool) 1327601084156182377LL)) || (((/* implicit */_Bool) 1327601084156182356LL))))))))));
        /* LoopNest 2 */
        for (short i_7 = 0; i_7 < 12; i_7 += 2) 
        {
            for (unsigned int i_8 = 0; i_8 < 12; i_8 += 3) 
            {
                {
                    var_28 = ((/* implicit */int) arr_2 [i_7] [i_7]);
                    var_29 = ((/* implicit */unsigned short) ((unsigned int) (~(arr_9 [i_6] [i_7] [i_6 - 1]))));
                    var_30 = ((/* implicit */unsigned short) ((1327601084156182358LL) <= (((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_6 + 1] [i_7] [i_7] [i_6])) ? (((((/* implicit */_Bool) arr_5 [i_6] [i_6] [i_7] [i_7])) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_9)))) : (((/* implicit */int) (_Bool)0)))))));
                }
            } 
        } 
    }
    for (short i_9 = 0; i_9 < 19; i_9 += 3) 
    {
        var_31 = max((((short) arr_28 [i_9] [i_9])), (((/* implicit */short) ((_Bool) arr_29 [(unsigned char)18] [i_9]))));
        var_32 = (!(((/* implicit */_Bool) var_17)));
        var_33 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) 4282217003U))) & (((/* implicit */int) arr_28 [i_9] [i_9]))))) ? (((1327601084156182368LL) << (((/* implicit */int) (_Bool)0)))) : (((/* implicit */long long int) ((/* implicit */int) arr_29 [i_9] [i_9])))));
        /* LoopNest 2 */
        for (long long int i_10 = 2; i_10 < 18; i_10 += 3) 
        {
            for (unsigned int i_11 = 0; i_11 < 19; i_11 += 3) 
            {
                {
                    var_34 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned char) arr_29 [i_10 + 1] [i_10 - 1])))));
                    /* LoopNest 2 */
                    for (unsigned int i_12 = 1; i_12 < 18; i_12 += 2) 
                    {
                        for (int i_13 = 0; i_13 < 19; i_13 += 2) 
                        {
                            {
                                arr_40 [i_9] [i_9] [i_9] [i_12] [i_13] = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) 1327601084156182367LL)))) ? (((((/* implicit */long long int) ((((/* implicit */int) (unsigned short)65535)) & (((/* implicit */int) arr_32 [(short)0] [(short)0]))))) & ((-(-1327601084156182339LL))))) : (((/* implicit */long long int) ((/* implicit */int) var_13)))));
                                var_35 ^= ((max((((/* implicit */long long int) (unsigned short)14489)), (-4336184904749172701LL))) & (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_36 [i_13])) << (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */int) (signed char)-120)) & (((/* implicit */int) var_14)))) : (arr_38 [i_11] [i_11] [(signed char)3] [i_12])))));
                            }
                        } 
                    } 
                    var_36 = ((/* implicit */unsigned char) max((var_36), (((/* implicit */unsigned char) ((_Bool) (unsigned short)55243)))));
                }
            } 
        } 
    }
    var_37 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((((((/* implicit */_Bool) -1327601084156182359LL)) ? (1056192297) : (((/* implicit */int) var_0)))) % ((+(((/* implicit */int) (_Bool)1)))))) : (((max((-1626741276), (((/* implicit */int) (_Bool)1)))) << (((((/* implicit */int) var_4)) - (236)))))));
    var_38 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) ((long long int) var_3)))) ? (var_3) : (((((/* implicit */long long int) ((/* implicit */int) var_16))) & (((-1327601084156182352LL) & (((/* implicit */long long int) var_6))))))));
    var_39 = ((/* implicit */long long int) max((var_39), (((/* implicit */long long int) var_1))));
    /* LoopNest 3 */
    for (int i_14 = 0; i_14 < 16; i_14 += 2) 
    {
        for (short i_15 = 1; i_15 < 13; i_15 += 3) 
        {
            for (short i_16 = 0; i_16 < 16; i_16 += 3) 
            {
                {
                    var_40 = ((/* implicit */int) (~(((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) -1327601084156182359LL)) || (((/* implicit */_Bool) (unsigned char)182)))))) % (((1327601084156182350LL) + (((/* implicit */long long int) arr_39 [i_14] [i_14] [i_14] [i_14] [i_14] [i_14] [i_14]))))))));
                    var_41 = ((/* implicit */int) (short)20020);
                }
            } 
        } 
    } 
}
