/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44877
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44877 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44877
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                var_19 += ((/* implicit */signed char) ((((/* implicit */int) ((((((/* implicit */_Bool) arr_3 [i_1])) && ((_Bool)1))) || (var_10)))) % (min((((/* implicit */int) var_8)), (max((-1974569311), (((/* implicit */int) (unsigned char)23))))))));
                var_20 ^= ((/* implicit */signed char) max((((/* implicit */int) max((arr_3 [i_1]), (arr_3 [i_0])))), (((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) (_Bool)0))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_2 = 0; i_2 < 19; i_2 += 3) 
    {
        for (unsigned short i_3 = 4; i_3 < 18; i_3 += 2) 
        {
            for (signed char i_4 = 0; i_4 < 19; i_4 += 2) 
            {
                {
                    var_21 -= ((/* implicit */unsigned char) (~(((/* implicit */int) max((((/* implicit */unsigned short) arr_9 [i_2] [i_3] [i_4] [i_4])), (var_2))))));
                    var_22 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((var_1), (((/* implicit */unsigned long long int) ((0ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)21))))))))) || (((/* implicit */_Bool) max((((((/* implicit */_Bool) (signed char)-24)) ? (9776130440213243620ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-48))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)2)) - (((/* implicit */int) (signed char)-33))))))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned short i_5 = 1; i_5 < 16; i_5 += 2) 
                    {
                        var_23 = (-(((/* implicit */int) ((unsigned char) var_6))));
                        var_24 ^= ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)66))) | (var_18));
                        var_25 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) arr_12 [i_2] [i_2] [i_2] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (arr_12 [i_2] [i_4] [i_4] [i_3])))));
                    }
                    arr_13 [i_2] [i_2] [i_4] [i_2] = ((/* implicit */unsigned short) ((min(((+(((/* implicit */int) arr_1 [i_2] [i_3])))), (((/* implicit */int) ((((/* implicit */int) var_3)) >= (((/* implicit */int) arr_10 [i_2] [(unsigned short)4]))))))) > (((/* implicit */int) var_8))));
                    var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) max((((/* implicit */int) var_6)), (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (signed char)92)) : (((/* implicit */int) var_16)))))))));
                }
            } 
        } 
    } 
    var_27 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (signed char)47)) : (((/* implicit */int) ((unsigned char) (unsigned char)86))))) | (((/* implicit */int) var_16))));
    var_28 += (signed char)-20;
    var_29 = ((/* implicit */int) var_4);
}
