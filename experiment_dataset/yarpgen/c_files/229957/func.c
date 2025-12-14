/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229957
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229957 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229957
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
    var_20 &= ((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned char)248))));
    /* LoopSeq 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) /* same iter space */
    {
        var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) min((((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0] [i_0])) & (((/* implicit */int) (unsigned char)110))))) ? (arr_0 [8U]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4294967287U)) ? (8910109101209138907LL) : (16777215LL)))))), (((/* implicit */unsigned long long int) ((_Bool) (+(16589212888238537555ULL))))))))));
        var_22 = ((/* implicit */signed char) var_4);
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((min((var_5), (((/* implicit */long long int) (signed char)-51)))) & (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) 520093696U)) < ((-9223372036854775807LL - 1LL))))))));
        var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2556538344206359416LL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)120))) : (-5165685952720615516LL)))), (max((arr_0 [(signed char)0]), (arr_0 [(unsigned char)16]))))))));
    }
    /* vectorizable */
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) /* same iter space */
    {
        var_24 = ((/* implicit */unsigned int) -1052233359);
        var_25 = ((unsigned short) (signed char)3);
    }
    /* vectorizable */
    for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) /* same iter space */
    {
        var_26 = ((/* implicit */unsigned char) (~(18446744073709551615ULL)));
        var_27 = ((/* implicit */_Bool) min((var_27), (((/* implicit */_Bool) arr_1 [i_2] [i_2]))));
        var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_19)) ? ((~(((/* implicit */int) (signed char)-3)))) : (((/* implicit */int) ((signed char) (signed char)52)))));
        var_29 = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) 18446744073709551603ULL)))) ? (3774873600U) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_2] [i_2])) && (var_0)))))));
        /* LoopSeq 2 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            var_30 = var_4;
            /* LoopSeq 2 */
            for (unsigned char i_4 = 0; i_4 < 25; i_4 += 2) 
            {
                var_31 = ((/* implicit */long long int) var_14);
                var_32 = ((/* implicit */signed char) (unsigned char)240);
                var_33 = arr_1 [i_2 - 1] [i_2 - 1];
            }
            for (unsigned int i_5 = 0; i_5 < 25; i_5 += 3) 
            {
                var_34 &= ((/* implicit */unsigned char) 3774873607U);
                arr_19 [i_2] [(signed char)11] = ((/* implicit */unsigned int) (unsigned char)240);
            }
            arr_20 [i_2] [i_3] = ((/* implicit */unsigned long long int) (_Bool)1);
            /* LoopNest 2 */
            for (signed char i_6 = 2; i_6 < 21; i_6 += 4) 
            {
                for (unsigned long long int i_7 = 0; i_7 < 25; i_7 += 2) 
                {
                    {
                        var_35 = ((/* implicit */long long int) ((unsigned short) 4277736003U));
                        var_36 &= ((/* implicit */long long int) (+(((/* implicit */int) ((arr_7 [i_7]) != (((/* implicit */unsigned long long int) 67108800LL)))))));
                    }
                } 
            } 
        }
        for (short i_8 = 3; i_8 < 24; i_8 += 4) 
        {
            arr_28 [i_2] = ((14) % (((/* implicit */int) arr_18 [i_2 - 1] [i_2] [i_2 - 1])));
            var_37 = ((/* implicit */unsigned long long int) min((var_37), (((/* implicit */unsigned long long int) (short)(-32767 - 1)))));
        }
    }
    var_38 += min((min(((~(var_18))), (((/* implicit */long long int) var_19)))), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((signed char) 2945998817U)))))));
}
