/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34226
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34226 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34226
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
    var_17 = ((/* implicit */long long int) min((((/* implicit */unsigned int) var_0)), (var_15)));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 1; i_0 < 16; i_0 += 4) 
    {
        var_18 = ((/* implicit */unsigned char) min((((/* implicit */short) (signed char)-125)), ((short)14176)));
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                {
                    arr_7 [i_0] [i_1] [(signed char)16] [i_0] = ((/* implicit */int) (!((!(((/* implicit */_Bool) var_14))))));
                    arr_8 [i_0] [i_1] [(signed char)4] [i_2] = ((/* implicit */int) min((((/* implicit */unsigned long long int) min((var_2), (((/* implicit */unsigned int) var_12))))), (min((((/* implicit */unsigned long long int) var_2)), (var_6)))));
                }
            } 
        } 
        var_19 = ((/* implicit */unsigned long long int) var_1);
        /* LoopSeq 3 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            var_20 = ((/* implicit */short) (-(((/* implicit */int) (signed char)-20))));
            arr_11 [i_0] [i_3] = ((/* implicit */signed char) (+(min((((/* implicit */int) var_16)), (var_14)))));
            arr_12 [i_0] = ((/* implicit */int) min((((/* implicit */unsigned long long int) min((var_7), (((/* implicit */long long int) var_13))))), (min((var_6), (((/* implicit */unsigned long long int) var_3))))));
        }
        for (short i_4 = 1; i_4 < 18; i_4 += 4) 
        {
            /* LoopSeq 1 */
            for (int i_5 = 0; i_5 < 19; i_5 += 4) 
            {
                /* LoopNest 2 */
                for (signed char i_6 = 0; i_6 < 19; i_6 += 3) 
                {
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        {
                            arr_26 [i_4] [i_4 + 1] [i_4] [i_7] [i_7] = ((/* implicit */short) (+((~(16021340922913745306ULL)))));
                            arr_27 [i_0 + 2] [i_5] [i_4 - 1] [i_6] [i_6] [i_6] [i_4] = ((/* implicit */short) min((((/* implicit */unsigned long long int) (~((-2147483647 - 1))))), (min((min((((/* implicit */unsigned long long int) var_14)), (var_6))), (((/* implicit */unsigned long long int) min((var_11), (((/* implicit */signed char) var_16)))))))));
                            var_21 = (~(min((((/* implicit */int) var_9)), (var_12))));
                            arr_28 [(short)15] [(short)15] [i_5] [5] [i_4] = ((/* implicit */_Bool) min((var_13), (((/* implicit */short) min((((/* implicit */signed char) var_10)), (var_11))))));
                        }
                    } 
                } 
                var_22 = min((320112685U), (((/* implicit */unsigned int) (short)20582)));
                /* LoopSeq 2 */
                for (short i_8 = 3; i_8 < 17; i_8 += 2) /* same iter space */
                {
                    arr_32 [(short)0] [i_4] [(signed char)15] [i_8 + 2] = min((min((((/* implicit */int) (_Bool)1)), ((+(((/* implicit */int) (short)12898)))))), ((-((+(((/* implicit */int) var_0)))))));
                    var_23 = ((/* implicit */unsigned long long int) var_15);
                    var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) min((min((((/* implicit */unsigned long long int) var_12)), (var_4))), (((/* implicit */unsigned long long int) (~(var_14)))))))));
                }
                for (short i_9 = 3; i_9 < 17; i_9 += 2) /* same iter space */
                {
                    var_25 += ((/* implicit */signed char) min((((/* implicit */unsigned long long int) 533992865)), (min((((/* implicit */unsigned long long int) 268427264)), (var_4)))));
                    arr_35 [i_0] [i_4 + 1] [i_4] [16] [10] = min((((/* implicit */int) (signed char)108)), (min((-431253779), (((/* implicit */int) (signed char)-1)))));
                    arr_36 [i_0 + 3] [i_0] [i_4] [(short)17] [i_5] [i_4] = ((/* implicit */int) var_9);
                }
                arr_37 [i_0 - 1] [i_4] = (+(var_12));
                arr_38 [i_4] [(signed char)15] [i_5] = ((/* implicit */_Bool) min((var_6), (((/* implicit */unsigned long long int) min((var_0), (var_11))))));
            }
            arr_39 [i_4] [16ULL] = ((/* implicit */unsigned long long int) min((min((var_14), (((/* implicit */int) var_1)))), (var_14)));
            arr_40 [i_4] [i_4] = ((/* implicit */int) min((((/* implicit */long long int) (+(var_3)))), (min((var_7), (((/* implicit */long long int) var_5))))));
            var_26 = ((/* implicit */unsigned int) min((min((((/* implicit */short) var_11)), (var_13))), (var_13)));
            var_27 |= ((/* implicit */int) min((min((((/* implicit */unsigned long long int) var_0)), (min((4408278226633002146ULL), (((/* implicit */unsigned long long int) (signed char)-35)))))), (min((((/* implicit */unsigned long long int) var_12)), (var_4)))));
        }
        for (unsigned long long int i_10 = 1; i_10 < 17; i_10 += 3) 
        {
            arr_44 [i_10] [(signed char)12] [i_0] = ((/* implicit */int) var_9);
            var_28 = ((/* implicit */int) min((var_28), (var_12)));
            var_29 ^= ((/* implicit */_Bool) min((min((((/* implicit */int) var_0)), (-539308687))), ((~(min((var_14), (var_14)))))));
            var_30 = ((/* implicit */int) min((((/* implicit */unsigned int) min((((/* implicit */int) (_Bool)0)), (-454205989)))), (min((1202975618U), (((/* implicit */unsigned int) (_Bool)1))))));
        }
    }
    var_31 -= ((/* implicit */_Bool) (+(1977607567U)));
    var_32 = ((/* implicit */short) var_14);
}
