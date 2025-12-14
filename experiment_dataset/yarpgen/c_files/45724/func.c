/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45724
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45724 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45724
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
    var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((((((/* implicit */_Bool) 4294967266U)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) (short)(-32767 - 1))))) + (2147483647))) >> (((var_5) - (16959268399397974325ULL)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)17))))) : (((((/* implicit */_Bool) max((13ULL), (((/* implicit */unsigned long long int) (short)8))))) ? (((((/* implicit */_Bool) (unsigned short)1)) ? (((/* implicit */int) (short)-32)) : (2147483647))) : (((/* implicit */int) ((2147483647) != (((/* implicit */int) (unsigned char)242)))))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 24; i_1 += 3) 
        {
            {
                var_20 = ((/* implicit */unsigned short) 0ULL);
                var_21 = max((((/* implicit */unsigned int) max((((((/* implicit */_Bool) 9U)) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) (short)-32750)))), (((/* implicit */int) (signed char)2))))), (((((/* implicit */unsigned int) ((((/* implicit */_Bool) 8U)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (unsigned short)65530))))) | (((((/* implicit */_Bool) -2147483617)) ? (((/* implicit */unsigned int) (-2147483647 - 1))) : (14U))))));
                arr_8 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((0ULL) << (((((/* implicit */int) (unsigned char)127)) - (120))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)255)) || (((/* implicit */_Bool) (unsigned char)255))))))))) ? ((+(min(((-2147483647 - 1)), ((-2147483647 - 1)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) 2147483627)))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (signed char i_2 = 0; i_2 < 14; i_2 += 4) 
    {
        /* LoopSeq 2 */
        for (short i_3 = 0; i_3 < 14; i_3 += 4) /* same iter space */
        {
            var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) (-(min((57344), (4092))))))));
            var_23 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)(-127 - 1)))));
            arr_13 [i_2] [i_3] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775795LL)) ? ((-(23U))) : (536870848U)))) ? ((~(((((/* implicit */unsigned long long int) ((/* implicit */int) (short)32767))) | (260046848ULL))))) : (((/* implicit */unsigned long long int) (((-(((/* implicit */int) (unsigned char)255)))) / (((/* implicit */int) (unsigned char)5)))))));
            var_24 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32762)) ? (0) : (((/* implicit */int) (unsigned short)49152))))) ? (((/* implicit */int) (unsigned char)60)) : (((/* implicit */int) max(((short)-32762), ((short)-1))))))));
            arr_14 [i_3] [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */short) (unsigned char)32)), ((short)(-32767 - 1))))) ? (((((/* implicit */_Bool) (unsigned short)12)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-32756))) : (4294967293U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)32754)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (unsigned short)8)))))));
        }
        /* vectorizable */
        for (short i_4 = 0; i_4 < 14; i_4 += 4) /* same iter space */
        {
            /* LoopSeq 2 */
            for (unsigned char i_5 = 3; i_5 < 13; i_5 += 3) /* same iter space */
            {
                arr_21 [i_2] [i_5] [i_2] [i_2] = ((/* implicit */short) ((0ULL) + (0ULL)));
                var_25 = ((/* implicit */short) (~(((((/* implicit */_Bool) (signed char)126)) ? (((/* implicit */int) (unsigned short)25)) : (((/* implicit */int) (unsigned char)0))))));
            }
            for (unsigned char i_6 = 3; i_6 < 13; i_6 += 3) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned long long int i_7 = 0; i_7 < 14; i_7 += 4) 
                {
                    for (unsigned long long int i_8 = 0; i_8 < 14; i_8 += 3) 
                    {
                        {
                            var_26 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)251)) / (((/* implicit */int) (short)-32764))));
                            var_27 = ((/* implicit */long long int) 2147483647);
                        }
                    } 
                } 
                var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)0))))) : (((/* implicit */int) (unsigned short)65510))));
            }
            arr_29 [i_2] = ((/* implicit */int) (-(((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)1))) : (0ULL)))));
            /* LoopSeq 3 */
            for (long long int i_9 = 0; i_9 < 14; i_9 += 4) /* same iter space */
            {
                arr_32 [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (-1073741824) : (67108736)))) ? (((((/* implicit */_Bool) (unsigned char)0)) ? (4398046510080ULL) : (((/* implicit */unsigned long long int) 0U)))) : (((/* implicit */unsigned long long int) 24U))));
                /* LoopSeq 1 */
                for (unsigned long long int i_10 = 0; i_10 < 14; i_10 += 3) 
                {
                    arr_35 [11ULL] [i_9] [i_2] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)256))));
                    var_29 = (-(((((/* implicit */_Bool) 4602678819172646912ULL)) ? (((/* implicit */int) (unsigned char)8)) : (((/* implicit */int) (short)(-32767 - 1))))));
                }
                var_30 = ((/* implicit */unsigned short) (~((-2147483647 - 1))));
                var_31 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32512)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))) : ((-9223372036854775807LL - 1LL)))))));
            }
            for (long long int i_11 = 0; i_11 < 14; i_11 += 4) /* same iter space */
            {
                var_32 = ((/* implicit */short) (~(((/* implicit */int) (unsigned char)230))));
                var_33 ^= ((/* implicit */short) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) (unsigned short)65510)) : (((/* implicit */int) (unsigned char)255))));
                var_34 = ((((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */unsigned int) 2147483639)) : (4294967271U))) <= ((~(2146959360U))));
            }
            for (long long int i_12 = 0; i_12 < 14; i_12 += 4) /* same iter space */
            {
                /* LoopSeq 2 */
                for (unsigned short i_13 = 0; i_13 < 14; i_13 += 4) 
                {
                    var_35 += ((/* implicit */unsigned int) 0ULL);
                    arr_43 [i_2] [8LL] [8LL] [i_12] [i_13] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)65535))))) % (((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))) : (2U)))));
                }
                for (unsigned char i_14 = 1; i_14 < 11; i_14 += 1) 
                {
                    arr_46 [i_14] [i_14] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (279223176896970752ULL) : (((/* implicit */unsigned long long int) 1073737728U))))) ? (((/* implicit */int) (unsigned short)65504)) : (((/* implicit */int) (unsigned short)1920))));
                    /* LoopSeq 3 */
                    for (int i_15 = 0; i_15 < 14; i_15 += 4) 
                    {
                        arr_50 [2ULL] [2ULL] [i_4] [i_2] [i_14] = ((/* implicit */unsigned short) 26U);
                        var_36 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 2146959360U)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)254)) ? (((/* implicit */int) (short)-257)) : (((/* implicit */int) (short)(-32767 - 1)))))) : (34359738366LL)));
                        var_37 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)32767))) : (4294967295U)));
                    }
                    for (unsigned long long int i_16 = 4; i_16 < 12; i_16 += 3) 
                    {
                        var_38 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 0ULL)) ? (15ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)246)))));
                        arr_53 [i_2] [i_14] [i_12] [i_4] [i_4] = ((/* implicit */unsigned long long int) (-((-(((/* implicit */int) (short)(-32767 - 1)))))));
                    }
                    for (short i_17 = 0; i_17 < 14; i_17 += 2) 
                    {
                        arr_56 [i_14] [i_4] [i_12] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(17045651456ULL))))));
                        arr_57 [i_2] [i_14] [i_12] [i_14] [(short)6] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (short)64))) & (511U)));
                    }
                    arr_58 [i_12] |= ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (65472) : (-2147483631)))));
                }
                var_39 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 2305843008945258496LL)) * (0ULL)))) ? (((((/* implicit */_Bool) (unsigned short)8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-113))) : (0ULL))) : (((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)8188))) : (2251799796908032ULL)))));
            }
            var_40 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)63)) ? (18014398509465600ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-106)))))) ? (((/* implicit */unsigned long long int) 0U)) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)17))) & (14ULL)))));
            arr_59 [i_2] [i_4] [i_4] = ((/* implicit */unsigned short) (-(((((/* implicit */unsigned long long int) 2147483647)) & (18446744073709551611ULL)))));
        }
        var_41 = ((/* implicit */unsigned short) min((var_41), (((/* implicit */unsigned short) min((((/* implicit */int) (short)-32745)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) (signed char)-124)) : (((/* implicit */int) (signed char)112))))) ? (((/* implicit */int) (unsigned char)0)) : (max((((/* implicit */int) (signed char)112)), (2147483645))))))))));
        /* LoopNest 2 */
        for (signed char i_18 = 0; i_18 < 14; i_18 += 4) 
        {
            for (unsigned long long int i_19 = 1; i_19 < 13; i_19 += 4) 
            {
                {
                    arr_66 [i_2] [i_18] [i_18] = ((/* implicit */unsigned char) (-((~(((((/* implicit */_Bool) 2147483645)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (0ULL)))))));
                    arr_67 [i_19] [i_18] [i_2] [i_2] = ((/* implicit */unsigned char) (((-(((/* implicit */int) min(((unsigned short)25), ((unsigned short)65510)))))) != (26)));
                }
            } 
        } 
        var_42 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) (short)32757)), ((unsigned short)0)))) ? (((((/* implicit */_Bool) max((2147483647), (((/* implicit */int) (short)32767))))) ? (((((/* implicit */_Bool) (unsigned short)511)) ? (1ULL) : (((/* implicit */unsigned long long int) 262136U)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)0)) ? (4294967272U) : (4294967295U)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1))))));
        var_43 *= ((/* implicit */short) ((((/* implicit */_Bool) min((min((0ULL), (((/* implicit */unsigned long long int) 4294967288U)))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)255)) >> (0ULL))))))) ? ((~(((((/* implicit */_Bool) 4294967292U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)31))) : (7U))))) : (max((max((4294967271U), (((/* implicit */unsigned int) (unsigned char)20)))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (short)0)))))))));
    }
}
