/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29375
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29375 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29375
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
    var_20 = ((/* implicit */long long int) (!(((/* implicit */_Bool) max(((-(((/* implicit */int) var_4)))), (((/* implicit */int) (unsigned char)40)))))));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 2) /* same iter space */
    {
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_21 *= ((/* implicit */unsigned long long int) ((unsigned char) max((((/* implicit */long long int) var_15)), (-6925822632124273228LL))));
            arr_4 [i_0] [i_0] [i_1] = ((/* implicit */_Bool) (unsigned char)225);
            arr_5 [i_1] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((_Bool) arr_3 [i_0] [i_1])))));
        }
        arr_6 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) (unsigned short)28312))) ? (((((/* implicit */_Bool) var_17)) ? (arr_1 [i_0] [(unsigned char)8]) : (6925822632124273228LL))) : (((/* implicit */long long int) (+(var_12))))))) ? (((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */long long int) arr_0 [i_0])) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) (short)10375))) : (-6925822632124273228LL))))) : (((/* implicit */long long int) (-(4294967295U))))));
        var_22 -= ((/* implicit */unsigned char) ((long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_16))))))));
    }
    for (unsigned int i_2 = 0; i_2 < 22; i_2 += 2) /* same iter space */
    {
        var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+((~(var_15)))))) || (((/* implicit */_Bool) var_10))));
        var_24 = ((/* implicit */short) ((4294967295U) < (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (short)31035))))));
        arr_9 [i_2] [i_2] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((var_9) << (((4294967295U) - (4294967276U))))))));
    }
    for (unsigned int i_3 = 0; i_3 < 22; i_3 += 2) /* same iter space */
    {
        arr_13 [i_3] [i_3] = ((/* implicit */unsigned int) min((((long long int) 0U)), (((/* implicit */long long int) (+(((/* implicit */int) (short)-31039)))))));
        var_25 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned long long int) ((short) ((unsigned char) var_0))))));
    }
    var_26 = ((/* implicit */_Bool) var_0);
    /* LoopSeq 2 */
    for (unsigned short i_4 = 0; i_4 < 22; i_4 += 3) 
    {
        arr_16 [i_4] = arr_15 [i_4];
        arr_17 [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */int) (unsigned char)255)), ((+(((/* implicit */int) var_18))))))) ? (((/* implicit */unsigned long long int) ((long long int) (unsigned short)51874))) : (arr_15 [i_4])));
        arr_18 [i_4] [i_4] = min((((/* implicit */unsigned int) arr_2 [i_4] [(unsigned char)16] [(unsigned char)10])), (arr_0 [i_4]));
        arr_19 [i_4] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 216172782113783808LL)) + (6693643730364713686ULL)))) ? (((((/* implicit */_Bool) (short)9)) ? (-9192662042782589826LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)16))))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)239)))));
    }
    for (unsigned int i_5 = 0; i_5 < 18; i_5 += 2) 
    {
        /* LoopNest 3 */
        for (long long int i_6 = 1; i_6 < 16; i_6 += 2) 
        {
            for (unsigned char i_7 = 0; i_7 < 18; i_7 += 1) 
            {
                for (unsigned long long int i_8 = 0; i_8 < 18; i_8 += 3) 
                {
                    {
                        var_27 = ((/* implicit */short) arr_27 [i_6] [(_Bool)1] [(unsigned char)8] [i_8]);
                        arr_32 [i_6] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) 7613504628653151042LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_23 [i_5] [i_6 - 1] [i_7]))), (((/* implicit */unsigned long long int) ((arr_23 [i_7] [i_7] [i_6 + 1]) != (((/* implicit */unsigned long long int) var_7)))))));
                        var_28 = ((/* implicit */unsigned long long int) max((var_28), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 17562876673193694527ULL)) ? (((/* implicit */int) arr_31 [i_5] [i_5] [i_6 + 1] [i_6 + 1] [i_8])) : (((/* implicit */int) arr_31 [i_5] [i_6 - 1] [i_6 - 1] [i_6 + 1] [i_7]))))) ? (((3751724880U) * (((/* implicit */unsigned int) ((/* implicit */int) (short)-22595))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_31 [i_5] [i_6] [i_6 - 1] [i_6 + 2] [i_6])) ? (((/* implicit */int) arr_31 [i_5] [i_5] [i_6 - 1] [i_6 - 1] [i_6 - 1])) : (((/* implicit */int) arr_31 [i_5] [i_5] [i_6 - 1] [i_6 - 1] [6ULL]))))))))));
                    }
                } 
            } 
        } 
        var_29 = ((/* implicit */short) (((!(((/* implicit */_Bool) min((1471609501915778940ULL), (((/* implicit */unsigned long long int) var_12))))))) ? (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 16975134571793772676ULL)) || (((/* implicit */_Bool) 5U))))), (((((/* implicit */_Bool) var_12)) ? (var_1) : (((/* implicit */unsigned long long int) var_8)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [(unsigned short)7])))));
    }
}
