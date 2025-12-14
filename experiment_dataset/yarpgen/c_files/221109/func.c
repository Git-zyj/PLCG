/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221109
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221109 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221109
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
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 3; i_2 < 16; i_2 += 1) 
            {
                {
                    arr_10 [i_0] [i_2] [i_2] [i_1] = ((/* implicit */signed char) arr_2 [i_0]);
                    var_15 = ((/* implicit */unsigned short) ((min(((!(((/* implicit */_Bool) var_5)))), (((arr_6 [i_2] [i_1] [i_2]) <= (((/* implicit */int) (_Bool)0)))))) || (((((/* implicit */int) arr_8 [i_2] [i_2 - 1] [i_2 - 1])) <= (((/* implicit */int) ((2870657691U) < (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1]))))))))));
                }
            } 
        } 
        var_16 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (+((+(((/* implicit */int) arr_8 [i_0] [i_0] [i_0]))))))), (min((((/* implicit */unsigned long long int) max((((/* implicit */unsigned char) (signed char)-70)), (arr_3 [(unsigned short)17])))), ((-(var_3)))))));
    }
    for (int i_3 = 0; i_3 < 24; i_3 += 1) 
    {
        /* LoopSeq 1 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            var_17 = ((/* implicit */short) ((min((((/* implicit */int) (unsigned short)60701)), (-1218712176))) == (((/* implicit */int) arr_12 [i_3]))));
            var_18 = ((/* implicit */unsigned long long int) (!(((((((/* implicit */_Bool) 18446744073709551613ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_3]))) : (arr_16 [i_3]))) >= (((13148317329804959677ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))))));
            var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) min((((/* implicit */unsigned short) (!(var_11)))), (((unsigned short) var_11)))))));
            /* LoopSeq 3 */
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                var_20 = ((/* implicit */unsigned short) arr_12 [i_3]);
                var_21 = ((/* implicit */unsigned int) ((arr_15 [i_3] [i_4] [i_4]) <= (max((arr_15 [i_3] [i_4] [i_5]), (arr_15 [i_3] [i_4] [i_5])))));
                var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) max((((unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (short)-1))) == (2583948276040268496LL)))), (min((((arr_18 [i_3] [i_3]) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (4294967295U))), (((/* implicit */unsigned int) min((((/* implicit */short) (_Bool)1)), ((short)(-32767 - 1))))))))))));
            }
            /* vectorizable */
            for (unsigned int i_6 = 2; i_6 < 23; i_6 += 4) 
            {
                var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) (!(((/* implicit */_Bool) (short)-11456)))))));
                var_24 = ((/* implicit */int) arr_19 [(unsigned short)12] [i_3] [i_6] [i_6 + 1]);
            }
            for (int i_7 = 1; i_7 < 23; i_7 += 4) 
            {
                var_25 = (((!(((/* implicit */_Bool) arr_15 [i_3] [i_7 - 1] [i_3])))) ? (((((/* implicit */int) arr_22 [i_3] [i_3] [i_7 - 1] [(_Bool)1])) + (((/* implicit */int) arr_22 [i_3] [i_3] [i_7 - 1] [(_Bool)1])))) : (((((/* implicit */int) ((_Bool) arr_18 [i_4] [(short)4]))) * (((/* implicit */int) ((((/* implicit */int) arr_22 [i_4] [i_4] [i_4] [i_3])) <= (((/* implicit */int) arr_14 [i_3]))))))));
                arr_25 [(unsigned short)4] [i_3] [i_7] = ((/* implicit */_Bool) arr_15 [i_3] [i_4] [i_7 + 1]);
            }
            var_26 = ((/* implicit */unsigned short) ((max((min((3047385025U), (((/* implicit */unsigned int) (_Bool)1)))), (((/* implicit */unsigned int) arr_15 [i_3] [i_4] [i_4])))) - (((/* implicit */unsigned int) (((+(arr_21 [(_Bool)1] [8] [(_Bool)1]))) * (((/* implicit */int) arr_23 [i_3] [i_3] [i_4])))))));
        }
        var_27 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((min((arr_22 [i_3] [i_3] [i_3] [i_3]), (arr_22 [i_3] [i_3] [i_3] [i_3]))), (((/* implicit */unsigned short) max(((short)8124), (((/* implicit */short) (unsigned char)61)))))))) && (((/* implicit */_Bool) max((arr_12 [(signed char)6]), (((/* implicit */unsigned char) var_11)))))));
        /* LoopNest 2 */
        for (unsigned int i_8 = 0; i_8 < 24; i_8 += 3) 
        {
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                {
                    var_28 = ((/* implicit */unsigned long long int) arr_18 [i_3] [i_9]);
                    var_29 = ((/* implicit */short) ((((/* implicit */int) ((short) ((((/* implicit */int) (short)11464)) & (((/* implicit */int) arr_24 [i_3] [i_9] [i_9] [i_8])))))) >> ((((~(((/* implicit */int) var_11)))) + (6)))));
                    var_30 &= ((/* implicit */signed char) min((((/* implicit */long long int) ((((/* implicit */int) arr_22 [i_8] [i_8] [i_8] [i_8])) ^ (min((((/* implicit */int) arr_14 [(signed char)2])), (arr_15 [(unsigned short)16] [i_8] [(unsigned short)16])))))), ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (5371542531698832991LL)))));
                }
            } 
        } 
    }
    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
    {
        arr_34 [i_10] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) max((arr_33 [i_10] [i_10]), (((/* implicit */long long int) ((var_14) <= (((/* implicit */int) (short)11460)))))))), (arr_16 [(short)17])));
        var_31 = ((/* implicit */unsigned int) ((unsigned long long int) ((((arr_31 [i_10]) % (((/* implicit */long long int) ((/* implicit */int) arr_27 [10ULL]))))) > (((/* implicit */long long int) ((unsigned int) arr_21 [i_10] [i_10] [i_10]))))));
    }
    var_32 = ((/* implicit */int) max(((short)11455), ((short)5469)));
    var_33 = ((/* implicit */int) var_9);
}
