/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248158
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248158 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248158
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
    var_19 ^= ((/* implicit */unsigned char) (+(((/* implicit */int) var_10))));
    var_20 = ((/* implicit */short) (-(((((/* implicit */_Bool) 2131351054U)) ? (((/* implicit */int) var_15)) : (min((((/* implicit */int) var_12)), (var_11)))))));
    /* LoopNest 3 */
    for (signed char i_0 = 4; i_0 < 12; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                {
                    var_21 = ((/* implicit */int) ((short) 348023624));
                    var_22 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((((var_4) + (2147483647))) >> (((((/* implicit */int) arr_7 [i_1] [i_1] [i_2])) - (13775)))))))) ? (((unsigned long long int) var_17)) : (((/* implicit */unsigned long long int) (((~(var_18))) / (2131351061U))))));
                    var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) var_18))));
                    var_24 = ((/* implicit */_Bool) var_0);
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_3 = 0; i_3 < 20; i_3 += 3) 
    {
        for (int i_4 = 4; i_4 < 19; i_4 += 3) 
        {
            {
                var_25 = ((/* implicit */short) ((((/* implicit */_Bool) 1771224951U)) ? (((/* implicit */unsigned int) ((/* implicit */int) max((arr_10 [i_4 - 4] [i_3] [i_4 - 3]), (arr_10 [i_4 - 1] [i_3] [i_4 - 3]))))) : (2163616235U)));
                var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_12)), (2163616248U)))) ? (((((/* implicit */_Bool) ((var_17) | (((/* implicit */int) var_5))))) ? (((/* implicit */unsigned int) arr_11 [14LL])) : (min((((/* implicit */unsigned int) var_10)), (arr_9 [(short)6]))))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (short i_5 = 0; i_5 < 20; i_5 += 3) 
                {
                    var_27 = ((/* implicit */int) var_2);
                    var_28 = ((/* implicit */short) arr_9 [i_3]);
                    var_29 = ((/* implicit */int) min((var_29), (((/* implicit */int) ((((/* implicit */_Bool) 2163616234U)) ? (((/* implicit */unsigned int) (+(((/* implicit */int) arr_14 [i_3] [i_4] [i_3] [i_3]))))) : ((~(var_18))))))));
                    var_30 = ((/* implicit */unsigned short) (unsigned char)0);
                }
                /* LoopNest 3 */
                for (short i_6 = 0; i_6 < 20; i_6 += 3) 
                {
                    for (signed char i_7 = 1; i_7 < 19; i_7 += 1) 
                    {
                        for (unsigned char i_8 = 1; i_8 < 17; i_8 += 4) 
                        {
                            {
                                var_31 *= ((/* implicit */short) ((((/* implicit */_Bool) arr_9 [(unsigned char)10])) ? (((/* implicit */int) arr_15 [(_Bool)0] [i_6] [(_Bool)0])) : (((/* implicit */int) max((((/* implicit */short) (unsigned char)5)), (arr_20 [i_8 + 1] [i_7] [i_6] [(unsigned char)7] [i_3]))))));
                                arr_25 [16ULL] [(unsigned short)12] &= ((/* implicit */_Bool) (-(((/* implicit */int) (signed char)4))));
                                var_32 = ((/* implicit */short) ((unsigned short) (~(((((/* implicit */_Bool) (unsigned char)4)) ? (((/* implicit */unsigned int) 2124363071)) : (2131351063U))))));
                                var_33 = ((/* implicit */unsigned short) min((2131351054U), (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 2025960501U)) | (arr_24 [i_3] [9] [i_6] [i_7 - 1] [i_8])))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_7)) : (var_17)))) : (((((/* implicit */_Bool) 2131351048U)) ? (((/* implicit */unsigned int) var_9)) : (var_8)))))));
                            }
                        } 
                    } 
                } 
                var_34 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) ((((/* implicit */unsigned int) var_11)) != (arr_17 [i_3] [i_4 - 3]))))));
            }
        } 
    } 
}
