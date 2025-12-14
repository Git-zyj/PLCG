/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51672
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51672 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51672
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (short i_2 = 3; i_2 < 20; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_0] [i_1] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (var_2) : (((/* implicit */int) var_0))))) ? (((/* implicit */int) max((var_0), (((/* implicit */short) (unsigned char)248))))) : (((/* implicit */int) ((18446744073709551598ULL) > (((/* implicit */unsigned long long int) arr_3 [i_2] [i_2]))))))) | (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) (short)7)), (arr_1 [i_1])))))))));
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 1; i_3 < 21; i_3 += 1) 
                    {
                        var_10 |= ((/* implicit */int) var_9);
                        arr_11 [i_0] [i_0] [i_1] [i_0] = ((((int) arr_0 [i_0] [i_0])) % (((((/* implicit */int) (short)10161)) ^ (((/* implicit */int) (unsigned char)90)))));
                        arr_12 [i_1] [i_0] [i_1] [i_1] [i_2 - 3] [i_1] = ((/* implicit */unsigned long long int) (~((+(((((/* implicit */int) var_9)) & (((/* implicit */int) arr_2 [i_0] [i_0] [i_0]))))))));
                        var_11 &= ((/* implicit */unsigned long long int) ((((arr_0 [i_2 + 1] [i_2 - 3]) ? (max((((/* implicit */int) (unsigned short)48816)), (1253379084))) : (((/* implicit */int) ((17328719823783840529ULL) >= (((/* implicit */unsigned long long int) -1590480393))))))) <= (((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned char)60)))) * (((/* implicit */int) arr_7 [i_3] [i_3 + 1] [i_3 - 1] [i_3 - 1]))))));
                    }
                }
            } 
        } 
    } 
    var_12 &= ((/* implicit */unsigned long long int) ((int) var_6));
    /* LoopNest 3 */
    for (short i_4 = 1; i_4 < 11; i_4 += 4) 
    {
        for (unsigned char i_5 = 4; i_5 < 14; i_5 += 1) 
        {
            for (short i_6 = 0; i_6 < 15; i_6 += 4) 
            {
                {
                    arr_24 [i_4] [i_4] [i_4] [i_4] = ((/* implicit */unsigned char) max((10010862068193603370ULL), (18446744073709551600ULL)));
                    arr_25 [i_4] [i_4] [i_4] |= ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)136))) >= (18446744073709551613ULL)))) >= (((/* implicit */int) ((((/* implicit */unsigned long long int) 2731627069U)) != (((13211973350515989559ULL) & (var_1))))))));
                    arr_26 [i_4] [i_4] [i_4] [i_4] = ((/* implicit */unsigned long long int) 3130338283U);
                    /* LoopNest 2 */
                    for (unsigned long long int i_7 = 1; i_7 < 11; i_7 += 1) 
                    {
                        for (short i_8 = 2; i_8 < 14; i_8 += 4) 
                        {
                            {
                                var_13 += ((/* implicit */int) ((var_4) > (((/* implicit */long long int) ((/* implicit */int) (signed char)-1)))));
                                var_14 = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_19 [i_4 - 1]) | (arr_19 [i_4 + 4])))) && (((/* implicit */_Bool) var_2))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
