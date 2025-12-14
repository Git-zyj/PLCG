/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229792
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229792 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229792
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
    var_12 = ((/* implicit */unsigned char) var_0);
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                {
                    arr_10 [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) max((arr_1 [(unsigned short)1] [i_1]), (((/* implicit */unsigned long long int) var_11))))) ? (((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_2] [i_1] [i_0]))) : (7849619880810496622LL))) : (((/* implicit */long long int) ((((1497210132U) <= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)58679))))) ? (((/* implicit */int) var_7)) : (((-869934208) % (((/* implicit */int) (unsigned short)47259)))))))));
                    /* LoopSeq 2 */
                    for (signed char i_3 = 0; i_3 < 11; i_3 += 3) 
                    {
                        arr_13 [i_0] [i_1] &= max((((((((/* implicit */_Bool) -22480257)) || (((/* implicit */_Bool) arr_11 [i_0])))) ? (max((2797757163U), (4294967295U))) : (((/* implicit */unsigned int) 869934228)))), (((/* implicit */unsigned int) ((((/* implicit */int) (short)13058)) <= (((/* implicit */int) (unsigned short)9669))))));
                        arr_14 [i_0] [(signed char)9] [i_0] [i_3] = ((/* implicit */unsigned short) max((((/* implicit */short) min(((_Bool)1), ((_Bool)1)))), (max((arr_3 [i_0] [i_0]), (arr_3 [1] [i_2])))));
                    }
                    for (unsigned short i_4 = 0; i_4 < 11; i_4 += 2) 
                    {
                        arr_17 [(unsigned short)4] [(signed char)1] [i_2] [i_4] [(signed char)2] [9U] = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) (!(((/* implicit */_Bool) 869934228))))), ((-(((((/* implicit */_Bool) 21396447U)) ? (var_11) : (((/* implicit */long long int) 1U))))))));
                        var_13 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (_Bool)1)), (13143227425574720429ULL)));
                        arr_18 [(unsigned short)5] [(unsigned short)6] [i_4] [i_4] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))) | (2797757164U)));
                    }
                    arr_19 [(signed char)4] = ((/* implicit */unsigned char) max((min((((/* implicit */long long int) ((((/* implicit */_Bool) (short)25383)) ? (((/* implicit */int) arr_6 [i_2] [9LL] [i_0])) : (((/* implicit */int) (unsigned short)17333))))), (max((arr_2 [i_0]), (((/* implicit */long long int) 3896560347U)))))), (((/* implicit */long long int) min((626020589), (((/* implicit */int) (unsigned short)55866)))))));
                    arr_20 [i_0] = ((/* implicit */unsigned long long int) max((var_7), (((/* implicit */unsigned short) min((arr_9 [i_0] [i_0] [i_1] [i_2]), (arr_9 [i_2] [i_1] [7U] [i_0]))))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (max((18446744073709551602ULL), (((/* implicit */unsigned long long int) (_Bool)1)))) : (var_1)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)10429)) || (((/* implicit */_Bool) 4476041138096260434ULL))))), (var_2))))))));
    var_15 = ((/* implicit */unsigned char) 4294967295U);
    /* LoopNest 3 */
    for (short i_5 = 2; i_5 < 17; i_5 += 1) 
    {
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            for (signed char i_7 = 1; i_7 < 17; i_7 += 2) 
            {
                {
                    var_16 = ((/* implicit */unsigned long long int) ((max((var_11), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_6]))) <= (var_3)))))) > (((/* implicit */long long int) max((((((/* implicit */_Bool) 11770566755042580221ULL)) ? (-869934228) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) arr_21 [i_5 + 1])))))));
                    arr_29 [i_6] [6U] [(unsigned short)10] = ((/* implicit */_Bool) (unsigned short)4689);
                }
            } 
        } 
    } 
}
