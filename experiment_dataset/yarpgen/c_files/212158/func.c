/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212158
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212158 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212158
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
    for (unsigned short i_0 = 4; i_0 < 10; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                var_12 = ((/* implicit */int) min((var_12), (((/* implicit */int) (unsigned short)4146))));
                /* LoopSeq 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_13 ^= ((/* implicit */short) ((((/* implicit */_Bool) min((arr_0 [i_1]), (arr_0 [i_2])))) ? (((int) (unsigned short)61389)) : (((/* implicit */int) (short)-5927))));
                    var_14 = ((/* implicit */_Bool) arr_1 [i_0 + 2] [i_0 - 1]);
                }
                /* vectorizable */
                for (short i_3 = 0; i_3 < 13; i_3 += 1) 
                {
                    arr_12 [i_0] [i_3] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_0 [i_0]))));
                    var_15 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_3 [i_0 - 2])) + (((/* implicit */int) arr_3 [i_0 + 3]))));
                }
                for (unsigned short i_4 = 1; i_4 < 12; i_4 += 1) 
                {
                    var_16 ^= ((/* implicit */_Bool) min((2147483647), (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned short) (short)(-32767 - 1))), (arr_5 [(unsigned short)6] [(unsigned short)6])))))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned short i_5 = 0; i_5 < 13; i_5 += 2) 
                    {
                        /* LoopSeq 3 */
                        for (int i_6 = 0; i_6 < 13; i_6 += 4) 
                        {
                            arr_20 [i_0] [i_1] = ((/* implicit */int) ((((/* implicit */int) (short)8729)) == (((/* implicit */int) (short)8729))));
                            arr_21 [i_1] [(unsigned short)12] [i_1] [(unsigned short)6] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)37789)) * (((/* implicit */int) var_8))))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)73)) == (((/* implicit */int) (unsigned short)50773))))) : (((2147483647) & (((/* implicit */int) (short)32767))))));
                        }
                        for (unsigned short i_7 = 2; i_7 < 12; i_7 += 2) 
                        {
                            var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_18 [i_5])) ? ((+(((/* implicit */int) var_1)))) : (((/* implicit */int) ((unsigned char) (short)(-32767 - 1)))))))));
                            arr_26 [i_0] [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_16 [i_0] [i_1] [i_0] [i_5] [(unsigned char)2] [i_1])) > (((/* implicit */int) (short)(-32767 - 1))))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (short)-7335)) : (((/* implicit */int) arr_5 [i_5] [i_7])))) : (((/* implicit */int) arr_8 [i_0] [i_4] [i_4] [i_4 + 1]))));
                            var_18 = (+(((((/* implicit */_Bool) (unsigned char)73)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_7 [i_0])))));
                            arr_27 [i_0 + 2] [i_0] [i_1] [i_4] [i_1] [i_5] [i_7] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) (unsigned short)32794)))) ? (((((/* implicit */_Bool) (short)-27300)) ? (((/* implicit */int) (short)10329)) : (((/* implicit */int) (unsigned short)52393)))) : ((-(((/* implicit */int) (unsigned char)223))))));
                        }
                        for (int i_8 = 2; i_8 < 11; i_8 += 2) 
                        {
                            var_19 = ((/* implicit */short) (~(((/* implicit */int) var_9))));
                            var_20 += ((/* implicit */short) (-((+(((/* implicit */int) (short)18202))))));
                            arr_30 [i_0 - 1] [i_5] [i_4] [i_5] [i_8] |= ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) var_1)) == (((/* implicit */int) (short)-14497))))) == (((/* implicit */int) (unsigned short)57344))));
                            var_21 = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */int) (unsigned char)97)) < (((/* implicit */int) var_5)))));
                        }
                        arr_31 [(unsigned char)9] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) (short)-28961)) | (((/* implicit */int) ((short) (unsigned short)27746)))));
                        var_22 = ((/* implicit */unsigned short) ((((/* implicit */int) (short)15956)) * (((/* implicit */int) (unsigned char)97))));
                    }
                }
                var_23 = ((/* implicit */unsigned short) ((unsigned char) 31472459));
            }
        } 
    } 
    var_24 = ((/* implicit */short) var_0);
    var_25 = ((/* implicit */short) ((_Bool) max((var_7), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned char)54)) : (((/* implicit */int) var_9)))))));
    var_26 = ((/* implicit */unsigned short) ((((((/* implicit */int) var_0)) % (((/* implicit */int) (_Bool)1)))) >= (((/* implicit */int) var_2))));
}
