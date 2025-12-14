/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233405
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233405 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233405
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        /* LoopSeq 3 */
        for (int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            var_20 = ((/* implicit */unsigned short) (-(((((unsigned int) var_11)) * (((/* implicit */unsigned int) var_4))))));
            arr_6 [i_1] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_7)) ? (-1477826318) : (((/* implicit */int) var_9)))), (((/* implicit */int) ((unsigned char) 8786518735178844175LL)))))) <= (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) / (6426077239758506835ULL)))));
            var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) arr_0 [i_1]))));
        }
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            arr_11 [i_0] [i_0] = ((/* implicit */unsigned short) (((+(((/* implicit */int) (_Bool)1)))) >> ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)121))))));
            /* LoopSeq 1 */
            for (unsigned short i_3 = 4; i_3 < 9; i_3 += 2) 
            {
                var_22 = ((/* implicit */unsigned int) var_1);
                var_23 &= ((/* implicit */short) ((((arr_7 [i_3 - 4] [i_3] [i_2]) + (((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [(short)3] [i_2] [3LL]))))))) >= (((((((/* implicit */int) var_13)) ^ (((/* implicit */int) var_13)))) | (((arr_7 [i_0] [i_0] [8]) ^ (arr_5 [i_0])))))));
                var_24 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_9) ? (((/* implicit */int) ((signed char) arr_2 [(unsigned char)3] [(unsigned char)3] [(unsigned char)3]))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_17)))))))) ? ((+(((((/* implicit */int) (_Bool)0)) - (((/* implicit */int) (_Bool)1)))))) : (min(((~(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((((/* implicit */int) (unsigned char)166)) == (((/* implicit */int) (short)-7483)))))))));
            }
            var_25 = ((/* implicit */int) max((((/* implicit */long long int) (~(arr_4 [i_2] [i_2] [(signed char)7])))), (var_0)));
        }
        for (unsigned char i_4 = 0; i_4 < 10; i_4 += 3) 
        {
            var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)62)) ? (((/* implicit */int) (unsigned char)218)) : (((/* implicit */int) arr_2 [i_4] [(signed char)0] [i_4]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_9)) >= (((/* implicit */int) (unsigned char)144)))))) : (var_0)))) ? (((((((/* implicit */_Bool) var_3)) ? (var_17) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) << (((min((((/* implicit */long long int) var_15)), (arr_17 [i_0] [i_4]))) + (5438734654359730364LL))))) : (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) arr_1 [i_4])))) ? ((((_Bool)1) ? (((/* implicit */int) (unsigned char)104)) : (((/* implicit */int) (signed char)55)))) : (((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_3)))))))));
            var_27 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_14)) ? (arr_13 [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_18)))))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) ((var_17) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))))) + (max((((/* implicit */unsigned long long int) (_Bool)1)), (6426077239758506841ULL))))) : (((((/* implicit */_Bool) arr_10 [i_0] [i_4])) ? (var_17) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_12 [(_Bool)1] [(_Bool)1] [(_Bool)1]))))))));
        }
        var_28 = ((/* implicit */unsigned short) (((+(((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) (short)19344)) : (((/* implicit */int) var_13)))))) * ((+(((/* implicit */int) (unsigned short)192))))));
        /* LoopSeq 2 */
        for (unsigned char i_5 = 0; i_5 < 10; i_5 += 2) 
        {
            arr_21 [i_0] |= ((/* implicit */signed char) ((((_Bool) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) var_18)) : (((/* implicit */int) ((signed char) (-(((/* implicit */int) (short)26844))))))));
            var_29 = ((/* implicit */unsigned int) (!(((arr_8 [i_0] [i_5] [i_5]) >= (((/* implicit */int) (unsigned char)149))))));
            var_30 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((~(((/* implicit */int) (unsigned char)102)))) | ((((_Bool)1) ? (((/* implicit */int) arr_16 [i_0] [i_0])) : (((/* implicit */int) var_1))))))) ? ((~(arr_17 [i_0] [i_5]))) : (((/* implicit */long long int) ((((/* implicit */int) var_14)) & (((/* implicit */int) (_Bool)1)))))));
            var_31 |= ((/* implicit */unsigned char) ((((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)172))))) + (((arr_20 [i_0] [i_0] [i_0]) + (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
            arr_22 [5] = ((/* implicit */int) 18446744073709551591ULL);
        }
        for (unsigned int i_6 = 0; i_6 < 10; i_6 += 2) 
        {
            arr_26 [0] = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((((/* implicit */int) arr_10 [i_0] [i_6])) - (((/* implicit */int) (unsigned char)53))))) >= ((~(arr_20 [6] [i_6] [i_0])))));
            var_32 = (~((((_Bool)0) ? (((((/* implicit */int) (unsigned char)42)) & (((/* implicit */int) var_1)))) : (((/* implicit */int) max((var_13), (arr_1 [i_0])))))));
            var_33 = ((/* implicit */signed char) min((var_33), (((/* implicit */signed char) (~((~(((/* implicit */int) arr_1 [i_6])))))))));
        }
        arr_27 [i_0] = (!(((/* implicit */_Bool) ((long long int) (+(((/* implicit */int) (unsigned char)202)))))));
    }
    var_34 = ((/* implicit */unsigned long long int) var_1);
    var_35 = ((/* implicit */unsigned char) min((var_35), (((/* implicit */unsigned char) max((((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_16)), (var_7)))) ? (var_11) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (-6430708878906793326LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)185)))))))), (((/* implicit */unsigned long long int) var_10)))))));
}
