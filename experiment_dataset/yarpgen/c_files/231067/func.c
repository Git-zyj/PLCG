/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231067
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231067 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231067
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
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned char i_3 = 0; i_3 < 25; i_3 += 2) 
                    {
                        {
                            var_14 ^= ((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (((long long int) 1382087181U)));
                            var_15 = ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_5 [i_3] [i_2] [i_0])))) - (((/* implicit */int) max(((_Bool)0), ((_Bool)1))))))) || (((/* implicit */_Bool) arr_7 [i_1])));
                            var_16 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((unsigned char) (+(((/* implicit */int) (unsigned char)241))))))));
                            var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) arr_4 [i_3]))));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (short i_4 = 3; i_4 < 22; i_4 += 4) 
                {
                    var_18 &= ((/* implicit */unsigned char) var_13);
                    var_19 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((var_8) + (9223372036854775807LL))) << (((/* implicit */int) arr_8 [i_4 - 3] [i_4 - 1] [i_0])))))));
                    arr_15 [i_0] = ((/* implicit */signed char) ((max((((/* implicit */unsigned long long int) arr_8 [i_4 - 3] [i_4 + 3] [i_0])), (arr_14 [i_4 + 2] [i_4] [i_4 + 3] [i_4 + 1]))) << (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_4 + 3])) || (((/* implicit */_Bool) arr_14 [i_4 + 2] [i_4 - 2] [i_4 - 2] [i_4 - 3])))))));
                    var_20 -= var_9;
                }
                for (unsigned char i_5 = 1; i_5 < 24; i_5 += 1) 
                {
                    var_21 = ((/* implicit */signed char) (~(((((/* implicit */int) (short)273)) << (((/* implicit */int) ((((/* implicit */_Bool) (signed char)8)) || (((/* implicit */_Bool) (short)-378)))))))));
                    var_22 &= ((/* implicit */_Bool) (~(var_8)));
                    var_23 = ((/* implicit */unsigned char) (+((~(((/* implicit */int) (!((_Bool)1))))))));
                }
                /* LoopSeq 2 */
                /* vectorizable */
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    /* LoopNest 2 */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        for (unsigned char i_8 = 0; i_8 < 25; i_8 += 1) 
                        {
                            {
                                var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)126)) ? (((/* implicit */int) arr_16 [i_0] [i_1] [i_6] [i_8])) : (((/* implicit */int) arr_9 [i_8] [i_1] [i_6] [i_1] [i_0])))))));
                                var_25 -= ((/* implicit */short) arr_7 [i_7]);
                            }
                        } 
                    } 
                    arr_25 [i_0] [i_0] [(unsigned char)8] [i_0] = ((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)123)))))));
                }
                for (unsigned char i_9 = 0; i_9 < 25; i_9 += 2) 
                {
                    var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) var_4)) << (((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_11 [i_0] [i_1] [i_9] [i_9])) : (((/* implicit */int) arr_20 [i_0] [i_0] [(unsigned char)10])))) - (36)))))) || (((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0]))))))))));
                    var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */int) arr_4 [i_0])) : (((/* implicit */int) (signed char)127))))) || (((/* implicit */_Bool) 2098640621451806495LL))));
                    var_28 += ((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */_Bool) arr_13 [(short)4] [(unsigned char)5] [i_1] [(unsigned short)2])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)3)) ? (((/* implicit */int) arr_20 [i_0] [i_1] [i_0])) : (((/* implicit */int) arr_13 [i_0] [15ULL] [i_9] [i_9]))))))))));
                    arr_28 [(short)11] [i_1] [i_0] = ((/* implicit */long long int) (+(((/* implicit */int) var_9))));
                }
            }
        } 
    } 
    /* LoopSeq 1 */
    for (long long int i_10 = 1; i_10 < 13; i_10 += 2) 
    {
        var_29 = ((/* implicit */long long int) (-(arr_22 [i_10])));
        var_30 = ((/* implicit */long long int) ((unsigned char) min(((-(((/* implicit */int) arr_21 [i_10] [i_10] [i_10])))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [(_Bool)1]))))))));
        var_31 += ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_24 [(signed char)18])) || (((/* implicit */_Bool) arr_24 [(unsigned char)14])))) || (((((/* implicit */_Bool) arr_24 [(short)16])) || (((/* implicit */_Bool) (signed char)(-127 - 1)))))));
        arr_32 [i_10] [i_10] = ((/* implicit */unsigned char) (short)-383);
    }
    var_32 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_4)) ? ((-(((/* implicit */int) var_7)))) : (((/* implicit */int) ((_Bool) var_13)))));
}
