/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217670
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217670 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217670
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
    var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) (!(((/* implicit */_Bool) 1848055778U))))) : ((-(max((((/* implicit */int) (unsigned short)22)), (-339622344)))))));
    var_19 += ((/* implicit */unsigned short) max((57191095112885973LL), (((/* implicit */long long int) (short)-14137))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 1; i_0 < 12; i_0 += 1) 
    {
        for (unsigned char i_1 = 3; i_1 < 12; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (long long int i_3 = 1; i_3 < 11; i_3 += 4) 
                    {
                        /* LoopSeq 2 */
                        for (short i_4 = 0; i_4 < 14; i_4 += 3) 
                        {
                            var_20 = ((/* implicit */unsigned char) arr_11 [i_3 + 3] [i_3] [i_3] [i_0 + 2]);
                            arr_15 [i_3] [i_3] [i_2] [i_3] [i_1] [i_3] = ((/* implicit */unsigned short) max((((/* implicit */long long int) arr_14 [(unsigned char)8] [i_1] [i_3] [i_3] [i_4] [i_3] [i_1])), (((((/* implicit */_Bool) ((unsigned int) var_4))) ? (min((((/* implicit */long long int) arr_2 [i_0 + 1] [i_0 + 1])), (-4333495484117284076LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_2])))))));
                        }
                        /* vectorizable */
                        for (long long int i_5 = 0; i_5 < 14; i_5 += 3) 
                        {
                            arr_18 [(unsigned char)9] [i_3] [i_3] [i_2] [i_3] [(unsigned short)5] [i_0] = ((((/* implicit */_Bool) (unsigned char)240)) ? (arr_7 [i_0 - 1] [i_1 + 1]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)92))));
                            var_21 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_5 [i_0] [i_0])) || (((/* implicit */_Bool) arr_3 [i_5] [i_1] [i_1]))));
                        }
                        var_22 -= ((/* implicit */unsigned short) 1048064);
                        arr_19 [i_0] [0LL] [i_3] [i_3] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (-(((/* implicit */int) var_7))))) ? ((-(((/* implicit */int) arr_14 [13] [i_0] [i_3] [i_1] [i_1] [i_2] [i_3])))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_11 [i_3] [i_3] [i_3] [i_0]))) == (arr_7 [i_1] [i_3])))))) * (((/* implicit */int) (!(((/* implicit */_Bool) (~(arr_2 [i_0] [i_3])))))))));
                    }
                    /* LoopNest 2 */
                    for (unsigned char i_6 = 4; i_6 < 10; i_6 += 3) 
                    {
                        for (unsigned int i_7 = 1; i_7 < 13; i_7 += 3) 
                        {
                            {
                                arr_25 [i_7] [i_2] [i_1] [i_7] = ((/* implicit */unsigned int) ((((((long long int) (unsigned short)65525)) + (((/* implicit */long long int) -444259046)))) * (((/* implicit */long long int) ((int) arr_20 [i_1])))));
                                var_23 = 5587492185730773501LL;
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */int) var_16);
}
