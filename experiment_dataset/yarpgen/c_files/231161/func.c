/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231161
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231161 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231161
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
    var_20 = ((/* implicit */int) ((unsigned short) (unsigned short)8599));
    var_21 = ((/* implicit */short) min((((((/* implicit */_Bool) (unsigned short)22465)) ? (((/* implicit */int) var_10)) : ((+(((/* implicit */int) (signed char)-2)))))), (((/* implicit */int) var_17))));
    var_22 = ((/* implicit */unsigned short) max((11), (((/* implicit */int) (!(((/* implicit */_Bool) ((-18) | (37)))))))));
    /* LoopSeq 3 */
    for (signed char i_0 = 1; i_0 < 22; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((short) var_2))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0 + 1])) && (((/* implicit */_Bool) (unsigned char)121))))) : (min((var_15), (((/* implicit */int) ((((/* implicit */_Bool) 18)) && (((/* implicit */_Bool) 17)))))))));
        arr_3 [i_0] = ((/* implicit */_Bool) var_15);
    }
    for (unsigned char i_1 = 0; i_1 < 13; i_1 += 1) 
    {
        var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) min((((/* implicit */int) ((short) (~(((/* implicit */int) var_4)))))), (11))))));
        var_24 = (-(((/* implicit */int) ((short) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */long long int) var_12)) : (-1LL))))));
        var_25 = ((/* implicit */_Bool) 130023424);
        var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)8191)) ? (((/* implicit */int) (short)8206)) : (min((130023443), (((/* implicit */int) (unsigned char)185))))))) ? (((/* implicit */int) (unsigned char)85)) : (max((130023429), (((/* implicit */int) (unsigned char)142)))))))));
        arr_7 [i_1] &= ((/* implicit */unsigned short) 904407755U);
    }
    for (unsigned char i_2 = 0; i_2 < 23; i_2 += 1) 
    {
        arr_10 [i_2] = var_5;
        arr_11 [i_2] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) min((min((arr_0 [i_2]), (((/* implicit */short) var_9)))), (((/* implicit */short) ((unsigned char) (short)8209))))))) ^ (((((/* implicit */_Bool) arr_8 [i_2])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (-18) : (((/* implicit */int) (unsigned short)4247))))) : (arr_9 [i_2] [i_2])))));
        arr_12 [i_2] [i_2] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (short)8208)) : (((/* implicit */int) var_9)))) | (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)65)))))));
        arr_13 [i_2] = max((var_7), (((/* implicit */long long int) 130023423)));
        /* LoopNest 2 */
        for (long long int i_3 = 1; i_3 < 20; i_3 += 1) 
        {
            for (unsigned short i_4 = 0; i_4 < 23; i_4 += 4) 
            {
                {
                    arr_20 [i_2] [i_2] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) -964278815463105687LL)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 130023425)) ? (-1267956581) : (((/* implicit */int) (short)-8207)))))));
                    var_27 = ((/* implicit */long long int) max((((((/* implicit */_Bool) (short)8232)) ? (1267956589) : (((/* implicit */int) (unsigned char)18)))), (((/* implicit */int) min((var_9), (arr_1 [i_3 + 2]))))));
                }
            } 
        } 
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_5 = 2; i_5 < 11; i_5 += 2) 
    {
        arr_23 [i_5 - 2] = ((/* implicit */long long int) ((((/* implicit */_Bool) 402653184U)) ? (((/* implicit */int) var_14)) : (-1267956567)));
        arr_24 [i_5] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_19 [i_5] [i_5 + 1] [(unsigned char)6] [15]))));
    }
}
