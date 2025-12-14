/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216921
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216921 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216921
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
    var_13 = ((/* implicit */unsigned char) var_4);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 4; i_0 < 8; i_0 += 4) 
    {
        /* LoopSeq 3 */
        for (long long int i_1 = 0; i_1 < 12; i_1 += 3) /* same iter space */
        {
            arr_5 [i_0 + 1] [i_0] [i_0 + 1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0 - 3] [i_0 - 3] [i_0 - 4])) ? (((/* implicit */int) arr_4 [i_0] [i_1] [i_0 - 2])) : (((/* implicit */int) (signed char)98))));
            var_14 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_4 [i_1] [i_0] [i_0])) == (((/* implicit */int) var_6)))) ? (((/* implicit */int) ((signed char) var_7))) : (((/* implicit */int) arr_0 [i_0]))));
        }
        for (long long int i_2 = 0; i_2 < 12; i_2 += 3) /* same iter space */
        {
            var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) arr_8 [i_0] [i_2]))));
            var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)243)))))));
            arr_10 [i_2] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_0 + 4] [i_2])) ? (arr_6 [i_0 - 3] [i_2]) : (((/* implicit */unsigned long long int) var_12))));
            var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (short)14326)) : (((/* implicit */int) var_6))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65531))) : (((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) var_10)) : (arr_6 [i_2] [(signed char)5])))));
        }
        for (short i_3 = 1; i_3 < 11; i_3 += 2) 
        {
            /* LoopNest 3 */
            for (short i_4 = 0; i_4 < 12; i_4 += 3) 
            {
                for (signed char i_5 = 3; i_5 < 10; i_5 += 1) 
                {
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        {
                            arr_21 [i_6] [i_5] [(_Bool)1] [i_4] [i_3] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) 9223372036854775801LL))) ? (((/* implicit */int) arr_17 [i_0] [i_3] [i_3] [i_4] [i_5] [(short)5])) : (((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))));
                            arr_22 [i_6] [i_4] [i_4] [i_3] = ((/* implicit */short) var_9);
                            var_18 = ((/* implicit */unsigned int) 1172303834698229526ULL);
                        }
                    } 
                } 
            } 
            arr_23 [i_0] = ((/* implicit */short) arr_14 [i_0] [i_0 + 3] [i_0 - 4] [i_0]);
            var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) arr_6 [i_0 - 1] [i_0 - 4]))));
        }
        arr_24 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0] [i_0 + 2])) ? (((/* implicit */int) (unsigned char)201)) : (var_12)));
    }
    var_20 = ((/* implicit */unsigned short) var_5);
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 18; i_7 += 1) 
    {
        for (long long int i_8 = 0; i_8 < 18; i_8 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_9 = 0; i_9 < 18; i_9 += 3) 
                {
                    for (unsigned long long int i_10 = 0; i_10 < 18; i_10 += 3) 
                    {
                        {
                            arr_36 [i_7] [i_7] [i_7] [i_7] [i_10] = ((/* implicit */signed char) ((((((_Bool) var_7)) ? (min((((/* implicit */long long int) 3824379524U)), (var_2))) : (((/* implicit */long long int) ((/* implicit */int) (!(arr_25 [i_7]))))))) <= (((/* implicit */long long int) ((/* implicit */int) (unsigned char)115)))));
                            /* LoopSeq 2 */
                            for (signed char i_11 = 0; i_11 < 18; i_11 += 4) 
                            {
                                arr_39 [i_7] [i_7] [i_10] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_27 [i_7])))))) ^ (min((arr_27 [i_8]), (arr_27 [i_11])))));
                                var_21 -= ((/* implicit */int) ((((((/* implicit */_Bool) max((arr_29 [i_11] [14ULL]), (((/* implicit */unsigned long long int) arr_38 [i_11] [i_11] [i_10] [i_7] [i_7] [i_8] [i_7]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 9223372036854775801LL)))))) : ((-(arr_27 [i_11]))))) > (((/* implicit */unsigned long long int) min(((~(((/* implicit */int) arr_30 [i_9] [i_9])))), (((/* implicit */int) arr_38 [i_7] [i_8] [i_9] [i_9] [i_10] [i_7] [i_11])))))));
                                arr_40 [i_7] [i_7] [i_9] [i_10] [i_10] [i_7] [i_11] = ((/* implicit */signed char) (unsigned char)54);
                            }
                            for (unsigned long long int i_12 = 0; i_12 < 18; i_12 += 2) 
                            {
                                var_22 = ((/* implicit */unsigned short) max((var_22), (var_7)));
                                arr_44 [i_7] [i_10] [i_9] [i_7] [i_12] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) (+(((/* implicit */int) var_1))))) ? (((/* implicit */unsigned long long int) min((4194288), (arr_33 [i_7] [i_10] [i_9] [i_7])))) : (((unsigned long long int) var_4)))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_42 [i_8] [i_8] [i_7])) ? (((/* implicit */long long int) ((/* implicit */int) arr_30 [i_7] [i_9]))) : (32767LL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_30 [i_7] [i_7])) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (9223372036854775801LL)))) : (((((/* implicit */unsigned long long int) 3655089321U)) * (34326183936ULL)))))));
                            }
                            var_23 ^= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_31 [(unsigned char)0])) ? (((/* implicit */long long int) arr_33 [12] [i_9] [i_8] [12])) : (((((/* implicit */long long int) 470587772U)) & (-9223372036854775802LL))))) >> (((var_12) - (1525509769)))));
                            arr_45 [i_7] [i_7] [i_7] [i_7] [i_10] = min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_33 [i_7] [i_8] [(short)13] [i_7])) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 3824379519U)))))) : (((((/* implicit */_Bool) 1952986149)) ? (((/* implicit */long long int) ((/* implicit */int) arr_38 [1] [i_8] [i_10] [i_9] [i_10] [i_9] [i_8]))) : (-3787640145670130793LL)))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_41 [(_Bool)1] [i_7] [i_8] [i_9] [i_9]))) - (((((/* implicit */_Bool) arr_38 [i_7] [i_10] [i_9] [i_7] [i_7] [i_7] [i_7])) ? (18108477304522613688ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)177))))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (long long int i_13 = 0; i_13 < 18; i_13 += 3) 
                {
                    for (unsigned short i_14 = 0; i_14 < 18; i_14 += 2) 
                    {
                        for (short i_15 = 0; i_15 < 18; i_15 += 3) 
                        {
                            {
                                var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) (signed char)38))));
                                arr_54 [i_7] [i_8] [i_13] [i_14] [i_14] [i_7] [i_15] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_33 [i_7] [i_13] [i_8] [i_7])) ? (arr_33 [i_7] [i_8] [i_13] [i_7]) : (arr_33 [i_13] [i_8] [i_8] [i_7])))) ? (((/* implicit */int) ((short) arr_33 [i_7] [i_14] [i_13] [i_7]))) : (max((arr_33 [(unsigned char)5] [i_14] [i_14] [i_7]), (arr_33 [i_7] [i_13] [i_7] [i_7])))));
                                var_25 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_0))));
                                var_26 -= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((arr_47 [i_8] [i_14]) & (arr_47 [i_7] [i_14]))))));
                                arr_55 [i_7] [i_8] [i_13] [i_7] [i_13] [i_7] = ((/* implicit */unsigned char) ((min((arr_33 [i_7] [i_13] [i_8] [i_7]), (-1363428606))) > (((((/* implicit */_Bool) max((-9223372036854775792LL), (((/* implicit */long long int) (signed char)-102))))) ? (((/* implicit */int) min((((/* implicit */signed char) arr_46 [i_7] [i_8] [i_13])), (arr_30 [i_7] [i_7])))) : (((/* implicit */int) var_7))))));
                            }
                        } 
                    } 
                } 
                arr_56 [i_7] = ((/* implicit */unsigned int) (~(((unsigned long long int) (unsigned short)65535))));
            }
        } 
    } 
    var_27 = ((/* implicit */short) ((((/* implicit */_Bool) min(((+(939524096U))), (((/* implicit */unsigned int) ((int) 470587770U)))))) ? (var_12) : (var_12)));
}
