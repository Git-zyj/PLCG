/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42137
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42137 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42137
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
    var_15 = ((/* implicit */signed char) -8582721787951527051LL);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned short i_2 = 0; i_2 < 15; i_2 += 4) /* same iter space */
                {
                    arr_10 [12ULL] [i_1] [12ULL] [i_2] = ((/* implicit */unsigned short) ((((((((/* implicit */_Bool) arr_2 [i_0] [i_0])) || (((/* implicit */_Bool) (unsigned char)199)))) ? (((/* implicit */int) arr_7 [i_0] [i_0] [i_2] [i_2])) : (((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) arr_6 [i_0])))))) * (((/* implicit */int) ((unsigned short) ((((/* implicit */int) (signed char)5)) / (((/* implicit */int) arr_7 [i_2] [i_1] [i_0] [i_0]))))))));
                    arr_11 [i_0] [i_1] [i_0] [i_2] = ((/* implicit */signed char) ((((/* implicit */int) ((-338952783) != (((/* implicit */int) (short)-1379))))) | (((/* implicit */int) (((~(338952783))) != (((/* implicit */int) min((((/* implicit */short) (_Bool)1)), ((short)-1379)))))))));
                    var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)184)) && (((/* implicit */_Bool) arr_5 [i_1] [i_0]))))), (((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_2] [i_2])) ? (((/* implicit */int) arr_7 [i_0] [i_2] [i_0] [i_1])) : (338952783)))))) ? (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) (unsigned char)72)) ? (((/* implicit */int) (unsigned char)182)) : (((/* implicit */int) (short)17826))))))) : ((-((+(15823981864689689ULL)))))));
                    arr_12 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */unsigned short) (+((-(((((/* implicit */int) (unsigned char)179)) * (((/* implicit */int) (_Bool)1))))))));
                }
                for (unsigned short i_3 = 0; i_3 < 15; i_3 += 4) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned short i_4 = 0; i_4 < 15; i_4 += 1) 
                    {
                        for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
                        {
                            {
                                arr_22 [i_4] = ((/* implicit */signed char) ((unsigned int) ((((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), (arr_21 [i_4] [i_1] [i_3])))) <= (((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (unsigned char)182)) : (((/* implicit */int) (signed char)-83)))))));
                                var_17 |= ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (signed char)50)) >> (((((/* implicit */int) arr_21 [i_1] [i_1] [i_5])) - (73))))))))) >> (((((((((/* implicit */int) (unsigned short)65535)) % (((/* implicit */int) arr_7 [i_0] [i_1] [i_3] [i_5])))) + (((((/* implicit */int) (unsigned char)99)) % (((/* implicit */int) arr_4 [i_3] [4LL])))))) - (18543)))));
                            }
                        } 
                    } 
                    arr_23 [i_0] [i_1] [i_3] [i_3] |= ((/* implicit */short) ((min((2289480170987544204ULL), (((/* implicit */unsigned long long int) arr_13 [i_0] [i_1] [i_3] [i_3])))) - (((unsigned long long int) 8771159878145573672LL))));
                }
                arr_24 [i_1] [i_0] [i_0] |= ((((/* implicit */long long int) (+(((/* implicit */int) arr_5 [i_0] [i_1]))))) - ((-(9223372036854775807LL))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) ((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned short)31478)) : (((/* implicit */int) var_7))))), ((-(9ULL))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)49549))))))));
    var_19 = ((/* implicit */unsigned long long int) var_6);
}
