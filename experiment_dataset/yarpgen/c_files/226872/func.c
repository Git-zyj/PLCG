/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226872
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226872 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226872
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
    var_17 = ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)3))) : (var_4)))) ? (max((((/* implicit */long long int) var_13)), (9223372036854775807LL))) : (((/* implicit */long long int) ((/* implicit */int) min(((_Bool)1), (var_7))))))) < (((/* implicit */long long int) (+(var_9)))));
    /* LoopSeq 1 */
    for (signed char i_0 = 2; i_0 < 20; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (short i_1 = 3; i_1 < 20; i_1 += 3) 
        {
            for (unsigned short i_2 = 2; i_2 < 20; i_2 += 3) 
            {
                for (int i_3 = 3; i_3 < 22; i_3 += 3) 
                {
                    {
                        arr_9 [i_1] [i_0] [i_0] [i_2 - 1] [i_0] [i_1] = ((/* implicit */unsigned long long int) (((-9223372036854775807LL - 1LL)) | (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)12696))) | (3269766815186430824LL)))));
                        var_18 -= ((/* implicit */_Bool) ((long long int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (unsigned short)5150)) : (((/* implicit */int) arr_0 [i_3] [i_2]))))), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (4521704650811163251ULL))))));
                        arr_10 [i_1] [i_2] = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_1 [i_3 - 3])), (var_3))))))) == (((/* implicit */int) (_Bool)1))));
                        arr_11 [i_0] [i_1] [i_2] [i_3 + 1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_3] [i_0] [i_3] [i_3] [i_0 + 2] [i_0]))) * (arr_5 [i_1] [i_1])))) ? (((arr_5 [i_1] [i_1]) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_3] [i_3] [i_2 + 4] [i_2] [i_0 + 3] [i_0]))))) : (max((((/* implicit */unsigned long long int) (unsigned short)5150)), (arr_5 [i_1] [i_1])))));
                        /* LoopSeq 1 */
                        for (long long int i_4 = 4; i_4 < 23; i_4 += 3) 
                        {
                            arr_16 [i_1] [i_1] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18446744073709551608ULL)) || (((/* implicit */_Bool) (short)30429))));
                            var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0 - 2] [i_0] [i_1] [i_2] [i_3 + 1] [i_4])) ? (arr_8 [i_0 - 1] [i_1] [i_0 - 1] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)62)))))) && (((/* implicit */_Bool) max((((arr_5 [i_0] [i_1]) | (7705070747593390855ULL))), (((/* implicit */unsigned long long int) ((signed char) (short)(-32767 - 1)))))))));
                            var_20 -= ((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */int) arr_1 [i_0 + 3])) >> (((((((/* implicit */_Bool) 885090413954077169LL)) ? (3646954357720402823ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)3))))) - (3646954357720402816ULL))))));
                            arr_17 [i_1] [i_4] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_8 [i_2] [i_1] [i_4] [18ULL] [i_4 - 4] [i_4 + 1]))));
                        }
                    }
                } 
            } 
        } 
        var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned char)193), ((unsigned char)0))))) * (((16131938748482085604ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))))))))));
    }
    var_22 &= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_13))) < (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)116)) ? (((/* implicit */unsigned long long int) 9223372036854775807LL)) : (5654062564378062046ULL)))) ? (var_10) : (((/* implicit */unsigned int) ((((/* implicit */int) var_14)) >> (((/* implicit */int) (unsigned short)0)))))))));
}
