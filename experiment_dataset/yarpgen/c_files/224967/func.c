/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224967
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224967 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224967
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
    var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) min(((+(((((/* implicit */int) var_15)) * (((/* implicit */int) (signed char)5)))))), ((((-(((/* implicit */int) (unsigned short)58972)))) + ((+(((/* implicit */int) var_5)))))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (signed char i_1 = 1; i_1 < 17; i_1 += 2) 
        {
            {
                arr_5 [(unsigned short)17] [i_1] = ((/* implicit */long long int) 12153545132737572331ULL);
                /* LoopNest 2 */
                for (unsigned int i_2 = 1; i_2 < 17; i_2 += 2) 
                {
                    for (unsigned short i_3 = 3; i_3 < 14; i_3 += 1) 
                    {
                        {
                            var_19 ^= ((/* implicit */short) max((((((/* implicit */_Bool) 8272904614875421255LL)) ? (((/* implicit */int) (signed char)-12)) : (((/* implicit */int) arr_2 [(unsigned short)0] [i_1 + 1])))), (((/* implicit */int) min((arr_2 [i_3 - 3] [i_0]), (arr_2 [i_3 - 1] [i_2]))))));
                            var_20 = (-(((/* implicit */int) (!(((/* implicit */_Bool) var_13))))));
                            var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) arr_2 [i_0] [(unsigned char)15]))));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (short i_4 = 0; i_4 < 18; i_4 += 4) 
                {
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 0; i_5 < 18; i_5 += 1) 
                    {
                        for (int i_6 = 1; i_6 < 16; i_6 += 1) 
                        {
                            {
                                arr_17 [i_1] [i_1] [(unsigned short)3] [i_5] [(unsigned short)3] = ((/* implicit */unsigned int) ((signed char) ((((((/* implicit */_Bool) 1928232828)) ? (((/* implicit */int) (short)10280)) : (((/* implicit */int) (short)-31963)))) >= (((/* implicit */int) (_Bool)1)))));
                                arr_18 [i_0] [(signed char)15] [1U] [i_1] = ((((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)9))))) ? (arr_15 [i_0] [i_1] [i_4] [i_5]) : (((/* implicit */int) ((((/* implicit */int) (signed char)104)) > (((/* implicit */int) arr_12 [i_1] [i_1] [14LL] [i_5] [11]))))))) / ((+(-1258746171))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (long long int i_7 = 1; i_7 < 15; i_7 += 1) 
                    {
                        var_22 = ((/* implicit */int) (((+(((/* implicit */int) var_16)))) >= (((/* implicit */int) var_11))));
                        var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) ((((/* implicit */_Bool) min((var_12), (((/* implicit */long long int) arr_1 [i_7 + 3] [i_1 - 1]))))) ? (arr_1 [i_7 - 1] [i_1 + 1]) : (((/* implicit */unsigned int) (~(((/* implicit */int) arr_14 [i_7] [i_7] [i_4] [i_7 + 2] [i_4] [i_7] [i_7]))))))))));
                        var_24 *= ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)90)) < ((+(((/* implicit */int) (_Bool)1))))));
                    }
                }
                for (unsigned int i_8 = 0; i_8 < 18; i_8 += 4) 
                {
                    arr_24 [i_1] [9LL] [i_1 + 1] = (-(((/* implicit */int) max((((/* implicit */signed char) arr_20 [i_0] [i_0] [i_1 - 1] [(unsigned short)13] [i_1])), (var_3)))));
                    var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [(unsigned char)1]))) : (arr_22 [i_0])))) ? (-6257198111513438647LL) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_17)) || (((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0] [i_1] [i_8])))))))) + (((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) var_2)) >= (((/* implicit */int) (signed char)-6))))) % (((/* implicit */int) ((_Bool) (short)-1)))))))))));
                    arr_25 [i_8] |= ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) ((((/* implicit */int) var_0)) | (((/* implicit */int) arr_3 [i_0] [i_0]))))) / (max((((/* implicit */unsigned long long int) (signed char)-112)), (arr_4 [i_0] [i_0] [i_8]))))) == (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */signed char) arr_19 [i_0] [i_8] [i_0] [i_0] [i_0])), (var_5)))))));
                    var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_17) | (arr_11 [(unsigned short)17] [i_1] [(short)4] [i_8])))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 127U)) ? (((/* implicit */int) (short)-19185)) : (((/* implicit */int) var_9))))) : (3421603253U)))) ? ((-((~(var_1))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((unsigned char) 18446744073709551605ULL)), ((unsigned char)241)))))));
                }
            }
        } 
    } 
    var_27 = ((((/* implicit */_Bool) var_5)) ? ((~(((/* implicit */int) var_9)))) : (((((/* implicit */_Bool) ((((/* implicit */int) (short)-14842)) + (((/* implicit */int) var_16))))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_5)))));
}
