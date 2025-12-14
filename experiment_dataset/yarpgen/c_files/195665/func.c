/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195665
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195665 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195665
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
    var_17 -= ((/* implicit */int) ((2592098081622372881LL) <= (((/* implicit */long long int) max((((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) -2592098081622372882LL))))), (var_2))))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        var_18 *= min((((/* implicit */long long int) ((((arr_0 [i_0]) & ((-9223372036854775807LL - 1LL)))) <= (((/* implicit */long long int) ((/* implicit */int) ((var_9) != (((/* implicit */long long int) var_0))))))))), (max((((/* implicit */long long int) var_14)), (min((((/* implicit */long long int) (unsigned char)54)), (1056653100824071477LL))))));
        var_19 += ((/* implicit */short) ((min((((((/* implicit */_Bool) -169285468)) ? (787104477785163332LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)201))))), ((-(arr_1 [i_0] [i_0]))))) <= (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)19068)) ? (((/* implicit */int) (short)29821)) : (var_8)))) && (((/* implicit */_Bool) min((-2592098081622372882LL), (((/* implicit */long long int) (short)11299)))))))))));
        var_20 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)156))))) ? ((~(((/* implicit */int) (unsigned char)156)))) : (((((/* implicit */int) var_16)) & (var_0)))))) ? ((-(arr_1 [i_0] [i_0]))) : ((~(min((arr_1 [i_0] [i_0]), (((/* implicit */long long int) (short)-29821)))))));
        /* LoopNest 2 */
        for (long long int i_1 = 2; i_1 < 17; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                {
                    var_21 = ((/* implicit */short) ((max((var_13), (((/* implicit */long long int) arr_5 [i_0] [i_0] [i_1 + 1] [(unsigned char)2])))) * (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) arr_5 [i_0] [i_0] [i_1 - 1] [15])), ((short)-19068)))))));
                    arr_7 [i_0] [i_2] [i_0] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) min((min((((/* implicit */long long int) (unsigned char)217)), (var_4))), (min((2LL), (((/* implicit */long long int) (unsigned char)217))))))) ? (((/* implicit */long long int) ((/* implicit */int) (short)-19069))) : (((((/* implicit */_Bool) min((-3198542130876707439LL), (((/* implicit */long long int) (short)29821))))) ? (((arr_1 [i_0] [i_1]) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned char)202))))) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) arr_5 [i_2] [i_1] [i_1] [i_0])), (var_7)))))))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (long long int i_3 = 0; i_3 < 18; i_3 += 2) 
        {
            for (long long int i_4 = 0; i_4 < 18; i_4 += 4) 
            {
                for (short i_5 = 0; i_5 < 18; i_5 += 3) 
                {
                    {
                        arr_15 [i_0] [i_0] [i_4] [i_5] [i_0] = ((/* implicit */long long int) arr_10 [i_3] [i_4] [i_5]);
                        var_22 = ((/* implicit */int) ((var_13) / (((long long int) (-(((/* implicit */int) var_3)))))));
                    }
                } 
            } 
        } 
    }
    var_23 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) (short)19072)), (var_13)))) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (((-5956660646580368668LL) / (((/* implicit */long long int) ((/* implicit */int) var_14)))))))) ? (-2592098081622372882LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) var_12))) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))))));
    var_24 = max((var_4), (var_6));
    var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1261808131786431741LL)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) var_1)))))) ? (((((/* implicit */_Bool) var_7)) ? (-308672394651645068LL) : (9223372036854775807LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned char)55)))))))) ? (((((/* implicit */_Bool) (short)11315)) ? (var_12) : (max((((/* implicit */int) (unsigned char)116)), (var_8))))) : (((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (short)30307)) : (((/* implicit */int) (unsigned char)249)))) & (((/* implicit */int) ((((/* implicit */_Bool) 18)) || (((/* implicit */_Bool) var_16)))))))));
}
