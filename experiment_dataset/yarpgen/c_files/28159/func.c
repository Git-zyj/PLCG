/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28159
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28159 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28159
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
    var_10 = ((/* implicit */unsigned int) (!((!((!(((/* implicit */_Bool) 1827982858358752530LL))))))));
    /* LoopSeq 3 */
    for (long long int i_0 = 3; i_0 < 17; i_0 += 4) 
    {
        var_11 = ((/* implicit */int) min((var_11), (((/* implicit */int) arr_0 [i_0] [10U]))));
        var_12 = ((/* implicit */long long int) min((var_12), (((/* implicit */long long int) var_9))));
        var_13 *= ((/* implicit */short) max((((int) (signed char)-114)), ((~(((/* implicit */int) var_5))))));
    }
    for (int i_1 = 0; i_1 < 23; i_1 += 4) 
    {
        var_14 = ((/* implicit */unsigned char) ((short) ((7370646866474829483ULL) % (((/* implicit */unsigned long long int) arr_3 [(signed char)1])))));
        var_15 = ((/* implicit */unsigned char) (((+((-(0ULL))))) > (10ULL)));
    }
    /* vectorizable */
    for (long long int i_2 = 0; i_2 < 20; i_2 += 4) 
    {
        var_16 = ((/* implicit */int) ((5ULL) << (((arr_4 [i_2]) - (1886086483)))));
        arr_6 [i_2] |= ((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) (-(4ULL))))));
        /* LoopNest 2 */
        for (long long int i_3 = 2; i_3 < 19; i_3 += 2) 
        {
            for (short i_4 = 0; i_4 < 20; i_4 += 4) 
            {
                {
                    var_17 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) != (arr_10 [i_3 - 1] [i_3 - 1] [i_3] [i_3])));
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 0; i_5 < 20; i_5 += 4) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 20; i_6 += 2) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) (-((-(2147483640))))))));
                                var_19 = (~(((/* implicit */int) var_6)));
                                arr_19 [i_2] [i_2] = ((/* implicit */unsigned char) ((arr_9 [i_2] [i_2] [i_3 - 1]) - (arr_9 [i_3] [i_3 - 1] [i_3 - 1])));
                                arr_20 [i_2] [i_4] = ((/* implicit */short) ((((/* implicit */int) arr_13 [i_2] [i_2] [i_3 - 1] [i_3 - 1])) >> (((((/* implicit */int) (unsigned char)194)) - (172)))));
                            }
                        } 
                    } 
                    arr_21 [(_Bool)1] [(_Bool)1] [i_3] [16LL] |= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) 4294967295U)) <= (17019110240543675181ULL)));
                }
            } 
        } 
    }
    /* LoopNest 2 */
    for (unsigned long long int i_7 = 1; i_7 < 7; i_7 += 4) 
    {
        for (unsigned int i_8 = 0; i_8 < 10; i_8 += 4) 
        {
            {
                var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((((/* implicit */int) (short)-16289)) + (((/* implicit */int) (unsigned char)227))))))) ? (max((((15ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)60340))))), (((/* implicit */unsigned long long int) arr_2 [i_7 + 2])))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_16 [i_7 + 3] [i_7 + 3] [i_7 + 1] [i_7 + 2] [i_7])))))));
                var_21 += ((/* implicit */signed char) var_4);
                var_22 = ((/* implicit */unsigned char) ((int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_7 + 2] [i_7 - 1]))) * (18446744073709551615ULL))));
            }
        } 
    } 
    var_23 = ((/* implicit */int) var_9);
}
