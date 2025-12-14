/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243409
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243409 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243409
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
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 17; i_1 += 3) 
        {
            {
                /* LoopSeq 4 */
                /* vectorizable */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_15 -= ((/* implicit */_Bool) (+(((((/* implicit */unsigned int) ((/* implicit */int) var_8))) | (var_14)))));
                    var_16 -= ((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)0))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 2; i_3 < 18; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 19; i_4 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */signed char) (-(((/* implicit */int) var_10))));
                                var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) (-(((/* implicit */int) arr_5 [i_3 - 2] [(unsigned char)0] [i_3])))))));
                                arr_13 [i_0] [i_3] [i_1] [i_1] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) arr_8 [i_1]);
                            }
                        } 
                    } 
                    var_19 -= ((/* implicit */unsigned char) ((unsigned int) ((unsigned int) arr_3 [i_0] [i_1])));
                    var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1)))))));
                }
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) ((_Bool) arr_5 [i_1 + 1] [(_Bool)1] [i_1 + 2])))));
                    /* LoopNest 2 */
                    for (unsigned char i_6 = 1; i_6 < 18; i_6 += 2) 
                    {
                        for (unsigned long long int i_7 = 0; i_7 < 19; i_7 += 4) 
                        {
                            {
                                var_22 -= ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551600ULL)) ? (((/* implicit */int) arr_5 [i_0] [i_7] [i_6 - 1])) : (((/* implicit */int) arr_5 [i_0] [i_7] [i_6 + 1]))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_5 [10U] [i_7] [i_6 + 1]))))) : (((unsigned long long int) arr_5 [i_0] [i_7] [i_6 + 1])));
                                var_23 = ((/* implicit */_Bool) max((((((unsigned int) 12063332562671130906ULL)) * (((/* implicit */unsigned int) ((/* implicit */int) var_12))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) var_11)), (var_4)))))))));
                                var_24 *= ((/* implicit */unsigned short) min(((~(18446744073709551608ULL))), (((/* implicit */unsigned long long int) 120481688U))));
                            }
                        } 
                    } 
                    arr_21 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((arr_18 [i_1] [i_1 + 2] [(_Bool)0] [i_5] [i_5]), (((/* implicit */unsigned int) ((((/* implicit */int) arr_17 [i_0] [i_0] [16U])) >> (((/* implicit */int) var_2)))))))) ? ((~(((4174485608U) | (3459623880U))))) : (((/* implicit */unsigned int) (~(((/* implicit */int) arr_11 [i_1 - 1] [i_1 + 1] [i_1] [i_1 + 1] [i_1 + 1])))))));
                }
                /* vectorizable */
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    arr_24 [i_0] [i_0] [i_8] [i_8] = ((/* implicit */_Bool) arr_17 [i_1 + 2] [4U] [i_0]);
                    var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (120481688U) : (4174485607U)))) == (((((/* implicit */_Bool) 3459623880U)) ? (1365092720014716993ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))))))));
                    var_26 *= ((/* implicit */unsigned short) (~(835343415U)));
                    arr_25 [i_1] [i_0] [i_0] [i_1] = ((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_1] [i_1]);
                }
                for (unsigned char i_9 = 0; i_9 < 19; i_9 += 4) 
                {
                    var_27 *= ((/* implicit */_Bool) min((((/* implicit */unsigned int) (~((+(((/* implicit */int) var_2))))))), (((arr_0 [i_1 - 1]) << (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) (unsigned short)23414)))))))));
                    var_28 -= ((/* implicit */_Bool) (-(var_4)));
                }
                /* LoopNest 3 */
                for (unsigned short i_10 = 0; i_10 < 19; i_10 += 1) 
                {
                    for (unsigned int i_11 = 1; i_11 < 17; i_11 += 3) 
                    {
                        for (unsigned char i_12 = 0; i_12 < 19; i_12 += 1) 
                        {
                            {
                                var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) var_10)) ? (arr_28 [i_0] [i_0]) : (arr_22 [i_0]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_36 [i_0] [i_1] [i_10] [(_Bool)1] [i_12]))) : (var_9)))))))) : (min((((/* implicit */unsigned long long int) min((var_11), (((/* implicit */signed char) arr_29 [17U] [17U] [i_11] [17U]))))), (((unsigned long long int) arr_34 [i_11] [i_11]))))));
                                var_30 = ((/* implicit */unsigned short) arr_17 [i_0] [i_10] [i_10]);
                                var_31 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 4294967283U)) & (min((((/* implicit */unsigned long long int) var_4)), (13ULL)))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)218))))) : (((((/* implicit */_Bool) 4294967283U)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)171))) < (var_9))))) : (((unsigned int) var_13))))));
                                var_32 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_12))) == (((((/* implicit */unsigned int) ((/* implicit */int) var_5))) | (var_4))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_33 = ((/* implicit */unsigned int) (_Bool)1);
    /* LoopNest 2 */
    for (signed char i_13 = 0; i_13 < 12; i_13 += 2) 
    {
        for (unsigned long long int i_14 = 0; i_14 < 12; i_14 += 2) 
        {
            {
                var_34 = ((((/* implicit */_Bool) min((var_13), ((unsigned char)184)))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_5)));
                var_35 = ((/* implicit */unsigned char) (signed char)-2);
                arr_41 [i_14] [i_13] [i_13] = ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)82))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((_Bool) var_12)))))) : ((+(max((var_1), (((/* implicit */unsigned long long int) arr_19 [i_13] [i_13])))))));
                var_36 = ((/* implicit */int) ((((((/* implicit */unsigned long long int) ((arr_22 [i_14]) | (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))) - (((unsigned long long int) (signed char)99)))) | (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_40 [i_13])), (var_4))))));
                arr_42 [i_14] = ((/* implicit */unsigned char) ((((((var_14) / (((/* implicit */unsigned int) ((/* implicit */int) (signed char)115))))) | (((/* implicit */unsigned int) ((((/* implicit */int) var_7)) - (((/* implicit */int) (signed char)1))))))) >> (((/* implicit */int) ((((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_3)))) == (((/* implicit */int) max((var_13), ((unsigned char)128)))))))));
            }
        } 
    } 
    var_37 *= ((/* implicit */_Bool) var_9);
    var_38 = ((/* implicit */unsigned char) ((((((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), (var_10)))) & ((((_Bool)1) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) var_5)))))) ^ (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned char)108)) : (((((/* implicit */int) var_12)) - (((/* implicit */int) var_7))))))));
}
