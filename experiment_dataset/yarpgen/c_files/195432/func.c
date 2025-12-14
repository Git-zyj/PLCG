/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195432
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195432 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195432
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
    for (signed char i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        var_17 = ((/* implicit */unsigned short) max((max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [(_Bool)1])) ? (1131927123) : (1131927120)))), (min((((/* implicit */long long int) (_Bool)1)), (arr_0 [i_0] [i_0]))))), (((/* implicit */long long int) ((unsigned char) arr_0 [i_0] [i_0])))));
        /* LoopSeq 3 */
        for (long long int i_1 = 2; i_1 < 15; i_1 += 4) /* same iter space */
        {
            var_18 = ((/* implicit */_Bool) ((short) ((((/* implicit */int) arr_2 [i_1 - 1] [i_1] [i_1 - 2])) != (((/* implicit */int) ((short) (short)25975))))));
            arr_4 [14LL] [i_1] [(unsigned short)3] = (~(2698398392U));
        }
        for (long long int i_2 = 2; i_2 < 15; i_2 += 4) /* same iter space */
        {
            arr_7 [i_0] [(short)14] [i_2] = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((_Bool) min((arr_5 [1U] [1U]), (((/* implicit */long long int) (short)25964)))))), (((((/* implicit */_Bool) arr_2 [i_2 - 2] [i_0] [i_2 - 2])) ? (min((arr_1 [i_0]), (((/* implicit */long long int) 1131927118)))) : (((-2268376821135230762LL) + (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_0] [i_0])))))))));
            /* LoopNest 3 */
            for (signed char i_3 = 0; i_3 < 17; i_3 += 2) 
            {
                for (short i_4 = 0; i_4 < 17; i_4 += 4) 
                {
                    for (long long int i_5 = 0; i_5 < 17; i_5 += 2) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */long long int) 3400162040U)), (((((/* implicit */long long int) ((/* implicit */int) (short)-32767))) - (arr_5 [i_2] [i_2 + 2])))))) ? (max((arr_0 [i_2 - 2] [i_0]), (((/* implicit */long long int) arr_12 [i_2] [i_2 + 2] [i_2] [i_2 - 2] [i_2 - 2] [i_2])))) : (((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)32512))) < (2796185017U)))))))));
                            var_20 = ((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_2 - 2])) && (((/* implicit */_Bool) max((arr_1 [i_2 - 1]), (arr_1 [i_2 + 2]))))));
                        }
                    } 
                } 
            } 
        }
        /* vectorizable */
        for (signed char i_6 = 0; i_6 < 17; i_6 += 2) 
        {
            var_21 = ((/* implicit */unsigned int) (short)32541);
            var_22 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned int) 4738753435305838101LL))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (signed char)-1)))) : (arr_10 [i_0] [i_6] [i_0] [i_0])));
            var_23 = ((/* implicit */long long int) (short)3334);
            arr_19 [i_6] [i_6] = ((/* implicit */short) ((((((/* implicit */_Bool) 1303562217U)) ? (((/* implicit */long long int) arr_10 [i_0] [i_0] [i_0] [(signed char)12])) : (-4738753435305838090LL))) / (((/* implicit */long long int) ((/* implicit */int) ((197653332240908535ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-15896)))))))));
        }
    }
    for (signed char i_7 = 4; i_7 < 18; i_7 += 4) 
    {
        arr_22 [i_7] = ((((/* implicit */_Bool) ((arr_21 [i_7] [i_7 - 3]) >> (((arr_21 [i_7] [i_7 - 1]) - (11738447784285564610ULL)))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)20513))) <= (arr_20 [i_7]))))))) : (max((arr_20 [(signed char)17]), (((/* implicit */unsigned int) ((1009574190) <= (((/* implicit */int) (signed char)73))))))));
        arr_23 [16ULL] = ((/* implicit */unsigned short) (short)15895);
    }
    var_24 = ((/* implicit */int) var_16);
    var_25 = ((/* implicit */_Bool) var_5);
    var_26 *= min((((/* implicit */unsigned int) var_0)), (var_16));
    var_27 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) min(((unsigned short)42350), ((unsigned short)23185))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) min((var_14), ((short)26026)))))))) : (var_11)));
}
