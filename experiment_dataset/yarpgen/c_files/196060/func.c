/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196060
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196060 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196060
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
    var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) max((var_10), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_13))))))))));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        var_18 = ((/* implicit */long long int) arr_1 [5LL] [i_0]);
        arr_2 [i_0] = ((((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */int) (unsigned short)20264)) <= (((/* implicit */int) var_15)))))))) ? (((/* implicit */unsigned int) 643734761)) : (0U));
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            arr_6 [i_1] = min((((((/* implicit */_Bool) (signed char)2)) ? (((/* implicit */long long int) 5U)) : (-4080815787830169120LL))), (18014398508433408LL));
            var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)254)) ? (((/* implicit */unsigned long long int) max((((/* implicit */int) max(((unsigned char)255), (((/* implicit */unsigned char) (_Bool)1))))), (643734741)))) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 18446744073709551607ULL)))))) : (max((((/* implicit */unsigned long long int) var_2)), (arr_4 [i_0])))))));
            var_20 = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) var_1))) == (max((-18014398508433410LL), (((/* implicit */long long int) 2628859307U))))));
        }
        var_21 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) 503316480U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-41))) : (4294967274U))), (((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_5))))))))));
        /* LoopSeq 4 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_22 = max((min((var_8), (((/* implicit */unsigned long long int) (unsigned short)64605)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_1 [i_0] [i_2])) : (((/* implicit */int) arr_1 [i_0] [i_0]))))));
            var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) max((((/* implicit */signed char) (_Bool)1)), ((signed char)6)))), (arr_4 [i_2])))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 18014398508433408LL)))))) : ((+(1162339173821857560LL)))));
            arr_11 [i_0] = ((/* implicit */unsigned short) var_9);
        }
        for (short i_3 = 0; i_3 < 10; i_3 += 3) 
        {
            var_24 = ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) (signed char)49))))));
            var_25 = max((((/* implicit */int) (unsigned short)8160)), (-643734751));
        }
        /* vectorizable */
        for (unsigned short i_4 = 1; i_4 < 7; i_4 += 4) 
        {
            var_26 = ((/* implicit */long long int) min((var_26), (((/* implicit */long long int) ((((/* implicit */int) arr_3 [i_0] [i_4 - 1])) >> (((((/* implicit */int) arr_3 [i_0] [i_4 + 1])) - (29341))))))));
            var_27 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_3 [i_4 + 3] [7ULL])) & (((/* implicit */int) arr_3 [i_4 - 1] [7]))));
            var_28 = ((/* implicit */int) min((var_28), (((/* implicit */int) ((short) (short)13936)))));
        }
        for (signed char i_5 = 2; i_5 < 9; i_5 += 3) 
        {
            arr_19 [i_5] = ((/* implicit */_Bool) ((unsigned int) 4294967283U));
            var_29 = ((/* implicit */long long int) min((var_29), (((/* implicit */long long int) arr_1 [i_0] [i_5]))));
            arr_20 [i_0] [i_5] = ((/* implicit */int) max((((3722760303814470512ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-25))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967295U)) ? (4294967279U) : (var_13)))) ? (((((/* implicit */_Bool) 0)) ? (((/* implicit */int) (short)13938)) : (((/* implicit */int) arr_12 [i_5])))) : (((/* implicit */int) var_9)))))));
            var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_15 [i_5 + 1])) ? (((/* implicit */int) min((var_4), (((((/* implicit */_Bool) 926609970)) || (((/* implicit */_Bool) 13U))))))) : ((~(((/* implicit */int) (unsigned short)21990))))));
            var_31 = ((/* implicit */_Bool) (signed char)-26);
        }
    }
    /* vectorizable */
    for (long long int i_6 = 0; i_6 < 11; i_6 += 4) 
    {
        /* LoopSeq 1 */
        for (signed char i_7 = 1; i_7 < 10; i_7 += 4) 
        {
            var_32 = ((/* implicit */unsigned long long int) ((unsigned int) arr_21 [i_7 - 1]));
            var_33 = ((/* implicit */unsigned short) max((var_33), (var_15)));
            /* LoopSeq 1 */
            for (short i_8 = 2; i_8 < 10; i_8 += 1) 
            {
                arr_31 [i_8] [i_8] = ((/* implicit */unsigned short) ((1666107982U) > (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_6] [i_6])))));
                var_34 *= ((/* implicit */unsigned short) arr_30 [(_Bool)1] [i_6] [4U] [i_8]);
            }
        }
        var_35 = ((/* implicit */unsigned char) (!(var_4)));
    }
}
