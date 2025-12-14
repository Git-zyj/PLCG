/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40208
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40208 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40208
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
    var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) var_13))));
    var_20 = var_14;
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)16))));
        arr_3 [i_0] [i_0] = ((/* implicit */int) arr_0 [i_0]);
        var_21 ^= ((/* implicit */unsigned int) arr_1 [i_0]);
        var_22 = ((((/* implicit */_Bool) arr_0 [i_0])) && (((/* implicit */_Bool) (-(var_17)))));
    }
    for (short i_1 = 0; i_1 < 16; i_1 += 1) 
    {
        var_23 = ((/* implicit */unsigned char) min((((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1]))) >= (var_12))) ? (((((/* implicit */_Bool) (unsigned char)203)) ? (((/* implicit */int) (unsigned char)201)) : (((/* implicit */int) arr_5 [i_1])))) : (((/* implicit */int) arr_5 [i_1])))), (((/* implicit */int) (_Bool)0))));
        arr_6 [i_1] = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)38925)) ? (((/* implicit */int) (signed char)-40)) : (((/* implicit */int) (_Bool)0))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 4224692867U)) ? (((/* implicit */int) arr_5 [i_1])) : (((/* implicit */int) arr_5 [i_1]))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_5 [i_1])) & (((/* implicit */int) arr_0 [i_1]))))) : (((unsigned int) (_Bool)1))))));
        arr_7 [i_1] [0U] |= ((/* implicit */unsigned char) min((((/* implicit */int) arr_0 [i_1])), (arr_4 [i_1] [i_1])));
        /* LoopNest 2 */
        for (long long int i_2 = 2; i_2 < 14; i_2 += 1) 
        {
            for (short i_3 = 1; i_3 < 14; i_3 += 2) 
            {
                {
                    var_24 = ((/* implicit */long long int) arr_0 [i_1]);
                    arr_13 [(unsigned short)7] [i_3] = ((/* implicit */int) (signed char)-109);
                    var_25 = ((/* implicit */signed char) var_15);
                    var_26 -= ((/* implicit */unsigned int) (((_Bool)1) ? (-9115446642600128310LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)237)))));
                }
            } 
        } 
    }
    for (int i_4 = 4; i_4 < 21; i_4 += 4) 
    {
        var_27 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) (+(((/* implicit */int) arr_0 [i_4]))))), (min((arr_14 [i_4] [i_4 - 2]), (arr_14 [i_4] [i_4 - 2])))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_5 = 0; i_5 < 23; i_5 += 3) 
        {
            arr_19 [i_4] [i_5] = ((/* implicit */unsigned char) ((signed char) (unsigned short)19998));
            var_28 = ((/* implicit */signed char) ((((/* implicit */int) arr_0 [i_4 + 2])) ^ (((/* implicit */int) arr_1 [i_4 + 2]))));
            var_29 |= ((/* implicit */unsigned char) (-(((/* implicit */int) arr_16 [i_4 - 3] [i_4 + 1]))));
        }
        var_30 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((int) ((((/* implicit */int) arr_0 [i_4])) ^ (((/* implicit */int) arr_1 [i_4 + 2])))))) ? (min(((-(((/* implicit */int) (unsigned short)35798)))), ((+(((/* implicit */int) arr_17 [i_4 + 1] [i_4 - 1])))))) : (((((/* implicit */_Bool) (unsigned short)26594)) ? (((/* implicit */int) (unsigned short)52599)) : (((/* implicit */int) (_Bool)1))))));
    }
    var_31 = (unsigned short)16061;
}
