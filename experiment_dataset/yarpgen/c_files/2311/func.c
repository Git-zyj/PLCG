/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2311
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2311 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2311
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
    var_13 = ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) * (((((/* implicit */unsigned int) ((/* implicit */int) (short)-32760))) * (var_4)))))) ? (min((var_6), (((/* implicit */unsigned int) var_0)))) : (((/* implicit */unsigned int) max((((/* implicit */int) (signed char)83)), (257003302)))));
    var_14 = ((/* implicit */signed char) var_11);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                arr_5 [i_1] [i_0] [i_0] = ((/* implicit */unsigned char) var_4);
                /* LoopSeq 1 */
                for (int i_2 = 0; i_2 < 10; i_2 += 1) 
                {
                    arr_9 [(unsigned char)9] = ((/* implicit */signed char) (+(((max((arr_6 [i_0] [i_1] [i_2]), (((/* implicit */long long int) arr_2 [i_0] [i_1])))) + (((/* implicit */long long int) min((var_11), (((/* implicit */int) (unsigned short)58023)))))))));
                    arr_10 [i_0] [i_0] [i_1] [i_2] = ((/* implicit */_Bool) 962192689);
                }
                arr_11 [(signed char)6] [i_1] [i_1] &= ((/* implicit */long long int) ((arr_3 [i_0] [i_0] [i_1]) != (arr_3 [i_0] [i_0] [i_1])));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (short i_3 = 1; i_3 < 8; i_3 += 4) 
    {
        arr_15 [i_3 - 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_6 [i_3 - 1] [i_3 - 1] [i_3 - 1])), (arr_13 [i_3 + 1])))) ? (((/* implicit */long long int) var_6)) : (arr_6 [i_3] [i_3] [i_3 - 1])));
        /* LoopSeq 1 */
        for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 3) 
        {
            /* LoopSeq 2 */
            for (int i_5 = 0; i_5 < 10; i_5 += 4) 
            {
                arr_21 [i_3] [i_3] = ((/* implicit */unsigned char) (-(arr_0 [i_3 + 1])));
                arr_22 [i_4] &= ((/* implicit */_Bool) 257003302);
                arr_23 [i_3] [i_3] [i_5] [i_5] = ((/* implicit */unsigned char) max((((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) 295276411)) : (-8974678725622995066LL)))) != (var_3)))), ((+(((/* implicit */int) (unsigned short)58012))))));
                arr_24 [i_5] [i_4] [i_3 - 1] = max((((/* implicit */long long int) (unsigned short)7513)), (((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) -1LL)) ? (arr_4 [i_4]) : (5336454194443554951LL))) : (((/* implicit */long long int) ((/* implicit */int) var_8))))));
            }
            for (unsigned short i_6 = 0; i_6 < 10; i_6 += 4) 
            {
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 10; i_7 += 4) 
                {
                    for (unsigned long long int i_8 = 0; i_8 < 10; i_8 += 3) 
                    {
                        {
                            arr_32 [i_3 + 2] [i_3] [i_3] [i_8] [i_8] = ((/* implicit */int) arr_20 [i_3] [i_4] [i_6] [i_8]);
                            arr_33 [i_3] [i_3] [i_8] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned short) min((-5336454194443554951LL), (9223372036854775795LL))))) ? (((/* implicit */unsigned long long int) (-(((((/* implicit */unsigned int) ((/* implicit */int) var_9))) - (var_6)))))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_8)) + (((/* implicit */int) (_Bool)0))))) : (((var_3) * (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-5557)))))))));
                            arr_34 [i_8] = max((((/* implicit */unsigned short) arr_16 [i_7] [i_7] [3ULL])), (((unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) | (17857314386700937767ULL)))));
                            arr_35 [i_7] [i_7] [i_7] = ((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) 4322944541723003934LL)))))));
                        }
                    } 
                } 
                arr_36 [i_6] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) (unsigned short)7513)) != (((/* implicit */int) (!((_Bool)1))))))) + (((/* implicit */int) ((short) arr_8 [i_3 - 1] [i_3 - 1])))));
                arr_37 [i_6] = ((/* implicit */int) var_12);
            }
            arr_38 [i_4] [i_4] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65535)) ? (min((arr_13 [i_4]), (((/* implicit */unsigned long long int) 6659658911082220915LL)))) : (((/* implicit */unsigned long long int) ((int) var_12)))));
            arr_39 [i_4] [i_4] = ((/* implicit */int) (!(((/* implicit */_Bool) var_7))));
            arr_40 [i_4] [(unsigned short)4] [(unsigned short)4] = min((((int) (((_Bool)0) ? (((/* implicit */long long int) -185504670)) : (-2090458041990545027LL)))), (295276411));
            /* LoopNest 2 */
            for (unsigned short i_9 = 0; i_9 < 10; i_9 += 1) 
            {
                for (int i_10 = 0; i_10 < 10; i_10 += 4) 
                {
                    {
                        arr_48 [i_3 - 1] [i_9] [i_10] = ((/* implicit */_Bool) ((int) min((((-257003303) | (((/* implicit */int) (signed char)53)))), (((/* implicit */int) arr_31 [i_3] [i_9] [i_3] [i_3] [i_3])))));
                        arr_49 [i_9] [i_9] = ((/* implicit */unsigned short) ((((min((2732511997498857683LL), (((/* implicit */long long int) (_Bool)0)))) * (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_3] [5])))))))) + ((((_Bool)1) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) 1053544147))))));
                        arr_50 [i_3 - 1] [i_4] [i_4] [i_10] [i_10] &= ((((/* implicit */int) (_Bool)0)) + (((/* implicit */int) (unsigned short)58022)));
                    }
                } 
            } 
        }
        arr_51 [i_3] = ((/* implicit */unsigned long long int) (signed char)123);
    }
}
