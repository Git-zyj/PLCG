/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54372
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54372 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54372
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
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_19 = min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) (unsigned short)65518))) ? (((/* implicit */int) arr_1 [i_0])) : (((((/* implicit */int) arr_0 [6U])) >> (((/* implicit */int) (_Bool)1))))))), (var_13));
                arr_4 [i_1] = ((/* implicit */signed char) (~(max((((/* implicit */unsigned long long int) min((var_4), (arr_2 [i_0] [i_0] [i_1])))), ((~(0ULL)))))));
                var_20 = ((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)90))) : (4294967295U))));
            }
        } 
    } 
    /* LoopSeq 3 */
    for (unsigned char i_2 = 0; i_2 < 20; i_2 += 4) 
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 20; i_3 += 1) 
        {
            for (unsigned short i_4 = 2; i_4 < 18; i_4 += 3) 
            {
                {
                    arr_13 [i_2] [i_3] [i_3] [i_4 - 1] = ((/* implicit */unsigned short) 8836372793073712082LL);
                    arr_14 [i_3] [i_4] [(short)2] = ((/* implicit */short) max((((/* implicit */long long int) ((((/* implicit */int) arr_11 [i_4] [i_4] [i_4] [i_4 - 1])) == (((/* implicit */int) max((arr_11 [i_4] [i_2] [(short)7] [i_4]), (((/* implicit */unsigned short) (signed char)5)))))))), (max((-8836372793073712054LL), (((/* implicit */long long int) min((((/* implicit */int) (short)5877)), (-2147483647))))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 20; i_5 += 4) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 20; i_6 += 3) 
                        {
                            {
                                var_21 &= ((/* implicit */_Bool) -2147483647);
                                var_22 = ((/* implicit */_Bool) var_7);
                                var_23 = (unsigned short)65535;
                                var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) ((((/* implicit */unsigned long long int) max((min((8836372793073712082LL), (arr_7 [i_3]))), (((/* implicit */long long int) ((unsigned short) -8836372793073712086LL)))))) > (max((((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) + (arr_9 [i_4] [i_6]))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)127))))))))))));
                                arr_20 [i_6] [i_3] [(signed char)1] [i_4 - 2] [(signed char)5] [i_3] [i_2] = ((/* implicit */unsigned int) max((min((((/* implicit */int) (unsigned char)32)), (2147483646))), (max((0), (((/* implicit */int) (short)-2048))))));
                            }
                        } 
                    } 
                    arr_21 [i_3] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)211)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_16 [i_2] [i_4 - 1] [i_4])) ? (((/* implicit */int) arr_10 [i_4 + 2] [i_4 + 2])) : (((/* implicit */int) arr_10 [i_4 - 1] [i_3]))))) : (((((/* implicit */long long int) ((/* implicit */int) max(((short)-2027), (((/* implicit */short) (unsigned char)198)))))) | ((~(-8836372793073712083LL)))))));
                }
            } 
        } 
        var_25 ^= ((/* implicit */signed char) min((((((/* implicit */int) arr_6 [i_2])) << (((((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) -2147483638)) : (2726806123U))) - (2147483638U))))), (((/* implicit */int) ((short) (~(arr_18 [i_2])))))));
    }
    for (short i_7 = 2; i_7 < 21; i_7 += 1) 
    {
        arr_25 [i_7] [i_7] = ((/* implicit */short) min((max((min((8836372793073712083LL), (-8836372793073712051LL))), (((/* implicit */long long int) arr_24 [i_7])))), (((/* implicit */long long int) var_3))));
        /* LoopNest 3 */
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                for (unsigned int i_10 = 1; i_10 < 22; i_10 += 4) 
                {
                    {
                        var_26 = ((/* implicit */short) var_2);
                        var_27 = ((/* implicit */int) ((((/* implicit */_Bool) min((arr_22 [i_7 - 1]), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_26 [i_7] [22LL] [i_7])))))))) ? (((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) 998068470U))))) >> (((((/* implicit */int) ((unsigned short) var_10))) - (56471)))))) : (((4611686018427383808LL) - (((/* implicit */long long int) ((((/* implicit */unsigned int) -2147483626)) - (var_0))))))));
                        var_28 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) 8836372793073712063LL)) ? (((/* implicit */int) arr_31 [i_7] [i_10] [i_7] [i_10 + 1])) : (((/* implicit */int) arr_31 [i_7] [i_7] [i_7] [i_10 + 1]))))));
                    }
                } 
            } 
        } 
    }
    for (signed char i_11 = 2; i_11 < 22; i_11 += 1) 
    {
        arr_36 [(short)10] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (+(((/* implicit */int) arr_35 [i_11]))))) ? (arr_28 [i_11 + 1]) : (((long long int) -7976687549660139925LL)))) > (((/* implicit */long long int) ((/* implicit */int) var_1)))));
        var_29 += ((/* implicit */short) ((((/* implicit */_Bool) max((max((2726806123U), (3296898833U))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_29 [3U] [i_11 - 1] [i_11 - 1])) % (((/* implicit */int) (short)32757)))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) var_17)), (arr_28 [(signed char)2]))))))) : ((+(((/* implicit */int) arr_27 [i_11] [i_11 + 1] [i_11]))))));
    }
    /* LoopNest 3 */
    for (short i_12 = 0; i_12 < 15; i_12 += 4) 
    {
        for (unsigned int i_13 = 0; i_13 < 15; i_13 += 4) 
        {
            for (unsigned short i_14 = 1; i_14 < 13; i_14 += 1) 
            {
                {
                    var_30 = ((/* implicit */unsigned short) (-(((((/* implicit */long long int) ((/* implicit */int) ((signed char) -8836372793073712082LL)))) / (((long long int) 3644638727631459229ULL))))));
                    var_31 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) 8836372793073712083LL)) ? ((~(arr_42 [i_12] [i_12] [i_13] [i_14]))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_16)) && (((/* implicit */_Bool) arr_30 [i_13])))))))), (((((/* implicit */_Bool) arr_26 [i_13] [i_14] [i_14 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_17)))))) : (min((arr_18 [5U]), (((/* implicit */long long int) arr_6 [i_12]))))))));
                    var_32 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_26 [i_14] [i_14] [i_14])) ? (((/* implicit */long long int) (+(1568161189U)))) : (((long long int) arr_9 [i_12] [i_12]))))) ? (((((/* implicit */_Bool) 1568161173U)) ? (((/* implicit */int) min((((/* implicit */short) (unsigned char)32)), ((short)12441)))) : (((/* implicit */int) max((var_3), (((/* implicit */short) (signed char)-35))))))) : ((~(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)30)))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_15 = 1; i_15 < 11; i_15 += 3) 
                    {
                        for (unsigned char i_16 = 2; i_16 < 13; i_16 += 4) 
                        {
                            {
                                arr_49 [i_14] [i_12] = ((/* implicit */signed char) ((((((/* implicit */int) (unsigned char)224)) > (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_14 + 1])) && (((/* implicit */_Bool) arr_3 [i_13] [i_13]))))))) ? (((/* implicit */int) max((((/* implicit */unsigned short) arr_46 [i_16 - 2] [i_14] [i_15 + 4] [i_14 + 2] [i_14] [i_14] [i_14 + 1])), (arr_11 [i_15 + 2] [(signed char)3] [i_15] [i_15])))) : (((((/* implicit */_Bool) arr_48 [(signed char)5] [i_14] [i_14] [i_16 + 1] [i_16])) ? (((/* implicit */int) arr_48 [i_12] [i_14] [i_14] [i_16 + 2] [i_16 + 2])) : (var_7)))));
                                var_33 = ((/* implicit */int) (!(((max((((/* implicit */unsigned int) (unsigned char)32)), (3296898836U))) > (((/* implicit */unsigned int) ((((/* implicit */int) arr_11 [i_12] [i_15 + 2] [i_14 - 1] [i_12])) << (((/* implicit */int) (_Bool)1)))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
