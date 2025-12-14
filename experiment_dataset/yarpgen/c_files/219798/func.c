/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219798
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219798 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219798
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            for (unsigned char i_2 = 4; i_2 < 19; i_2 += 2) 
            {
                {
                    arr_9 [i_0] [i_1] [7] [i_2] = ((/* implicit */_Bool) ((((/* implicit */int) var_11)) * (((/* implicit */int) (((~(146327429))) > (((/* implicit */int) var_14)))))));
                    var_18 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_17))));
                }
            } 
        } 
        arr_10 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) min(((short)-31348), (var_12))))) ? (((/* implicit */long long int) (((-(((/* implicit */int) var_5)))) + (((/* implicit */int) ((_Bool) arr_6 [i_0] [i_0])))))) : (min((((/* implicit */long long int) ((unsigned char) arr_7 [i_0] [i_0]))), (min((((/* implicit */long long int) (_Bool)1)), (arr_7 [i_0] [i_0])))))));
        var_19 = ((/* implicit */signed char) max((((-3168064248270589361LL) | (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_0] [(unsigned short)16] [i_0]))))), (((/* implicit */long long int) var_7))));
        arr_11 [i_0] [i_0] = ((/* implicit */long long int) (_Bool)1);
        /* LoopNest 3 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (signed char i_4 = 0; i_4 < 20; i_4 += 2) 
            {
                for (unsigned char i_5 = 0; i_5 < 20; i_5 += 4) 
                {
                    {
                        var_20 = ((/* implicit */unsigned int) max((((/* implicit */long long int) (+(((/* implicit */int) (short)-31348))))), (((((/* implicit */_Bool) ((long long int) var_14))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_8 [i_0] [i_3] [i_4] [i_5])) : (((/* implicit */int) arr_2 [(unsigned short)14] [i_0]))))) : (((arr_17 [i_5] [i_4] [i_0]) | (((/* implicit */long long int) ((/* implicit */int) var_5)))))))));
                        arr_22 [i_0] [i_0] [i_3] [i_4] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_13 [i_5] [i_0]))))) ? (((((/* implicit */int) arr_13 [i_0] [i_3])) * (((/* implicit */int) arr_13 [i_0] [i_3])))) : (((/* implicit */int) ((arr_13 [i_0] [i_3]) || (((/* implicit */_Bool) var_14)))))));
                        var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((max((((/* implicit */long long int) (short)-31351)), (-3168064248270589361LL))) + (((/* implicit */long long int) (-(((/* implicit */int) var_8)))))))) ? (((((/* implicit */int) (!(var_0)))) << (((((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)168))) : (18446744073709551604ULL))) - (147ULL))))) : (((/* implicit */int) ((((/* implicit */_Bool) ((unsigned char) var_1))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)42)) ? (-3812377592446398606LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))))));
                    }
                } 
            } 
        } 
    }
    var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) (signed char)-33))));
    /* LoopSeq 1 */
    for (signed char i_6 = 0; i_6 < 22; i_6 += 4) 
    {
        var_23 = max((max(((-(((/* implicit */int) var_6)))), (((/* implicit */int) min((var_12), (((/* implicit */short) var_0))))))), (((/* implicit */int) ((arr_25 [i_6]) < (((/* implicit */unsigned int) ((/* implicit */int) min((var_5), (arr_23 [i_6])))))))));
        var_24 = ((/* implicit */long long int) min((((/* implicit */unsigned int) max((max((((/* implicit */int) var_0)), (var_2))), (((/* implicit */int) ((unsigned short) (_Bool)1)))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) -146327438)) ? (((/* implicit */int) arr_24 [i_6] [i_6])) : (((/* implicit */int) var_8))))) ? (max((((/* implicit */unsigned int) var_7)), (var_4))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_6] [i_6])))))));
        /* LoopSeq 1 */
        for (int i_7 = 3; i_7 < 21; i_7 += 3) 
        {
            arr_28 [i_6] [i_6] [i_6] = ((/* implicit */unsigned int) var_2);
            var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) (-(-146327417)))) || (((/* implicit */_Bool) min((((/* implicit */long long int) 4294967295U)), (3168064248270589369LL)))))) ? (max((((/* implicit */int) arr_27 [20ULL])), (min((var_2), (((/* implicit */int) var_8)))))) : (((/* implicit */int) ((((((/* implicit */int) arr_24 [i_6] [i_7])) - (((/* implicit */int) arr_27 [i_7])))) >= (((/* implicit */int) arr_24 [i_7] [i_6]))))))))));
        }
        arr_29 [i_6] = ((/* implicit */signed char) var_1);
        var_26 = ((/* implicit */unsigned int) ((((((/* implicit */int) arr_27 [i_6])) ^ (((/* implicit */int) arr_27 [i_6])))) | (((/* implicit */int) ((signed char) arr_27 [i_6])))));
    }
    var_27 = ((/* implicit */long long int) ((((((((/* implicit */int) min((((/* implicit */short) (_Bool)1)), (var_6)))) + (2147483647))) << ((((+(((/* implicit */int) var_14)))) - (32517))))) != (((/* implicit */int) var_9))));
    /* LoopNest 2 */
    for (unsigned char i_8 = 3; i_8 < 22; i_8 += 3) 
    {
        for (unsigned char i_9 = 1; i_9 < 21; i_9 += 2) 
        {
            {
                var_28 = ((/* implicit */signed char) max((((/* implicit */unsigned char) min((max(((signed char)-43), (((/* implicit */signed char) var_8)))), (arr_33 [i_8 - 3])))), (arr_32 [i_9 + 2] [i_8 - 3])));
                arr_35 [i_8 - 2] [i_9 + 1] = ((/* implicit */unsigned char) min((((/* implicit */int) arr_34 [i_9] [i_9 + 1] [i_9 + 2])), (((((/* implicit */_Bool) ((short) (_Bool)1))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 146327430))))) : (((/* implicit */int) ((unsigned char) var_7)))))));
                var_29 = ((/* implicit */short) ((long long int) max((((_Bool) arr_31 [i_8] [i_8 - 3])), (((((/* implicit */_Bool) 146327429)) || (var_8))))));
                /* LoopSeq 1 */
                for (int i_10 = 0; i_10 < 23; i_10 += 4) 
                {
                    /* LoopSeq 1 */
                    for (short i_11 = 0; i_11 < 23; i_11 += 3) 
                    {
                        arr_41 [i_8] [i_11] = ((/* implicit */unsigned char) max((((/* implicit */long long int) (((!(((/* implicit */_Bool) var_15)))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_12))))), (((((_Bool) var_10)) ? (((long long int) arr_34 [(short)16] [i_9 + 1] [i_9])) : (((/* implicit */long long int) ((/* implicit */int) ((short) var_8))))))));
                        var_30 = ((/* implicit */signed char) ((((/* implicit */int) var_15)) != (max((((/* implicit */int) (!(((/* implicit */_Bool) arr_36 [i_9 - 1] [i_10] [i_11]))))), (((((/* implicit */int) (signed char)26)) % (((/* implicit */int) (signed char)52))))))));
                    }
                    var_31 = ((/* implicit */unsigned char) max((var_31), (((/* implicit */unsigned char) ((((/* implicit */int) min((((/* implicit */unsigned char) var_7)), (arr_34 [i_8 + 1] [i_9] [i_9 - 1])))) > (((/* implicit */int) min((arr_34 [i_8 + 1] [i_9 + 1] [i_9 - 1]), (arr_34 [i_8 + 1] [i_9] [i_9 - 1])))))))));
                }
            }
        } 
    } 
}
