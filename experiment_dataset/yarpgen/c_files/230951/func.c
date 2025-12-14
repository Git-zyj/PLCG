/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230951
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230951 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230951
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
    var_19 -= ((/* implicit */unsigned short) max((min((((/* implicit */unsigned long long int) ((_Bool) var_6))), (max((((/* implicit */unsigned long long int) (_Bool)1)), (14783743390880607067ULL))))), (((((/* implicit */unsigned long long int) min((((/* implicit */long long int) 2084459308)), (-1328896523549270311LL)))) - ((-(var_1)))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_10 [i_0] [i_2] [i_2] = ((/* implicit */_Bool) min((((/* implicit */int) ((_Bool) arr_2 [i_1]))), ((-(((/* implicit */int) (unsigned char)165))))));
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        var_20 += ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_1] [i_1] [i_3])) ? (var_18) : (((/* implicit */long long int) arr_8 [i_1] [i_3] [i_2]))))) != (((1864573366596536407ULL) / (4611686018427387904ULL))));
                        var_21 = ((/* implicit */unsigned short) arr_13 [i_2] [i_1] [i_1] [i_1] [i_1]);
                        var_22 *= ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 1261436157U)))))) == (((((/* implicit */_Bool) (unsigned short)24425)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (12ULL)))))) << (((/* implicit */int) min((((_Bool) 1296773267U)), (((13835058055282163689ULL) < (((/* implicit */unsigned long long int) var_14)))))))));
                        arr_14 [(unsigned char)9] [i_1] [i_2] [i_1] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-19695)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)54467))) : (1296773267U)))) && (((/* implicit */_Bool) 1166583475)))))));
                    }
                    /* LoopNest 2 */
                    for (signed char i_4 = 0; i_4 < 24; i_4 += 3) 
                    {
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned short) max((((max((((/* implicit */int) (signed char)-81)), (var_0))) | (((/* implicit */int) arr_12 [i_2] [i_2])))), (((((/* implicit */_Bool) 18446744073709551609ULL)) ? (((((/* implicit */_Bool) arr_13 [i_2] [i_1] [i_1] [i_2] [i_2])) ? (((/* implicit */int) var_11)) : (arr_8 [i_2] [i_4] [i_4]))) : (((/* implicit */int) min(((_Bool)1), (arr_4 [i_1]))))))));
                                var_24 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) 1296773278U)), (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)27240)) ? (((/* implicit */int) (_Bool)1)) : (-1486406995)))), (10171753442594798887ULL)))));
                                arr_19 [i_0] [i_1] [i_2] [i_0] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((((/* implicit */_Bool) var_8)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))) <= (((/* implicit */unsigned long long int) max((((/* implicit */int) var_16)), (var_12))))))) << (((var_8) + (4773098390006943071LL)))));
                                var_25 = ((/* implicit */long long int) (short)-10622);
                                var_26 = ((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) min((9223372028264841216LL), (((/* implicit */long long int) (unsigned char)0))))) || (((/* implicit */_Bool) (short)-17206)))));
                            }
                        } 
                    } 
                    var_27 -= ((/* implicit */unsigned short) min(((-(((/* implicit */int) arr_18 [i_0] [i_0] [i_1] [i_1] [i_2])))), (min((var_12), (((/* implicit */int) arr_17 [i_1] [i_1] [i_1]))))));
                }
            } 
        } 
    } 
}
