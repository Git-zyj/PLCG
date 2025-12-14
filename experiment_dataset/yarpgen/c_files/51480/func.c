/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51480
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51480 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51480
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
    var_20 = ((/* implicit */unsigned short) (((-(((/* implicit */int) (signed char)46)))) / (((/* implicit */int) var_0))));
    var_21 ^= ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) min(((unsigned short)59339), (((/* implicit */unsigned short) (unsigned char)126))))))) && (((/* implicit */_Bool) min(((unsigned short)41454), (((/* implicit */unsigned short) (unsigned char)128)))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                var_22 = ((/* implicit */unsigned char) ((((/* implicit */int) var_5)) << ((((!(((/* implicit */_Bool) arr_4 [(_Bool)1])))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)24))))));
                var_23 = ((/* implicit */unsigned short) var_11);
                /* LoopSeq 2 */
                for (signed char i_2 = 0; i_2 < 23; i_2 += 4) /* same iter space */
                {
                    arr_7 [i_0] [i_2] [i_2] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) var_10)) | (min((((/* implicit */int) ((_Bool) var_9))), (((((/* implicit */_Bool) (unsigned char)128)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned char)128))))))));
                    /* LoopSeq 2 */
                    for (unsigned short i_3 = 0; i_3 < 23; i_3 += 2) 
                    {
                        arr_10 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) var_19);
                        arr_11 [i_0] [i_1] [i_2] [(unsigned short)11] [i_1] = ((/* implicit */signed char) (unsigned char)115);
                        var_24 &= ((/* implicit */unsigned short) min((4253092170U), (((/* implicit */unsigned int) var_12))));
                        arr_12 [i_0] [i_0] [i_2] [(unsigned short)4] = ((/* implicit */_Bool) ((var_16) >> (((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (var_17))))));
                        var_25 = ((/* implicit */signed char) min((((/* implicit */int) var_13)), ((-(((/* implicit */int) min(((unsigned short)54376), (((/* implicit */unsigned short) (unsigned char)128)))))))));
                    }
                    for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 1) 
                    {
                        var_26 += ((/* implicit */_Bool) ((unsigned long long int) ((((((/* implicit */int) (unsigned char)115)) >> (((((/* implicit */int) var_13)) - (39329))))) >> (((/* implicit */int) ((((/* implicit */int) arr_13 [i_0] [i_2] [i_0] [i_1] [i_0])) == (((/* implicit */int) var_15))))))));
                        var_27 += ((/* implicit */unsigned short) 41875126U);
                        var_28 |= ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0]))))));
                    }
                }
                for (signed char i_5 = 0; i_5 < 23; i_5 += 4) /* same iter space */
                {
                    arr_18 [i_0] [i_1] [i_5] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_5 [i_0] [(unsigned char)6] [i_1] [i_5]))));
                    var_29 = ((unsigned short) (+(((((/* implicit */_Bool) 18446744073709551615ULL)) ? (arr_15 [i_0] [i_1] [i_1]) : (var_7)))));
                    arr_19 [i_0] [i_0] [(_Bool)1] [i_0] = ((/* implicit */unsigned short) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (9088358268015313860ULL)));
                    var_30 = ((/* implicit */unsigned long long int) min((var_30), (((arr_1 [i_1] [(unsigned short)1]) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (-(((/* implicit */int) (unsigned short)4013)))))))))));
                }
            }
        } 
    } 
    var_31 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_8))));
}
