/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218675
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218675 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218675
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
    var_10 = ((/* implicit */unsigned long long int) min((var_10), (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) min(((short)-26430), ((short)-1958)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (max((((/* implicit */unsigned int) (short)6144)), (60696792U))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                var_11 ^= (short)26430;
                var_12 = ((/* implicit */long long int) (+((-((+(((/* implicit */int) (short)1022))))))));
                /* LoopSeq 3 */
                for (long long int i_2 = 0; i_2 < 16; i_2 += 4) 
                {
                    var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) ((arr_5 [i_2] [i_2] [i_0]) != (((/* implicit */long long int) ((/* implicit */int) (short)-1942)))))) << ((((-(arr_4 [i_0] [i_2]))) - (4137244012U)))))) ? (((/* implicit */unsigned long long int) var_9)) : (var_0)));
                    arr_6 [i_0] = ((/* implicit */signed char) (_Bool)1);
                }
                for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 4) 
                {
                    arr_11 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */long long int) (-((+(((((/* implicit */_Bool) (short)32561)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-1))) : (var_5)))))));
                    /* LoopNest 2 */
                    for (short i_4 = 0; i_4 < 16; i_4 += 2) 
                    {
                        for (long long int i_5 = 0; i_5 < 16; i_5 += 2) 
                        {
                            {
                                var_14 ^= (~(((min((arr_2 [i_3]), (((/* implicit */unsigned int) (_Bool)1)))) << ((((+(4229583068603462386ULL))) - (4229583068603462383ULL))))));
                                arr_18 [i_0] [i_0] [i_4] [i_5] = ((/* implicit */unsigned int) min((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_5] [i_5] [i_3] [i_0] [i_5] [i_1]))) ^ ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (6682803835991456731ULL))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? ((-(((/* implicit */int) arr_16 [i_5] [i_1] [i_0] [i_0] [i_1] [i_0])))) : ((-(((/* implicit */int) var_7)))))))));
                                arr_19 [i_0] [i_0] [i_4] [i_5] = ((/* implicit */unsigned long long int) (-(arr_3 [i_0] [(unsigned short)9] [i_0])));
                            }
                        } 
                    } 
                }
                for (unsigned int i_6 = 0; i_6 < 16; i_6 += 4) 
                {
                    var_15 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (((~(-201182462))) ^ (((/* implicit */int) (unsigned short)41857))))) | (((((/* implicit */_Bool) min((arr_13 [i_6] [i_1] [i_1] [i_0]), (((/* implicit */short) (signed char)97))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (var_0)))));
                    var_16 = ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) ((_Bool) (_Bool)1))) < (((((/* implicit */_Bool) arr_13 [i_6] [i_1] [i_1] [i_0])) ? (((/* implicit */int) (unsigned short)46199)) : (((/* implicit */int) arr_20 [i_0])))))))) <= (min((max((var_5), (((/* implicit */unsigned int) (_Bool)1)))), (((/* implicit */unsigned int) ((3826056016532874604LL) < (((/* implicit */long long int) -356669843))))))));
                }
                /* LoopSeq 2 */
                for (unsigned short i_7 = 0; i_7 < 16; i_7 += 1) 
                {
                    arr_24 [i_0] [i_1] [(signed char)6] [i_0] |= ((/* implicit */_Bool) (-((~(8155785242373254961ULL)))));
                    arr_25 [i_0] [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) -2581734837765955143LL)) ? (4294967289U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)31))))) ^ ((-(arr_4 [i_0] [i_0])))))) < (((((/* implicit */_Bool) (-(var_5)))) ? (((var_2) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1942))))) : (((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_22 [i_1] [i_0])) + (2147483647))) >> (((arr_4 [i_0] [i_0]) - (157723249U))))))))));
                    arr_26 [i_0] [i_0] [4] [i_0] |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (signed char)-90))))) ? (((/* implicit */int) max(((signed char)9), (((/* implicit */signed char) arr_9 [i_0] [i_0] [(_Bool)0]))))) : (((/* implicit */int) arr_13 [i_1] [i_1] [i_1] [i_1]))))) ? ((+(((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) * (2845688352U))))) : (((/* implicit */unsigned int) max(((+(((/* implicit */int) (short)-1930)))), (((((/* implicit */_Bool) arr_5 [i_0] [14U] [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)1047)))))))));
                    var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) var_6))));
                    arr_27 [i_0] = ((/* implicit */unsigned int) arr_20 [i_0]);
                }
                for (short i_8 = 0; i_8 < 16; i_8 += 4) 
                {
                    var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) (+((+(var_9))))))));
                    /* LoopNest 2 */
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        for (unsigned short i_10 = 0; i_10 < 16; i_10 += 3) 
                        {
                            {
                                arr_37 [i_8] [i_1] [i_1] [i_1] [i_1] |= ((/* implicit */short) (((~(((/* implicit */int) (short)-1)))) >> (((((((/* implicit */_Bool) ((var_4) ? (arr_36 [i_8] [(_Bool)1] [(_Bool)1] [i_8] [i_1] [i_8]) : (((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0]))))) ? (((/* implicit */long long int) 1426466259U)) : (2581734837765955145LL))) - (1426466247LL)))));
                                var_19 = ((/* implicit */signed char) max((((/* implicit */unsigned int) (short)-1)), (min((min((((/* implicit */unsigned int) (signed char)-1)), (2925194252U))), (((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1)))))))));
                                var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) var_2))));
                                var_21 += ((/* implicit */short) ((_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (short)1942)), (1369773043U)))) ? (((/* implicit */int) (!(arr_14 [i_0] [i_0] [i_0] [i_0])))) : (((/* implicit */int) ((var_4) || (((/* implicit */_Bool) arr_35 [i_8]))))))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
}
