/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32212
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32212 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32212
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
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (short i_2 = 0; i_2 < 13; i_2 += 3) 
                {
                    arr_11 [i_0] [i_1] [i_0] [i_2] = ((/* implicit */signed char) min((((/* implicit */unsigned int) var_5)), (min((var_13), (((/* implicit */unsigned int) ((var_9) == (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))))))))));
                    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)29768)) ? (2607126417U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)29768)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) 4171570073U)))) : (max((4171570073U), (var_9)))))) ? (max((((var_13) * (((/* implicit */unsigned int) -1)))), (max((1769935903U), (((/* implicit */unsigned int) (unsigned char)98)))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))));
                }
                for (signed char i_3 = 1; i_3 < 10; i_3 += 1) 
                {
                    var_21 = ((/* implicit */signed char) var_1);
                    var_22 = ((/* implicit */int) (unsigned char)161);
                }
                var_23 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)9208)) ? (((((/* implicit */_Bool) var_19)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)35768))) : (var_15))) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) var_19))))))), (((((unsigned long long int) var_10)) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)29768)) ? (((/* implicit */int) (unsigned char)98)) : (((/* implicit */int) var_2)))))))));
                var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) ((((((/* implicit */_Bool) max((var_6), (((/* implicit */short) var_8))))) ? (((((/* implicit */_Bool) var_18)) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-38))))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)160))))) | (((unsigned int) (((_Bool)0) ? (((/* implicit */int) (signed char)51)) : (((/* implicit */int) var_14))))))))));
            }
        } 
    } 
    var_25 |= ((/* implicit */unsigned int) ((short) ((short) max((var_3), (((/* implicit */int) var_10))))));
    var_26 = ((/* implicit */signed char) ((unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (var_15)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (11639218781925081480ULL))));
    /* LoopNest 3 */
    for (short i_4 = 0; i_4 < 11; i_4 += 4) 
    {
        for (unsigned short i_5 = 0; i_5 < 11; i_5 += 1) 
        {
            for (unsigned short i_6 = 0; i_6 < 11; i_6 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_7 = 0; i_7 < 11; i_7 += 4) 
                    {
                        for (signed char i_8 = 0; i_8 < 11; i_8 += 1) 
                        {
                            {
                                arr_26 [i_4] [i_8] [i_5] [(unsigned short)10] [i_5] [(unsigned short)10] [i_4] = ((/* implicit */unsigned int) var_18);
                                var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_1)))))) ? (((((/* implicit */_Bool) ((var_12) ? (0) : (((/* implicit */int) var_12))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_9)))) : (((123397223U) << (((((/* implicit */int) (signed char)82)) - (66))))))) : (var_9)));
                                var_28 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) (unsigned char)163)), (var_1)))) ? (((/* implicit */int) var_2)) : (((((/* implicit */_Bool) 4478073840351766529LL)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (short)3))))))) ? (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) 2035564424U)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))))) : (((/* implicit */int) ((unsigned char) max((((/* implicit */unsigned int) -2040255465)), (var_15)))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (unsigned short i_9 = 0; i_9 < 11; i_9 += 2) 
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (short i_10 = 0; i_10 < 11; i_10 += 4) 
                        {
                            arr_31 [i_10] [i_5] [i_6] [(short)7] [i_4] [i_5] [i_4] = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_5)) ? (262206494U) : (((/* implicit */unsigned int) ((/* implicit */int) var_16))))) | (((/* implicit */unsigned int) var_3))));
                            var_29 -= ((/* implicit */short) ((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)51))) == (var_0))) && (((/* implicit */_Bool) var_5))));
                            var_30 ^= ((signed char) (unsigned short)29041);
                            arr_32 [i_5] [i_5] [i_6] [i_9] [i_5] = (signed char)-90;
                        }
                        var_31 = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) ((unsigned short) ((long long int) (unsigned char)158)))), (((((/* implicit */_Bool) (signed char)127)) ? (((((/* implicit */_Bool) (signed char)-38)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-69))) : (var_0))) : (((/* implicit */unsigned int) ((/* implicit */int) min(((signed char)-77), ((signed char)38)))))))));
                        var_32 = ((/* implicit */short) var_9);
                        var_33 = ((/* implicit */int) max((var_33), (((/* implicit */int) ((((((/* implicit */_Bool) ((6941695833090637550ULL) >> (((((/* implicit */int) var_19)) - (11027)))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_11))) | (1847655557U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (signed char)76))))))) & (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-111)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (signed char)95))))) ? (((/* implicit */int) max((((/* implicit */unsigned char) (signed char)-1)), (var_8)))) : (((/* implicit */int) max(((unsigned short)192), (var_1))))))))))));
                    }
                    var_34 = ((/* implicit */unsigned long long int) var_13);
                    var_35 = ((/* implicit */short) ((((/* implicit */_Bool) max((min((((/* implicit */unsigned long long int) 1796395742)), (18053538048546040068ULL))), (((/* implicit */unsigned long long int) ((signed char) var_14)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) : (((((/* implicit */_Bool) max((var_7), (((/* implicit */short) (signed char)-18))))) ? (((/* implicit */unsigned long long int) max((var_9), (4294967295U)))) : (((unsigned long long int) (unsigned char)161))))));
                }
            } 
        } 
    } 
}
