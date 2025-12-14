/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221764
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221764 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221764
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 3) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((short) arr_0 [i_0]))) ? (((unsigned long long int) var_1)) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) (short)-32760)) : (((/* implicit */int) (short)26633)))))));
        arr_3 [i_0] = ((/* implicit */short) (_Bool)1);
        var_20 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) (short)15)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))) : (((((/* implicit */_Bool) var_19)) ? (((/* implicit */unsigned long long int) arr_0 [(unsigned char)14])) : (var_9)))));
    }
    for (signed char i_1 = 0; i_1 < 23; i_1 += 3) /* same iter space */
    {
        var_21 *= ((/* implicit */_Bool) var_4);
        arr_8 [i_1] [i_1] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) (short)-26651)) ? (-8317083099991350893LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))));
        /* LoopSeq 2 */
        for (int i_2 = 0; i_2 < 23; i_2 += 1) 
        {
            arr_11 [i_1] [i_1] [i_2] = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) 8825284014996458077LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)174))) : (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)44))) + (arr_0 [i_1])))))));
            var_22 += ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (short)-9072))) > (-3649192012334484313LL)));
            /* LoopNest 2 */
            for (unsigned char i_3 = 0; i_3 < 23; i_3 += 4) 
            {
                for (long long int i_4 = 0; i_4 < 23; i_4 += 1) 
                {
                    {
                        arr_18 [i_1] [i_4] [i_4] [i_4] [i_2] [i_4] = ((((/* implicit */_Bool) -1238649172688288291LL)) || (((/* implicit */_Bool) 134217727)));
                        arr_19 [i_4] [i_3] [i_2] [i_4] = ((/* implicit */unsigned long long int) (((_Bool)0) ? (arr_0 [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((int) -134217724))) < (1950556845355466948ULL)))))));
                        arr_20 [i_4] [i_3] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_7 [18LL] [i_4])) ? (((unsigned long long int) ((short) var_15))) : (((/* implicit */unsigned long long int) (-(-1931879357))))));
                    }
                } 
            } 
        }
        /* vectorizable */
        for (short i_5 = 4; i_5 < 21; i_5 += 3) 
        {
            var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) 2123106568U))));
            var_24 ^= 4873779539783321920LL;
        }
        /* LoopSeq 1 */
        for (int i_6 = 1; i_6 < 22; i_6 += 3) 
        {
            arr_26 [i_1] [i_1] = ((/* implicit */unsigned int) 2ULL);
            var_25 = ((/* implicit */short) (((!(((/* implicit */_Bool) ((((/* implicit */int) var_4)) | (((/* implicit */int) arr_6 [0ULL]))))))) || (((/* implicit */_Bool) min((arr_13 [i_6 + 1] [i_6 - 1]), (((/* implicit */signed char) arr_25 [i_6] [i_1])))))));
            arr_27 [i_1] [i_6 - 1] = ((/* implicit */unsigned short) max(((-(6ULL))), (((9055871353837242685ULL) / (((/* implicit */unsigned long long int) 8825284014996458077LL))))));
            arr_28 [i_1] [i_1] [i_6] = ((/* implicit */_Bool) var_12);
            var_26 = 1330070800U;
        }
    }
    var_27 = ((/* implicit */unsigned char) var_12);
    var_28 = 4225020376U;
}
