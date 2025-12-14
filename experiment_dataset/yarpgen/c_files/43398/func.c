/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43398
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43398 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43398
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
    var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)63097)) ? (((/* implicit */int) ((((/* implicit */int) var_17)) != (((/* implicit */int) var_11))))) : ((+(((/* implicit */int) var_8))))));
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) ((unsigned long long int) (signed char)127)))));
        arr_2 [i_0] = ((/* implicit */long long int) arr_1 [i_0] [i_0]);
        var_21 = ((/* implicit */long long int) (!((!(((/* implicit */_Bool) (signed char)126))))));
        var_22 -= ((/* implicit */unsigned char) min((min((((unsigned long long int) var_17)), (((/* implicit */unsigned long long int) (~(arr_0 [i_0])))))), (((/* implicit */unsigned long long int) (((-(var_6))) / (max((var_13), (((/* implicit */long long int) var_8)))))))));
    }
    for (unsigned char i_1 = 0; i_1 < 11; i_1 += 4) /* same iter space */
    {
        /* LoopSeq 2 */
        for (int i_2 = 0; i_2 < 11; i_2 += 4) 
        {
            arr_8 [i_1] [i_1] = ((/* implicit */unsigned short) min((((min((6690435237281281731LL), (((/* implicit */long long int) var_8)))) ^ (((/* implicit */long long int) min((((/* implicit */int) (short)27685)), (var_3)))))), (var_6)));
            var_23 = ((/* implicit */short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) var_10)) : (var_15)))))))) : (((max((var_0), (-5630210784898979015LL))) - (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1])))))));
        }
        for (unsigned short i_3 = 0; i_3 < 11; i_3 += 4) 
        {
            var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) max((((/* implicit */long long int) var_1)), (((((/* implicit */_Bool) (short)27672)) ? (-7403153270416643625LL) : (((/* implicit */long long int) 390896455)))))))));
            var_25 = ((/* implicit */int) ((((/* implicit */_Bool) (((-(137438691328LL))) % (((/* implicit */long long int) ((/* implicit */int) ((-792522867756924955LL) <= (var_6)))))))) ? (((/* implicit */long long int) min((((/* implicit */int) var_1)), (arr_0 [i_1])))) : (var_12)));
            arr_11 [i_3] [i_3] [(unsigned char)4] = ((/* implicit */short) ((((((/* implicit */int) min((((/* implicit */short) var_2)), (var_5)))) + (2147483647))) << (((907623646) - (907623646)))));
            arr_12 [i_1] [i_3] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (short)20167)), (var_14)))) ? (((((/* implicit */_Bool) 4307403248022338998LL)) ? (((/* implicit */int) (short)16407)) : (((/* implicit */int) arr_5 [i_1])))) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_5 [i_1])) : (((/* implicit */int) arr_5 [i_1]))))));
            /* LoopSeq 2 */
            for (unsigned int i_4 = 0; i_4 < 11; i_4 += 2) /* same iter space */
            {
                arr_15 [i_1] [i_1] [i_4] = (short)-1;
                var_26 -= ((/* implicit */unsigned char) var_12);
            }
            for (unsigned int i_5 = 0; i_5 < 11; i_5 += 2) /* same iter space */
            {
                var_27 = ((/* implicit */unsigned char) ((_Bool) min((arr_4 [i_1]), (arr_4 [i_1]))));
                arr_18 [i_1] [i_3] [i_3] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)20)) ? (var_15) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_16)))))) ? (min((var_6), (((/* implicit */long long int) arr_16 [i_1] [i_1] [i_5])))) : (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_3])))))));
            }
        }
        var_28 = ((/* implicit */long long int) max((var_28), (((/* implicit */long long int) min((((((/* implicit */_Bool) (unsigned char)129)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-32))) : (var_15))), (((/* implicit */unsigned long long int) var_7)))))));
    }
    for (unsigned char i_6 = 0; i_6 < 11; i_6 += 4) /* same iter space */
    {
        arr_21 [i_6] [i_6] = ((/* implicit */unsigned short) min((((/* implicit */long long int) min((arr_20 [i_6]), (var_2)))), (min((((/* implicit */long long int) (unsigned char)164)), (5129781983129094191LL)))));
        var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_6])))))) ? (((/* implicit */int) var_5)) : (var_3)))) ? (((max((((/* implicit */long long int) (short)-30435)), (var_0))) - ((~(9223372036854775807LL))))) : (var_10)));
    }
}
