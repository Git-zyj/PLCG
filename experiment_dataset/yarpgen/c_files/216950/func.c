/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216950
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216950 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216950
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
    var_13 = ((/* implicit */unsigned int) var_8);
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        var_14 = ((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -325391131)) ? (-17) : (-325391131)))) ? (var_1) : (((((/* implicit */_Bool) 325391130)) ? (325391130) : (((/* implicit */int) (unsigned char)3))))))) != (2228118043U)));
        var_15 = ((/* implicit */unsigned short) (-(((unsigned int) ((long long int) arr_0 [i_0])))));
        var_16 = ((/* implicit */signed char) ((((/* implicit */int) min((var_2), (((/* implicit */unsigned short) arr_0 [i_0]))))) > (((((/* implicit */_Bool) -325391122)) ? (-325391114) : (((/* implicit */int) (unsigned char)249))))));
        arr_3 [i_0] [i_0] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) (_Bool)0)))) * (((((/* implicit */int) arr_2 [i_0])) >> (((/* implicit */int) arr_2 [i_0]))))));
    }
    /* vectorizable */
    for (long long int i_1 = 1; i_1 < 9; i_1 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_2 = 2; i_2 < 9; i_2 += 2) 
        {
            var_17 += ((/* implicit */unsigned short) (signed char)-127);
            var_18 = ((/* implicit */long long int) 54144308);
            arr_10 [i_1] [i_1] [i_2] &= ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) arr_8 [i_2])))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned char)112))));
        }
        /* LoopSeq 1 */
        for (int i_3 = 3; i_3 < 9; i_3 += 3) 
        {
            var_19 = ((/* implicit */signed char) (+(arr_8 [i_3 - 3])));
            /* LoopSeq 2 */
            for (unsigned short i_4 = 1; i_4 < 10; i_4 += 1) 
            {
                arr_16 [i_1] [i_1] [i_1] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -325391114)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (-2003660401174138144LL)))) && (((/* implicit */_Bool) (~(var_4))))));
                var_20 = ((/* implicit */unsigned short) (!(((1408312650) <= (((/* implicit */int) var_8))))));
                arr_17 [i_1] [i_3] [i_3] = ((/* implicit */_Bool) 54144308);
            }
            for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
            {
                arr_22 [i_1] = ((/* implicit */unsigned long long int) ((((unsigned long long int) arr_4 [i_1] [i_1])) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))));
                var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) arr_19 [i_1] [i_1] [i_1] [i_1])) ? (((/* implicit */int) (signed char)59)) : (((/* implicit */int) var_0))))))));
                var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)89))));
            }
        }
        var_23 = var_12;
        var_24 = ((unsigned short) arr_12 [i_1 - 1]);
        arr_23 [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)33555)) ? (54144301) : (((/* implicit */int) (signed char)115))))) ? (((long long int) (unsigned short)11318)) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_4)))));
    }
}
