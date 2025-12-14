/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215082
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215082 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215082
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
    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_17)) ? (min((((unsigned long long int) var_13)), (((/* implicit */unsigned long long int) var_17)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((signed char) var_11))) || (((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)19378)) << (((((/* implicit */int) (unsigned short)19379)) - (19368))))))))))));
    var_19 = min((((/* implicit */int) ((((((/* implicit */int) var_15)) << (((/* implicit */int) var_8)))) <= ((+(((/* implicit */int) (signed char)62))))))), ((~(((/* implicit */int) max((var_14), (var_14)))))));
    var_20 |= var_10;
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 14; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 15; i_1 += 2) 
        {
            {
                var_21 |= ((/* implicit */_Bool) ((((arr_0 [(signed char)1]) ? (((/* implicit */int) ((var_8) && (((/* implicit */_Bool) 13559797809495380367ULL))))) : (((((/* implicit */int) var_8)) | (((/* implicit */int) arr_2 [i_0] [i_1])))))) << ((((+((+(((/* implicit */int) arr_1 [i_1] [i_0])))))) - (119)))));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 15; i_2 += 4) 
                {
                    for (signed char i_3 = 0; i_3 < 16; i_3 += 4) 
                    {
                        {
                            arr_14 [i_0 + 2] [i_1] = ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_2 [8ULL] [i_3]), (((/* implicit */unsigned short) arr_0 [i_1]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((var_2) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_0 - 1]))))))) : (((arr_0 [i_3]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_0]))) : (var_6)))))) & (((((/* implicit */_Bool) arr_3 [i_0 + 1])) ? (arr_3 [i_0 - 1]) : (arr_3 [i_0 + 1]))));
                            /* LoopSeq 1 */
                            for (unsigned int i_4 = 2; i_4 < 15; i_4 += 1) 
                            {
                                arr_18 [i_1] = ((/* implicit */_Bool) (+((((!(var_8))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 158396900U)))))) : (((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)16))) : (var_11)))))));
                                var_22 *= ((/* implicit */unsigned short) max(((+(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [0ULL] [0ULL]))) + (arr_7 [i_0] [i_0 - 1] [i_0] [i_0]))))), (((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_10 [i_0] [i_0] [i_2] [i_2] [i_3] [i_4]))))) / ((-(var_2)))))));
                                arr_19 [i_0] [i_1] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_15))));
                                var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1896924676)) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1 + 1] [i_1 - 2])) ? (595088576U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_4 + 1] [i_2]))))))))) : (((/* implicit */int) max((arr_16 [i_0] [i_1]), (arr_2 [i_0] [i_1]))))));
                            }
                        }
                    } 
                } 
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) (unsigned short)46173)))))))) >= (((((((/* implicit */_Bool) var_15)) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))) << (((((((/* implicit */_Bool) var_4)) ? (var_11) : (18446744073709551609ULL))) - (12340195698416063316ULL)))))));
}
