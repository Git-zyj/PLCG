/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31883
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31883 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31883
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
    var_18 = var_2;
    var_19 = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((unsigned int) var_16))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (var_2) : (((/* implicit */int) var_10))))))) ? (min((((/* implicit */int) (_Bool)1)), (((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) var_3)))))) : (((/* implicit */int) ((max((((/* implicit */int) var_0)), (var_6))) <= (((/* implicit */int) min(((unsigned char)255), (((/* implicit */unsigned char) (_Bool)1))))))))));
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */signed char) min((arr_1 [i_0]), (((/* implicit */unsigned int) min(((+(((/* implicit */int) var_8)))), (((((/* implicit */int) arr_0 [i_0])) - (((/* implicit */int) arr_2 [i_0] [i_0])))))))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 1; i_1 < 12; i_1 += 1) 
        {
            for (long long int i_2 = 1; i_2 < 10; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned char i_3 = 2; i_3 < 11; i_3 += 1) 
                    {
                        arr_12 [i_1] [i_1 - 1] [i_1 + 2] [i_1 - 1] [i_1 - 1] [i_1 + 2] = ((/* implicit */long long int) ((((((/* implicit */_Bool) 6750060565140931610LL)) || (((/* implicit */_Bool) (signed char)122)))) ? (((/* implicit */int) ((_Bool) var_6))) : (((/* implicit */int) (!(arr_5 [i_0] [i_1]))))));
                        arr_13 [i_0] [i_1] = ((/* implicit */unsigned long long int) (~(((int) (unsigned short)3442))));
                        arr_14 [i_0] [i_1] [i_2 + 3] [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -2088910864819565045LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) : (var_14))))));
                        arr_15 [i_0] [i_0] [i_1] [i_0] [i_2] [i_0] = (unsigned short)6422;
                    }
                    arr_16 [i_1] [i_0] [i_1] [i_1] = ((/* implicit */_Bool) arr_6 [i_1]);
                    arr_17 [(unsigned short)8] [i_0] [i_1] [12U] = ((((min((var_15), (((/* implicit */unsigned long long int) var_11)))) <= (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_9))))))) ? (((((((/* implicit */_Bool) var_2)) ? (8796093022207LL) : (-8796093022201LL))) & (((/* implicit */long long int) arr_8 [i_2] [i_2] [i_1] [i_0])))) : (-8796093022189LL));
                    arr_18 [4ULL] [4ULL] [i_0] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_5 [i_0] [6LL]))));
                    /* LoopSeq 2 */
                    for (int i_4 = 2; i_4 < 13; i_4 += 1) /* same iter space */
                    {
                        arr_23 [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) var_12);
                        arr_24 [i_0] [i_2] [i_1] = ((/* implicit */unsigned char) ((((((/* implicit */int) var_7)) | (((/* implicit */int) arr_5 [i_1 - 1] [i_1])))) << (((arr_5 [i_1 + 1] [i_1]) ? (((/* implicit */int) arr_5 [i_1 - 1] [i_1])) : (((/* implicit */int) arr_5 [i_1 - 1] [i_1]))))));
                        arr_25 [i_1] [i_1] [i_2 + 2] [i_4] [i_1] [i_1] = ((/* implicit */_Bool) ((long long int) (unsigned char)63));
                    }
                    for (int i_5 = 2; i_5 < 13; i_5 += 1) /* same iter space */
                    {
                        arr_29 [i_0] [i_0] [i_1] [i_0] [i_0] = ((((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_2 + 2] [12U])) ? (min((((/* implicit */long long int) ((((/* implicit */int) (short)32767)) | (((/* implicit */int) var_10))))), (((8796093022200LL) / (((/* implicit */long long int) 1463590555U)))))) : (((((/* implicit */_Bool) min((((/* implicit */unsigned int) 33553920)), (arr_1 [i_1])))) ? (((((/* implicit */_Bool) arr_7 [i_1])) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0] [i_1] [i_2] [i_5 - 2]))))) : (var_14))));
                        arr_30 [4ULL] [i_1] [i_2 + 4] [i_1] [i_5 + 1] = ((/* implicit */short) ((long long int) var_4));
                        arr_31 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1))))) < (min((((/* implicit */unsigned int) var_2)), (2831376736U))))));
                        arr_32 [i_1] [i_5] [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) (+(((((/* implicit */long long int) ((/* implicit */int) arr_19 [i_1 - 1] [i_2 + 3]))) | (((((-4721711233978872703LL) + (9223372036854775807LL))) << (((8448509144251199542LL) - (8448509144251199542LL)))))))));
                    }
                }
            } 
        } 
    }
    for (unsigned int i_6 = 2; i_6 < 21; i_6 += 1) 
    {
        arr_35 [i_6] = ((/* implicit */_Bool) min((((((/* implicit */int) (signed char)117)) / (((/* implicit */int) arr_34 [i_6 + 1] [i_6])))), (((/* implicit */int) (_Bool)0))));
        arr_36 [i_6] = ((/* implicit */long long int) 1412867620U);
    }
    for (unsigned char i_7 = 3; i_7 < 12; i_7 += 1) 
    {
        arr_39 [i_7] [i_7] = ((/* implicit */long long int) ((((/* implicit */_Bool) 8910404977543089630LL)) ? (((/* implicit */int) (_Bool)0)) : ((-(1926147107)))));
        arr_40 [i_7] = ((/* implicit */unsigned char) ((signed char) ((((/* implicit */_Bool) arr_9 [i_7] [i_7 + 1] [i_7 - 3] [i_7])) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)0))))) : (((((/* implicit */unsigned long long int) 0U)) / (14340878972390609516ULL))))));
    }
}
