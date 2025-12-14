/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206364
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206364 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206364
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
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((((/* implicit */int) arr_3 [i_1])) == (((/* implicit */int) var_3)))) ? (((unsigned long long int) 0)) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_10))))))) || (((/* implicit */_Bool) ((((/* implicit */int) ((unsigned short) arr_2 [i_0] [i_1]))) - (((/* implicit */int) max((arr_3 [i_1]), (((/* implicit */unsigned short) (signed char)127)))))))))))));
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((-1201298771), (((/* implicit */int) var_0))))) ? (((/* implicit */int) arr_3 [i_0])) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)104))) : (var_7)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)-17512))))) : (((((/* implicit */_Bool) var_2)) ? (421255881) : (((/* implicit */int) var_6))))))));
                var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned char) arr_0 [i_0]))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) min((arr_1 [i_1]), (((/* implicit */long long int) var_5))))))) : (((((/* implicit */_Bool) (signed char)-95)) ? (((long long int) var_14)) : (min((((/* implicit */long long int) arr_4 [i_0] [i_1])), (arr_1 [i_1]))))))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (signed char i_2 = 1; i_2 < 18; i_2 += 3) 
    {
        var_22 = ((/* implicit */long long int) ((unsigned short) (~(((unsigned int) arr_6 [i_2 + 1])))));
        var_23 = ((/* implicit */signed char) (+(((/* implicit */int) (signed char)0))));
        var_24 = ((/* implicit */signed char) ((unsigned char) arr_6 [i_2 + 1]));
        var_25 = ((/* implicit */_Bool) max((var_25), (((/* implicit */_Bool) min((((/* implicit */long long int) arr_7 [i_2 + 1] [i_2])), (arr_6 [i_2]))))));
        var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_7 [i_2] [i_2]), (((/* implicit */unsigned int) var_2))))) ? (((/* implicit */long long int) arr_7 [i_2] [i_2])) : (((((/* implicit */_Bool) var_19)) ? (((/* implicit */long long int) arr_7 [i_2 + 1] [i_2])) : (arr_6 [i_2])))))) ? (((((/* implicit */_Bool) ((signed char) var_13))) ? (((((/* implicit */_Bool) arr_6 [i_2])) ? (arr_6 [i_2 + 1]) : (var_9))) : (((/* implicit */long long int) (+(((/* implicit */int) (signed char)73))))))) : (((((/* implicit */_Bool) arr_6 [i_2 + 2])) ? (((((/* implicit */_Bool) (signed char)-20)) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-16))))) : (((/* implicit */long long int) ((/* implicit */int) var_13))))))))));
    }
    for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned int i_4 = 0; i_4 < 15; i_4 += 4) 
        {
            for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
            {
                {
                    arr_17 [i_3] [i_4] [i_5] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned char)108))));
                    arr_18 [i_4] [i_4] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_3] [i_4] [i_4])) ? (((/* implicit */int) (unsigned short)51427)) : (((/* implicit */int) (short)29001))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_7))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) var_16)))))))) ? (((/* implicit */long long int) min((min((1891611862), (((/* implicit */int) (unsigned short)11)))), (((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) (signed char)-19)))))))) : (((long long int) arr_1 [i_3]))));
                    var_27 = var_13;
                }
            } 
        } 
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned char i_6 = 4; i_6 < 11; i_6 += 1) 
        {
            var_28 = ((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)46500))));
            var_29 = ((/* implicit */unsigned char) max((var_29), (((/* implicit */unsigned char) (~(((/* implicit */int) arr_13 [i_3] [i_3] [i_3])))))));
        }
        for (unsigned int i_7 = 2; i_7 < 14; i_7 += 2) 
        {
            var_30 = ((/* implicit */unsigned short) min((var_30), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_23 [i_7 - 2] [i_7] [i_7 - 1])) ? (((/* implicit */int) min((((/* implicit */unsigned char) var_11)), (arr_11 [i_7] [i_7 - 1])))) : (((((/* implicit */_Bool) arr_23 [i_7 - 2] [i_7] [i_7 - 1])) ? (((/* implicit */int) arr_19 [i_7 - 2] [i_7 - 2] [i_7 - 1])) : (((/* implicit */int) arr_23 [i_7 - 2] [i_7] [i_7 - 1])))))))));
            arr_26 [i_3] [i_7 - 1] = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-6826))) != (3984207293U)));
        }
        for (unsigned short i_8 = 0; i_8 < 15; i_8 += 2) 
        {
            var_31 = ((/* implicit */signed char) ((((/* implicit */long long int) max((((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) arr_3 [i_3])) : (((/* implicit */int) arr_13 [i_3] [i_8] [i_8])))), ((+(((/* implicit */int) (unsigned char)12))))))) * (min((max((((/* implicit */long long int) 20U)), (9223372036854775807LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) || ((_Bool)1))))))));
            var_32 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (signed char)0))))) ? (((((/* implicit */_Bool) min((arr_1 [i_3]), (((/* implicit */long long int) arr_13 [i_8] [i_8] [i_3]))))) ? (((/* implicit */int) var_15)) : ((~(((/* implicit */int) (signed char)-25)))))) : (((((/* implicit */_Bool) (-(((/* implicit */int) (short)190))))) ? (((/* implicit */int) min((arr_12 [i_8]), (arr_0 [i_8])))) : ((+(((/* implicit */int) (unsigned short)36906))))))));
        }
    }
}
