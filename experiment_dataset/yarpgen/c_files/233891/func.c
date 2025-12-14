/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233891
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233891 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233891
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
    var_11 = ((/* implicit */unsigned int) ((var_2) ? (((/* implicit */int) min((((/* implicit */unsigned short) (signed char)-56)), ((unsigned short)37121)))) : (((/* implicit */int) min(((_Bool)1), ((_Bool)1))))));
    /* LoopSeq 4 */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (signed char i_1 = 4; i_1 < 22; i_1 += 2) 
        {
            /* LoopSeq 4 */
            /* vectorizable */
            for (unsigned int i_2 = 4; i_2 < 21; i_2 += 2) 
            {
                arr_7 [i_2 + 1] [i_0] = ((/* implicit */_Bool) (-(var_7)));
                var_12 = ((/* implicit */unsigned int) (~((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))));
                arr_8 [i_2] [i_2] [i_1] [i_0] = ((/* implicit */signed char) (_Bool)1);
                arr_9 [i_0] [i_1] [i_0] [i_2] = ((/* implicit */short) ((var_0) && (((/* implicit */_Bool) arr_5 [i_1 - 2] [i_1 - 1] [i_1 + 1]))));
            }
            for (signed char i_3 = 2; i_3 < 21; i_3 += 2) 
            {
                /* LoopNest 2 */
                for (short i_4 = 2; i_4 < 22; i_4 += 1) 
                {
                    for (unsigned short i_5 = 0; i_5 < 23; i_5 += 4) 
                    {
                        {
                            var_13 = ((/* implicit */signed char) ((unsigned int) (_Bool)1));
                            var_14 = ((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))));
                        }
                    } 
                } 
                /* LoopSeq 3 */
                for (short i_6 = 3; i_6 < 21; i_6 += 3) 
                {
                    arr_19 [i_0] [i_6] = ((/* implicit */long long int) min(((+(((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) + (15U))))), (((/* implicit */unsigned int) (signed char)(-127 - 1)))));
                    var_15 &= ((/* implicit */unsigned short) (((_Bool)1) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (unsigned short)27414))));
                    var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_6] [i_6] [i_6 - 3])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (arr_5 [i_6] [i_6] [i_6 - 2])))) ? (((((/* implicit */int) (signed char)31)) >> (((6900288088019364194LL) - (6900288088019364189LL))))) : (((/* implicit */int) max(((unsigned short)5882), ((unsigned short)0))))));
                }
                /* vectorizable */
                for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                {
                    arr_22 [i_7] [i_7] [i_7] [i_7] [i_7] = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_4))));
                    arr_23 [i_0] [i_1] [i_3] [i_7] [i_7] [i_7] = ((/* implicit */short) (+(var_10)));
                    arr_24 [i_7] [i_1] [i_7] [i_7] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */int) (short)-22081)) : (((/* implicit */int) (short)-21483))))) ? ((-(((/* implicit */int) arr_16 [i_7] [i_3] [i_3] [i_1] [i_0] [i_0] [i_0])))) : (((/* implicit */int) (_Bool)1))));
                    arr_25 [i_7] [i_7] [i_3] [i_7] = (_Bool)1;
                    var_17 = ((((/* implicit */int) ((((/* implicit */long long int) 853714037U)) == (var_7)))) != (((/* implicit */int) (short)3338)));
                }
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    arr_28 [i_0] [i_0] [i_3] [i_8] = ((/* implicit */unsigned int) var_2);
                    var_18 += ((/* implicit */long long int) (signed char)53);
                    /* LoopSeq 1 */
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        arr_31 [i_0] [i_0] [i_3] [i_8] [i_9] = ((/* implicit */_Bool) ((((var_7) ^ (((/* implicit */long long int) ((var_10) << (((/* implicit */int) var_0))))))) << ((((~((~(arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))) - (470227852U)))));
                        var_19 = ((/* implicit */unsigned short) (((-(((/* implicit */int) arr_20 [i_3 - 1] [i_3 + 2] [i_3 - 1] [i_3 + 2] [i_3])))) > (((/* implicit */int) var_2))));
                        var_20 = ((/* implicit */long long int) (-((-(((/* implicit */int) (short)-18134))))));
                        arr_32 [i_0] [i_1] [i_0] [i_8] [i_9] = ((/* implicit */unsigned int) min((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_9)) | (((/* implicit */int) (unsigned short)3))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) min((((/* implicit */signed char) var_2)), ((signed char)-13))))))), (-3827155892616800092LL)));
                        arr_33 [i_9] [i_1] = ((((/* implicit */_Bool) (~(arr_5 [i_9] [i_8] [i_0])))) ? (max((arr_5 [i_0] [i_0] [i_0]), (((/* implicit */unsigned int) var_3)))) : (((/* implicit */unsigned int) (~(((/* implicit */int) var_3))))));
                    }
                    var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (var_10) : (var_1)))) ? (max((arr_5 [i_3 - 2] [i_3 + 2] [i_3]), (((/* implicit */unsigned int) (unsigned short)65535)))) : (((((/* implicit */_Bool) arr_5 [i_3 - 2] [i_3 - 1] [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)38130))) : (arr_5 [i_3 + 1] [i_3 - 1] [i_3])))));
                    var_22 = ((/* implicit */unsigned int) var_3);
                }
            }
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
            {
                arr_37 [i_10] [i_1] [i_1 + 1] [i_0] = ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)10))));
                var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) ((var_9) ? (((/* implicit */int) arr_3 [i_0] [i_0] [i_0])) : (((((/* implicit */int) (short)-18134)) / (((/* implicit */int) (_Bool)1)))))))));
            }
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) /* same iter space */
            {
                var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) -3591977026441965305LL)) ? (((((/* implicit */_Bool) (unsigned short)19)) ? (max((((/* implicit */long long int) (_Bool)0)), (4876335421489776478LL))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)43141))))) : (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_11] [i_1] [i_0] [i_0] [i_0])))));
                var_25 = ((/* implicit */unsigned short) 0U);
                var_26 = ((/* implicit */unsigned int) (_Bool)1);
                arr_40 [i_0] [i_0] [i_0] = ((/* implicit */signed char) (~((((_Bool)1) ? (((/* implicit */int) max(((signed char)(-127 - 1)), (((/* implicit */signed char) (_Bool)1))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_0] [i_1])))))))));
            }
            arr_41 [i_0] = ((/* implicit */signed char) var_10);
            arr_42 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) (unsigned short)3)) >= (((/* implicit */int) (_Bool)0))))) << (((/* implicit */int) min(((unsigned short)3), (((/* implicit */unsigned short) (_Bool)1)))))));
        }
        /* LoopSeq 1 */
        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned int i_13 = 0; i_13 < 23; i_13 += 1) 
            {
                for (signed char i_14 = 2; i_14 < 22; i_14 += 1) 
                {
                    {
                        var_27 = ((/* implicit */signed char) var_10);
                        var_28 *= ((/* implicit */signed char) (unsigned short)65533);
                        var_29 ^= (_Bool)0;
                    }
                } 
            } 
            var_30 = ((/* implicit */short) 3307206782U);
            arr_51 [i_0] [i_0] = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) (unsigned short)65533)) ? (((/* implicit */int) (short)-25251)) : (((/* implicit */int) (!((_Bool)1))))))));
        }
        var_31 = ((/* implicit */unsigned int) ((((((/* implicit */int) (short)-18112)) + (2147483647))) >> (((((/* implicit */int) (signed char)121)) - (106)))));
        arr_52 [i_0] = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) ((var_3) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)2)))))) ? (((/* implicit */long long int) (((_Bool)1) ? (1166996487U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)18134)))))) : ((~(arr_17 [18LL])))))));
        arr_53 [i_0] [i_0] = ((/* implicit */long long int) (-((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (var_1)))));
    }
    for (short i_15 = 1; i_15 < 19; i_15 += 1) 
    {
        arr_56 [i_15] = ((/* implicit */short) (unsigned short)4852);
        var_32 = (((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) max(((unsigned short)1348), (((/* implicit */unsigned short) (_Bool)1))))))) == (((((/* implicit */int) var_3)) << (((/* implicit */int) (_Bool)0)))));
        arr_57 [i_15] [i_15] = ((/* implicit */_Bool) (-(((max((var_5), (((/* implicit */long long int) (short)-25268)))) / (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (_Bool)1)))))))));
    }
    /* vectorizable */
    for (signed char i_16 = 0; i_16 < 21; i_16 += 1) 
    {
        /* LoopNest 2 */
        for (signed char i_17 = 0; i_17 < 21; i_17 += 1) 
        {
            for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
            {
                {
                    arr_67 [i_16] [i_16] [i_16] [i_18] = ((/* implicit */unsigned short) (_Bool)1);
                    /* LoopSeq 1 */
                    for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                    {
                        var_33 = ((/* implicit */signed char) max((var_33), (((/* implicit */signed char) var_10))));
                        var_34 += ((/* implicit */_Bool) (+(((((/* implicit */_Bool) (signed char)-67)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (var_1)))));
                    }
                }
            } 
        } 
        var_35 = var_5;
        /* LoopNest 2 */
        for (unsigned int i_20 = 3; i_20 < 20; i_20 += 2) 
        {
            for (long long int i_21 = 1; i_21 < 20; i_21 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
                    {
                        var_36 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)3)) ? (((((/* implicit */_Bool) -1LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-88)))) : ((-(((/* implicit */int) (_Bool)1))))));
                        arr_77 [i_16] [(_Bool)1] [i_20] [(_Bool)1] [i_16] |= ((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))));
                    }
                    for (signed char i_23 = 0; i_23 < 21; i_23 += 3) 
                    {
                        var_37 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) > (9223372036854775807LL)));
                        arr_81 [i_20] [i_20 - 3] [i_21] [i_23] [i_23] = ((/* implicit */short) ((((/* implicit */int) (unsigned short)65535)) / (((/* implicit */int) (!(var_0))))));
                        arr_82 [i_20] = (!(((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) arr_59 [i_23] [i_20])) : (((/* implicit */int) (short)-1258))))));
                        arr_83 [i_20] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) arr_45 [i_20 - 2] [i_20 - 3]))) ^ (arr_17 [i_20])));
                        arr_84 [i_20] [i_20] [i_20] [i_23] [i_21] [i_20] = ((/* implicit */_Bool) (~(((/* implicit */int) var_4))));
                    }
                    arr_85 [i_16] [i_20] [i_21] [i_16] = ((/* implicit */unsigned int) (unsigned short)2262);
                    var_38 = ((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))));
                    var_39 = ((/* implicit */unsigned short) ((((/* implicit */int) var_9)) % (((/* implicit */int) ((short) arr_12 [i_16])))));
                }
            } 
        } 
    }
    for (short i_24 = 1; i_24 < 6; i_24 += 4) 
    {
        var_40 *= ((/* implicit */unsigned short) min((((min((((/* implicit */long long int) var_8)), (arr_72 [(_Bool)1] [i_24] [i_24]))) <= (((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)65532))))))), ((!(((/* implicit */_Bool) ((((/* implicit */_Bool) 13LL)) ? (((/* implicit */int) arr_21 [i_24 + 4] [i_24] [i_24] [i_24] [i_24])) : (((/* implicit */int) (_Bool)1)))))))));
        var_41 = ((/* implicit */short) ((((/* implicit */_Bool) (((_Bool)1) ? (((((/* implicit */int) (unsigned short)22917)) << (0LL))) : (((/* implicit */int) ((unsigned short) var_4)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((max(((_Bool)1), ((_Bool)1))) && (((/* implicit */_Bool) (~(var_1)))))))) : ((-(((unsigned int) (short)23347))))));
    }
    var_42 = ((/* implicit */long long int) ((((/* implicit */_Bool) -5463060582490272206LL)) ? (((((/* implicit */int) var_2)) / ((-(((/* implicit */int) (_Bool)1)))))) : (((((/* implicit */_Bool) ((5463060582490272205LL) / (((/* implicit */long long int) 268977447U))))) ? (((/* implicit */int) ((-5463060582490272208LL) <= (-1LL)))) : (((/* implicit */int) (signed char)60))))));
}
